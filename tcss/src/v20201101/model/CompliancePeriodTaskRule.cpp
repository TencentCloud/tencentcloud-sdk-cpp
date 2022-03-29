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

#include <tencentcloud/tcss/v20201101/model/CompliancePeriodTaskRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CompliancePeriodTaskRule::CompliancePeriodTaskRule() :
    m_frequencyHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePeriodTaskRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTaskRule.Frequency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = value["Frequency"].GetUint64();
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTaskRule.ExecutionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionTime = string(value["ExecutionTime"].GetString());
        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePeriodTaskRule.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePeriodTaskRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequency, allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

}


uint64_t CompliancePeriodTaskRule::GetFrequency() const
{
    return m_frequency;
}

void CompliancePeriodTaskRule::SetFrequency(const uint64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool CompliancePeriodTaskRule::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string CompliancePeriodTaskRule::GetExecutionTime() const
{
    return m_executionTime;
}

void CompliancePeriodTaskRule::SetExecutionTime(const string& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool CompliancePeriodTaskRule::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

bool CompliancePeriodTaskRule::GetEnable() const
{
    return m_enable;
}

void CompliancePeriodTaskRule::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CompliancePeriodTaskRule::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

