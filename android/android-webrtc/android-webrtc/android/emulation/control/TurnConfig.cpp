// Copyright (C) 2021 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include "android/emulation/control/TurnConfig.h"

#include "android/base/Log.h"
#include "android/base/Optional.h"        // for Optional
#include "android/base/ProcessControl.h"  // for parseEscapedLaunchString
#include "android/base/system/System.h"   // for System, System::ProcessExit...

namespace android {
namespace emulation {
namespace control {

using android::base::System;

bool TurnConfig::producesValidTurn(std::string cmd) {
    return TurnConfig(cmd).validCommand();
}

TurnConfig::TurnConfig(std::string cmd)
    : mTurnCmd(android::base::parseEscapedLaunchString(cmd)) {}

json TurnConfig::getConfig() {
    json turnConfig = "{}"_json;
    if (mTurnCmd.size() > 0) {
        System::ProcessExitCode exitCode;
        auto turn = System::get()->runCommandWithResult(
                mTurnCmd, kMaxTurnConfigTime, &exitCode);
        if (exitCode == 0 && turn && json::jsonaccept(*turn)) {
            json config = json::parse(*turn, nullptr, false);
            if (config.count("iceServers")) {
                turnConfig = config;
            } else {
                LOG(ERROR) << "Unusable turn config: " << turn;
            }
        }
    }
    return turnConfig;
}

bool TurnConfig::validCommand() {
    if (mTurnCmd.empty()) {
        return true;
    }

    LOG(INFO) << "TurnCFG: --- Command --- ";
    for (auto param : mTurnCmd) {
        LOG(INFO) << "TurnCFG: param:" << param;
    }
    LOG(INFO) << "TurnCFG: --- Running --- ";

    android::base::System::ProcessExitCode exitCode = -1;
    auto turn = android::base::System::get()->runCommandWithResult(
            mTurnCmd, kMaxTurnConfigTime, &exitCode);

    if (turn) {
        if (exitCode == 0 && json::jsonaccept(*turn)) {
            json config = json::parse(*turn, nullptr, false);
            if (config.count("iceServers")) {
                LOG(INFO) << "TurnCFG: Turn command produces valid json.";
                return true;
            } else {
                LOG(ERROR) << "TurnCFG: JSON is missing iceServers.";
            }
        } else {
            if (exitCode != 0) {
                LOG(ERROR) << "TurnCFG: bad exit: " << exitCode;
            } else {
                LOG(ERROR) << "TurnCFG: Bad json result: " << *turn;
            }
        }
    } else {
        LOG(ERROR) << "TurnCFG: Produces no result, exit: " << exitCode;
    }

    return false;
}
}  // namespace control
}  // namespace emulation
}  // namespace android
