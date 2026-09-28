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

#include <tencentcloud/databuddy/v20260715/model/CreateFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateFolderRequest::CreateFolderRequest() :
    m_workspaceIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderTypeHasBeenSet(false),
    m_parentFolderHasBeenSet(false),
    m_gitConfigHasBeenSet(false)
{
}

string CreateFolderRequest::ToJsonString() const
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

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderType.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentFolder.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_gitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFolderRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateFolderRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateFolderRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void CreateFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool CreateFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string CreateFolderRequest::GetFolderType() const
{
    return m_folderType;
}

void CreateFolderRequest::SetFolderType(const string& _folderType)
{
    m_folderType = _folderType;
    m_folderTypeHasBeenSet = true;
}

bool CreateFolderRequest::FolderTypeHasBeenSet() const
{
    return m_folderTypeHasBeenSet;
}

FolderLocator CreateFolderRequest::GetParentFolder() const
{
    return m_parentFolder;
}

void CreateFolderRequest::SetParentFolder(const FolderLocator& _parentFolder)
{
    m_parentFolder = _parentFolder;
    m_parentFolderHasBeenSet = true;
}

bool CreateFolderRequest::ParentFolderHasBeenSet() const
{
    return m_parentFolderHasBeenSet;
}

GitRepoConfig CreateFolderRequest::GetGitConfig() const
{
    return m_gitConfig;
}

void CreateFolderRequest::SetGitConfig(const GitRepoConfig& _gitConfig)
{
    m_gitConfig = _gitConfig;
    m_gitConfigHasBeenSet = true;
}

bool CreateFolderRequest::GitConfigHasBeenSet() const
{
    return m_gitConfigHasBeenSet;
}


