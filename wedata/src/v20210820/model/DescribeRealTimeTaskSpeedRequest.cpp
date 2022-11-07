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

#include <tencentcloud/wedata/v20210820/model/DescribeRealTimeTaskSpeedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRealTimeTaskSpeedRequest::DescribeRealTimeTaskSpeedRequest() :
    m_taskIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribeRealTimeTaskSpeedRequest::ToJsonString() const
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

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRealTimeTaskSpeedRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeRealTimeTaskSpeedRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeRealTimeTaskSpeedRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeRealTimeTaskSpeedRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRealTimeTaskSpeedRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRealTimeTaskSpeedRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeRealTimeTaskSpeedRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRealTimeTaskSpeedRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRealTimeTaskSpeedRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeRealTimeTaskSpeedRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeRealTimeTaskSpeedRequest::SetGranularity(const uint64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeRealTimeTaskSpeedRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeRealTimeTaskSpeedRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRealTimeTaskSpeedRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRealTimeTaskSpeedRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


