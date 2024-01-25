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

#include <tencentcloud/wedata/v20210820/model/CloneTaskModeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CloneTaskModeInfo::CloneTaskModeInfo() :
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskLatestSubmitTimeHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_realTaskIdHasBeenSet(false),
    m_realProjectIdHasBeenSet(false)
{
}

CoreInternalOutcome CloneTaskModeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskLatestSubmitTime") && !value["TaskLatestSubmitTime"].IsNull())
    {
        if (!value["TaskLatestSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.TaskLatestSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLatestSubmitTime = string(value["TaskLatestSubmitTime"].GetString());
        m_taskLatestSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("VirtualFlag") && !value["VirtualFlag"].IsNull())
    {
        if (!value["VirtualFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.VirtualFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_virtualFlag = value["VirtualFlag"].GetBool();
        m_virtualFlagHasBeenSet = true;
    }

    if (value.HasMember("RealTaskId") && !value["RealTaskId"].IsNull())
    {
        if (!value["RealTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.RealTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTaskId = string(value["RealTaskId"].GetString());
        m_realTaskIdHasBeenSet = true;
    }

    if (value.HasMember("RealProjectId") && !value["RealProjectId"].IsNull())
    {
        if (!value["RealProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneTaskModeInfo.RealProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realProjectId = string(value["RealProjectId"].GetString());
        m_realProjectIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneTaskModeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
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

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLatestSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLatestSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLatestSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualFlag, allocator);
    }

    if (m_realTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_realProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realProjectId.c_str(), allocator).Move(), allocator);
    }

}


string CloneTaskModeInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void CloneTaskModeInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool CloneTaskModeInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string CloneTaskModeInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void CloneTaskModeInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool CloneTaskModeInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string CloneTaskModeInfo::GetOwnerName() const
{
    return m_ownerName;
}

void CloneTaskModeInfo::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool CloneTaskModeInfo::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string CloneTaskModeInfo::GetTaskId() const
{
    return m_taskId;
}

void CloneTaskModeInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CloneTaskModeInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CloneTaskModeInfo::GetTaskName() const
{
    return m_taskName;
}

void CloneTaskModeInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CloneTaskModeInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CloneTaskModeInfo::GetTaskType() const
{
    return m_taskType;
}

void CloneTaskModeInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CloneTaskModeInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CloneTaskModeInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void CloneTaskModeInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool CloneTaskModeInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string CloneTaskModeInfo::GetTaskLatestSubmitTime() const
{
    return m_taskLatestSubmitTime;
}

void CloneTaskModeInfo::SetTaskLatestSubmitTime(const string& _taskLatestSubmitTime)
{
    m_taskLatestSubmitTime = _taskLatestSubmitTime;
    m_taskLatestSubmitTimeHasBeenSet = true;
}

bool CloneTaskModeInfo::TaskLatestSubmitTimeHasBeenSet() const
{
    return m_taskLatestSubmitTimeHasBeenSet;
}

string CloneTaskModeInfo::GetFolderName() const
{
    return m_folderName;
}

void CloneTaskModeInfo::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool CloneTaskModeInfo::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

bool CloneTaskModeInfo::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void CloneTaskModeInfo::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool CloneTaskModeInfo::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

string CloneTaskModeInfo::GetRealTaskId() const
{
    return m_realTaskId;
}

void CloneTaskModeInfo::SetRealTaskId(const string& _realTaskId)
{
    m_realTaskId = _realTaskId;
    m_realTaskIdHasBeenSet = true;
}

bool CloneTaskModeInfo::RealTaskIdHasBeenSet() const
{
    return m_realTaskIdHasBeenSet;
}

string CloneTaskModeInfo::GetRealProjectId() const
{
    return m_realProjectId;
}

void CloneTaskModeInfo::SetRealProjectId(const string& _realProjectId)
{
    m_realProjectId = _realProjectId;
    m_realProjectIdHasBeenSet = true;
}

bool CloneTaskModeInfo::RealProjectIdHasBeenSet() const
{
    return m_realProjectIdHasBeenSet;
}

