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

#include <tencentcloud/wedata/v20210820/model/CheckIntegrationTaskNameExistsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CheckIntegrationTaskNameExistsRequest::CheckIntegrationTaskNameExistsRequest() :
    m_taskNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_syncTypeHasBeenSet(false)
{
}

string CheckIntegrationTaskNameExistsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_syncTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckIntegrationTaskNameExistsRequest::GetTaskName() const
{
    return m_taskName;
}

void CheckIntegrationTaskNameExistsRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CheckIntegrationTaskNameExistsRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CheckIntegrationTaskNameExistsRequest::GetProjectId() const
{
    return m_projectId;
}

void CheckIntegrationTaskNameExistsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CheckIntegrationTaskNameExistsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CheckIntegrationTaskNameExistsRequest::GetTaskId() const
{
    return m_taskId;
}

void CheckIntegrationTaskNameExistsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CheckIntegrationTaskNameExistsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t CheckIntegrationTaskNameExistsRequest::GetSyncType() const
{
    return m_syncType;
}

void CheckIntegrationTaskNameExistsRequest::SetSyncType(const int64_t& _syncType)
{
    m_syncType = _syncType;
    m_syncTypeHasBeenSet = true;
}

bool CheckIntegrationTaskNameExistsRequest::SyncTypeHasBeenSet() const
{
    return m_syncTypeHasBeenSet;
}


