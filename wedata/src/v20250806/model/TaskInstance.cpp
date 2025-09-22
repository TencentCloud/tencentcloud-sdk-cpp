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

#include <tencentcloud/wedata/v20250806/model/TaskInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskInstance::TaskInstance() :
    m_projectIdHasBeenSet(false),
    m_instanceKeyHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_ownerUinListHasBeenSet(false),
    m_totalRunNumHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_schedulerTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome TaskInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUinList") && !value["OwnerUinList"].IsNull())
    {
        if (!value["OwnerUinList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInstance.OwnerUinList` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerUinList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerUinList.push_back((*itr).GetString());
        }
        m_ownerUinListHasBeenSet = true;
    }

    if (value.HasMember("TotalRunNum") && !value["TotalRunNum"].IsNull())
    {
        if (!value["TotalRunNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.TotalRunNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRunNum = value["TotalRunNum"].GetUint64();
        m_totalRunNumHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeId") && !value["TaskTypeId"].IsNull())
    {
        if (!value["TaskTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.TaskTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeId = value["TaskTypeId"].GetInt64();
        m_taskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.TryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetUint64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.Tries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetUint64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("SchedulerTime") && !value["SchedulerTime"].IsNull())
    {
        if (!value["SchedulerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.SchedulerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerTime = string(value["SchedulerTime"].GetString());
        m_schedulerTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstance.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
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

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_ownerUinListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUinList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUinList.begin(); itr != m_ownerUinList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_totalRunNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRunNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRunNum, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
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

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_schedulerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

}


string TaskInstance::GetProjectId() const
{
    return m_projectId;
}

void TaskInstance::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskInstance::GetInstanceKey() const
{
    return m_instanceKey;
}

void TaskInstance::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool TaskInstance::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string TaskInstance::GetFolderId() const
{
    return m_folderId;
}

void TaskInstance::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool TaskInstance::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string TaskInstance::GetFolderName() const
{
    return m_folderName;
}

void TaskInstance::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool TaskInstance::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string TaskInstance::GetWorkflowId() const
{
    return m_workflowId;
}

void TaskInstance::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TaskInstance::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TaskInstance::GetWorkflowName() const
{
    return m_workflowName;
}

void TaskInstance::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool TaskInstance::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string TaskInstance::GetTaskId() const
{
    return m_taskId;
}

void TaskInstance::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInstance::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInstance::GetTaskName() const
{
    return m_taskName;
}

void TaskInstance::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskInstance::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskInstance::GetCurRunDate() const
{
    return m_curRunDate;
}

void TaskInstance::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool TaskInstance::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string TaskInstance::GetInstanceState() const
{
    return m_instanceState;
}

void TaskInstance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool TaskInstance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

uint64_t TaskInstance::GetInstanceType() const
{
    return m_instanceType;
}

void TaskInstance::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool TaskInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<string> TaskInstance::GetOwnerUinList() const
{
    return m_ownerUinList;
}

void TaskInstance::SetOwnerUinList(const vector<string>& _ownerUinList)
{
    m_ownerUinList = _ownerUinList;
    m_ownerUinListHasBeenSet = true;
}

bool TaskInstance::OwnerUinListHasBeenSet() const
{
    return m_ownerUinListHasBeenSet;
}

uint64_t TaskInstance::GetTotalRunNum() const
{
    return m_totalRunNum;
}

void TaskInstance::SetTotalRunNum(const uint64_t& _totalRunNum)
{
    m_totalRunNum = _totalRunNum;
    m_totalRunNumHasBeenSet = true;
}

bool TaskInstance::TotalRunNumHasBeenSet() const
{
    return m_totalRunNumHasBeenSet;
}

string TaskInstance::GetTaskType() const
{
    return m_taskType;
}

void TaskInstance::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskInstance::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t TaskInstance::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void TaskInstance::SetTaskTypeId(const int64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool TaskInstance::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string TaskInstance::GetCycleType() const
{
    return m_cycleType;
}

void TaskInstance::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskInstance::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t TaskInstance::GetTryLimit() const
{
    return m_tryLimit;
}

void TaskInstance::SetTryLimit(const uint64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool TaskInstance::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

uint64_t TaskInstance::GetTries() const
{
    return m_tries;
}

void TaskInstance::SetTries(const uint64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool TaskInstance::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

string TaskInstance::GetStartTime() const
{
    return m_startTime;
}

void TaskInstance::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskInstance::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskInstance::GetEndTime() const
{
    return m_endTime;
}

void TaskInstance::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInstance::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t TaskInstance::GetCostTime() const
{
    return m_costTime;
}

void TaskInstance::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool TaskInstance::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string TaskInstance::GetSchedulerTime() const
{
    return m_schedulerTime;
}

void TaskInstance::SetSchedulerTime(const string& _schedulerTime)
{
    m_schedulerTime = _schedulerTime;
    m_schedulerTimeHasBeenSet = true;
}

bool TaskInstance::SchedulerTimeHasBeenSet() const
{
    return m_schedulerTimeHasBeenSet;
}

string TaskInstance::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void TaskInstance::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool TaskInstance::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string TaskInstance::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void TaskInstance::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool TaskInstance::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string TaskInstance::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void TaskInstance::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool TaskInstance::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

