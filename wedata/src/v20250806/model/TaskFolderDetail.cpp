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

#include <tencentcloud/wedata/v20250806/model/TaskFolderDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskFolderDetail::TaskFolderDetail() :
    m_projectIdHasBeenSet(false),
    m_taskFolderIdHasBeenSet(false),
    m_taskFolderPathHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_parentTaskFolderPathHasBeenSet(false),
    m_taskFolderNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskFolderTypeHasBeenSet(false)
{
}

CoreInternalOutcome TaskFolderDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderId") && !value["TaskFolderId"].IsNull())
    {
        if (!value["TaskFolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.TaskFolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderId = string(value["TaskFolderId"].GetString());
        m_taskFolderIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderPath") && !value["TaskFolderPath"].IsNull())
    {
        if (!value["TaskFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.TaskFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderPath = string(value["TaskFolderPath"].GetString());
        m_taskFolderPathHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("ParentTaskFolderPath") && !value["ParentTaskFolderPath"].IsNull())
    {
        if (!value["ParentTaskFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.ParentTaskFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentTaskFolderPath = string(value["ParentTaskFolderPath"].GetString());
        m_parentTaskFolderPathHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderName") && !value["TaskFolderName"].IsNull())
    {
        if (!value["TaskFolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.TaskFolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderName = string(value["TaskFolderName"].GetString());
        m_taskFolderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFolderType") && !value["TaskFolderType"].IsNull())
    {
        if (!value["TaskFolderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskFolderDetail.TaskFolderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskFolderType = string(value["TaskFolderType"].GetString());
        m_taskFolderTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskFolderDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_parentTaskFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentTaskFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentTaskFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFolderName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFolderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskFolderType.c_str(), allocator).Move(), allocator);
    }

}


string TaskFolderDetail::GetProjectId() const
{
    return m_projectId;
}

void TaskFolderDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskFolderDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskFolderDetail::GetTaskFolderId() const
{
    return m_taskFolderId;
}

void TaskFolderDetail::SetTaskFolderId(const string& _taskFolderId)
{
    m_taskFolderId = _taskFolderId;
    m_taskFolderIdHasBeenSet = true;
}

bool TaskFolderDetail::TaskFolderIdHasBeenSet() const
{
    return m_taskFolderIdHasBeenSet;
}

string TaskFolderDetail::GetTaskFolderPath() const
{
    return m_taskFolderPath;
}

void TaskFolderDetail::SetTaskFolderPath(const string& _taskFolderPath)
{
    m_taskFolderPath = _taskFolderPath;
    m_taskFolderPathHasBeenSet = true;
}

bool TaskFolderDetail::TaskFolderPathHasBeenSet() const
{
    return m_taskFolderPathHasBeenSet;
}

string TaskFolderDetail::GetCreateUserUin() const
{
    return m_createUserUin;
}

void TaskFolderDetail::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool TaskFolderDetail::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string TaskFolderDetail::GetParentTaskFolderPath() const
{
    return m_parentTaskFolderPath;
}

void TaskFolderDetail::SetParentTaskFolderPath(const string& _parentTaskFolderPath)
{
    m_parentTaskFolderPath = _parentTaskFolderPath;
    m_parentTaskFolderPathHasBeenSet = true;
}

bool TaskFolderDetail::ParentTaskFolderPathHasBeenSet() const
{
    return m_parentTaskFolderPathHasBeenSet;
}

string TaskFolderDetail::GetTaskFolderName() const
{
    return m_taskFolderName;
}

void TaskFolderDetail::SetTaskFolderName(const string& _taskFolderName)
{
    m_taskFolderName = _taskFolderName;
    m_taskFolderNameHasBeenSet = true;
}

bool TaskFolderDetail::TaskFolderNameHasBeenSet() const
{
    return m_taskFolderNameHasBeenSet;
}

string TaskFolderDetail::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskFolderDetail::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskFolderDetail::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskFolderDetail::GetTaskFolderType() const
{
    return m_taskFolderType;
}

void TaskFolderDetail::SetTaskFolderType(const string& _taskFolderType)
{
    m_taskFolderType = _taskFolderType;
    m_taskFolderTypeHasBeenSet = true;
}

bool TaskFolderDetail::TaskFolderTypeHasBeenSet() const
{
    return m_taskFolderTypeHasBeenSet;
}

