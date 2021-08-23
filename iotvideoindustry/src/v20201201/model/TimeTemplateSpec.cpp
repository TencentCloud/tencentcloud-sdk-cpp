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

#include <tencentcloud/iotvideoindustry/v20201201/model/TimeTemplateSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

TimeTemplateSpec::TimeTemplateSpec() :
    m_dayofWeekHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome TimeTemplateSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DayofWeek") && !value["DayofWeek"].IsNull())
    {
        if (!value["DayofWeek"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateSpec.DayofWeek` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayofWeek = value["DayofWeek"].GetInt64();
        m_dayofWeekHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateSpec.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateSpec.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeTemplateSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayofWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayofWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayofWeek, allocator);
    }

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

}


int64_t TimeTemplateSpec::GetDayofWeek() const
{
    return m_dayofWeek;
}

void TimeTemplateSpec::SetDayofWeek(const int64_t& _dayofWeek)
{
    m_dayofWeek = _dayofWeek;
    m_dayofWeekHasBeenSet = true;
}

bool TimeTemplateSpec::DayofWeekHasBeenSet() const
{
    return m_dayofWeekHasBeenSet;
}

string TimeTemplateSpec::GetBeginTime() const
{
    return m_beginTime;
}

void TimeTemplateSpec::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool TimeTemplateSpec::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string TimeTemplateSpec::GetEndTime() const
{
    return m_endTime;
}

void TimeTemplateSpec::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TimeTemplateSpec::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

