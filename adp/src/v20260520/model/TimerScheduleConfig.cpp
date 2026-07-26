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

#include <tencentcloud/adp/v20260520/model/TimerScheduleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerScheduleConfig::TimerScheduleConfig() :
    m_cronHasBeenSet(false),
    m_dailyHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_manualOnlyHasBeenSet(false),
    m_onceHasBeenSet(false),
    m_scheduleTypeHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_weeklyHasBeenSet(false)
{
}

CoreInternalOutcome TimerScheduleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cron") && !value["Cron"].IsNull())
    {
        if (!value["Cron"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.Cron` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cron.Deserialize(value["Cron"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cronHasBeenSet = true;
    }

    if (value.HasMember("Daily") && !value["Daily"].IsNull())
    {
        if (!value["Daily"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.Daily` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_daily.Deserialize(value["Daily"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dailyHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.Interval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_interval.Deserialize(value["Interval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("ManualOnly") && !value["ManualOnly"].IsNull())
    {
        if (!value["ManualOnly"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.ManualOnly` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manualOnly.Deserialize(value["ManualOnly"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manualOnlyHasBeenSet = true;
    }

    if (value.HasMember("Once") && !value["Once"].IsNull())
    {
        if (!value["Once"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.Once` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_once.Deserialize(value["Once"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_onceHasBeenSet = true;
    }

    if (value.HasMember("ScheduleType") && !value["ScheduleType"].IsNull())
    {
        if (!value["ScheduleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.ScheduleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleType = value["ScheduleType"].GetInt64();
        m_scheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("Timezone") && !value["Timezone"].IsNull())
    {
        if (!value["Timezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.Timezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timezone = string(value["Timezone"].GetString());
        m_timezoneHasBeenSet = true;
    }

    if (value.HasMember("Weekly") && !value["Weekly"].IsNull())
    {
        if (!value["Weekly"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScheduleConfig.Weekly` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_weekly.Deserialize(value["Weekly"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_weeklyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerScheduleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cronHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cron";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cron.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dailyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Daily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_daily.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_interval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_manualOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manualOnly.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Once";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_once.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleType, allocator);
    }

    if (m_timezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timezone.c_str(), allocator).Move(), allocator);
    }

    if (m_weeklyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_weekly.ToJsonObject(value[key.c_str()], allocator);
    }

}


CronSchedule TimerScheduleConfig::GetCron() const
{
    return m_cron;
}

void TimerScheduleConfig::SetCron(const CronSchedule& _cron)
{
    m_cron = _cron;
    m_cronHasBeenSet = true;
}

bool TimerScheduleConfig::CronHasBeenSet() const
{
    return m_cronHasBeenSet;
}

DailySchedule TimerScheduleConfig::GetDaily() const
{
    return m_daily;
}

void TimerScheduleConfig::SetDaily(const DailySchedule& _daily)
{
    m_daily = _daily;
    m_dailyHasBeenSet = true;
}

bool TimerScheduleConfig::DailyHasBeenSet() const
{
    return m_dailyHasBeenSet;
}

IntervalSchedule TimerScheduleConfig::GetInterval() const
{
    return m_interval;
}

void TimerScheduleConfig::SetInterval(const IntervalSchedule& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool TimerScheduleConfig::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

ManualOnlySchedule TimerScheduleConfig::GetManualOnly() const
{
    return m_manualOnly;
}

void TimerScheduleConfig::SetManualOnly(const ManualOnlySchedule& _manualOnly)
{
    m_manualOnly = _manualOnly;
    m_manualOnlyHasBeenSet = true;
}

bool TimerScheduleConfig::ManualOnlyHasBeenSet() const
{
    return m_manualOnlyHasBeenSet;
}

OnceSchedule TimerScheduleConfig::GetOnce() const
{
    return m_once;
}

void TimerScheduleConfig::SetOnce(const OnceSchedule& _once)
{
    m_once = _once;
    m_onceHasBeenSet = true;
}

bool TimerScheduleConfig::OnceHasBeenSet() const
{
    return m_onceHasBeenSet;
}

int64_t TimerScheduleConfig::GetScheduleType() const
{
    return m_scheduleType;
}

void TimerScheduleConfig::SetScheduleType(const int64_t& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool TimerScheduleConfig::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
}

string TimerScheduleConfig::GetTimezone() const
{
    return m_timezone;
}

void TimerScheduleConfig::SetTimezone(const string& _timezone)
{
    m_timezone = _timezone;
    m_timezoneHasBeenSet = true;
}

bool TimerScheduleConfig::TimezoneHasBeenSet() const
{
    return m_timezoneHasBeenSet;
}

WeeklySchedule TimerScheduleConfig::GetWeekly() const
{
    return m_weekly;
}

void TimerScheduleConfig::SetWeekly(const WeeklySchedule& _weekly)
{
    m_weekly = _weekly;
    m_weeklyHasBeenSet = true;
}

bool TimerScheduleConfig::WeeklyHasBeenSet() const
{
    return m_weeklyHasBeenSet;
}

