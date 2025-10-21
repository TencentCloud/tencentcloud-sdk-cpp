/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/CreateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTaskRequest::CreateTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_taskBaseAttributeHasBeenSet(false),
    m_taskConfigurationHasBeenSet(false),
    m_taskSchedulerConfigurationHasBeenSet(false)
{
}

string CreateTaskRequest::ToJsonString() const
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

    if (m_taskBaseAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskBaseAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskBaseAttribute.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskSchedulerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSchedulerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskSchedulerConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

CreateTaskBaseAttribute CreateTaskRequest::GetTaskBaseAttribute() const
{
    return m_taskBaseAttribute;
}

void CreateTaskRequest::SetTaskBaseAttribute(const CreateTaskBaseAttribute& _taskBaseAttribute)
{
    m_taskBaseAttribute = _taskBaseAttribute;
    m_taskBaseAttributeHasBeenSet = true;
}

bool CreateTaskRequest::TaskBaseAttributeHasBeenSet() const
{
    return m_taskBaseAttributeHasBeenSet;
}

CreateTaskConfiguration CreateTaskRequest::GetTaskConfiguration() const
{
    return m_taskConfiguration;
}

void CreateTaskRequest::SetTaskConfiguration(const CreateTaskConfiguration& _taskConfiguration)
{
    m_taskConfiguration = _taskConfiguration;
    m_taskConfigurationHasBeenSet = true;
}

bool CreateTaskRequest::TaskConfigurationHasBeenSet() const
{
    return m_taskConfigurationHasBeenSet;
}

CreateTaskSchedulerConfiguration CreateTaskRequest::GetTaskSchedulerConfiguration() const
{
    return m_taskSchedulerConfiguration;
}

void CreateTaskRequest::SetTaskSchedulerConfiguration(const CreateTaskSchedulerConfiguration& _taskSchedulerConfiguration)
{
    m_taskSchedulerConfiguration = _taskSchedulerConfiguration;
    m_taskSchedulerConfigurationHasBeenSet = true;
}

bool CreateTaskRequest::TaskSchedulerConfigurationHasBeenSet() const
{
    return m_taskSchedulerConfigurationHasBeenSet;
}


