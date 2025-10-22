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

#include <tencentcloud/wedata/v20250806/model/CreateSQLFolderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateSQLFolderRequest::CreateSQLFolderRequest() :
    m_folderNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

string CreateSQLFolderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessScope.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSQLFolderRequest::GetFolderName() const
{
    return m_folderName;
}

void CreateSQLFolderRequest::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool CreateSQLFolderRequest::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string CreateSQLFolderRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateSQLFolderRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateSQLFolderRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateSQLFolderRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void CreateSQLFolderRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool CreateSQLFolderRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string CreateSQLFolderRequest::GetAccessScope() const
{
    return m_accessScope;
}

void CreateSQLFolderRequest::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool CreateSQLFolderRequest::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}


