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

#include <tencentcloud/databuddy/v20260715/model/UpdateFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateFolderRequest::UpdateFolderRequest() :
    m_workspaceIdHasBeenSet(false),
    m_folderHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_targetParentHasBeenSet(false)
{
}

string UpdateFolderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Folder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_folder.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetParentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetParent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetParent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFolderRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateFolderRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateFolderRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

FolderLocator UpdateFolderRequest::GetFolder() const
{
    return m_folder;
}

void UpdateFolderRequest::SetFolder(const FolderLocator& _folder)
{
    m_folder = _folder;
    m_folderHasBeenSet = true;
}

bool UpdateFolderRequest::FolderHasBeenSet() const
{
    return m_folderHasBeenSet;
}

string UpdateFolderRequest::GetOperationType() const
{
    return m_operationType;
}

void UpdateFolderRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool UpdateFolderRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string UpdateFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void UpdateFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool UpdateFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

FolderLocator UpdateFolderRequest::GetTargetParent() const
{
    return m_targetParent;
}

void UpdateFolderRequest::SetTargetParent(const FolderLocator& _targetParent)
{
    m_targetParent = _targetParent;
    m_targetParentHasBeenSet = true;
}

bool UpdateFolderRequest::TargetParentHasBeenSet() const
{
    return m_targetParentHasBeenSet;
}


