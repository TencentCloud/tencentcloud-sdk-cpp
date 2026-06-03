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

#include <tencentcloud/bi/v20220105/model/FrequencyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

FrequencyConfig::FrequencyConfig() :
    m_frequencyHasBeenSet(false),
    m_datesHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_intervalTimeHasBeenSet(false),
    m_intervalTimeUnitHasBeenSet(false),
    m_hoursHasBeenSet(false),
    m_minuteHasBeenSet(false)
{
}

CoreInternalOutcome FrequencyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("Dates") && !value["Dates"].IsNull())
    {
        if (!value["Dates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.Dates` is not array type"));

        const rapidjson::Value &tmpValue = value["Dates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dates.push_back((*itr).GetInt64());
        }
        m_datesHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("IntervalTime") && !value["IntervalTime"].IsNull())
    {
        if (!value["IntervalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.IntervalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTime = value["IntervalTime"].GetUint64();
        m_intervalTimeHasBeenSet = true;
    }

    if (value.HasMember("IntervalTimeUnit") && !value["IntervalTimeUnit"].IsNull())
    {
        if (!value["IntervalTimeUnit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.IntervalTimeUnit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalTimeUnit = value["IntervalTimeUnit"].GetUint64();
        m_intervalTimeUnitHasBeenSet = true;
    }

    if (value.HasMember("Hours") && !value["Hours"].IsNull())
    {
        if (!value["Hours"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.Hours` is not array type"));

        const rapidjson::Value &tmpValue = value["Hours"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hours.push_back((*itr).GetInt64());
        }
        m_hoursHasBeenSet = true;
    }

    if (value.HasMember("Minute") && !value["Minute"].IsNull())
    {
        if (!value["Minute"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrequencyConfig.Minute` is not array type"));

        const rapidjson::Value &tmpValue = value["Minute"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_minute.push_back((*itr).GetInt64());
        }
        m_minuteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrequencyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_datesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dates.begin(); itr != m_dates.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTime, allocator);
    }

    if (m_intervalTimeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalTimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalTimeUnit, allocator);
    }

    if (m_hoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hours.begin(); itr != m_hours.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_minuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Minute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_minute.begin(); itr != m_minute.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string FrequencyConfig::GetFrequency() const
{
    return m_frequency;
}

void FrequencyConfig::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool FrequencyConfig::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

vector<int64_t> FrequencyConfig::GetDates() const
{
    return m_dates;
}

void FrequencyConfig::SetDates(const vector<int64_t>& _dates)
{
    m_dates = _dates;
    m_datesHasBeenSet = true;
}

bool FrequencyConfig::DatesHasBeenSet() const
{
    return m_datesHasBeenSet;
}

string FrequencyConfig::GetTime() const
{
    return m_time;
}

void FrequencyConfig::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool FrequencyConfig::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t FrequencyConfig::GetIntervalTime() const
{
    return m_intervalTime;
}

void FrequencyConfig::SetIntervalTime(const uint64_t& _intervalTime)
{
    m_intervalTime = _intervalTime;
    m_intervalTimeHasBeenSet = true;
}

bool FrequencyConfig::IntervalTimeHasBeenSet() const
{
    return m_intervalTimeHasBeenSet;
}

uint64_t FrequencyConfig::GetIntervalTimeUnit() const
{
    return m_intervalTimeUnit;
}

void FrequencyConfig::SetIntervalTimeUnit(const uint64_t& _intervalTimeUnit)
{
    m_intervalTimeUnit = _intervalTimeUnit;
    m_intervalTimeUnitHasBeenSet = true;
}

bool FrequencyConfig::IntervalTimeUnitHasBeenSet() const
{
    return m_intervalTimeUnitHasBeenSet;
}

vector<int64_t> FrequencyConfig::GetHours() const
{
    return m_hours;
}

void FrequencyConfig::SetHours(const vector<int64_t>& _hours)
{
    m_hours = _hours;
    m_hoursHasBeenSet = true;
}

bool FrequencyConfig::HoursHasBeenSet() const
{
    return m_hoursHasBeenSet;
}

vector<int64_t> FrequencyConfig::GetMinute() const
{
    return m_minute;
}

void FrequencyConfig::SetMinute(const vector<int64_t>& _minute)
{
    m_minute = _minute;
    m_minuteHasBeenSet = true;
}

bool FrequencyConfig::MinuteHasBeenSet() const
{
    return m_minuteHasBeenSet;
}

