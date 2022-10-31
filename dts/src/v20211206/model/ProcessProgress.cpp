/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/dts/v20211206/model/ProcessProgress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ProcessProgress::ProcessProgress() :
    m_statusHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_stepAllHasBeenSet(false),
    m_stepNowHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

CoreInternalOutcome ProcessProgress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessProgress.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessProgress.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("StepAll") && !value["StepAll"].IsNull())
    {
        if (!value["StepAll"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessProgress.StepAll` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepAll = value["StepAll"].GetUint64();
        m_stepAllHasBeenSet = true;
    }

    if (value.HasMember("StepNow") && !value["StepNow"].IsNull())
    {
        if (!value["StepNow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessProgress.StepNow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNow = value["StepNow"].GetUint64();
        m_stepNowHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessProgress.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Steps") && !value["Steps"].IsNull())
    {
        if (!value["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProcessProgress.Steps` is not array type"));

        const rapidjson::Value &tmpValue = value["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StepDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessProgress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_stepAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepAll, allocator);
    }

    if (m_stepNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNow, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProcessProgress::GetStatus() const
{
    return m_status;
}

void ProcessProgress::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProcessProgress::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ProcessProgress::GetPercent() const
{
    return m_percent;
}

void ProcessProgress::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool ProcessProgress::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

uint64_t ProcessProgress::GetStepAll() const
{
    return m_stepAll;
}

void ProcessProgress::SetStepAll(const uint64_t& _stepAll)
{
    m_stepAll = _stepAll;
    m_stepAllHasBeenSet = true;
}

bool ProcessProgress::StepAllHasBeenSet() const
{
    return m_stepAllHasBeenSet;
}

uint64_t ProcessProgress::GetStepNow() const
{
    return m_stepNow;
}

void ProcessProgress::SetStepNow(const uint64_t& _stepNow)
{
    m_stepNow = _stepNow;
    m_stepNowHasBeenSet = true;
}

bool ProcessProgress::StepNowHasBeenSet() const
{
    return m_stepNowHasBeenSet;
}

string ProcessProgress::GetMessage() const
{
    return m_message;
}

void ProcessProgress::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ProcessProgress::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<StepDetailInfo> ProcessProgress::GetSteps() const
{
    return m_steps;
}

void ProcessProgress::SetSteps(const vector<StepDetailInfo>& _steps)
{
    m_steps = _steps;
    m_stepsHasBeenSet = true;
}

bool ProcessProgress::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}

