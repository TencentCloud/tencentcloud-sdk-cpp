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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerTaskRequest::CreateTriggerTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_triggerTaskBaseAttributeHasBeenSet(false),
    m_triggerTaskConfigurationHasBeenSet(false),
    m_triggerTaskSchedulerConfigurationHasBeenSet(false)
{
}

string CreateTriggerTaskRequest::ToJsonString() const
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

    if (m_triggerTaskBaseAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskBaseAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerTaskBaseAttribute.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerTaskConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerTaskConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerTaskSchedulerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTaskSchedulerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerTaskSchedulerConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTriggerTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTriggerTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTriggerTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

CreateTriggerTaskBaseAttribute CreateTriggerTaskRequest::GetTriggerTaskBaseAttribute() const
{
    return m_triggerTaskBaseAttribute;
}

void CreateTriggerTaskRequest::SetTriggerTaskBaseAttribute(const CreateTriggerTaskBaseAttribute& _triggerTaskBaseAttribute)
{
    m_triggerTaskBaseAttribute = _triggerTaskBaseAttribute;
    m_triggerTaskBaseAttributeHasBeenSet = true;
}

bool CreateTriggerTaskRequest::TriggerTaskBaseAttributeHasBeenSet() const
{
    return m_triggerTaskBaseAttributeHasBeenSet;
}

CreateTriggerTaskConfiguration CreateTriggerTaskRequest::GetTriggerTaskConfiguration() const
{
    return m_triggerTaskConfiguration;
}

void CreateTriggerTaskRequest::SetTriggerTaskConfiguration(const CreateTriggerTaskConfiguration& _triggerTaskConfiguration)
{
    m_triggerTaskConfiguration = _triggerTaskConfiguration;
    m_triggerTaskConfigurationHasBeenSet = true;
}

bool CreateTriggerTaskRequest::TriggerTaskConfigurationHasBeenSet() const
{
    return m_triggerTaskConfigurationHasBeenSet;
}

CreateTriggerTaskSchedulerConfiguration CreateTriggerTaskRequest::GetTriggerTaskSchedulerConfiguration() const
{
    return m_triggerTaskSchedulerConfiguration;
}

void CreateTriggerTaskRequest::SetTriggerTaskSchedulerConfiguration(const CreateTriggerTaskSchedulerConfiguration& _triggerTaskSchedulerConfiguration)
{
    m_triggerTaskSchedulerConfiguration = _triggerTaskSchedulerConfiguration;
    m_triggerTaskSchedulerConfigurationHasBeenSet = true;
}

bool CreateTriggerTaskRequest::TriggerTaskSchedulerConfigurationHasBeenSet() const
{
    return m_triggerTaskSchedulerConfigurationHasBeenSet;
}


