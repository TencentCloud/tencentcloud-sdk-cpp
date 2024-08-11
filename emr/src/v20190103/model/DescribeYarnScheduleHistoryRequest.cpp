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

#include <tencentcloud/emr/v20190103/model/DescribeYarnScheduleHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeYarnScheduleHistoryRequest::DescribeYarnScheduleHistoryRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_schedulerTypeHasBeenSet(false),
    m_taskStateHasBeenSet(false)
{
}

string DescribeYarnScheduleHistoryRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_schedulerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskState, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeYarnScheduleHistoryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeYarnScheduleHistoryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeYarnScheduleHistoryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeYarnScheduleHistoryRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeYarnScheduleHistoryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeYarnScheduleHistoryRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeYarnScheduleHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeYarnScheduleHistoryRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeYarnScheduleHistoryRequest::GetOffset() const
{
    return m_offset;
}

void DescribeYarnScheduleHistoryRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeYarnScheduleHistoryRequest::GetSchedulerType() const
{
    return m_schedulerType;
}

void DescribeYarnScheduleHistoryRequest::SetSchedulerType(const string& _schedulerType)
{
    m_schedulerType = _schedulerType;
    m_schedulerTypeHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::SchedulerTypeHasBeenSet() const
{
    return m_schedulerTypeHasBeenSet;
}

int64_t DescribeYarnScheduleHistoryRequest::GetTaskState() const
{
    return m_taskState;
}

void DescribeYarnScheduleHistoryRequest::SetTaskState(const int64_t& _taskState)
{
    m_taskState = _taskState;
    m_taskStateHasBeenSet = true;
}

bool DescribeYarnScheduleHistoryRequest::TaskStateHasBeenSet() const
{
    return m_taskStateHasBeenSet;
}


