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

#include <tencentcloud/csip/v20221121/model/DspmScheduleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmScheduleConfig::DspmScheduleConfig() :
    m_scheduleTypeHasBeenSet(false),
    m_dayHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

CoreInternalOutcome DspmScheduleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduleType") && !value["ScheduleType"].IsNull())
    {
        if (!value["ScheduleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmScheduleConfig.ScheduleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleType = string(value["ScheduleType"].GetString());
        m_scheduleTypeHasBeenSet = true;
    }

    if (value.HasMember("Day") && !value["Day"].IsNull())
    {
        if (!value["Day"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmScheduleConfig.Day` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_day = value["Day"].GetUint64();
        m_dayHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmScheduleConfig.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmScheduleConfig.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmScheduleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_day, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

}


string DspmScheduleConfig::GetScheduleType() const
{
    return m_scheduleType;
}

void DspmScheduleConfig::SetScheduleType(const string& _scheduleType)
{
    m_scheduleType = _scheduleType;
    m_scheduleTypeHasBeenSet = true;
}

bool DspmScheduleConfig::ScheduleTypeHasBeenSet() const
{
    return m_scheduleTypeHasBeenSet;
}

uint64_t DspmScheduleConfig::GetDay() const
{
    return m_day;
}

void DspmScheduleConfig::SetDay(const uint64_t& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool DspmScheduleConfig::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}

string DspmScheduleConfig::GetTime() const
{
    return m_time;
}

void DspmScheduleConfig::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DspmScheduleConfig::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string DspmScheduleConfig::GetTimeZone() const
{
    return m_timeZone;
}

void DspmScheduleConfig::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool DspmScheduleConfig::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

