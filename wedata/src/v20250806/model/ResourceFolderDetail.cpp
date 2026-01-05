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

#include <tencentcloud/wedata/v20250806/model/ResourceFolderDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ResourceFolderDetail::ResourceFolderDetail() :
    m_folderIdHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_createUserNameHasBeenSet(false),
    m_folderPathHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

CoreInternalOutcome ResourceFolderDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUserName") && !value["CreateUserName"].IsNull())
    {
        if (!value["CreateUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.CreateUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserName = string(value["CreateUserName"].GetString());
        m_createUserNameHasBeenSet = true;
    }

    if (value.HasMember("FolderPath") && !value["FolderPath"].IsNull())
    {
        if (!value["FolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.FolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderPath = string(value["FolderPath"].GetString());
        m_folderPathHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("ParentFolderPath") && !value["ParentFolderPath"].IsNull())
    {
        if (!value["ParentFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.ParentFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentFolderPath = string(value["ParentFolderPath"].GetString());
        m_parentFolderPathHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFolderDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceFolderDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

}


string ResourceFolderDetail::GetFolderId() const
{
    return m_folderId;
}

void ResourceFolderDetail::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool ResourceFolderDetail::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string ResourceFolderDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ResourceFolderDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ResourceFolderDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string ResourceFolderDetail::GetCreateUserName() const
{
    return m_createUserName;
}

void ResourceFolderDetail::SetCreateUserName(const string& _createUserName)
{
    m_createUserName = _createUserName;
    m_createUserNameHasBeenSet = true;
}

bool ResourceFolderDetail::CreateUserNameHasBeenSet() const
{
    return m_createUserNameHasBeenSet;
}

string ResourceFolderDetail::GetFolderPath() const
{
    return m_folderPath;
}

void ResourceFolderDetail::SetFolderPath(const string& _folderPath)
{
    m_folderPath = _folderPath;
    m_folderPathHasBeenSet = true;
}

bool ResourceFolderDetail::FolderPathHasBeenSet() const
{
    return m_folderPathHasBeenSet;
}

string ResourceFolderDetail::GetFolderName() const
{
    return m_folderName;
}

void ResourceFolderDetail::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool ResourceFolderDetail::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string ResourceFolderDetail::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void ResourceFolderDetail::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool ResourceFolderDetail::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string ResourceFolderDetail::GetProjectId() const
{
    return m_projectId;
}

void ResourceFolderDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ResourceFolderDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

