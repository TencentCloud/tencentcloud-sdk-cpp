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

#include <tencentcloud/tse/v20201207/model/CustomGuardrailBehaviorConfigInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CustomGuardrailBehaviorConfigInput::CustomGuardrailBehaviorConfigInput() :
    m_directionHasBeenSet(false),
    m_handleActionHasBeenSet(false),
    m_timeoutMsHasBeenSet(false),
    m_failureModeHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailBehaviorConfigInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigInput.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("HandleAction") && !value["HandleAction"].IsNull())
    {
        if (!value["HandleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigInput.HandleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleAction = string(value["HandleAction"].GetString());
        m_handleActionHasBeenSet = true;
    }

    if (value.HasMember("TimeoutMs") && !value["TimeoutMs"].IsNull())
    {
        if (!value["TimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigInput.TimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutMs = value["TimeoutMs"].GetInt64();
        m_timeoutMsHasBeenSet = true;
    }

    if (value.HasMember("FailureMode") && !value["FailureMode"].IsNull())
    {
        if (!value["FailureMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailBehaviorConfigInput.FailureMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMode = string(value["FailureMode"].GetString());
        m_failureModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailBehaviorConfigInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string CustomGuardrailBehaviorConfigInput::GetDirection() const
{
    return m_direction;
}

void CustomGuardrailBehaviorConfigInput::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigInput::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string CustomGuardrailBehaviorConfigInput::GetHandleAction() const
{
    return m_handleAction;
}

void CustomGuardrailBehaviorConfigInput::SetHandleAction(const string& _handleAction)
{
    m_handleAction = _handleAction;
    m_handleActionHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigInput::HandleActionHasBeenSet() const
{
    return m_handleActionHasBeenSet;
}

int64_t CustomGuardrailBehaviorConfigInput::GetTimeoutMs() const
{
    return m_timeoutMs;
}

void CustomGuardrailBehaviorConfigInput::SetTimeoutMs(const int64_t& _timeoutMs)
{
    m_timeoutMs = _timeoutMs;
    m_timeoutMsHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigInput::TimeoutMsHasBeenSet() const
{
    return m_timeoutMsHasBeenSet;
}

string CustomGuardrailBehaviorConfigInput::GetFailureMode() const
{
    return m_failureMode;
}

void CustomGuardrailBehaviorConfigInput::SetFailureMode(const string& _failureMode)
{
    m_failureMode = _failureMode;
    m_failureModeHasBeenSet = true;
}

bool CustomGuardrailBehaviorConfigInput::FailureModeHasBeenSet() const
{
    return m_failureModeHasBeenSet;
}

