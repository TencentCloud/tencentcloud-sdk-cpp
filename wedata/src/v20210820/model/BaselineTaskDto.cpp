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

#include <tencentcloud/wedata/v20210820/model/BaselineTaskDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BaselineTaskDto::BaselineTaskDto() :
    m_idHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_estimatedCostTimeHasBeenSet(false),
    m_upstreamTaskIdsHasBeenSet(false),
    m_downstreamTaskIdsHasBeenSet(false),
    m_isPromiseTaskHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_taskCycleHasBeenSet(false),
    m_taskInChargeUinHasBeenSet(false),
    m_taskInChargeNameHasBeenSet(false),
    m_accessBenchmarkHasBeenSet(false),
    m_accessBenchmarkDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome BaselineTaskDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BaselineId") && !value["BaselineId"].IsNull())
    {
        if (!value["BaselineId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.BaselineId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineId = value["BaselineId"].GetInt64();
        m_baselineIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("EstimatedCostTime") && !value["EstimatedCostTime"].IsNull())
    {
        if (!value["EstimatedCostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.EstimatedCostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedCostTime = value["EstimatedCostTime"].GetInt64();
        m_estimatedCostTimeHasBeenSet = true;
    }

    if (value.HasMember("UpstreamTaskIds") && !value["UpstreamTaskIds"].IsNull())
    {
        if (!value["UpstreamTaskIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.UpstreamTaskIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamTaskIds.Deserialize(value["UpstreamTaskIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamTaskIdsHasBeenSet = true;
    }

    if (value.HasMember("DownstreamTaskIds") && !value["DownstreamTaskIds"].IsNull())
    {
        if (!value["DownstreamTaskIds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.DownstreamTaskIds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_downstreamTaskIds.Deserialize(value["DownstreamTaskIds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_downstreamTaskIdsHasBeenSet = true;
    }

    if (value.HasMember("IsPromiseTask") && !value["IsPromiseTask"].IsNull())
    {
        if (!value["IsPromiseTask"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.IsPromiseTask` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPromiseTask = value["IsPromiseTask"].GetBool();
        m_isPromiseTaskHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskCycle") && !value["TaskCycle"].IsNull())
    {
        if (!value["TaskCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.TaskCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCycle = string(value["TaskCycle"].GetString());
        m_taskCycleHasBeenSet = true;
    }

    if (value.HasMember("TaskInChargeUin") && !value["TaskInChargeUin"].IsNull())
    {
        if (!value["TaskInChargeUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.TaskInChargeUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInChargeUin = string(value["TaskInChargeUin"].GetString());
        m_taskInChargeUinHasBeenSet = true;
    }

    if (value.HasMember("TaskInChargeName") && !value["TaskInChargeName"].IsNull())
    {
        if (!value["TaskInChargeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.TaskInChargeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInChargeName = string(value["TaskInChargeName"].GetString());
        m_taskInChargeNameHasBeenSet = true;
    }

    if (value.HasMember("AccessBenchmark") && !value["AccessBenchmark"].IsNull())
    {
        if (!value["AccessBenchmark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.AccessBenchmark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessBenchmark = string(value["AccessBenchmark"].GetString());
        m_accessBenchmarkHasBeenSet = true;
    }

    if (value.HasMember("AccessBenchmarkDesc") && !value["AccessBenchmarkDesc"].IsNull())
    {
        if (!value["AccessBenchmarkDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.AccessBenchmarkDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessBenchmarkDesc = string(value["AccessBenchmarkDesc"].GetString());
        m_accessBenchmarkDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineTaskDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineTaskDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineId, allocator);
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

    if (m_estimatedCostTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedCostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedCostTime, allocator);
    }

    if (m_upstreamTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamTaskIds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_downstreamTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downstreamTaskIds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isPromiseTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPromiseTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPromiseTask, allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInChargeUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInChargeUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInChargeUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInChargeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInChargeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInChargeName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessBenchmarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessBenchmark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessBenchmark.c_str(), allocator).Move(), allocator);
    }

    if (m_accessBenchmarkDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessBenchmarkDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessBenchmarkDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t BaselineTaskDto::GetId() const
{
    return m_id;
}

void BaselineTaskDto::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BaselineTaskDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BaselineTaskDto::GetBaselineId() const
{
    return m_baselineId;
}

void BaselineTaskDto::SetBaselineId(const int64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool BaselineTaskDto::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

string BaselineTaskDto::GetTaskId() const
{
    return m_taskId;
}

void BaselineTaskDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BaselineTaskDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string BaselineTaskDto::GetTaskName() const
{
    return m_taskName;
}

void BaselineTaskDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool BaselineTaskDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t BaselineTaskDto::GetEstimatedCostTime() const
{
    return m_estimatedCostTime;
}

void BaselineTaskDto::SetEstimatedCostTime(const int64_t& _estimatedCostTime)
{
    m_estimatedCostTime = _estimatedCostTime;
    m_estimatedCostTimeHasBeenSet = true;
}

bool BaselineTaskDto::EstimatedCostTimeHasBeenSet() const
{
    return m_estimatedCostTimeHasBeenSet;
}

StringListNode BaselineTaskDto::GetUpstreamTaskIds() const
{
    return m_upstreamTaskIds;
}

void BaselineTaskDto::SetUpstreamTaskIds(const StringListNode& _upstreamTaskIds)
{
    m_upstreamTaskIds = _upstreamTaskIds;
    m_upstreamTaskIdsHasBeenSet = true;
}

bool BaselineTaskDto::UpstreamTaskIdsHasBeenSet() const
{
    return m_upstreamTaskIdsHasBeenSet;
}

StringListNode BaselineTaskDto::GetDownstreamTaskIds() const
{
    return m_downstreamTaskIds;
}

void BaselineTaskDto::SetDownstreamTaskIds(const StringListNode& _downstreamTaskIds)
{
    m_downstreamTaskIds = _downstreamTaskIds;
    m_downstreamTaskIdsHasBeenSet = true;
}

bool BaselineTaskDto::DownstreamTaskIdsHasBeenSet() const
{
    return m_downstreamTaskIdsHasBeenSet;
}

bool BaselineTaskDto::GetIsPromiseTask() const
{
    return m_isPromiseTask;
}

void BaselineTaskDto::SetIsPromiseTask(const bool& _isPromiseTask)
{
    m_isPromiseTask = _isPromiseTask;
    m_isPromiseTaskHasBeenSet = true;
}

bool BaselineTaskDto::IsPromiseTaskHasBeenSet() const
{
    return m_isPromiseTaskHasBeenSet;
}

string BaselineTaskDto::GetUserUin() const
{
    return m_userUin;
}

void BaselineTaskDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool BaselineTaskDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string BaselineTaskDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void BaselineTaskDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool BaselineTaskDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string BaselineTaskDto::GetProjectId() const
{
    return m_projectId;
}

void BaselineTaskDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BaselineTaskDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string BaselineTaskDto::GetAppId() const
{
    return m_appId;
}

void BaselineTaskDto::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool BaselineTaskDto::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string BaselineTaskDto::GetWorkflowName() const
{
    return m_workflowName;
}

void BaselineTaskDto::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool BaselineTaskDto::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string BaselineTaskDto::GetWorkflowId() const
{
    return m_workflowId;
}

void BaselineTaskDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool BaselineTaskDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string BaselineTaskDto::GetTaskCycle() const
{
    return m_taskCycle;
}

void BaselineTaskDto::SetTaskCycle(const string& _taskCycle)
{
    m_taskCycle = _taskCycle;
    m_taskCycleHasBeenSet = true;
}

bool BaselineTaskDto::TaskCycleHasBeenSet() const
{
    return m_taskCycleHasBeenSet;
}

string BaselineTaskDto::GetTaskInChargeUin() const
{
    return m_taskInChargeUin;
}

void BaselineTaskDto::SetTaskInChargeUin(const string& _taskInChargeUin)
{
    m_taskInChargeUin = _taskInChargeUin;
    m_taskInChargeUinHasBeenSet = true;
}

bool BaselineTaskDto::TaskInChargeUinHasBeenSet() const
{
    return m_taskInChargeUinHasBeenSet;
}

string BaselineTaskDto::GetTaskInChargeName() const
{
    return m_taskInChargeName;
}

void BaselineTaskDto::SetTaskInChargeName(const string& _taskInChargeName)
{
    m_taskInChargeName = _taskInChargeName;
    m_taskInChargeNameHasBeenSet = true;
}

bool BaselineTaskDto::TaskInChargeNameHasBeenSet() const
{
    return m_taskInChargeNameHasBeenSet;
}

string BaselineTaskDto::GetAccessBenchmark() const
{
    return m_accessBenchmark;
}

void BaselineTaskDto::SetAccessBenchmark(const string& _accessBenchmark)
{
    m_accessBenchmark = _accessBenchmark;
    m_accessBenchmarkHasBeenSet = true;
}

bool BaselineTaskDto::AccessBenchmarkHasBeenSet() const
{
    return m_accessBenchmarkHasBeenSet;
}

string BaselineTaskDto::GetAccessBenchmarkDesc() const
{
    return m_accessBenchmarkDesc;
}

void BaselineTaskDto::SetAccessBenchmarkDesc(const string& _accessBenchmarkDesc)
{
    m_accessBenchmarkDesc = _accessBenchmarkDesc;
    m_accessBenchmarkDescHasBeenSet = true;
}

bool BaselineTaskDto::AccessBenchmarkDescHasBeenSet() const
{
    return m_accessBenchmarkDescHasBeenSet;
}

string BaselineTaskDto::GetCreateTime() const
{
    return m_createTime;
}

void BaselineTaskDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineTaskDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaselineTaskDto::GetUpdateTime() const
{
    return m_updateTime;
}

void BaselineTaskDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BaselineTaskDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

