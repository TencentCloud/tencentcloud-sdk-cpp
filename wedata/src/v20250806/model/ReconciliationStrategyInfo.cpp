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

#include <tencentcloud/wedata/v20250806/model/ReconciliationStrategyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ReconciliationStrategyInfo::ReconciliationStrategyInfo() :
    m_ruleTypeHasBeenSet(false),
    m_mismatchCountHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_minHasBeenSet(false)
{
}

CoreInternalOutcome ReconciliationStrategyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReconciliationStrategyInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("MismatchCount") && !value["MismatchCount"].IsNull())
    {
        if (!value["MismatchCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReconciliationStrategyInfo.MismatchCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mismatchCount = value["MismatchCount"].GetUint64();
        m_mismatchCountHasBeenSet = true;
    }

    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReconciliationStrategyInfo.Hour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hour = value["Hour"].GetInt64();
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReconciliationStrategyInfo.Min` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetInt64();
        m_minHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReconciliationStrategyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_mismatchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MismatchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mismatchCount, allocator);
    }

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hour, allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

}


string ReconciliationStrategyInfo::GetRuleType() const
{
    return m_ruleType;
}

void ReconciliationStrategyInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ReconciliationStrategyInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

uint64_t ReconciliationStrategyInfo::GetMismatchCount() const
{
    return m_mismatchCount;
}

void ReconciliationStrategyInfo::SetMismatchCount(const uint64_t& _mismatchCount)
{
    m_mismatchCount = _mismatchCount;
    m_mismatchCountHasBeenSet = true;
}

bool ReconciliationStrategyInfo::MismatchCountHasBeenSet() const
{
    return m_mismatchCountHasBeenSet;
}

int64_t ReconciliationStrategyInfo::GetHour() const
{
    return m_hour;
}

void ReconciliationStrategyInfo::SetHour(const int64_t& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool ReconciliationStrategyInfo::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

int64_t ReconciliationStrategyInfo::GetMin() const
{
    return m_min;
}

void ReconciliationStrategyInfo::SetMin(const int64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ReconciliationStrategyInfo::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

