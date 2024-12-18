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

#include <tencentcloud/wedata/v20210820/model/DescribeDsParentFolderTreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDsParentFolderTreeRequest::DescribeDsParentFolderTreeRequest() :
    m_projectIdHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_displayTypeHasBeenSet(false),
    m_newFolderTreeModeHasBeenSet(false)
{
}

string DescribeDsParentFolderTreeRequest::ToJsonString() const
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

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayType.c_str(), allocator).Move(), allocator);
    }

    if (m_newFolderTreeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFolderTreeMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newFolderTreeMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDsParentFolderTreeRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDsParentFolderTreeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDsParentFolderTreeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeDsParentFolderTreeRequest::GetFolderId() const
{
    return m_folderId;
}

void DescribeDsParentFolderTreeRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool DescribeDsParentFolderTreeRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string DescribeDsParentFolderTreeRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeDsParentFolderTreeRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeDsParentFolderTreeRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DescribeDsParentFolderTreeRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeDsParentFolderTreeRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeDsParentFolderTreeRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeDsParentFolderTreeRequest::GetDisplayType() const
{
    return m_displayType;
}

void DescribeDsParentFolderTreeRequest::SetDisplayType(const string& _displayType)
{
    m_displayType = _displayType;
    m_displayTypeHasBeenSet = true;
}

bool DescribeDsParentFolderTreeRequest::DisplayTypeHasBeenSet() const
{
    return m_displayTypeHasBeenSet;
}

bool DescribeDsParentFolderTreeRequest::GetNewFolderTreeMode() const
{
    return m_newFolderTreeMode;
}

void DescribeDsParentFolderTreeRequest::SetNewFolderTreeMode(const bool& _newFolderTreeMode)
{
    m_newFolderTreeMode = _newFolderTreeMode;
    m_newFolderTreeModeHasBeenSet = true;
}

bool DescribeDsParentFolderTreeRequest::NewFolderTreeModeHasBeenSet() const
{
    return m_newFolderTreeModeHasBeenSet;
}


