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

#include <tencentcloud/ccc/v20200210/model/AvailableTimeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AvailableTimeConfig::AvailableTimeConfig() :
    m_dayTypeHasBeenSet(false),
    m_daysOfWeekHasBeenSet(false),
    m_timeRangesHasBeenSet(false)
{
}

CoreInternalOutcome AvailableTimeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DayType") && !value["DayType"].IsNull())
    {
        if (!value["DayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableTimeConfig.DayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dayType = string(value["DayType"].GetString());
        m_dayTypeHasBeenSet = true;
    }

    if (value.HasMember("DaysOfWeek") && !value["DaysOfWeek"].IsNull())
    {
        if (!value["DaysOfWeek"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableTimeConfig.DaysOfWeek` is not array type"));

        const rapidjson::Value &tmpValue = value["DaysOfWeek"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_daysOfWeek.push_back((*itr).GetString());
        }
        m_daysOfWeekHasBeenSet = true;
    }

    if (value.HasMember("TimeRanges") && !value["TimeRanges"].IsNull())
    {
        if (!value["TimeRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableTimeConfig.TimeRanges` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeRanges.push_back(item);
        }
        m_timeRangesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableTimeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dayType.c_str(), allocator).Move(), allocator);
    }

    if (m_daysOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DaysOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_daysOfWeek.begin(); itr != m_daysOfWeek.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeRanges.begin(); itr != m_timeRanges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AvailableTimeConfig::GetDayType() const
{
    return m_dayType;
}

void AvailableTimeConfig::SetDayType(const string& _dayType)
{
    m_dayType = _dayType;
    m_dayTypeHasBeenSet = true;
}

bool AvailableTimeConfig::DayTypeHasBeenSet() const
{
    return m_dayTypeHasBeenSet;
}

vector<string> AvailableTimeConfig::GetDaysOfWeek() const
{
    return m_daysOfWeek;
}

void AvailableTimeConfig::SetDaysOfWeek(const vector<string>& _daysOfWeek)
{
    m_daysOfWeek = _daysOfWeek;
    m_daysOfWeekHasBeenSet = true;
}

bool AvailableTimeConfig::DaysOfWeekHasBeenSet() const
{
    return m_daysOfWeekHasBeenSet;
}

vector<TimeRange> AvailableTimeConfig::GetTimeRanges() const
{
    return m_timeRanges;
}

void AvailableTimeConfig::SetTimeRanges(const vector<TimeRange>& _timeRanges)
{
    m_timeRanges = _timeRanges;
    m_timeRangesHasBeenSet = true;
}

bool AvailableTimeConfig::TimeRangesHasBeenSet() const
{
    return m_timeRangesHasBeenSet;
}

