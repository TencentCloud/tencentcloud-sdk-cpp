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

#include <tencentcloud/wedata/v20250806/model/TaskFolder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskFolder::TaskFolder() :
    m_projectIdHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false),
    m_taskFolderPathHasBeenSet(false),
    m_createUserUinHasBeenSet(false)
{
}

CoreInternalOutcome TaskFolder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolder.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderId") && !value["TaskFolderId"].IsNull())
    {
        if (!value["TaskFolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolder.TaskFolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderId = string(value["TaskFolderId"].GetString());
        m_taskFolderIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderPath") && !value["TaskFolderPath"].IsNull())
    {
        if (!value["TaskFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolder.TaskFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderPath = string(value["TaskFolderPath"].GetString());
        m_taskFolderPathHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolder.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFolder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

}


string TaskFolder::GetProjectId() const
{
    return m_projectId;
}

void TaskFolder::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskFolder::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskFolder::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void TaskFolder::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool TaskFolder::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}

string TaskFolder::GetTaskFolderPath() const
{
    return m_taskFolderPath;
}

void TaskFolder::SetTaskFolderPath(const string& _taskFolderPath)
{
    m_taskFolderPath = _taskFolderPath;
    m_taskFolderPathHasBeenSet = true;
}

bool TaskFolder::TaskFolderPathHasBeenSet() const
{
    return m_taskFolderPathHasBeenSet;
}

string TaskFolder::GetCreateUserUin() const
{
    return m_createUserUin;
}

void TaskFolder::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool TaskFolder::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

