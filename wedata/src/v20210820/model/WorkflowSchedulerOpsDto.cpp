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

#include <tencentcloud/wedata/v20210820/model/WorkflowSchedulerOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowSchedulerOpsDto::WorkflowSchedulerOpsDto() :
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_firstSubmitTimeHasBeenSet(false),
    m_latestSubmitTimeHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowSchedulerOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.StartupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetUint64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.CycleStep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetUint64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestSubmitTime") && !value["LatestSubmitTime"].IsNull())
    {
        if (!value["LatestSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerOpsDto.LatestSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSubmitTime = string(value["LatestSubmitTime"].GetString());
        m_latestSubmitTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowSchedulerOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startupTime, allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfDepend.c_str(), allocator).Move(), allocator);
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

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
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

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_firstSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstSubmitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestSubmitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestSubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestSubmitTime.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowSchedulerOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowSchedulerOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetCreator() const
{
    return m_creator;
}

void WorkflowSchedulerOpsDto::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetModifyTime() const
{
    return m_modifyTime;
}

void WorkflowSchedulerOpsDto::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t WorkflowSchedulerOpsDto::GetDelayTime() const
{
    return m_delayTime;
}

void WorkflowSchedulerOpsDto::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t WorkflowSchedulerOpsDto::GetStartupTime() const
{
    return m_startupTime;
}

void WorkflowSchedulerOpsDto::SetStartupTime(const uint64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetSelfDepend() const
{
    return m_selfDepend;
}

void WorkflowSchedulerOpsDto::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetStartTime() const
{
    return m_startTime;
}

void WorkflowSchedulerOpsDto::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetEndTime() const
{
    return m_endTime;
}

void WorkflowSchedulerOpsDto::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetTaskAction() const
{
    return m_taskAction;
}

void WorkflowSchedulerOpsDto::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetCycleType() const
{
    return m_cycleType;
}

void WorkflowSchedulerOpsDto::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t WorkflowSchedulerOpsDto::GetCycleStep() const
{
    return m_cycleStep;
}

void WorkflowSchedulerOpsDto::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void WorkflowSchedulerOpsDto::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void WorkflowSchedulerOpsDto::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void WorkflowSchedulerOpsDto::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void WorkflowSchedulerOpsDto::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowSchedulerOpsDto::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void WorkflowSchedulerOpsDto::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void WorkflowSchedulerOpsDto::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void WorkflowSchedulerOpsDto::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string WorkflowSchedulerOpsDto::GetLatestSubmitTime() const
{
    return m_latestSubmitTime;
}

void WorkflowSchedulerOpsDto::SetLatestSubmitTime(const string& _latestSubmitTime)
{
    m_latestSubmitTime = _latestSubmitTime;
    m_latestSubmitTimeHasBeenSet = true;
}

bool WorkflowSchedulerOpsDto::LatestSubmitTimeHasBeenSet() const
{
    return m_latestSubmitTimeHasBeenSet;
}

