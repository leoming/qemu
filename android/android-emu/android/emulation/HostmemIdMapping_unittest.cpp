// Copyright 2019 The Android Open Source Project
//
// This software is licensed under the terms of the GNU General Public
// License version 2, as published by the Free Software Foundation, and
// may be copied, distributed, and modified under those terms.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

#include "android/emulation/HostmemIdMapping.h"

#include "android/emulation/control/vm_operations.h"

#include <gtest/gtest.h>

using android::emulation::HostmemIdMapping;

// Tests creation and destruction.
TEST(HostmemIdMapping, Basic) {
    HostmemIdMapping m;
}

// Tests basic operations on an entry: add, remove, get entry info
TEST(HostmemIdMapping, BasicEntry) {
    HostmemIdMapping m;
    {
        MemEntry entry{
            .hva = 0,
            .size = 1,
            .register_fixed = 0,
            .fixed_id = 0,
            .caching = MAP_CACHE_NONE,
        };
        auto id = m.add(&entry);
        EXPECT_EQ(HostmemIdMapping::kInvalidHostmemId, id);
    }
    {
        MemEntry entry{
            .hva = 1,
            .size = 0,
            .register_fixed = 0,
            .fixed_id = 0,
            .caching = MAP_CACHE_NONE,
        };
        auto id = m.add(&entry);
        EXPECT_EQ(HostmemIdMapping::kInvalidHostmemId, id);
    }
    {
        MemEntry inputEntry{
            .hva = 1,
            .size = 2,
            .register_fixed = 0,
            .fixed_id = 0,
            .caching = MAP_CACHE_NONE,
        };
        auto id = m.add(&inputEntry);
        EXPECT_NE(HostmemIdMapping::kInvalidHostmemId, id);

        auto entry = m.get(id);
        EXPECT_EQ(id, entry.id);
        EXPECT_EQ(1, entry.hva);
        EXPECT_EQ(2, entry.size);

        m.remove(id);

        entry = m.get(id);

        EXPECT_EQ(HostmemIdMapping::kInvalidHostmemId, entry.id);
        EXPECT_EQ(0, entry.hva);
        EXPECT_EQ(0, entry.size);
    }
}

// Tests the clear() method.
TEST(HostmemIdMapping, Clear) {
    HostmemIdMapping m;
    MemEntry entry1{
        .hva = 1,
        .size = 2,
        .register_fixed = 0,
        .fixed_id = 0,
        .caching = MAP_CACHE_NONE,
    };
    auto id1 = m.add(&entry1);
    MemEntry entry2{
        .hva = 3,
        .size = 4,
        .register_fixed = 0,
        .fixed_id = 0,
        .caching = MAP_CACHE_NONE,
    };
    auto id2 = m.add(&entry2);

    m.clear();

    auto entry = m.get(id1);
    EXPECT_EQ(HostmemIdMapping::kInvalidHostmemId, entry.id);
    EXPECT_EQ(0, entry.hva);
    EXPECT_EQ(0, entry.size);

    entry = m.get(id2);
    EXPECT_EQ(HostmemIdMapping::kInvalidHostmemId, entry.id);
    EXPECT_EQ(0, entry.hva);
    EXPECT_EQ(0, entry.size);
}

