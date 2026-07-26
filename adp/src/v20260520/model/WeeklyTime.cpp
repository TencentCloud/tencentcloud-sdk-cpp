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

#include <tencentcloud/adp/v20260520/model/WeeklyTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WeeklyTime::WeeklyTime() :
    m_timeOfDayHasBeenSet(false),
    m_weekdayHasBeenSet(false)
{
}

CoreInternalOutcome WeeklyTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeOfDay") && !value["TimeOfDay"].IsNull())
    {
        if (!value["TimeOfDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyTime.TimeOfDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeOfDay = string(value["TimeOfDay"].GetString());
        m_timeOfDayHasBeenSet = true;
    }

    if (value.HasMember("Weekday") && !value["Weekday"].IsNull())
    {
        if (!value["Weekday"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyTime.Weekday` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weekday = value["Weekday"].GetInt64();
        m_weekdayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeeklyTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeOfDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOfDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeOfDay.c_str(), allocator).Move(), allocator);
    }

    if (m_weekdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekday, allocator);
    }

}


string WeeklyTime::GetTimeOfDay() const
{
    return m_timeOfDay;
}

void WeeklyTime::SetTimeOfDay(const string& _timeOfDay)
{
    m_timeOfDay = _timeOfDay;
    m_timeOfDayHasBeenSet = true;
}

bool WeeklyTime::TimeOfDayHasBeenSet() const
{
    return m_timeOfDayHasBeenSet;
}

int64_t WeeklyTime::GetWeekday() const
{
    return m_weekday;
}

void WeeklyTime::SetWeekday(const int64_t& _weekday)
{
    m_weekday = _weekday;
    m_weekdayHasBeenSet = true;
}

bool WeeklyTime::WeekdayHasBeenSet() const
{
    return m_weekdayHasBeenSet;
}

