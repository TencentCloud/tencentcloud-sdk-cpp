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

#include <tencentcloud/wedata/v20250806/model/TaskBaseAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskBaseAttribute::TaskBaseAttribute() :
    m_taskIdHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskLatestVersionNoHasBeenSet(false),
    m_taskLatestSubmitVersionNoHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_lastUpdateUserNameHasBeenSet(false),
    m_lastOpsTimeHasBeenSet(false),
    m_lastOpsUserNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_updateUserUinHasBeenSet(false),
    m_createUserUinHasBeenSet(false)
{
}

CoreInternalOutcome TaskBaseAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskLatestVersionNo") && !value["TaskLatestVersionNo"].IsNull())
    {
        if (!value["TaskLatestVersionNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.TaskLatestVersionNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLatestVersionNo = string(value["TaskLatestVersionNo"].GetString());
        m_taskLatestVersionNoHasBeenSet = true;
    }

    if (value.HasMember("TaskLatestSubmitVersionNo") && !value["TaskLatestSubmitVersionNo"].IsNull())
    {
        if (!value["TaskLatestSubmitVersionNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.TaskLatestSubmitVersionNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLatestSubmitVersionNo = string(value["TaskLatestSubmitVersionNo"].GetString());
        m_taskLatestSubmitVersionNoHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateUserName") && !value["LastUpdateUserName"].IsNull())
    {
        if (!value["LastUpdateUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.LastUpdateUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateUserName = string(value["LastUpdateUserName"].GetString());
        m_lastUpdateUserNameHasBeenSet = true;
    }

    if (value.HasMember("LastOpsTime") && !value["LastOpsTime"].IsNull())
    {
        if (!value["LastOpsTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.LastOpsTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOpsTime = string(value["LastOpsTime"].GetString());
        m_lastOpsTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOpsUserName") && !value["LastOpsUserName"].IsNull())
    {
        if (!value["LastOpsUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.LastOpsUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOpsUserName = string(value["LastOpsUserName"].GetString());
        m_lastOpsUserNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserUin") && !value["UpdateUserUin"].IsNull())
    {
        if (!value["UpdateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.UpdateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserUin = string(value["UpdateUserUin"].GetString());
        m_updateUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskBaseAttribute.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskBaseAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLatestVersionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLatestVersionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLatestVersionNo.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLatestSubmitVersionNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLatestSubmitVersionNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLatestSubmitVersionNo.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submit, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOpsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOpsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOpsTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOpsUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOpsUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOpsUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

}


string TaskBaseAttribute::GetTaskId() const
{
    return m_taskId;
}

void TaskBaseAttribute::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskBaseAttribute::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t TaskBaseAttribute::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskBaseAttribute::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskBaseAttribute::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TaskBaseAttribute::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskBaseAttribute::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskBaseAttribute::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskBaseAttribute::GetTaskName() const
{
    return m_taskName;
}

void TaskBaseAttribute::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskBaseAttribute::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskBaseAttribute::GetTaskLatestVersionNo() const
{
    return m_taskLatestVersionNo;
}

void TaskBaseAttribute::SetTaskLatestVersionNo(const string& _taskLatestVersionNo)
{
    m_taskLatestVersionNo = _taskLatestVersionNo;
    m_taskLatestVersionNoHasBeenSet = true;
}

bool TaskBaseAttribute::TaskLatestVersionNoHasBeenSet() const
{
    return m_taskLatestVersionNoHasBeenSet;
}

string TaskBaseAttribute::GetTaskLatestSubmitVersionNo() const
{
    return m_taskLatestSubmitVersionNo;
}

void TaskBaseAttribute::SetTaskLatestSubmitVersionNo(const string& _taskLatestSubmitVersionNo)
{
    m_taskLatestSubmitVersionNo = _taskLatestSubmitVersionNo;
    m_taskLatestSubmitVersionNoHasBeenSet = true;
}

bool TaskBaseAttribute::TaskLatestSubmitVersionNoHasBeenSet() const
{
    return m_taskLatestSubmitVersionNoHasBeenSet;
}

string TaskBaseAttribute::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskBaseAttribute::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskBaseAttribute::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskBaseAttribute::GetStatus() const
{
    return m_status;
}

void TaskBaseAttribute::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskBaseAttribute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool TaskBaseAttribute::GetSubmit() const
{
    return m_submit;
}

void TaskBaseAttribute::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool TaskBaseAttribute::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string TaskBaseAttribute::GetCreateTime() const
{
    return m_createTime;
}

void TaskBaseAttribute::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskBaseAttribute::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskBaseAttribute::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void TaskBaseAttribute::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool TaskBaseAttribute::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string TaskBaseAttribute::GetLastUpdateUserName() const
{
    return m_lastUpdateUserName;
}

void TaskBaseAttribute::SetLastUpdateUserName(const string& _lastUpdateUserName)
{
    m_lastUpdateUserName = _lastUpdateUserName;
    m_lastUpdateUserNameHasBeenSet = true;
}

bool TaskBaseAttribute::LastUpdateUserNameHasBeenSet() const
{
    return m_lastUpdateUserNameHasBeenSet;
}

string TaskBaseAttribute::GetLastOpsTime() const
{
    return m_lastOpsTime;
}

void TaskBaseAttribute::SetLastOpsTime(const string& _lastOpsTime)
{
    m_lastOpsTime = _lastOpsTime;
    m_lastOpsTimeHasBeenSet = true;
}

bool TaskBaseAttribute::LastOpsTimeHasBeenSet() const
{
    return m_lastOpsTimeHasBeenSet;
}

string TaskBaseAttribute::GetLastOpsUserName() const
{
    return m_lastOpsUserName;
}

void TaskBaseAttribute::SetLastOpsUserName(const string& _lastOpsUserName)
{
    m_lastOpsUserName = _lastOpsUserName;
    m_lastOpsUserNameHasBeenSet = true;
}

bool TaskBaseAttribute::LastOpsUserNameHasBeenSet() const
{
    return m_lastOpsUserNameHasBeenSet;
}

string TaskBaseAttribute::GetOwnerUin() const
{
    return m_ownerUin;
}

void TaskBaseAttribute::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool TaskBaseAttribute::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string TaskBaseAttribute::GetTaskDescription() const
{
    return m_taskDescription;
}

void TaskBaseAttribute::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool TaskBaseAttribute::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string TaskBaseAttribute::GetUpdateUserUin() const
{
    return m_updateUserUin;
}

void TaskBaseAttribute::SetUpdateUserUin(const string& _updateUserUin)
{
    m_updateUserUin = _updateUserUin;
    m_updateUserUinHasBeenSet = true;
}

bool TaskBaseAttribute::UpdateUserUinHasBeenSet() const
{
    return m_updateUserUinHasBeenSet;
}

string TaskBaseAttribute::GetCreateUserUin() const
{
    return m_createUserUin;
}

void TaskBaseAttribute::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool TaskBaseAttribute::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

