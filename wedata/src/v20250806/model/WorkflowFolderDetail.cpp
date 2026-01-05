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

#include <tencentcloud/wedata/v20250806/model/WorkflowFolderDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowFolderDetail::WorkflowFolderDetail() :
    m_projectIdHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderPathHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_folderNameHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowFolderDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolderDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolderDetail.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderPath") && !value["FolderPath"].IsNull())
    {
        if (!value["FolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolderDetail.FolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderPath = string(value["FolderPath"].GetString());
        m_folderPathHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolderDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("ParentFolderPath") && !value["ParentFolderPath"].IsNull())
    {
        if (!value["ParentFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolderDetail.ParentFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentFolderPath = string(value["ParentFolderPath"].GetString());
        m_parentFolderPathHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolderDetail.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowFolderDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowFolderDetail::GetProjectId() const
{
    return m_projectId;
}

void WorkflowFolderDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WorkflowFolderDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WorkflowFolderDetail::GetFolderId() const
{
    return m_folderId;
}

void WorkflowFolderDetail::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool WorkflowFolderDetail::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string WorkflowFolderDetail::GetFolderPath() const
{
    return m_folderPath;
}

void WorkflowFolderDetail::SetFolderPath(const string& _folderPath)
{
    m_folderPath = _folderPath;
    m_folderPathHasBeenSet = true;
}

bool WorkflowFolderDetail::FolderPathHasBeenSet() const
{
    return m_folderPathHasBeenSet;
}

string WorkflowFolderDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowFolderDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowFolderDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string WorkflowFolderDetail::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void WorkflowFolderDetail::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool WorkflowFolderDetail::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string WorkflowFolderDetail::GetFolderName() const
{
    return m_folderName;
}

void WorkflowFolderDetail::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool WorkflowFolderDetail::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

