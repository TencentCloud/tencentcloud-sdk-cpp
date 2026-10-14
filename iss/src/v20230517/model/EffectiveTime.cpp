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

#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

EffectiveTime::EffectiveTime() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_weekDayHasBeenSet(false)
{
}

CoreInternalOutcome EffectiveTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveTime.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveTime.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("WeekDay") && !value["WeekDay"].IsNull())
    {
        if (!value["WeekDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EffectiveTime.WeekDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weekDay = value["WeekDay"].GetInt64();
        m_weekDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EffectiveTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_weekDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekDay, allocator);
    }

}


string EffectiveTime::GetBeginTime() const
{
    return m_beginTime;
}

void EffectiveTime::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool EffectiveTime::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string EffectiveTime::GetEndTime() const
{
    return m_endTime;
}

void EffectiveTime::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EffectiveTime::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t EffectiveTime::GetWeekDay() const
{
    return m_weekDay;
}

void EffectiveTime::SetWeekDay(const int64_t& _weekDay)
{
    m_weekDay = _weekDay;
    m_weekDayHasBeenSet = true;
}

bool EffectiveTime::WeekDayHasBeenSet() const
{
    return m_weekDayHasBeenSet;
}

