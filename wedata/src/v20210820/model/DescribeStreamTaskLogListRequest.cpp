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

#include <tencentcloud/wedata/v20210820/model/DescribeStreamTaskLogListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeStreamTaskLogListRequest::DescribeStreamTaskLogListRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_runningOrderIdHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeStreamTaskLogListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
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

    if (m_runningOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runningOrderId, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamTaskLogListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeStreamTaskLogListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeStreamTaskLogListRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeStreamTaskLogListRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeStreamTaskLogListRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeStreamTaskLogListRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

uint64_t DescribeStreamTaskLogListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamTaskLogListRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeStreamTaskLogListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamTaskLogListRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamTaskLogListRequest::GetContainer() const
{
    return m_container;
}

void DescribeStreamTaskLogListRequest::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

uint64_t DescribeStreamTaskLogListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeStreamTaskLogListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeStreamTaskLogListRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeStreamTaskLogListRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

uint64_t DescribeStreamTaskLogListRequest::GetRunningOrderId() const
{
    return m_runningOrderId;
}

void DescribeStreamTaskLogListRequest::SetRunningOrderId(const uint64_t& _runningOrderId)
{
    m_runningOrderId = _runningOrderId;
    m_runningOrderIdHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::RunningOrderIdHasBeenSet() const
{
    return m_runningOrderIdHasBeenSet;
}

string DescribeStreamTaskLogListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeStreamTaskLogListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeStreamTaskLogListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


