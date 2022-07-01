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

#include <tencentcloud/wedata/v20210820/model/TaskInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskInstanceInfo::TaskInstanceInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectIdentHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_taskTypeDescHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_schedulerDateTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectIdent") && !value["ProjectIdent"].IsNull())
    {
        if (!value["ProjectIdent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.ProjectIdent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectIdent = string(value["ProjectIdent"].GetString());
        m_projectIdentHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.TaskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetUint64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeDesc") && !value["TaskTypeDesc"].IsNull())
    {
        if (!value["TaskTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.TaskTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeDesc = string(value["TaskTypeDesc"].GetString());
        m_taskTypeDescHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.TryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetInt64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.Tries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetInt64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDateTime") && !value["SchedulerDateTime"].IsNull())
    {
        if (!value["SchedulerDateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.SchedulerDateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDateTime = string(value["SchedulerDateTime"].GetString());
        m_schedulerDateTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceInfo.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIdent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectIdent.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_taskTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_schedulerDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskInstanceInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskInstanceInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInstanceInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInstanceInfo::GetTaskName() const
{
    return m_taskName;
}

void TaskInstanceInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskInstanceInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskInstanceInfo::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskInstanceInfo::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskInstanceInfo::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskInstanceInfo::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskInstanceInfo::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskInstanceInfo::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskInstanceInfo::GetProjectName() const
{
    return m_projectName;
}

void TaskInstanceInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool TaskInstanceInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string TaskInstanceInfo::GetProjectIdent() const
{
    return m_projectIdent;
}

void TaskInstanceInfo::SetProjectIdent(const string& _projectIdent)
{
    m_projectIdent = _projectIdent;
    m_projectIdentHasBeenSet = true;
}

bool TaskInstanceInfo::ProjectIdentHasBeenSet() const
{
    return m_projectIdentHasBeenSet;
}

int64_t TaskInstanceInfo::GetState() const
{
    return m_state;
}

void TaskInstanceInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskInstanceInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t TaskInstanceInfo::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskInstanceInfo::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskInstanceInfo::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TaskInstanceInfo::GetTaskTypeDesc() const
{
    return m_taskTypeDesc;
}

void TaskInstanceInfo::SetTaskTypeDesc(const string& _taskTypeDesc)
{
    m_taskTypeDesc = _taskTypeDesc;
    m_taskTypeDescHasBeenSet = true;
}

bool TaskInstanceInfo::TaskTypeDescHasBeenSet() const
{
    return m_taskTypeDescHasBeenSet;
}

string TaskInstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void TaskInstanceInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskInstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskInstanceInfo::GetFolderName() const
{
    return m_folderName;
}

void TaskInstanceInfo::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskInstanceInfo::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskInstanceInfo::GetFolderId() const
{
    return m_folderId;
}

void TaskInstanceInfo::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskInstanceInfo::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskInstanceInfo::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void TaskInstanceInfo::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool TaskInstanceInfo::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string TaskInstanceInfo::GetInCharge() const
{
    return m_inCharge;
}

void TaskInstanceInfo::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskInstanceInfo::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string TaskInstanceInfo::GetCycleType() const
{
    return m_cycleType;
}

void TaskInstanceInfo::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskInstanceInfo::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string TaskInstanceInfo::GetStartTime() const
{
    return m_startTime;
}

void TaskInstanceInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskInstanceInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskInstanceInfo::GetEndTime() const
{
    return m_endTime;
}

void TaskInstanceInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInstanceInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t TaskInstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void TaskInstanceInfo::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool TaskInstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t TaskInstanceInfo::GetTryLimit() const
{
    return m_tryLimit;
}

void TaskInstanceInfo::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool TaskInstanceInfo::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

int64_t TaskInstanceInfo::GetTries() const
{
    return m_tries;
}

void TaskInstanceInfo::SetTries(const int64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool TaskInstanceInfo::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

string TaskInstanceInfo::GetSchedulerDateTime() const
{
    return m_schedulerDateTime;
}

void TaskInstanceInfo::SetSchedulerDateTime(const string& _schedulerDateTime)
{
    m_schedulerDateTime = _schedulerDateTime;
    m_schedulerDateTimeHasBeenSet = true;
}

bool TaskInstanceInfo::SchedulerDateTimeHasBeenSet() const
{
    return m_schedulerDateTimeHasBeenSet;
}

string TaskInstanceInfo::GetCostTime() const
{
    return m_costTime;
}

void TaskInstanceInfo::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool TaskInstanceInfo::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

