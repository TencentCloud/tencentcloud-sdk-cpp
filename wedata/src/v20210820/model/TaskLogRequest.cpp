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

#include <tencentcloud/wedata/v20210820/model/TaskLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskLogRequest::TaskLogRequest() :
    m_taskIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

string TaskLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TaskLogRequest::GetTaskId() const
{
    return m_taskId;
}

void TaskLogRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskLogRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t TaskLogRequest::GetStartTime() const
{
    return m_startTime;
}

void TaskLogRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t TaskLogRequest::GetEndTime() const
{
    return m_endTime;
}

void TaskLogRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskLogRequest::GetProjectId() const
{
    return m_projectId;
}

void TaskLogRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskLogRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t TaskLogRequest::GetLimit() const
{
    return m_limit;
}

void TaskLogRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool TaskLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string TaskLogRequest::GetOrderType() const
{
    return m_orderType;
}

void TaskLogRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool TaskLogRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

uint64_t TaskLogRequest::GetTaskType() const
{
    return m_taskType;
}

void TaskLogRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskLogRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}


