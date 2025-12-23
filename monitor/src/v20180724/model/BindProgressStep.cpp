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

#include <tencentcloud/monitor/v20180724/model/BindProgressStep.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

BindProgressStep::BindProgressStep() :
    m_endAtHasBeenSet(false),
    m_failedMsgHasBeenSet(false),
    m_lifeStateHasBeenSet(false),
    m_startAtHasBeenSet(false),
    m_stepHasBeenSet(false)
{
}

CoreInternalOutcome BindProgressStep::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndAt") && !value["EndAt"].IsNull())
    {
        if (!value["EndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProgressStep.EndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endAt = string(value["EndAt"].GetString());
        m_endAtHasBeenSet = true;
    }

    if (value.HasMember("FailedMsg") && !value["FailedMsg"].IsNull())
    {
        if (!value["FailedMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProgressStep.FailedMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedMsg = string(value["FailedMsg"].GetString());
        m_failedMsgHasBeenSet = true;
    }

    if (value.HasMember("LifeState") && !value["LifeState"].IsNull())
    {
        if (!value["LifeState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProgressStep.LifeState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeState = string(value["LifeState"].GetString());
        m_lifeStateHasBeenSet = true;
    }

    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProgressStep.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindProgressStep.Step` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_step = string(value["Step"].GetString());
        m_stepHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindProgressStep::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endAt.c_str(), allocator).Move(), allocator);
    }

    if (m_failedMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeState.c_str(), allocator).Move(), allocator);
    }

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_step.c_str(), allocator).Move(), allocator);
    }

}


string BindProgressStep::GetEndAt() const
{
    return m_endAt;
}

void BindProgressStep::SetEndAt(const string& _endAt)
{
    m_endAt = _endAt;
    m_endAtHasBeenSet = true;
}

bool BindProgressStep::EndAtHasBeenSet() const
{
    return m_endAtHasBeenSet;
}

string BindProgressStep::GetFailedMsg() const
{
    return m_failedMsg;
}

void BindProgressStep::SetFailedMsg(const string& _failedMsg)
{
    m_failedMsg = _failedMsg;
    m_failedMsgHasBeenSet = true;
}

bool BindProgressStep::FailedMsgHasBeenSet() const
{
    return m_failedMsgHasBeenSet;
}

string BindProgressStep::GetLifeState() const
{
    return m_lifeState;
}

void BindProgressStep::SetLifeState(const string& _lifeState)
{
    m_lifeState = _lifeState;
    m_lifeStateHasBeenSet = true;
}

bool BindProgressStep::LifeStateHasBeenSet() const
{
    return m_lifeStateHasBeenSet;
}

string BindProgressStep::GetStartAt() const
{
    return m_startAt;
}

void BindProgressStep::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool BindProgressStep::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

string BindProgressStep::GetStep() const
{
    return m_step;
}

void BindProgressStep::SetStep(const string& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool BindProgressStep::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

