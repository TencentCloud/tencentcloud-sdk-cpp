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

#include <tencentcloud/redis/v20180412/model/ModifyInstanceEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ModifyInstanceEventRequest::ModifyInstanceEventRequest() :
    m_instanceIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionDateHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyInstanceEventRequest::ToJsonString() const
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

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionDate.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceEventRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceEventRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceEventRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyInstanceEventRequest::GetEventId() const
{
    return m_eventId;
}

void ModifyInstanceEventRequest::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool ModifyInstanceEventRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string ModifyInstanceEventRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyInstanceEventRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyInstanceEventRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyInstanceEventRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyInstanceEventRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyInstanceEventRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyInstanceEventRequest::GetExecutionDate() const
{
    return m_executionDate;
}

void ModifyInstanceEventRequest::SetExecutionDate(const string& _executionDate)
{
    m_executionDate = _executionDate;
    m_executionDateHasBeenSet = true;
}

bool ModifyInstanceEventRequest::ExecutionDateHasBeenSet() const
{
    return m_executionDateHasBeenSet;
}

string ModifyInstanceEventRequest::GetStatus() const
{
    return m_status;
}

void ModifyInstanceEventRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyInstanceEventRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


