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

#include <tencentcloud/cbs/v20170312/model/Policy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

Policy::Policy() :
    m_hourHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_intervalDaysHasBeenSet(false)
{
}

CoreInternalOutcome Policy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hour") && !value["Hour"].IsNull())
    {
        if (!value["Hour"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Policy.Hour` is not array type"));

        const rapidjson::Value &tmpValue = value["Hour"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hour.push_back((*itr).GetUint64());
        }
        m_hourHasBeenSet = true;
    }

    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Policy.DayOfWeek` is not array type"));

        const rapidjson::Value &tmpValue = value["DayOfWeek"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dayOfWeek.push_back((*itr).GetUint64());
        }
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("DayOfMonth") && !value["DayOfMonth"].IsNull())
    {
        if (!value["DayOfMonth"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Policy.DayOfMonth` is not array type"));

        const rapidjson::Value &tmpValue = value["DayOfMonth"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dayOfMonth.push_back((*itr).GetUint64());
        }
        m_dayOfMonthHasBeenSet = true;
    }

    if (value.HasMember("IntervalDays") && !value["IntervalDays"].IsNull())
    {
        if (!value["IntervalDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Policy.IntervalDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalDays = value["IntervalDays"].GetUint64();
        m_intervalDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Policy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hour.begin(); itr != m_hour.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dayOfWeek.begin(); itr != m_dayOfWeek.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_dayOfMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dayOfMonth.begin(); itr != m_dayOfMonth.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_intervalDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalDays, allocator);
    }

}


vector<uint64_t> Policy::GetHour() const
{
    return m_hour;
}

void Policy::SetHour(const vector<uint64_t>& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool Policy::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

vector<uint64_t> Policy::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void Policy::SetDayOfWeek(const vector<uint64_t>& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool Policy::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

vector<uint64_t> Policy::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void Policy::SetDayOfMonth(const vector<uint64_t>& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool Policy::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

uint64_t Policy::GetIntervalDays() const
{
    return m_intervalDays;
}

void Policy::SetIntervalDays(const uint64_t& _intervalDays)
{
    m_intervalDays = _intervalDays;
    m_intervalDaysHasBeenSet = true;
}

bool Policy::IntervalDaysHasBeenSet() const
{
    return m_intervalDaysHasBeenSet;
}

