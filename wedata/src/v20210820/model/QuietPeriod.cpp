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

#include <tencentcloud/wedata/v20210820/model/QuietPeriod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

QuietPeriod::QuietPeriod() :
    m_daysOfWeekHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome QuietPeriod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DaysOfWeek") && !value["DaysOfWeek"].IsNull())
    {
        if (!value["DaysOfWeek"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QuietPeriod.DaysOfWeek` is not array type"));

        const rapidjson::Value &tmpValue = value["DaysOfWeek"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_daysOfWeek.push_back((*itr).GetUint64());
        }
        m_daysOfWeekHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuietPeriod.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuietPeriod.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuietPeriod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_daysOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DaysOfWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_daysOfWeek.begin(); itr != m_daysOfWeek.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


vector<uint64_t> QuietPeriod::GetDaysOfWeek() const
{
    return m_daysOfWeek;
}

void QuietPeriod::SetDaysOfWeek(const vector<uint64_t>& _daysOfWeek)
{
    m_daysOfWeek = _daysOfWeek;
    m_daysOfWeekHasBeenSet = true;
}

bool QuietPeriod::DaysOfWeekHasBeenSet() const
{
    return m_daysOfWeekHasBeenSet;
}

string QuietPeriod::GetStartTime() const
{
    return m_startTime;
}

void QuietPeriod::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QuietPeriod::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string QuietPeriod::GetEndTime() const
{
    return m_endTime;
}

void QuietPeriod::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QuietPeriod::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

