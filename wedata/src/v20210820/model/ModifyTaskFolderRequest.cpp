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

#include <tencentcloud/wedata/v20210820/model/ModifyTaskFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyTaskFolderRequest::ModifyTaskFolderRequest() :
    m_projectIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false)
{
}

string ModifyTaskFolderRequest::ToJsonString() const
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

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTaskFolderRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyTaskFolderRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyTaskFolderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyTaskFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void ModifyTaskFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool ModifyTaskFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string ModifyTaskFolderRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ModifyTaskFolderRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ModifyTaskFolderRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ModifyTaskFolderRequest::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void ModifyTaskFolderRequest::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool ModifyTaskFolderRequest::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}

string ModifyTaskFolderRequest::GetParentFolderId() const
{
    return m_parentFolderId;
}

void ModifyTaskFolderRequest::SetParentFolderId(const string& _parentFolderId)
{
    m_parentFolderId = _parentFolderId;
    m_parentFolderIdHasBeenSet = true;
}

bool ModifyTaskFolderRequest::ParentFolderIdHasBeenSet() const
{
    return m_parentFolderIdHasBeenSet;
}


