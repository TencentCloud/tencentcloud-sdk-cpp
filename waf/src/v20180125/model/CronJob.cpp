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

#include <tencentcloud/waf/v20180125/model/CronJob.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CronJob::CronJob() :
    m_daysHasBeenSet(false),
    m_wDaysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome CronJob::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CronJob.Days` is not array type"));

        const rapidjson::Value &tmpValue = value["Days"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_days.push_back((*itr).GetUint64());
        }
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("WDays") && !value["WDays"].IsNull())
    {
        if (!value["WDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CronJob.WDays` is not array type"));

        const rapidjson::Value &tmpValue = value["WDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_wDays.push_back((*itr).GetUint64());
        }
        m_wDaysHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronJob.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CronJob::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_days.begin(); itr != m_days.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_wDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wDays.begin(); itr != m_wDays.end(); ++itr)
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


vector<uint64_t> CronJob::GetDays() const
{
    return m_days;
}

void CronJob::SetDays(const vector<uint64_t>& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool CronJob::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

vector<uint64_t> CronJob::GetWDays() const
{
    return m_wDays;
}

void CronJob::SetWDays(const vector<uint64_t>& _wDays)
{
    m_wDays = _wDays;
    m_wDaysHasBeenSet = true;
}

bool CronJob::WDaysHasBeenSet() const
{
    return m_wDaysHasBeenSet;
}

string CronJob::GetStartTime() const
{
    return m_startTime;
}

void CronJob::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CronJob::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CronJob::GetEndTime() const
{
    return m_endTime;
}

void CronJob::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CronJob::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

