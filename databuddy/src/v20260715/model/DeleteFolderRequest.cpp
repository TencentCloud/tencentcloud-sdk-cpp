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

#include <tencentcloud/databuddy/v20260715/model/DeleteFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DeleteFolderRequest::DeleteFolderRequest() :
    m_workspaceIdHasBeenSet(false),
    m_folderHasBeenSet(false),
    m_forceDeleteHasBeenSet(false)
{
}

string DeleteFolderRequest::ToJsonString() const
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

    if (m_forceDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceDelete, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteFolderRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DeleteFolderRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DeleteFolderRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

FolderLocator DeleteFolderRequest::GetFolder() const
{
    return m_folder;
}

void DeleteFolderRequest::SetFolder(const FolderLocator& _folder)
{
    m_folder = _folder;
    m_folderHasBeenSet = true;
}

bool DeleteFolderRequest::FolderHasBeenSet() const
{
    return m_folderHasBeenSet;
}

bool DeleteFolderRequest::GetForceDelete() const
{
    return m_forceDelete;
}

void DeleteFolderRequest::SetForceDelete(const bool& _forceDelete)
{
    m_forceDelete = _forceDelete;
    m_forceDeleteHasBeenSet = true;
}

bool DeleteFolderRequest::ForceDeleteHasBeenSet() const
{
    return m_forceDeleteHasBeenSet;
}


