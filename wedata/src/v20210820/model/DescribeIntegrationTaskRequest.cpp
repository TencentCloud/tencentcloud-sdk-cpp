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

#include <tencentcloud/wedata/v20210820/model/DescribeIntegrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeIntegrationTaskRequest::DescribeIntegrationTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_instanceVersionHasBeenSet(false)
{
}

string DescribeIntegrationTaskRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIntegrationTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeIntegrationTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeIntegrationTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeIntegrationTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeIntegrationTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeIntegrationTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DescribeIntegrationTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeIntegrationTaskRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeIntegrationTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DescribeIntegrationTaskRequest::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void DescribeIntegrationTaskRequest::SetInstanceVersion(const int64_t& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool DescribeIntegrationTaskRequest::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}


