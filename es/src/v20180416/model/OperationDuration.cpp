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

#include <tencentcloud/es/v20180416/model/OperationDuration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

OperationDuration::OperationDuration() :
    m_periodsHasBeenSet(false),
    m_timeStartHasBeenSet(false),
    m_timeEndHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

CoreInternalOutcome OperationDuration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Periods") && !value["Periods"].IsNull())
    {
        if (!value["Periods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperationDuration.Periods` is not array type"));

        const rapidjson::Value &tmpValue = value["Periods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_periods.push_back((*itr).GetUint64());
        }
        m_periodsHasBeenSet = true;
    }

    if (value.HasMember("TimeStart") && !value["TimeStart"].IsNull())
    {
        if (!value["TimeStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationDuration.TimeStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeStart = string(value["TimeStart"].GetString());
        m_timeStartHasBeenSet = true;
    }

    if (value.HasMember("TimeEnd") && !value["TimeEnd"].IsNull())
    {
        if (!value["TimeEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationDuration.TimeEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeEnd = string(value["TimeEnd"].GetString());
        m_timeEndHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationDuration.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationDuration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Periods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_periods.begin(); itr != m_periods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_timeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_timeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

}


vector<uint64_t> OperationDuration::GetPeriods() const
{
    return m_periods;
}

void OperationDuration::SetPeriods(const vector<uint64_t>& _periods)
{
    m_periods = _periods;
    m_periodsHasBeenSet = true;
}

bool OperationDuration::PeriodsHasBeenSet() const
{
    return m_periodsHasBeenSet;
}

string OperationDuration::GetTimeStart() const
{
    return m_timeStart;
}

void OperationDuration::SetTimeStart(const string& _timeStart)
{
    m_timeStart = _timeStart;
    m_timeStartHasBeenSet = true;
}

bool OperationDuration::TimeStartHasBeenSet() const
{
    return m_timeStartHasBeenSet;
}

string OperationDuration::GetTimeEnd() const
{
    return m_timeEnd;
}

void OperationDuration::SetTimeEnd(const string& _timeEnd)
{
    m_timeEnd = _timeEnd;
    m_timeEndHasBeenSet = true;
}

bool OperationDuration::TimeEndHasBeenSet() const
{
    return m_timeEndHasBeenSet;
}

string OperationDuration::GetTimeZone() const
{
    return m_timeZone;
}

void OperationDuration::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool OperationDuration::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

