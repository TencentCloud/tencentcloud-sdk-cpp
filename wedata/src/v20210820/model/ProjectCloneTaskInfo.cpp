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

#include <tencentcloud/wedata/v20210820/model/ProjectCloneTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ProjectCloneTaskInfo::ProjectCloneTaskInfo() :
    m_workflowIdHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskLatestSubmitTimeHasBeenSet(false),
    m_originalResourceGroupHasBeenSet(false),
    m_targetResourceGroupHasBeenSet(false)
{
}

CoreInternalOutcome ProjectCloneTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(value["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskLatestSubmitTime") && !value["TaskLatestSubmitTime"].IsNull())
    {
        if (!value["TaskLatestSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.TaskLatestSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLatestSubmitTime = string(value["TaskLatestSubmitTime"].GetString());
        m_taskLatestSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("OriginalResourceGroup") && !value["OriginalResourceGroup"].IsNull())
    {
        if (!value["OriginalResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.OriginalResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalResourceGroup = string(value["OriginalResourceGroup"].GetString());
        m_originalResourceGroupHasBeenSet = true;
    }

    if (value.HasMember("TargetResourceGroup") && !value["TargetResourceGroup"].IsNull())
    {
        if (!value["TargetResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectCloneTaskInfo.TargetResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetResourceGroup = string(value["TargetResourceGroup"].GetString());
        m_targetResourceGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectCloneTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
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

    if (m_originalResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetResourceGroup.c_str(), allocator).Move(), allocator);
    }

}


string ProjectCloneTaskInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void ProjectCloneTaskInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ProjectCloneTaskInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ProjectCloneTaskInfo::GetOwnerName() const
{
    return m_ownerName;
}

void ProjectCloneTaskInfo::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool ProjectCloneTaskInfo::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string ProjectCloneTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void ProjectCloneTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ProjectCloneTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ProjectCloneTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void ProjectCloneTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ProjectCloneTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ProjectCloneTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void ProjectCloneTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ProjectCloneTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string ProjectCloneTaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void ProjectCloneTaskInfo::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool ProjectCloneTaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string ProjectCloneTaskInfo::GetTaskLatestSubmitTime() const
{
    return m_taskLatestSubmitTime;
}

void ProjectCloneTaskInfo::SetTaskLatestSubmitTime(const string& _taskLatestSubmitTime)
{
    m_taskLatestSubmitTime = _taskLatestSubmitTime;
    m_taskLatestSubmitTimeHasBeenSet = true;
}

bool ProjectCloneTaskInfo::TaskLatestSubmitTimeHasBeenSet() const
{
    return m_taskLatestSubmitTimeHasBeenSet;
}

string ProjectCloneTaskInfo::GetOriginalResourceGroup() const
{
    return m_originalResourceGroup;
}

void ProjectCloneTaskInfo::SetOriginalResourceGroup(const string& _originalResourceGroup)
{
    m_originalResourceGroup = _originalResourceGroup;
    m_originalResourceGroupHasBeenSet = true;
}

bool ProjectCloneTaskInfo::OriginalResourceGroupHasBeenSet() const
{
    return m_originalResourceGroupHasBeenSet;
}

string ProjectCloneTaskInfo::GetTargetResourceGroup() const
{
    return m_targetResourceGroup;
}

void ProjectCloneTaskInfo::SetTargetResourceGroup(const string& _targetResourceGroup)
{
    m_targetResourceGroup = _targetResourceGroup;
    m_targetResourceGroupHasBeenSet = true;
}

bool ProjectCloneTaskInfo::TargetResourceGroupHasBeenSet() const
{
    return m_targetResourceGroupHasBeenSet;
}

