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

#include <tencentcloud/bm/v20180423/model/CustomImageProcess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

CustomImageProcess::CustomImageProcess() :
    m_stepNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stepTypeHasBeenSet(false)
{
}

CoreInternalOutcome CustomImageProcess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImageProcess.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImageProcess.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StepType") && !value["StepType"].IsNull())
    {
        if (!value["StepType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImageProcess.StepType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepType = value["StepType"].GetUint64();
        m_stepTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomImageProcess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stepTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepType, allocator);
    }

}


string CustomImageProcess::GetStepName() const
{
    return m_stepName;
}

void CustomImageProcess::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool CustomImageProcess::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string CustomImageProcess::GetStartTime() const
{
    return m_startTime;
}

void CustomImageProcess::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CustomImageProcess::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CustomImageProcess::GetStepType() const
{
    return m_stepType;
}

void CustomImageProcess::SetStepType(const uint64_t& _stepType)
{
    m_stepType = _stepType;
    m_stepTypeHasBeenSet = true;
}

bool CustomImageProcess::StepTypeHasBeenSet() const
{
    return m_stepTypeHasBeenSet;
}

