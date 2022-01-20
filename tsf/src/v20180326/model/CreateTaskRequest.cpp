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

#include <tencentcloud/tsf/v20180326/model/CreateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateTaskRequest::CreateTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_taskContentHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_taskRuleHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_shardArgumentsHasBeenSet(false),
    m_successOperatorHasBeenSet(false),
    m_successRatioHasBeenSet(false),
    m_advanceSettingsHasBeenSet(false),
    m_taskArgumentHasBeenSet(false),
    m_programIdListHasBeenSet(false)
{
}

string CreateTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
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

    if (m_taskRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskRule.ToJsonObject(d[key.c_str()], allocator);
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
        d.AddMember(iKey, rapidjson::Value(m_successRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_advanceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceSettings.ToJsonObject(d[key.c_str()], allocator);
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


string CreateTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateTaskRequest::GetTaskContent() const
{
    return m_taskContent;
}

void CreateTaskRequest::SetTaskContent(const string& _taskContent)
{
    m_taskContent = _taskContent;
    m_taskContentHasBeenSet = true;
}

bool CreateTaskRequest::TaskContentHasBeenSet() const
{
    return m_taskContentHasBeenSet;
}

string CreateTaskRequest::GetExecuteType() const
{
    return m_executeType;
}

void CreateTaskRequest::SetExecuteType(const string& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool CreateTaskRequest::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

string CreateTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t CreateTaskRequest::GetTimeOut() const
{
    return m_timeOut;
}

void CreateTaskRequest::SetTimeOut(const uint64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool CreateTaskRequest::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

string CreateTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

TaskRule CreateTaskRequest::GetTaskRule() const
{
    return m_taskRule;
}

void CreateTaskRequest::SetTaskRule(const TaskRule& _taskRule)
{
    m_taskRule = _taskRule;
    m_taskRuleHasBeenSet = true;
}

bool CreateTaskRequest::TaskRuleHasBeenSet() const
{
    return m_taskRuleHasBeenSet;
}

uint64_t CreateTaskRequest::GetRetryCount() const
{
    return m_retryCount;
}

void CreateTaskRequest::SetRetryCount(const uint64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool CreateTaskRequest::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

uint64_t CreateTaskRequest::GetRetryInterval() const
{
    return m_retryInterval;
}

void CreateTaskRequest::SetRetryInterval(const uint64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool CreateTaskRequest::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

int64_t CreateTaskRequest::GetShardCount() const
{
    return m_shardCount;
}

void CreateTaskRequest::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool CreateTaskRequest::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

vector<ShardArgument> CreateTaskRequest::GetShardArguments() const
{
    return m_shardArguments;
}

void CreateTaskRequest::SetShardArguments(const vector<ShardArgument>& _shardArguments)
{
    m_shardArguments = _shardArguments;
    m_shardArgumentsHasBeenSet = true;
}

bool CreateTaskRequest::ShardArgumentsHasBeenSet() const
{
    return m_shardArgumentsHasBeenSet;
}

string CreateTaskRequest::GetSuccessOperator() const
{
    return m_successOperator;
}

void CreateTaskRequest::SetSuccessOperator(const string& _successOperator)
{
    m_successOperator = _successOperator;
    m_successOperatorHasBeenSet = true;
}

bool CreateTaskRequest::SuccessOperatorHasBeenSet() const
{
    return m_successOperatorHasBeenSet;
}

string CreateTaskRequest::GetSuccessRatio() const
{
    return m_successRatio;
}

void CreateTaskRequest::SetSuccessRatio(const string& _successRatio)
{
    m_successRatio = _successRatio;
    m_successRatioHasBeenSet = true;
}

bool CreateTaskRequest::SuccessRatioHasBeenSet() const
{
    return m_successRatioHasBeenSet;
}

AdvanceSettings CreateTaskRequest::GetAdvanceSettings() const
{
    return m_advanceSettings;
}

void CreateTaskRequest::SetAdvanceSettings(const AdvanceSettings& _advanceSettings)
{
    m_advanceSettings = _advanceSettings;
    m_advanceSettingsHasBeenSet = true;
}

bool CreateTaskRequest::AdvanceSettingsHasBeenSet() const
{
    return m_advanceSettingsHasBeenSet;
}

string CreateTaskRequest::GetTaskArgument() const
{
    return m_taskArgument;
}

void CreateTaskRequest::SetTaskArgument(const string& _taskArgument)
{
    m_taskArgument = _taskArgument;
    m_taskArgumentHasBeenSet = true;
}

bool CreateTaskRequest::TaskArgumentHasBeenSet() const
{
    return m_taskArgumentHasBeenSet;
}

vector<string> CreateTaskRequest::GetProgramIdList() const
{
    return m_programIdList;
}

void CreateTaskRequest::SetProgramIdList(const vector<string>& _programIdList)
{
    m_programIdList = _programIdList;
    m_programIdListHasBeenSet = true;
}

bool CreateTaskRequest::ProgramIdListHasBeenSet() const
{
    return m_programIdListHasBeenSet;
}


