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

#include <tencentcloud/wedata/v20250806/model/TriggerTaskBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerTaskBrief::TriggerTaskBrief() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_userUinInChargeHasBeenSet(false),
    m_userNameInChargeHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_executionStateHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome TriggerTaskBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("UserUinInCharge") && !value["UserUinInCharge"].IsNull())
    {
        if (!value["UserUinInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.UserUinInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUinInCharge = string(value["UserUinInCharge"].GetString());
        m_userUinInChargeHasBeenSet = true;
    }

    if (value.HasMember("UserNameInCharge") && !value["UserNameInCharge"].IsNull())
    {
        if (!value["UserNameInCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.UserNameInCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userNameInCharge = string(value["UserNameInCharge"].GetString());
        m_userNameInChargeHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutionState") && !value["ExecutionState"].IsNull())
    {
        if (!value["ExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.ExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionState = string(value["ExecutionState"].GetString());
        m_executionStateHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTaskBrief.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerTaskBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinInChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUinInCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUinInCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameInChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameInCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userNameInCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_executionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionState.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

}


string TriggerTaskBrief::GetProjectId() const
{
    return m_projectId;
}

void TriggerTaskBrief::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TriggerTaskBrief::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TriggerTaskBrief::GetProjectName() const
{
    return m_projectName;
}

void TriggerTaskBrief::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TriggerTaskBrief::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TriggerTaskBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void TriggerTaskBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TriggerTaskBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TriggerTaskBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void TriggerTaskBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TriggerTaskBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TriggerTaskBrief::GetTaskId() const
{
    return m_taskId;
}

void TriggerTaskBrief::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TriggerTaskBrief::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TriggerTaskBrief::GetTaskName() const
{
    return m_taskName;
}

void TriggerTaskBrief::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TriggerTaskBrief::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TriggerTaskBrief::GetTaskType() const
{
    return m_taskType;
}

void TriggerTaskBrief::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TriggerTaskBrief::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TriggerTaskBrief::GetUserUinInCharge() const
{
    return m_userUinInCharge;
}

void TriggerTaskBrief::SetUserUinInCharge(const string& _userUinInCharge)
{
    m_userUinInCharge = _userUinInCharge;
    m_userUinInChargeHasBeenSet = true;
}

bool TriggerTaskBrief::UserUinInChargeHasBeenSet() const
{
    return m_userUinInChargeHasBeenSet;
}

string TriggerTaskBrief::GetUserNameInCharge() const
{
    return m_userNameInCharge;
}

void TriggerTaskBrief::SetUserNameInCharge(const string& _userNameInCharge)
{
    m_userNameInCharge = _userNameInCharge;
    m_userNameInChargeHasBeenSet = true;
}

bool TriggerTaskBrief::UserNameInChargeHasBeenSet() const
{
    return m_userNameInChargeHasBeenSet;
}

string TriggerTaskBrief::GetFolderId() const
{
    return m_folderId;
}

void TriggerTaskBrief::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TriggerTaskBrief::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TriggerTaskBrief::GetFolderName() const
{
    return m_folderName;
}

void TriggerTaskBrief::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TriggerTaskBrief::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

uint64_t TriggerTaskBrief::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TriggerTaskBrief::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TriggerTaskBrief::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TriggerTaskBrief::GetExecutionState() const
{
    return m_executionState;
}

void TriggerTaskBrief::SetExecutionState(const string& _executionState)
{
    m_executionState = _executionState;
    m_executionStateHasBeenSet = true;
}

bool TriggerTaskBrief::ExecutionStateHasBeenSet() const
{
    return m_executionStateHasBeenSet;
}

string TriggerTaskBrief::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TriggerTaskBrief::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TriggerTaskBrief::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

