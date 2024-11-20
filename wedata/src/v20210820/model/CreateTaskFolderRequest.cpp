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

#include <tencentcloud/wedata/v20210820/model/CreateTaskFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateTaskFolderRequest::CreateTaskFolderRequest() :
    m_projectIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_parentFolderIdHasBeenSet(false),
    m_taskNodeTypeHasBeenSet(false)
{
}

string CreateTaskFolderRequest::ToJsonString() const
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

    if (m_parentFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskNodeType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTaskFolderRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTaskFolderRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTaskFolderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateTaskFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void CreateTaskFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool CreateTaskFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string CreateTaskFolderRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void CreateTaskFolderRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CreateTaskFolderRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string CreateTaskFolderRequest::GetParentFolderId() const
{
    return m_parentFolderId;
}

void CreateTaskFolderRequest::SetParentFolderId(const string& _parentFolderId)
{
    m_parentFolderId = _parentFolderId;
    m_parentFolderIdHasBeenSet = true;
}

bool CreateTaskFolderRequest::ParentFolderIdHasBeenSet() const
{
    return m_parentFolderIdHasBeenSet;
}

string CreateTaskFolderRequest::GetTaskNodeType() const
{
    return m_taskNodeType;
}

void CreateTaskFolderRequest::SetTaskNodeType(const string& _taskNodeType)
{
    m_taskNodeType = _taskNodeType;
    m_taskNodeTypeHasBeenSet = true;
}

bool CreateTaskFolderRequest::TaskNodeTypeHasBeenSet() const
{
    return m_taskNodeTypeHasBeenSet;
}


