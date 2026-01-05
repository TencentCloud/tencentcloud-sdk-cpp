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

#include <tencentcloud/wedata/v20250806/model/CreateTriggerTaskSchedulerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTriggerTaskSchedulerConfiguration::CreateTriggerTaskSchedulerConfiguration() :
    m_upstreamDependencyConfigListHasBeenSet(false),
    m_runPriorityTypeHasBeenSet(false),
    m_retryWaitMinuteHasBeenSet(false),
    m_maxRetryNumberHasBeenSet(false),
    m_executionTTLMinuteHasBeenSet(false),
    m_waitExecutionTotalTTLMinuteHasBeenSet(false),
    m_allowRedoTypeHasBeenSet(false),
    m_paramTaskOutListHasBeenSet(false),
    m_paramTaskInListHasBeenSet(false),
    m_taskOutputRegistryListHasBeenSet(false)
{
}

CoreInternalOutcome CreateTriggerTaskSchedulerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpstreamDependencyConfigList") && !value["UpstreamDependencyConfigList"].IsNull())
    {
        if (!value["UpstreamDependencyConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.UpstreamDependencyConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamDependencyConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependencyTriggerTaskBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_upstreamDependencyConfigList.push_back(item);
        }
        m_upstreamDependencyConfigListHasBeenSet = true;
    }

    if (value.HasMember("RunPriorityType") && !value["RunPriorityType"].IsNull())
    {
        if (!value["RunPriorityType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.RunPriorityType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriorityType = value["RunPriorityType"].GetInt64();
        m_runPriorityTypeHasBeenSet = true;
    }

    if (value.HasMember("RetryWaitMinute") && !value["RetryWaitMinute"].IsNull())
    {
        if (!value["RetryWaitMinute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.RetryWaitMinute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWaitMinute = value["RetryWaitMinute"].GetInt64();
        m_retryWaitMinuteHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryNumber") && !value["MaxRetryNumber"].IsNull())
    {
        if (!value["MaxRetryNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.MaxRetryNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryNumber = value["MaxRetryNumber"].GetInt64();
        m_maxRetryNumberHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTTLMinute") && !value["ExecutionTTLMinute"].IsNull())
    {
        if (!value["ExecutionTTLMinute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.ExecutionTTLMinute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionTTLMinute = value["ExecutionTTLMinute"].GetInt64();
        m_executionTTLMinuteHasBeenSet = true;
    }

    if (value.HasMember("WaitExecutionTotalTTLMinute") && !value["WaitExecutionTotalTTLMinute"].IsNull())
    {
        if (!value["WaitExecutionTotalTTLMinute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.WaitExecutionTotalTTLMinute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waitExecutionTotalTTLMinute = value["WaitExecutionTotalTTLMinute"].GetInt64();
        m_waitExecutionTotalTTLMinuteHasBeenSet = true;
    }

    if (value.HasMember("AllowRedoType") && !value["AllowRedoType"].IsNull())
    {
        if (!value["AllowRedoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.AllowRedoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowRedoType = string(value["AllowRedoType"].GetString());
        m_allowRedoTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamTaskOutList") && !value["ParamTaskOutList"].IsNull())
    {
        if (!value["ParamTaskOutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.ParamTaskOutList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamTaskOutList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutTaskParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramTaskOutList.push_back(item);
        }
        m_paramTaskOutListHasBeenSet = true;
    }

    if (value.HasMember("ParamTaskInList") && !value["ParamTaskInList"].IsNull())
    {
        if (!value["ParamTaskInList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.ParamTaskInList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamTaskInList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InTaskParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramTaskInList.push_back(item);
        }
        m_paramTaskInListHasBeenSet = true;
    }

    if (value.HasMember("TaskOutputRegistryList") && !value["TaskOutputRegistryList"].IsNull())
    {
        if (!value["TaskOutputRegistryList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTriggerTaskSchedulerConfiguration.TaskOutputRegistryList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskOutputRegistryList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskDataRegistry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskOutputRegistryList.push_back(item);
        }
        m_taskOutputRegistryListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTriggerTaskSchedulerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_upstreamDependencyConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDependencyConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upstreamDependencyConfigList.begin(); itr != m_upstreamDependencyConfigList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runPriorityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriorityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runPriorityType, allocator);
    }

    if (m_retryWaitMinuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWaitMinute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryWaitMinute, allocator);
    }

    if (m_maxRetryNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryNumber, allocator);
    }

    if (m_executionTTLMinuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTTLMinute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionTTLMinute, allocator);
    }

    if (m_waitExecutionTotalTTLMinuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitExecutionTotalTTLMinute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitExecutionTotalTTLMinute, allocator);
    }

    if (m_allowRedoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowRedoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allowRedoType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTaskOutListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTaskOutList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramTaskOutList.begin(); itr != m_paramTaskOutList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramTaskInListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTaskInList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramTaskInList.begin(); itr != m_paramTaskInList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskOutputRegistryListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOutputRegistryList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskOutputRegistryList.begin(); itr != m_taskOutputRegistryList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DependencyTriggerTaskBrief> CreateTriggerTaskSchedulerConfiguration::GetUpstreamDependencyConfigList() const
{
    return m_upstreamDependencyConfigList;
}

void CreateTriggerTaskSchedulerConfiguration::SetUpstreamDependencyConfigList(const vector<DependencyTriggerTaskBrief>& _upstreamDependencyConfigList)
{
    m_upstreamDependencyConfigList = _upstreamDependencyConfigList;
    m_upstreamDependencyConfigListHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::UpstreamDependencyConfigListHasBeenSet() const
{
    return m_upstreamDependencyConfigListHasBeenSet;
}

int64_t CreateTriggerTaskSchedulerConfiguration::GetRunPriorityType() const
{
    return m_runPriorityType;
}

void CreateTriggerTaskSchedulerConfiguration::SetRunPriorityType(const int64_t& _runPriorityType)
{
    m_runPriorityType = _runPriorityType;
    m_runPriorityTypeHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::RunPriorityTypeHasBeenSet() const
{
    return m_runPriorityTypeHasBeenSet;
}

int64_t CreateTriggerTaskSchedulerConfiguration::GetRetryWaitMinute() const
{
    return m_retryWaitMinute;
}

void CreateTriggerTaskSchedulerConfiguration::SetRetryWaitMinute(const int64_t& _retryWaitMinute)
{
    m_retryWaitMinute = _retryWaitMinute;
    m_retryWaitMinuteHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::RetryWaitMinuteHasBeenSet() const
{
    return m_retryWaitMinuteHasBeenSet;
}

int64_t CreateTriggerTaskSchedulerConfiguration::GetMaxRetryNumber() const
{
    return m_maxRetryNumber;
}

void CreateTriggerTaskSchedulerConfiguration::SetMaxRetryNumber(const int64_t& _maxRetryNumber)
{
    m_maxRetryNumber = _maxRetryNumber;
    m_maxRetryNumberHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::MaxRetryNumberHasBeenSet() const
{
    return m_maxRetryNumberHasBeenSet;
}

int64_t CreateTriggerTaskSchedulerConfiguration::GetExecutionTTLMinute() const
{
    return m_executionTTLMinute;
}

void CreateTriggerTaskSchedulerConfiguration::SetExecutionTTLMinute(const int64_t& _executionTTLMinute)
{
    m_executionTTLMinute = _executionTTLMinute;
    m_executionTTLMinuteHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::ExecutionTTLMinuteHasBeenSet() const
{
    return m_executionTTLMinuteHasBeenSet;
}

int64_t CreateTriggerTaskSchedulerConfiguration::GetWaitExecutionTotalTTLMinute() const
{
    return m_waitExecutionTotalTTLMinute;
}

void CreateTriggerTaskSchedulerConfiguration::SetWaitExecutionTotalTTLMinute(const int64_t& _waitExecutionTotalTTLMinute)
{
    m_waitExecutionTotalTTLMinute = _waitExecutionTotalTTLMinute;
    m_waitExecutionTotalTTLMinuteHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::WaitExecutionTotalTTLMinuteHasBeenSet() const
{
    return m_waitExecutionTotalTTLMinuteHasBeenSet;
}

string CreateTriggerTaskSchedulerConfiguration::GetAllowRedoType() const
{
    return m_allowRedoType;
}

void CreateTriggerTaskSchedulerConfiguration::SetAllowRedoType(const string& _allowRedoType)
{
    m_allowRedoType = _allowRedoType;
    m_allowRedoTypeHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::AllowRedoTypeHasBeenSet() const
{
    return m_allowRedoTypeHasBeenSet;
}

vector<OutTaskParameter> CreateTriggerTaskSchedulerConfiguration::GetParamTaskOutList() const
{
    return m_paramTaskOutList;
}

void CreateTriggerTaskSchedulerConfiguration::SetParamTaskOutList(const vector<OutTaskParameter>& _paramTaskOutList)
{
    m_paramTaskOutList = _paramTaskOutList;
    m_paramTaskOutListHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::ParamTaskOutListHasBeenSet() const
{
    return m_paramTaskOutListHasBeenSet;
}

vector<InTaskParameter> CreateTriggerTaskSchedulerConfiguration::GetParamTaskInList() const
{
    return m_paramTaskInList;
}

void CreateTriggerTaskSchedulerConfiguration::SetParamTaskInList(const vector<InTaskParameter>& _paramTaskInList)
{
    m_paramTaskInList = _paramTaskInList;
    m_paramTaskInListHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::ParamTaskInListHasBeenSet() const
{
    return m_paramTaskInListHasBeenSet;
}

vector<TaskDataRegistry> CreateTriggerTaskSchedulerConfiguration::GetTaskOutputRegistryList() const
{
    return m_taskOutputRegistryList;
}

void CreateTriggerTaskSchedulerConfiguration::SetTaskOutputRegistryList(const vector<TaskDataRegistry>& _taskOutputRegistryList)
{
    m_taskOutputRegistryList = _taskOutputRegistryList;
    m_taskOutputRegistryListHasBeenSet = true;
}

bool CreateTriggerTaskSchedulerConfiguration::TaskOutputRegistryListHasBeenSet() const
{
    return m_taskOutputRegistryListHasBeenSet;
}

