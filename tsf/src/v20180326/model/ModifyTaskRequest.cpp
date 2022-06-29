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

#include <tencentcloud/tsf/v20180326/model/ModifyTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ModifyTaskRequest::ModifyTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskContentHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_taskRuleHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_shardArgumentsHasBeenSet(false),
    m_advanceSettingsHasBeenSet(false),
    m_successOperatorHasBeenSet(false),
    m_successRatioHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_taskArgumentHasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string ModifyTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskContent.c_str(), allocator).Move(), allocator);
    }

    if (m_executeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executeType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_shardArgumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardArguments";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shardArguments.begin(); itr != m_shardArguments.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_advanceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_successOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_successOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_successRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_successRatio, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_taskArgumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskArgument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskArgument.c_str(), allocator).Move(), allocator);
    }

    if (m_programIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_programIdList.begin(); itr != m_programIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void ModifyTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ModifyTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ModifyTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void ModifyTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ModifyTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string ModifyTaskRequest::GetTaskContent() const
{
    return m_taskContent;
}

void ModifyTaskRequest::SetTaskContent(const string& _taskContent)
{
    m_taskContent = _taskContent;
    m_taskContentHasBeenSet = true;
}

bool ModifyTaskRequest::TaskContentHasBeenSet() const
{
    return m_taskContentHasBeenSet;
}

string ModifyTaskRequest::GetExecuteType() const
{
    return m_executeType;
}

void ModifyTaskRequest::SetExecuteType(const string& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool ModifyTaskRequest::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

TaskRule ModifyTaskRequest::GetTaskRule() const
{
    return m_taskRule;
}

void ModifyTaskRequest::SetTaskRule(const TaskRule& _taskRule)
{
    m_taskRule = _taskRule;
    m_taskRuleHasBeenSet = true;
}

bool ModifyTaskRequest::TaskRuleHasBeenSet() const
{
    return m_taskRuleHasBeenSet;
}

uint64_t ModifyTaskRequest::GetTimeOut() const
{
    return m_timeOut;
}

void ModifyTaskRequest::SetTimeOut(const uint64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool ModifyTaskRequest::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

string ModifyTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t ModifyTaskRequest::GetShardCount() const
{
    return m_shardCount;
}

void ModifyTaskRequest::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool ModifyTaskRequest::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

vector<ShardArgument> ModifyTaskRequest::GetShardArguments() const
{
    return m_shardArguments;
}

void ModifyTaskRequest::SetShardArguments(const vector<ShardArgument>& _shardArguments)
{
    m_shardArguments = _shardArguments;
    m_shardArgumentsHasBeenSet = true;
}

bool ModifyTaskRequest::ShardArgumentsHasBeenSet() const
{
    return m_shardArgumentsHasBeenSet;
}

AdvanceSettings ModifyTaskRequest::GetAdvanceSettings() const
{
    return m_advanceSettings;
}

void ModifyTaskRequest::SetAdvanceSettings(const AdvanceSettings& _advanceSettings)
{
    m_advanceSettings = _advanceSettings;
    m_advanceSettingsHasBeenSet = true;
}

bool ModifyTaskRequest::AdvanceSettingsHasBeenSet() const
{
    return m_advanceSettingsHasBeenSet;
}

string ModifyTaskRequest::GetSuccessOperator() const
{
    return m_successOperator;
}

void ModifyTaskRequest::SetSuccessOperator(const string& _successOperator)
{
    m_successOperator = _successOperator;
    m_successOperatorHasBeenSet = true;
}

bool ModifyTaskRequest::SuccessOperatorHasBeenSet() const
{
    return m_successOperatorHasBeenSet;
}

int64_t ModifyTaskRequest::GetSuccessRatio() const
{
    return m_successRatio;
}

void ModifyTaskRequest::SetSuccessRatio(const int64_t& _successRatio)
{
    m_successRatio = _successRatio;
    m_successRatioHasBeenSet = true;
}

bool ModifyTaskRequest::SuccessRatioHasBeenSet() const
{
    return m_successRatioHasBeenSet;
}

uint64_t ModifyTaskRequest::GetRetryCount() const
{
    return m_retryCount;
}

void ModifyTaskRequest::SetRetryCount(const uint64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool ModifyTaskRequest::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

uint64_t ModifyTaskRequest::GetRetryInterval() const
{
    return m_retryInterval;
}

void ModifyTaskRequest::SetRetryInterval(const uint64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool ModifyTaskRequest::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

string ModifyTaskRequest::GetTaskArgument() const
{
    return m_taskArgument;
}

void ModifyTaskRequest::SetTaskArgument(const string& _taskArgument)
{
    m_taskArgument = _taskArgument;
    m_taskArgumentHasBeenSet = true;
}

bool ModifyTaskRequest::TaskArgumentHasBeenSet() const
{
    return m_taskArgumentHasBeenSet;
}

vector<string> ModifyTaskRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void ModifyTaskRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool ModifyTaskRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


