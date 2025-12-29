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
    m_scheduleTimeZoneHasBeenSet(false),
    m_secondHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_alarmTriggerFrequencyHasBeenSet(false)
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

    if (value.HasMember("Second") && !value["Second"].IsNull())
    {
        if (!value["Second"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.Second` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_second = value["Second"].GetInt64();
        m_secondHasBeenSet = true;
    }

    if (value.HasMember("Times") && !value["Times"].IsNull())
    {
        if (!value["Times"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.Times` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_times = value["Times"].GetInt64();
        m_timesHasBeenSet = true;
    }

    if (value.HasMember("AlarmTriggerFrequency") && !value["AlarmTriggerFrequency"].IsNull())
    {
        if (!value["AlarmTriggerFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeOutStrategyInfo.AlarmTriggerFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmTriggerFrequency = value["AlarmTriggerFrequency"].GetInt64();
        m_alarmTriggerFrequencyHasBeenSet = true;
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

    if (m_secondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Second";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_second, allocator);
    }

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_times, allocator);
    }

    if (m_alarmTriggerFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTriggerFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmTriggerFrequency, allocator);
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

int64_t TimeOutStrategyInfo::GetSecond() const
{
    return m_second;
}

void TimeOutStrategyInfo::SetSecond(const int64_t& _second)
{
    m_second = _second;
    m_secondHasBeenSet = true;
}

bool TimeOutStrategyInfo::SecondHasBeenSet() const
{
    return m_secondHasBeenSet;
}

int64_t TimeOutStrategyInfo::GetTimes() const
{
    return m_times;
}

void TimeOutStrategyInfo::SetTimes(const int64_t& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool TimeOutStrategyInfo::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

int64_t TimeOutStrategyInfo::GetAlarmTriggerFrequency() const
{
    return m_alarmTriggerFrequency;
}

void TimeOutStrategyInfo::SetAlarmTriggerFrequency(const int64_t& _alarmTriggerFrequency)
{
    m_alarmTriggerFrequency = _alarmTriggerFrequency;
    m_alarmTriggerFrequencyHasBeenSet = true;
}

bool TimeOutStrategyInfo::AlarmTriggerFrequencyHasBeenSet() const
{
    return m_alarmTriggerFrequencyHasBeenSet;
}

