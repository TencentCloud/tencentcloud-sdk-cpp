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

#include <tencentcloud/gse/v20191112/model/TimerValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

TimerValue::TimerValue() :
    m_dayHasBeenSet(false),
    m_fromDayHasBeenSet(false),
    m_toDayHasBeenSet(false),
    m_weekDaysHasBeenSet(false)
{
}

CoreInternalOutcome TimerValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Day") && !value["Day"].IsNull())
    {
        if (!value["Day"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerValue.Day` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_day = value["Day"].GetInt64();
        m_dayHasBeenSet = true;
    }

    if (value.HasMember("FromDay") && !value["FromDay"].IsNull())
    {
        if (!value["FromDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerValue.FromDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fromDay = value["FromDay"].GetInt64();
        m_fromDayHasBeenSet = true;
    }

    if (value.HasMember("ToDay") && !value["ToDay"].IsNull())
    {
        if (!value["ToDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerValue.ToDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toDay = value["ToDay"].GetInt64();
        m_toDayHasBeenSet = true;
    }

    if (value.HasMember("WeekDays") && !value["WeekDays"].IsNull())
    {
        if (!value["WeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimerValue.WeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["WeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDays.push_back((*itr).GetInt64());
        }
        m_weekDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_day, allocator);
    }

    if (m_fromDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromDay, allocator);
    }

    if (m_toDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toDay, allocator);
    }

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDays.begin(); itr != m_weekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t TimerValue::GetDay() const
{
    return m_day;
}

void TimerValue::SetDay(const int64_t& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool TimerValue::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}

int64_t TimerValue::GetFromDay() const
{
    return m_fromDay;
}

void TimerValue::SetFromDay(const int64_t& _fromDay)
{
    m_fromDay = _fromDay;
    m_fromDayHasBeenSet = true;
}

bool TimerValue::FromDayHasBeenSet() const
{
    return m_fromDayHasBeenSet;
}

int64_t TimerValue::GetToDay() const
{
    return m_toDay;
}

void TimerValue::SetToDay(const int64_t& _toDay)
{
    m_toDay = _toDay;
    m_toDayHasBeenSet = true;
}

bool TimerValue::ToDayHasBeenSet() const
{
    return m_toDayHasBeenSet;
}

vector<int64_t> TimerValue::GetWeekDays() const
{
    return m_weekDays;
}

void TimerValue::SetWeekDays(const vector<int64_t>& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool TimerValue::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

