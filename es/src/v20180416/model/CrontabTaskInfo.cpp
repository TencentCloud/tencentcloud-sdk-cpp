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

#include <tencentcloud/es/v20180416/model/CrontabTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CrontabTaskInfo::CrontabTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_lastExecTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_taskDetailHasBeenSet(false),
    m_onlyExpungeDeletesHasBeenSet(false),
    m_maxMumSegmentsHasBeenSet(false)
{
}

CoreInternalOutcome CrontabTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.InstanceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetUint64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.TaskTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = string(value["TaskTime"].GetString());
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("LastExecTime") && !value["LastExecTime"].IsNull())
    {
        if (!value["LastExecTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.LastExecTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastExecTime = string(value["LastExecTime"].GetString());
        m_lastExecTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskDetail") && !value["TaskDetail"].IsNull())
    {
        if (!value["TaskDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.TaskDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDetail = string(value["TaskDetail"].GetString());
        m_taskDetailHasBeenSet = true;
    }

    if (value.HasMember("OnlyExpungeDeletes") && !value["OnlyExpungeDeletes"].IsNull())
    {
        if (!value["OnlyExpungeDeletes"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.OnlyExpungeDeletes` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onlyExpungeDeletes = value["OnlyExpungeDeletes"].GetBool();
        m_onlyExpungeDeletesHasBeenSet = true;
    }

    if (value.HasMember("MaxMumSegments") && !value["MaxMumSegments"].IsNull())
    {
        if (!value["MaxMumSegments"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrontabTaskInfo.MaxMumSegments` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMumSegments = value["MaxMumSegments"].GetUint64();
        m_maxMumSegmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrontabTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
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

    if (m_taskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTime.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_lastExecTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastExecTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
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

    if (m_taskDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyExpungeDeletesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyExpungeDeletes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlyExpungeDeletes, allocator);
    }

    if (m_maxMumSegmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMumSegments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMumSegments, allocator);
    }

}


uint64_t CrontabTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void CrontabTaskInfo::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CrontabTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t CrontabTaskInfo::GetRegionId() const
{
    return m_regionId;
}

void CrontabTaskInfo::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool CrontabTaskInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

uint64_t CrontabTaskInfo::GetInstanceId() const
{
    return m_instanceId;
}

void CrontabTaskInfo::SetInstanceId(const uint64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CrontabTaskInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CrontabTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void CrontabTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CrontabTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CrontabTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void CrontabTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CrontabTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CrontabTaskInfo::GetTaskTime() const
{
    return m_taskTime;
}

void CrontabTaskInfo::SetTaskTime(const string& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool CrontabTaskInfo::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

string CrontabTaskInfo::GetTarget() const
{
    return m_target;
}

void CrontabTaskInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool CrontabTaskInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string CrontabTaskInfo::GetLastExecTime() const
{
    return m_lastExecTime;
}

void CrontabTaskInfo::SetLastExecTime(const string& _lastExecTime)
{
    m_lastExecTime = _lastExecTime;
    m_lastExecTimeHasBeenSet = true;
}

bool CrontabTaskInfo::LastExecTimeHasBeenSet() const
{
    return m_lastExecTimeHasBeenSet;
}

string CrontabTaskInfo::GetState() const
{
    return m_state;
}

void CrontabTaskInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CrontabTaskInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t CrontabTaskInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void CrontabTaskInfo::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool CrontabTaskInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string CrontabTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void CrontabTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CrontabTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CrontabTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void CrontabTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CrontabTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CrontabTaskInfo::GetTaskDetail() const
{
    return m_taskDetail;
}

void CrontabTaskInfo::SetTaskDetail(const string& _taskDetail)
{
    m_taskDetail = _taskDetail;
    m_taskDetailHasBeenSet = true;
}

bool CrontabTaskInfo::TaskDetailHasBeenSet() const
{
    return m_taskDetailHasBeenSet;
}

bool CrontabTaskInfo::GetOnlyExpungeDeletes() const
{
    return m_onlyExpungeDeletes;
}

void CrontabTaskInfo::SetOnlyExpungeDeletes(const bool& _onlyExpungeDeletes)
{
    m_onlyExpungeDeletes = _onlyExpungeDeletes;
    m_onlyExpungeDeletesHasBeenSet = true;
}

bool CrontabTaskInfo::OnlyExpungeDeletesHasBeenSet() const
{
    return m_onlyExpungeDeletesHasBeenSet;
}

uint64_t CrontabTaskInfo::GetMaxMumSegments() const
{
    return m_maxMumSegments;
}

void CrontabTaskInfo::SetMaxMumSegments(const uint64_t& _maxMumSegments)
{
    m_maxMumSegments = _maxMumSegments;
    m_maxMumSegmentsHasBeenSet = true;
}

bool CrontabTaskInfo::MaxMumSegmentsHasBeenSet() const
{
    return m_maxMumSegmentsHasBeenSet;
}

