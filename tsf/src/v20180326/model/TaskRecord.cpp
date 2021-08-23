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

#include <tencentcloud/tsf/v20180326/model/TaskRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TaskRecord::TaskRecord() :
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_taskContentHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_taskRuleHasBeenSet(false),
    m_taskStateHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_successOperatorHasBeenSet(false),
    m_successRatioHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_advanceSettingsHasBeenSet(false),
    m_shardArgumentsHasBeenSet(false),
    m_belongFlowIdsHasBeenSet(false),
    m_taskLogIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_taskArgumentHasBeenSet(false)
{
}

CoreInternalOutcome TaskRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecuteType") && !value["ExecuteType"].IsNull())
    {
        if (!value["ExecuteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.ExecuteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeType = string(value["ExecuteType"].GetString());
        m_executeTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskContent") && !value["TaskContent"].IsNull())
    {
        if (!value["TaskContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskContent = string(value["TaskContent"].GetString());
        m_taskContentHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetInt64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.RetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetInt64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("RetryInterval") && !value["RetryInterval"].IsNull())
    {
        if (!value["RetryInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.RetryInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryInterval = value["RetryInterval"].GetInt64();
        m_retryIntervalHasBeenSet = true;
    }

    if (value.HasMember("TaskRule") && !value["TaskRule"].IsNull())
    {
        if (!value["TaskRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskRule.Deserialize(value["TaskRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskRuleHasBeenSet = true;
    }

    if (value.HasMember("TaskState") && !value["TaskState"].IsNull())
    {
        if (!value["TaskState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskState = string(value["TaskState"].GetString());
        m_taskStateHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SuccessOperator") && !value["SuccessOperator"].IsNull())
    {
        if (!value["SuccessOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.SuccessOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successOperator = string(value["SuccessOperator"].GetString());
        m_successOperatorHasBeenSet = true;
    }

    if (value.HasMember("SuccessRatio") && !value["SuccessRatio"].IsNull())
    {
        if (!value["SuccessRatio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.SuccessRatio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successRatio = value["SuccessRatio"].GetInt64();
        m_successRatioHasBeenSet = true;
    }

    if (value.HasMember("ShardCount") && !value["ShardCount"].IsNull())
    {
        if (!value["ShardCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.ShardCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardCount = value["ShardCount"].GetInt64();
        m_shardCountHasBeenSet = true;
    }

    if (value.HasMember("AdvanceSettings") && !value["AdvanceSettings"].IsNull())
    {
        if (!value["AdvanceSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.AdvanceSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advanceSettings.Deserialize(value["AdvanceSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advanceSettingsHasBeenSet = true;
    }

    if (value.HasMember("ShardArguments") && !value["ShardArguments"].IsNull())
    {
        if (!value["ShardArguments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskRecord.ShardArguments` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardArguments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShardArgument item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shardArguments.push_back(item);
        }
        m_shardArgumentsHasBeenSet = true;
    }

    if (value.HasMember("BelongFlowIds") && !value["BelongFlowIds"].IsNull())
    {
        if (!value["BelongFlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskRecord.BelongFlowIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BelongFlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_belongFlowIds.push_back((*itr).GetString());
        }
        m_belongFlowIdsHasBeenSet = true;
    }

    if (value.HasMember("TaskLogId") && !value["TaskLogId"].IsNull())
    {
        if (!value["TaskLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskLogId = string(value["TaskLogId"].GetString());
        m_taskLogIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskArgument") && !value["TaskArgument"].IsNull())
    {
        if (!value["TaskArgument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRecord.TaskArgument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskArgument = string(value["TaskArgument"].GetString());
        m_taskArgumentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_executeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskContent.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_taskRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskState.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_successOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_successOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_successRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successRatio, allocator);
    }

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_advanceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shardArgumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardArguments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shardArguments.begin(); itr != m_shardArguments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_belongFlowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongFlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_belongFlowIds.begin(); itr != m_belongFlowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskArgumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskArgument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskArgument.c_str(), allocator).Move(), allocator);
    }

}


string TaskRecord::GetTaskName() const
{
    return m_taskName;
}

void TaskRecord::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskRecord::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TaskRecord::GetTaskType() const
{
    return m_taskType;
}

void TaskRecord::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskRecord::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskRecord::GetExecuteType() const
{
    return m_executeType;
}

void TaskRecord::SetExecuteType(const string& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool TaskRecord::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

string TaskRecord::GetTaskContent() const
{
    return m_taskContent;
}

void TaskRecord::SetTaskContent(const string& _taskContent)
{
    m_taskContent = _taskContent;
    m_taskContentHasBeenSet = true;
}

bool TaskRecord::TaskContentHasBeenSet() const
{
    return m_taskContentHasBeenSet;
}

string TaskRecord::GetGroupId() const
{
    return m_groupId;
}

void TaskRecord::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool TaskRecord::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t TaskRecord::GetTimeOut() const
{
    return m_timeOut;
}

void TaskRecord::SetTimeOut(const int64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool TaskRecord::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

int64_t TaskRecord::GetRetryCount() const
{
    return m_retryCount;
}

void TaskRecord::SetRetryCount(const int64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool TaskRecord::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

int64_t TaskRecord::GetRetryInterval() const
{
    return m_retryInterval;
}

void TaskRecord::SetRetryInterval(const int64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool TaskRecord::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

TaskRule TaskRecord::GetTaskRule() const
{
    return m_taskRule;
}

void TaskRecord::SetTaskRule(const TaskRule& _taskRule)
{
    m_taskRule = _taskRule;
    m_taskRuleHasBeenSet = true;
}

bool TaskRecord::TaskRuleHasBeenSet() const
{
    return m_taskRuleHasBeenSet;
}

string TaskRecord::GetTaskState() const
{
    return m_taskState;
}

void TaskRecord::SetTaskState(const string& _taskState)
{
    m_taskState = _taskState;
    m_taskStateHasBeenSet = true;
}

bool TaskRecord::TaskStateHasBeenSet() const
{
    return m_taskStateHasBeenSet;
}

string TaskRecord::GetTaskId() const
{
    return m_taskId;
}

void TaskRecord::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskRecord::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskRecord::GetSuccessOperator() const
{
    return m_successOperator;
}

void TaskRecord::SetSuccessOperator(const string& _successOperator)
{
    m_successOperator = _successOperator;
    m_successOperatorHasBeenSet = true;
}

bool TaskRecord::SuccessOperatorHasBeenSet() const
{
    return m_successOperatorHasBeenSet;
}

int64_t TaskRecord::GetSuccessRatio() const
{
    return m_successRatio;
}

void TaskRecord::SetSuccessRatio(const int64_t& _successRatio)
{
    m_successRatio = _successRatio;
    m_successRatioHasBeenSet = true;
}

bool TaskRecord::SuccessRatioHasBeenSet() const
{
    return m_successRatioHasBeenSet;
}

int64_t TaskRecord::GetShardCount() const
{
    return m_shardCount;
}

void TaskRecord::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool TaskRecord::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

AdvanceSettings TaskRecord::GetAdvanceSettings() const
{
    return m_advanceSettings;
}

void TaskRecord::SetAdvanceSettings(const AdvanceSettings& _advanceSettings)
{
    m_advanceSettings = _advanceSettings;
    m_advanceSettingsHasBeenSet = true;
}

bool TaskRecord::AdvanceSettingsHasBeenSet() const
{
    return m_advanceSettingsHasBeenSet;
}

vector<ShardArgument> TaskRecord::GetShardArguments() const
{
    return m_shardArguments;
}

void TaskRecord::SetShardArguments(const vector<ShardArgument>& _shardArguments)
{
    m_shardArguments = _shardArguments;
    m_shardArgumentsHasBeenSet = true;
}

bool TaskRecord::ShardArgumentsHasBeenSet() const
{
    return m_shardArgumentsHasBeenSet;
}

vector<string> TaskRecord::GetBelongFlowIds() const
{
    return m_belongFlowIds;
}

void TaskRecord::SetBelongFlowIds(const vector<string>& _belongFlowIds)
{
    m_belongFlowIds = _belongFlowIds;
    m_belongFlowIdsHasBeenSet = true;
}

bool TaskRecord::BelongFlowIdsHasBeenSet() const
{
    return m_belongFlowIdsHasBeenSet;
}

string TaskRecord::GetTaskLogId() const
{
    return m_taskLogId;
}

void TaskRecord::SetTaskLogId(const string& _taskLogId)
{
    m_taskLogId = _taskLogId;
    m_taskLogIdHasBeenSet = true;
}

bool TaskRecord::TaskLogIdHasBeenSet() const
{
    return m_taskLogIdHasBeenSet;
}

string TaskRecord::GetTriggerType() const
{
    return m_triggerType;
}

void TaskRecord::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TaskRecord::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string TaskRecord::GetTaskArgument() const
{
    return m_taskArgument;
}

void TaskRecord::SetTaskArgument(const string& _taskArgument)
{
    m_taskArgument = _taskArgument;
    m_taskArgumentHasBeenSet = true;
}

bool TaskRecord::TaskArgumentHasBeenSet() const
{
    return m_taskArgumentHasBeenSet;
}

