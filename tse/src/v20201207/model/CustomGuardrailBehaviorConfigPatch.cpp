/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tse/v20201207/model/CustomGuardrailBehaviorConfigPatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailBehaviorConfigPatch::CustomGuardrailBehaviorConfigPatch() :
    m_directionHasBeenSet(false),
    m_handleActionHasBeenSet(false),
    m_timeoutMsHasBeenSet(false),
    m_failureModeHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailBehaviorConfigPatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigPatch.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("HandleAction") && !value["HandleAction"].IsNull())
    {
        if (!value["HandleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigPatch.HandleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleAction = string(value["HandleAction"].GetString());
        m_handleActionHasBeenSet = true;
    }

    if (value.HasMember("TimeoutMs") && !value["TimeoutMs"].IsNull())
    {
        if (!value["TimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigPatch.TimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutMs = value["TimeoutMs"].GetInt64();
        m_timeoutMsHasBeenSet = true;
    }

    if (value.HasMember("FailureMode") && !value["FailureMode"].IsNull())
    {
        if (!value["FailureMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigPatch.FailureMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMode = string(value["FailureMode"].GetString());
        m_failureModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailBehaviorConfigPatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_handleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutMs, allocator);
    }

    if (m_failureModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureMode.c_str(), allocator).Move(), allocator);
    }

}


string CustomGuardrailBehaviorConfigPatch::GetDirection() const
{
    return m_direction;
}

void CustomGuardrailBehaviorConfigPatch::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigPatch::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string CustomGuardrailBehaviorConfigPatch::GetHandleAction() const
{
    return m_handleAction;
}

void CustomGuardrailBehaviorConfigPatch::SetHandleAction(const string& _handleAction)
{
    m_handleAction = _handleAction;
    m_handleActionHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigPatch::HandleActionHasBeenSet() const
{
    return m_handleActionHasBeenSet;
}

int64_t CustomGuardrailBehaviorConfigPatch::GetTimeoutMs() const
{
    return m_timeoutMs;
}

void CustomGuardrailBehaviorConfigPatch::SetTimeoutMs(const int64_t& _timeoutMs)
{
    m_timeoutMs = _timeoutMs;
    m_timeoutMsHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigPatch::TimeoutMsHasBeenSet() const
{
    return m_timeoutMsHasBeenSet;
}

string CustomGuardrailBehaviorConfigPatch::GetFailureMode() const
{
    return m_failureMode;
}

void CustomGuardrailBehaviorConfigPatch::SetFailureMode(const string& _failureMode)
{
    m_failureMode = _failureMode;
    m_failureModeHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigPatch::FailureModeHasBeenSet() const
{
    return m_failureModeHasBeenSet;
}

