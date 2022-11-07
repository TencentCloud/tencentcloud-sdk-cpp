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

#include <tencentcloud/wedata/v20210820/model/TaskInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskInstanceDetail::TaskInstanceDetail() :
    m_taskRunIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_inlongTaskIdHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_taskRunTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_nextRunDateHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false)
{
}

CoreInternalOutcome TaskInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskRunId") && !value["TaskRunId"].IsNull())
    {
        if (!value["TaskRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.TaskRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskRunId = string(value["TaskRunId"].GetString());
        m_taskRunIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (value.HasMember("InlongTaskId") && !value["InlongTaskId"].IsNull())
    {
        if (!value["InlongTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.InlongTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inlongTaskId = string(value["InlongTaskId"].GetString());
        m_inlongTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TaskRunType") && !value["TaskRunType"].IsNull())
    {
        if (!value["TaskRunType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.TaskRunType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskRunType = value["TaskRunType"].GetUint64();
        m_taskRunTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("NextRunDate") && !value["NextRunDate"].IsNull())
    {
        if (!value["NextRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.NextRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextRunDate = string(value["NextRunDate"].GetString());
        m_nextRunDateHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.OperatorUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = value["OperatorUin"].GetUint64();
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.OwnerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetUint64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceDetail.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_inlongTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InlongTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inlongTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRunType, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
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

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_nextRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorUin, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

}


string TaskInstanceDetail::GetTaskRunId() const
{
    return m_taskRunId;
}

void TaskInstanceDetail::SetTaskRunId(const string& _taskRunId)
{
    m_taskRunId = _taskRunId;
    m_taskRunIdHasBeenSet = true;
}

bool TaskInstanceDetail::TaskRunIdHasBeenSet() const
{
    return m_taskRunIdHasBeenSet;
}

string TaskInstanceDetail::GetTaskId() const
{
    return m_taskId;
}

void TaskInstanceDetail::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInstanceDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInstanceDetail::GetCurRunDate() const
{
    return m_curRunDate;
}

void TaskInstanceDetail::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool TaskInstanceDetail::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string TaskInstanceDetail::GetIssueDate() const
{
    return m_issueDate;
}

void TaskInstanceDetail::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool TaskInstanceDetail::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string TaskInstanceDetail::GetInlongTaskId() const
{
    return m_inlongTaskId;
}

void TaskInstanceDetail::SetInlongTaskId(const string& _inlongTaskId)
{
    m_inlongTaskId = _inlongTaskId;
    m_inlongTaskIdHasBeenSet = true;
}

bool TaskInstanceDetail::InlongTaskIdHasBeenSet() const
{
    return m_inlongTaskIdHasBeenSet;
}

string TaskInstanceDetail::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void TaskInstanceDetail::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool TaskInstanceDetail::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

uint64_t TaskInstanceDetail::GetTaskRunType() const
{
    return m_taskRunType;
}

void TaskInstanceDetail::SetTaskRunType(const uint64_t& _taskRunType)
{
    m_taskRunType = _taskRunType;
    m_taskRunTypeHasBeenSet = true;
}

bool TaskInstanceDetail::TaskRunTypeHasBeenSet() const
{
    return m_taskRunTypeHasBeenSet;
}

uint64_t TaskInstanceDetail::GetState() const
{
    return m_state;
}

void TaskInstanceDetail::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskInstanceDetail::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TaskInstanceDetail::GetStartTime() const
{
    return m_startTime;
}

void TaskInstanceDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskInstanceDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskInstanceDetail::GetEndTime() const
{
    return m_endTime;
}

void TaskInstanceDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInstanceDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskInstanceDetail::GetBrokerIp() const
{
    return m_brokerIp;
}

void TaskInstanceDetail::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool TaskInstanceDetail::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string TaskInstanceDetail::GetPodName() const
{
    return m_podName;
}

void TaskInstanceDetail::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool TaskInstanceDetail::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string TaskInstanceDetail::GetNextRunDate() const
{
    return m_nextRunDate;
}

void TaskInstanceDetail::SetNextRunDate(const string& _nextRunDate)
{
    m_nextRunDate = _nextRunDate;
    m_nextRunDateHasBeenSet = true;
}

bool TaskInstanceDetail::NextRunDateHasBeenSet() const
{
    return m_nextRunDateHasBeenSet;
}

uint64_t TaskInstanceDetail::GetCreateUin() const
{
    return m_createUin;
}

void TaskInstanceDetail::SetCreateUin(const uint64_t& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool TaskInstanceDetail::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

uint64_t TaskInstanceDetail::GetOperatorUin() const
{
    return m_operatorUin;
}

void TaskInstanceDetail::SetOperatorUin(const uint64_t& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool TaskInstanceDetail::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

uint64_t TaskInstanceDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void TaskInstanceDetail::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool TaskInstanceDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t TaskInstanceDetail::GetAppId() const
{
    return m_appId;
}

void TaskInstanceDetail::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TaskInstanceDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TaskInstanceDetail::GetProjectId() const
{
    return m_projectId;
}

void TaskInstanceDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TaskInstanceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TaskInstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void TaskInstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskInstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskInstanceDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskInstanceDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskInstanceDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskInstanceDetail::GetTaskName() const
{
    return m_taskName;
}

void TaskInstanceDetail::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskInstanceDetail::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

