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

#include <tencentcloud/iss/v20230517/model/RecordTemplateTimeSections.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

RecordTemplateTimeSections::RecordTemplateTimeSections() :
    m_dayOfWeekHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecordTemplateTimeSections::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DayOfWeek") && !value["DayOfWeek"].IsNull())
    {
        if (!value["DayOfWeek"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateTimeSections.DayOfWeek` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayOfWeek = value["DayOfWeek"].GetInt64();
        m_dayOfWeekHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateTimeSections.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTemplateTimeSections.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTemplateTimeSections::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayOfWeek, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t RecordTemplateTimeSections::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void RecordTemplateTimeSections::SetDayOfWeek(const int64_t& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool RecordTemplateTimeSections::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string RecordTemplateTimeSections::GetStartTime() const
{
    return m_startTime;
}

void RecordTemplateTimeSections::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RecordTemplateTimeSections::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RecordTemplateTimeSections::GetEndTime() const
{
    return m_endTime;
}

void RecordTemplateTimeSections::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RecordTemplateTimeSections::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

