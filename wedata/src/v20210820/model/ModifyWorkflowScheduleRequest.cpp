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

#include <tencentcloud/wedata/v20210820/model/ModifyWorkflowScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyWorkflowScheduleRequest::ModifyWorkflowScheduleRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false)
{
}

string ModifyWorkflowScheduleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startupTime, allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_selfDepend, allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWorkflowScheduleRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyWorkflowScheduleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ModifyWorkflowScheduleRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

int64_t ModifyWorkflowScheduleRequest::GetDelayTime() const
{
    return m_delayTime;
}

void ModifyWorkflowScheduleRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

int64_t ModifyWorkflowScheduleRequest::GetStartupTime() const
{
    return m_startupTime;
}

void ModifyWorkflowScheduleRequest::SetStartupTime(const int64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

int64_t ModifyWorkflowScheduleRequest::GetSelfDepend() const
{
    return m_selfDepend;
}

void ModifyWorkflowScheduleRequest::SetSelfDepend(const int64_t& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

int64_t ModifyWorkflowScheduleRequest::GetCycleType() const
{
    return m_cycleType;
}

void ModifyWorkflowScheduleRequest::SetCycleType(const int64_t& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t ModifyWorkflowScheduleRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void ModifyWorkflowScheduleRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyWorkflowScheduleRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyWorkflowScheduleRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetTaskAction() const
{
    return m_taskAction;
}

void ModifyWorkflowScheduleRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void ModifyWorkflowScheduleRequest::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void ModifyWorkflowScheduleRequest::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void ModifyWorkflowScheduleRequest::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string ModifyWorkflowScheduleRequest::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void ModifyWorkflowScheduleRequest::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool ModifyWorkflowScheduleRequest::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}


