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

#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerInstanceStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeSchedulerInstanceStatusRequest::DescribeSchedulerInstanceStatusRequest() :
    m_projectIdHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_executionGroupIdHasBeenSet(false),
    m_executionGroupNameHasBeenSet(false)
{
}

string DescribeSchedulerInstanceStatusRequest::ToJsonString() const
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

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSchedulerInstanceStatusRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSchedulerInstanceStatusRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void DescribeSchedulerInstanceStatusRequest::SetTaskTypeId(const string& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetExecutionGroupId() const
{
    return m_executionGroupId;
}

void DescribeSchedulerInstanceStatusRequest::SetExecutionGroupId(const string& _executionGroupId)
{
    m_executionGroupId = _executionGroupId;
    m_executionGroupIdHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ExecutionGroupIdHasBeenSet() const
{
    return m_executionGroupIdHasBeenSet;
}

string DescribeSchedulerInstanceStatusRequest::GetExecutionGroupName() const
{
    return m_executionGroupName;
}

void DescribeSchedulerInstanceStatusRequest::SetExecutionGroupName(const string& _executionGroupName)
{
    m_executionGroupName = _executionGroupName;
    m_executionGroupNameHasBeenSet = true;
}

bool DescribeSchedulerInstanceStatusRequest::ExecutionGroupNameHasBeenSet() const
{
    return m_executionGroupNameHasBeenSet;
}


