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

#include <tencentcloud/wedata/v20250806/model/WorkflowFolder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowFolder::WorkflowFolder() :
    m_projectIdHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderPathHasBeenSet(false),
    m_createUserUinHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowFolder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolder.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolder.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderPath") && !value["FolderPath"].IsNull())
    {
        if (!value["FolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolder.FolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderPath = string(value["FolderPath"].GetString());
        m_folderPathHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowFolder.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowFolder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string WorkflowFolder::GetProjectId() const
{
    return m_projectId;
}

void WorkflowFolder::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WorkflowFolder::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WorkflowFolder::GetFolderId() const
{
    return m_folderId;
}

void WorkflowFolder::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool WorkflowFolder::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string WorkflowFolder::GetFolderPath() const
{
    return m_folderPath;
}

void WorkflowFolder::SetFolderPath(const string& _folderPath)
{
    m_folderPath = _folderPath;
    m_folderPathHasBeenSet = true;
}

bool WorkflowFolder::FolderPathHasBeenSet() const
{
    return m_folderPathHasBeenSet;
}

string WorkflowFolder::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowFolder::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowFolder::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

