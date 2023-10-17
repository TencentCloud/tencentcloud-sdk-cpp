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

#include <tencentcloud/wedata/v20210820/model/OfflineTaskAddParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OfflineTaskAddParam::OfflineTaskAddParam() :
    m_workflowNameHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_retriableHasBeenSet(false),
    m_tryLimitHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_taskAutoSubmitHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false)
{
}

CoreInternalOutcome OfflineTaskAddParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.CycleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = value["CycleType"].GetUint64();
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.CycleStep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetUint64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.RetryWait` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetUint64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("Retriable") && !value["Retriable"].IsNull())
    {
        if (!value["Retriable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.Retriable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retriable = value["Retriable"].GetUint64();
        m_retriableHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.TryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetUint64();
        m_tryLimitHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.RunPriority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetUint64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.SelfDepend` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = value["SelfDepend"].GetUint64();
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskAutoSubmit") && !value["TaskAutoSubmit"].IsNull())
    {
        if (!value["TaskAutoSubmit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.TaskAutoSubmit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskAutoSubmit = value["TaskAutoSubmit"].GetBool();
        m_taskAutoSubmitHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTaskAddParam.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OfflineTaskAddParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryWait, allocator);
    }

    if (m_retriableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retriable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retriable, allocator);
    }

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryLimit, allocator);
    }

    if (m_runPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runPriority, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfDepend, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskAutoSubmitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAutoSubmit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskAutoSubmit, allocator);
    }

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

}


string OfflineTaskAddParam::GetWorkflowName() const
{
    return m_workflowName;
}

void OfflineTaskAddParam::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool OfflineTaskAddParam::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string OfflineTaskAddParam::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void OfflineTaskAddParam::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool OfflineTaskAddParam::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string OfflineTaskAddParam::GetStartTime() const
{
    return m_startTime;
}

void OfflineTaskAddParam::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool OfflineTaskAddParam::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string OfflineTaskAddParam::GetEndTime() const
{
    return m_endTime;
}

void OfflineTaskAddParam::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool OfflineTaskAddParam::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetCycleType() const
{
    return m_cycleType;
}

void OfflineTaskAddParam::SetCycleType(const uint64_t& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool OfflineTaskAddParam::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetCycleStep() const
{
    return m_cycleStep;
}

void OfflineTaskAddParam::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool OfflineTaskAddParam::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetDelayTime() const
{
    return m_delayTime;
}

void OfflineTaskAddParam::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool OfflineTaskAddParam::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string OfflineTaskAddParam::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void OfflineTaskAddParam::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool OfflineTaskAddParam::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetRetryWait() const
{
    return m_retryWait;
}

void OfflineTaskAddParam::SetRetryWait(const uint64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool OfflineTaskAddParam::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetRetriable() const
{
    return m_retriable;
}

void OfflineTaskAddParam::SetRetriable(const uint64_t& _retriable)
{
    m_retriable = _retriable;
    m_retriableHasBeenSet = true;
}

bool OfflineTaskAddParam::RetriableHasBeenSet() const
{
    return m_retriableHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetTryLimit() const
{
    return m_tryLimit;
}

void OfflineTaskAddParam::SetTryLimit(const uint64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool OfflineTaskAddParam::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetRunPriority() const
{
    return m_runPriority;
}

void OfflineTaskAddParam::SetRunPriority(const uint64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool OfflineTaskAddParam::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

string OfflineTaskAddParam::GetProductName() const
{
    return m_productName;
}

void OfflineTaskAddParam::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool OfflineTaskAddParam::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t OfflineTaskAddParam::GetSelfDepend() const
{
    return m_selfDepend;
}

void OfflineTaskAddParam::SetSelfDepend(const uint64_t& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool OfflineTaskAddParam::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string OfflineTaskAddParam::GetTaskAction() const
{
    return m_taskAction;
}

void OfflineTaskAddParam::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool OfflineTaskAddParam::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string OfflineTaskAddParam::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void OfflineTaskAddParam::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool OfflineTaskAddParam::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string OfflineTaskAddParam::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void OfflineTaskAddParam::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool OfflineTaskAddParam::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

bool OfflineTaskAddParam::GetTaskAutoSubmit() const
{
    return m_taskAutoSubmit;
}

void OfflineTaskAddParam::SetTaskAutoSubmit(const bool& _taskAutoSubmit)
{
    m_taskAutoSubmit = _taskAutoSubmit;
    m_taskAutoSubmitHasBeenSet = true;
}

bool OfflineTaskAddParam::TaskAutoSubmitHasBeenSet() const
{
    return m_taskAutoSubmitHasBeenSet;
}

string OfflineTaskAddParam::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void OfflineTaskAddParam::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool OfflineTaskAddParam::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

