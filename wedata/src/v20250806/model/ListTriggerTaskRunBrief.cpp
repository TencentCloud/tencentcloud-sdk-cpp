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

#include <tencentcloud/wedata/v20250806/model/ListTriggerTaskRunBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListTriggerTaskRunBrief::ListTriggerTaskRunBrief() :
    m_executionIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowExecutionIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_waitTimeHasBeenSet(false),
    m_executeUserUinHasBeenSet(false),
    m_scheduleTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_retryTimesHasBeenSet(false),
    m_errorCodeStrHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_rerunTimesHasBeenSet(false),
    m_taskExecutionStateHasBeenSet(false),
    m_isLatestExecutionHasBeenSet(false)
{
}

CoreInternalOutcome ListTriggerTaskRunBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionId") && !value["ExecutionId"].IsNull())
    {
        if (!value["ExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionId = string(value["ExecutionId"].GetString());
        m_executionIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowExecutionId") && !value["WorkflowExecutionId"].IsNull())
    {
        if (!value["WorkflowExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.WorkflowExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowExecutionId = string(value["WorkflowExecutionId"].GetString());
        m_workflowExecutionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("WaitTime") && !value["WaitTime"].IsNull())
    {
        if (!value["WaitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.WaitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitTime = string(value["WaitTime"].GetString());
        m_waitTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecuteUserUin") && !value["ExecuteUserUin"].IsNull())
    {
        if (!value["ExecuteUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ExecuteUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeUserUin = string(value["ExecuteUserUin"].GetString());
        m_executeUserUinHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTime") && !value["ScheduleTime"].IsNull())
    {
        if (!value["ScheduleTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ScheduleTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTime = string(value["ScheduleTime"].GetString());
        m_scheduleTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ExecutionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionTime = string(value["ExecutionTime"].GetString());
        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("RetryTimes") && !value["RetryTimes"].IsNull())
    {
        if (!value["RetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.RetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryTimes = value["RetryTimes"].GetInt64();
        m_retryTimesHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeStr") && !value["ErrorCodeStr"].IsNull())
    {
        if (!value["ErrorCodeStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.ErrorCodeStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeStr = string(value["ErrorCodeStr"].GetString());
        m_errorCodeStrHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("RerunTimes") && !value["RerunTimes"].IsNull())
    {
        if (!value["RerunTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.RerunTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rerunTimes = value["RerunTimes"].GetInt64();
        m_rerunTimesHasBeenSet = true;
    }

    if (value.HasMember("TaskExecutionState") && !value["TaskExecutionState"].IsNull())
    {
        if (!value["TaskExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.TaskExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskExecutionState = string(value["TaskExecutionState"].GetString());
        m_taskExecutionStateHasBeenSet = true;
    }

    if (value.HasMember("IsLatestExecution") && !value["IsLatestExecution"].IsNull())
    {
        if (!value["IsLatestExecution"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListTriggerTaskRunBrief.IsLatestExecution` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestExecution = value["IsLatestExecution"].GetBool();
        m_isLatestExecutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListTriggerTaskRunBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowExecutionId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_waitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executeUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_retryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryTimes, allocator);
    }

    if (m_errorCodeStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeStr.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_rerunTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerunTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rerunTimes, allocator);
    }

    if (m_taskExecutionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskExecutionState.c_str(), allocator).Move(), allocator);
    }

    if (m_isLatestExecutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestExecution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestExecution, allocator);
    }

}


string ListTriggerTaskRunBrief::GetExecutionId() const
{
    return m_executionId;
}

void ListTriggerTaskRunBrief::SetExecutionId(const string& _executionId)
{
    m_executionId = _executionId;
    m_executionIdHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ExecutionIdHasBeenSet() const
{
    return m_executionIdHasBeenSet;
}

string ListTriggerTaskRunBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void ListTriggerTaskRunBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ListTriggerTaskRunBrief::GetWorkflowExecutionId() const
{
    return m_workflowExecutionId;
}

void ListTriggerTaskRunBrief::SetWorkflowExecutionId(const string& _workflowExecutionId)
{
    m_workflowExecutionId = _workflowExecutionId;
    m_workflowExecutionIdHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::WorkflowExecutionIdHasBeenSet() const
{
    return m_workflowExecutionIdHasBeenSet;
}

string ListTriggerTaskRunBrief::GetTaskId() const
{
    return m_taskId;
}

void ListTriggerTaskRunBrief::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ListTriggerTaskRunBrief::GetTriggerType() const
{
    return m_triggerType;
}

void ListTriggerTaskRunBrief::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string ListTriggerTaskRunBrief::GetWaitTime() const
{
    return m_waitTime;
}

void ListTriggerTaskRunBrief::SetWaitTime(const string& _waitTime)
{
    m_waitTime = _waitTime;
    m_waitTimeHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::WaitTimeHasBeenSet() const
{
    return m_waitTimeHasBeenSet;
}

string ListTriggerTaskRunBrief::GetExecuteUserUin() const
{
    return m_executeUserUin;
}

void ListTriggerTaskRunBrief::SetExecuteUserUin(const string& _executeUserUin)
{
    m_executeUserUin = _executeUserUin;
    m_executeUserUinHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ExecuteUserUinHasBeenSet() const
{
    return m_executeUserUinHasBeenSet;
}

string ListTriggerTaskRunBrief::GetScheduleTime() const
{
    return m_scheduleTime;
}

void ListTriggerTaskRunBrief::SetScheduleTime(const string& _scheduleTime)
{
    m_scheduleTime = _scheduleTime;
    m_scheduleTimeHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ScheduleTimeHasBeenSet() const
{
    return m_scheduleTimeHasBeenSet;
}

string ListTriggerTaskRunBrief::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void ListTriggerTaskRunBrief::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string ListTriggerTaskRunBrief::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void ListTriggerTaskRunBrief::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string ListTriggerTaskRunBrief::GetExecutionTime() const
{
    return m_executionTime;
}

void ListTriggerTaskRunBrief::SetExecutionTime(const string& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

int64_t ListTriggerTaskRunBrief::GetRetryTimes() const
{
    return m_retryTimes;
}

void ListTriggerTaskRunBrief::SetRetryTimes(const int64_t& _retryTimes)
{
    m_retryTimes = _retryTimes;
    m_retryTimesHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::RetryTimesHasBeenSet() const
{
    return m_retryTimesHasBeenSet;
}

string ListTriggerTaskRunBrief::GetErrorCodeStr() const
{
    return m_errorCodeStr;
}

void ListTriggerTaskRunBrief::SetErrorCodeStr(const string& _errorCodeStr)
{
    m_errorCodeStr = _errorCodeStr;
    m_errorCodeStrHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::ErrorCodeStrHasBeenSet() const
{
    return m_errorCodeStrHasBeenSet;
}

string ListTriggerTaskRunBrief::GetTaskName() const
{
    return m_taskName;
}

void ListTriggerTaskRunBrief::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ListTriggerTaskRunBrief::GetWorkflowName() const
{
    return m_workflowName;
}

void ListTriggerTaskRunBrief::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

int64_t ListTriggerTaskRunBrief::GetRerunTimes() const
{
    return m_rerunTimes;
}

void ListTriggerTaskRunBrief::SetRerunTimes(const int64_t& _rerunTimes)
{
    m_rerunTimes = _rerunTimes;
    m_rerunTimesHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::RerunTimesHasBeenSet() const
{
    return m_rerunTimesHasBeenSet;
}

string ListTriggerTaskRunBrief::GetTaskExecutionState() const
{
    return m_taskExecutionState;
}

void ListTriggerTaskRunBrief::SetTaskExecutionState(const string& _taskExecutionState)
{
    m_taskExecutionState = _taskExecutionState;
    m_taskExecutionStateHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::TaskExecutionStateHasBeenSet() const
{
    return m_taskExecutionStateHasBeenSet;
}

bool ListTriggerTaskRunBrief::GetIsLatestExecution() const
{
    return m_isLatestExecution;
}

void ListTriggerTaskRunBrief::SetIsLatestExecution(const bool& _isLatestExecution)
{
    m_isLatestExecution = _isLatestExecution;
    m_isLatestExecutionHasBeenSet = true;
}

bool ListTriggerTaskRunBrief::IsLatestExecutionHasBeenSet() const
{
    return m_isLatestExecutionHasBeenSet;
}

