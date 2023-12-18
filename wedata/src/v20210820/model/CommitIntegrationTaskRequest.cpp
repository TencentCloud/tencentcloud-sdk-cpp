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

#include <tencentcloud/wedata/v20210820/model/CommitIntegrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CommitIntegrationTaskRequest::CommitIntegrationTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_commitTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_extConfigHasBeenSet(false),
    m_versionDescHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_eventDescHasBeenSet(false)
{
}

string CommitIntegrationTaskRequest::ToJsonString() const
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

    if (m_commitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommitType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_commitType, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_extConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extConfig.begin(); itr != m_extConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_versionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceVersion, allocator);
    }

    if (m_eventDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CommitIntegrationTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void CommitIntegrationTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CommitIntegrationTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CommitIntegrationTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CommitIntegrationTaskRequest::GetCommitType() const
{
    return m_commitType;
}

void CommitIntegrationTaskRequest::SetCommitType(const int64_t& _commitType)
{
    m_commitType = _commitType;
    m_commitTypeHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::CommitTypeHasBeenSet() const
{
    return m_commitTypeHasBeenSet;
}

uint64_t CommitIntegrationTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CommitIntegrationTaskRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<RecordField> CommitIntegrationTaskRequest::GetExtConfig() const
{
    return m_extConfig;
}

void CommitIntegrationTaskRequest::SetExtConfig(const vector<RecordField>& _extConfig)
{
    m_extConfig = _extConfig;
    m_extConfigHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::ExtConfigHasBeenSet() const
{
    return m_extConfigHasBeenSet;
}

string CommitIntegrationTaskRequest::GetVersionDesc() const
{
    return m_versionDesc;
}

void CommitIntegrationTaskRequest::SetVersionDesc(const string& _versionDesc)
{
    m_versionDesc = _versionDesc;
    m_versionDescHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::VersionDescHasBeenSet() const
{
    return m_versionDescHasBeenSet;
}

int64_t CommitIntegrationTaskRequest::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void CommitIntegrationTaskRequest::SetInstanceVersion(const int64_t& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string CommitIntegrationTaskRequest::GetEventDesc() const
{
    return m_eventDesc;
}

void CommitIntegrationTaskRequest::SetEventDesc(const string& _eventDesc)
{
    m_eventDesc = _eventDesc;
    m_eventDescHasBeenSet = true;
}

bool CommitIntegrationTaskRequest::EventDescHasBeenSet() const
{
    return m_eventDescHasBeenSet;
}


