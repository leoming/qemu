// Copyright 2018 The Android Open Source Project
//
// This software is licensed under the terms of the GNU General Public
// License version 2, as published by the Free Software Foundation, and
// may be copied, distributed, and modified under those terms.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

#include "android/base/Result.h"
#include "android/base/Compiler.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <string>

using android::base::Err;
using android::base::Ok;
using android::base::Result;

using testing::Eq;
using testing::Optional;
enum class MyError { Failed1, Failed2 };

TEST(Result, VoidEnum) {
    {
        Result<void, MyError> result = Ok();
        EXPECT_TRUE(result.ok());
        EXPECT_FALSE(result.err());
        EXPECT_FALSE(result.err().hasValue());
    }

    {
        Result<void, MyError> result = Err(MyError::Failed1);
        EXPECT_FALSE(result.ok());
        EXPECT_TRUE(result.err());
        EXPECT_THAT(result.err(), Optional(Eq(MyError::Failed1)));
    }
}

TEST(Result, ReturnValue) {
    {
        Result<uint32_t, MyError> result = Ok(1);
        EXPECT_TRUE(result.ok());
        EXPECT_FALSE(result.err());
        EXPECT_THAT(result.ok(), Optional(Eq(1)));
    }

    {
        Result<uint32_t, MyError> result = Err(MyError::Failed2);
        EXPECT_FALSE(result.ok());
        EXPECT_TRUE(result.err());
        EXPECT_THAT(result.err(), Optional(Eq(MyError::Failed2)));
    }
}

TEST(Result, SameType) {
    Result<uint32_t, uint32_t> success = Ok(123);
    EXPECT_THAT(success.ok(), Optional(Eq(123)));
    EXPECT_FALSE(success.err().hasValue());
    EXPECT_EQ(*success.ok(), 123);
    EXPECT_DEATH(*success.err(), "not constructed");

    Result<uint32_t, uint32_t> fail = Err(456u);
    EXPECT_THAT(fail.err(), Optional(Eq(456u)));
    EXPECT_FALSE(fail.ok().hasValue());
    EXPECT_DEATH(*fail.ok(), "not constructed");
    EXPECT_EQ(*fail.err(), 456u);
}

TEST(Result, ComplexError) {
    struct ComplexError {
        ComplexError(MyError code, std::string message = "")
            : mCode(code), mMessage(message) {}

        const MyError mCode;
        const std::string mMessage;
    };

    {
        Result<void, ComplexError> result = Ok();
        EXPECT_TRUE(result.ok());
    }

    {
        Result<void, ComplexError> result =
                Err(ComplexError(MyError::Failed1, "message"));
        EXPECT_TRUE(result.err());
        EXPECT_EQ(result.err().value().mCode, MyError::Failed1);
        EXPECT_EQ(result.err().value().mMessage, "message");
    }
}

TEST(Result, Invalidated) {
    auto okFn = []() -> Result<uint32_t, uint32_t> { return Ok(123); };
    auto errFn = []() -> Result<uint32_t, uint32_t> { return Err(456u); };

    {
        auto result = okFn();
        ASSERT_TRUE(result.ok());
        EXPECT_EQ(result.unwrap(), 123);
        EXPECT_DEATH(result.ok(), "invalid");
        EXPECT_DEATH(result.err(), "invalid");
        EXPECT_DEATH(result.unwrap(), "invalid");
        EXPECT_DEATH(result.unwrapErr(), "invalid");
    }

    {
        auto result = errFn();
        ASSERT_TRUE(result.err());
        EXPECT_EQ(result.unwrapErr(), 456);
        EXPECT_DEATH(result.ok(), "invalid");
        EXPECT_DEATH(result.err(), "invalid");
        EXPECT_DEATH(result.unwrap(), "invalid");
        EXPECT_DEATH(result.unwrapErr(), "invalid");
    }
}

struct NonCopyable {
    DISALLOW_COPY_AND_ASSIGN(NonCopyable);

public:
    NonCopyable(uint32_t value) : mValue(value) {}

    NonCopyable(NonCopyable&& other) : mValue(std::move(other.mValue)) {}

    const uint32_t mValue;
};

TEST(Result, NonCopyableValue) {
    auto testFn = []() -> Result<NonCopyable, MyError> {
        return Ok(NonCopyable(123));
    };

    {
        auto result = testFn();
        ASSERT_TRUE(result.ok());
        EXPECT_EQ(result.unwrap().mValue, 123);
        EXPECT_DEATH(result.unwrap(), "invalid");
        EXPECT_DEATH(result.unwrapErr(), "invalid");
    }

    // Test propagating the non-copyable rtype.
    auto propagateFn = [&testFn]() -> Result<NonCopyable, MyError> {
        return testFn();
    };

    auto propagateWrapperFn = [&propagateFn]() -> Result<NonCopyable, MyError> {
        return propagateFn();
    };

    {
        auto result = propagateWrapperFn();
        ASSERT_TRUE(result.ok());
        EXPECT_EQ(result.unwrap().mValue, 123);
    }
}

TEST(Result, NonCopyableErr) {
    auto testFn = []() -> Result<void, NonCopyable> {
        return Err(NonCopyable(123));
    };

    {
        auto result = testFn();
        ASSERT_TRUE(result.err());
        EXPECT_EQ(result.unwrapErr().mValue, 123);
        EXPECT_DEATH(result.unwrapErr(), "invalid");
    }

    // Test propagating the non-copyable rtype.
    auto propagateFn = [&testFn]() -> Result<void, NonCopyable> {
        return testFn();
    };

    auto propagateWrapperFn = [&propagateFn]() -> Result<void, NonCopyable> {
        return propagateFn();
    };

    {
        auto result = propagateWrapperFn();
        ASSERT_TRUE(result.err());
        EXPECT_EQ(result.unwrapErr().mValue, 123);
    }

    auto propagateErrFn = [&testFn]() -> Result<uint32_t, NonCopyable> {
        auto result = testFn();
        RETURN_IF_ERR(result);
        return Ok(0);
    };

    auto propagateErrDiscardFn = [&testFn]() -> Result<uint32_t, NonCopyable> {
        RETURN_IF_ERR(testFn());
        return Ok(0);
    };

    {
        auto result = propagateErrFn();
        ASSERT_TRUE(result.err());
        EXPECT_EQ(result.err().value().mValue, 123);
    }

    {
        auto result = propagateErrDiscardFn();
        ASSERT_TRUE(result.err());
        EXPECT_EQ(result.unwrapErr().mValue, 123);
    }
}
