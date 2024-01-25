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

#include <tencentcloud/wedata/v20210820/model/CreateScriptsImportTasksDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateScriptsImportTasksDsRequest::CreateScriptsImportTasksDsRequest() :
    m_taskHasBeenSet(false),
    m_entityDTOListHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskNameExistModeHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false)
{
}

string CreateScriptsImportTasksDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_task.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_entityDTOListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityDTOList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_entityDTOList.begin(); itr != m_entityDTOList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameExistModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameExistMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskNameExistMode, allocator);
    }

    if (m_taskFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFolderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


TaskDsDTOLite CreateScriptsImportTasksDsRequest::GetTask() const
{
    return m_task;
}

void CreateScriptsImportTasksDsRequest::SetTask(const TaskDsDTOLite& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool CreateScriptsImportTasksDsRequest::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

vector<CustomizeBusinessEntityDTO> CreateScriptsImportTasksDsRequest::GetEntityDTOList() const
{
    return m_entityDTOList;
}

void CreateScriptsImportTasksDsRequest::SetEntityDTOList(const vector<CustomizeBusinessEntityDTO>& _entityDTOList)
{
    m_entityDTOList = _entityDTOList;
    m_entityDTOListHasBeenSet = true;
}

bool CreateScriptsImportTasksDsRequest::EntityDTOListHasBeenSet() const
{
    return m_entityDTOListHasBeenSet;
}

string CreateScriptsImportTasksDsRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateScriptsImportTasksDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateScriptsImportTasksDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateScriptsImportTasksDsRequest::GetTaskNameExistMode() const
{
    return m_taskNameExistMode;
}

void CreateScriptsImportTasksDsRequest::SetTaskNameExistMode(const int64_t& _taskNameExistMode)
{
    m_taskNameExistMode = _taskNameExistMode;
    m_taskNameExistModeHasBeenSet = true;
}

bool CreateScriptsImportTasksDsRequest::TaskNameExistModeHasBeenSet() const
{
    return m_taskNameExistModeHasBeenSet;
}

string CreateScriptsImportTasksDsRequest::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void CreateScriptsImportTasksDsRequest::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool CreateScriptsImportTasksDsRequest::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}


