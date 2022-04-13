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

#include <tencentcloud/cdb/v20170320/model/ModifyTimeWindowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyTimeWindowRequest::ModifyTimeWindowRequest() :
    m_instanceIdHasBeenSet(false),
    m_timeRangesHasBeenSet(false),
    m_weekdaysHasBeenSet(false),
    m_maxDelayTimeHasBeenSet(false)
{
}

string ModifyTimeWindowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRanges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeRanges.begin(); itr != m_timeRanges.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weekdaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekdays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekdays.begin(); itr != m_weekdays.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDelayTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTimeWindowRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyTimeWindowRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyTimeWindowRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ModifyTimeWindowRequest::GetTimeRanges() const
{
    return m_timeRanges;
}

void ModifyTimeWindowRequest::SetTimeRanges(const vector<string>& _timeRanges)
{
    m_timeRanges = _timeRanges;
    m_timeRangesHasBeenSet = true;
}

bool ModifyTimeWindowRequest::TimeRangesHasBeenSet() const
{
    return m_timeRangesHasBeenSet;
}

vector<string> ModifyTimeWindowRequest::GetWeekdays() const
{
    return m_weekdays;
}

void ModifyTimeWindowRequest::SetWeekdays(const vector<string>& _weekdays)
{
    m_weekdays = _weekdays;
    m_weekdaysHasBeenSet = true;
}

bool ModifyTimeWindowRequest::WeekdaysHasBeenSet() const
{
    return m_weekdaysHasBeenSet;
}

uint64_t ModifyTimeWindowRequest::GetMaxDelayTime() const
{
    return m_maxDelayTime;
}

void ModifyTimeWindowRequest::SetMaxDelayTime(const uint64_t& _maxDelayTime)
{
    m_maxDelayTime = _maxDelayTime;
    m_maxDelayTimeHasBeenSet = true;
}

bool ModifyTimeWindowRequest::MaxDelayTimeHasBeenSet() const
{
    return m_maxDelayTimeHasBeenSet;
}


