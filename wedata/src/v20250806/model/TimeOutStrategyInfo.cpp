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

#include <tencentcloud/wedata/v20250806/model/TimeOutStrategyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TimeOutStrategyInfo::TimeOutStrategyInfo() :
    m_ruleTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_minHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false)
{
}

CoreInternalOutcome TimeOutStrategyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.Hour` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hour = value["Hour"].GetUint64();
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.Min` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetInt64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeOutStrategyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

}


int64_t TimeOutStrategyInfo::GetRuleType() const
{
    return m_ruleType;
}

void TimeOutStrategyInfo::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool TimeOutStrategyInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t TimeOutStrategyInfo::GetType() const
{
    return m_type;
}

void TimeOutStrategyInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TimeOutStrategyInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t TimeOutStrategyInfo::GetHour() const
{
    return m_hour;
}

void TimeOutStrategyInfo::SetHour(const uint64_t& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool TimeOutStrategyInfo::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

int64_t TimeOutStrategyInfo::GetMin() const
{
    return m_min;
}

void TimeOutStrategyInfo::SetMin(const int64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool TimeOutStrategyInfo::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

string TimeOutStrategyInfo::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void TimeOutStrategyInfo::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool TimeOutStrategyInfo::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

