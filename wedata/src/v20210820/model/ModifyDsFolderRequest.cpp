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

#include <tencentcloud/wedata/v20210820/model/ModifyDsFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyDsFolderRequest::ModifyDsFolderRequest() :
    m_projectIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_parentsFolderIdHasBeenSet(false)
{
}

string ModifyDsFolderRequest::ToJsonString() const
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

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentsFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentsFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentsFolderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDsFolderRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyDsFolderRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyDsFolderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyDsFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void ModifyDsFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool ModifyDsFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string ModifyDsFolderRequest::GetFolderId() const
{
    return m_folderId;
}

void ModifyDsFolderRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool ModifyDsFolderRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string ModifyDsFolderRequest::GetParentsFolderId() const
{
    return m_parentsFolderId;
}

void ModifyDsFolderRequest::SetParentsFolderId(const string& _parentsFolderId)
{
    m_parentsFolderId = _parentsFolderId;
    m_parentsFolderIdHasBeenSet = true;
}

bool ModifyDsFolderRequest::ParentsFolderIdHasBeenSet() const
{
    return m_parentsFolderIdHasBeenSet;
}


