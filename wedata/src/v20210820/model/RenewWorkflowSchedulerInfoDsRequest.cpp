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

#include <tencentcloud/wedata/v20210820/model/RenewWorkflowSchedulerInfoDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RenewWorkflowSchedulerInfoDsRequest::RenewWorkflowSchedulerInfoDsRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_modifyCycleValueHasBeenSet(false),
    m_calendarOpenHasBeenSet(false),
    m_calendarNameHasBeenSet(false),
    m_calendarIdHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_clearLinkHasBeenSet(false)
{
}

string RenewWorkflowSchedulerInfoDsRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_selfDepend.c_str(), allocator).Move(), allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
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

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyCycleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyCycleValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyCycleValue.c_str(), allocator).Move(), allocator);
    }

    if (m_calendarOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarOpen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_calendarOpen.c_str(), allocator).Move(), allocator);
    }

    if (m_calendarNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_calendarName.c_str(), allocator).Move(), allocator);
    }

    if (m_calendarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_calendarId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_clearLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearLink";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearLink, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewWorkflowSchedulerInfoDsRequest::GetProjectId() const
{
    return m_projectId;
}

void RenewWorkflowSchedulerInfoDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void RenewWorkflowSchedulerInfoDsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

uint64_t RenewWorkflowSchedulerInfoDsRequest::GetDelayTime() const
{
    return m_delayTime;
}

void RenewWorkflowSchedulerInfoDsRequest::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t RenewWorkflowSchedulerInfoDsRequest::GetStartupTime() const
{
    return m_startupTime;
}

void RenewWorkflowSchedulerInfoDsRequest::SetStartupTime(const uint64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetSelfDepend() const
{
    return m_selfDepend;
}

void RenewWorkflowSchedulerInfoDsRequest::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetStartTime() const
{
    return m_startTime;
}

void RenewWorkflowSchedulerInfoDsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetEndTime() const
{
    return m_endTime;
}

void RenewWorkflowSchedulerInfoDsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetTaskAction() const
{
    return m_taskAction;
}

void RenewWorkflowSchedulerInfoDsRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetCycleType() const
{
    return m_cycleType;
}

void RenewWorkflowSchedulerInfoDsRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t RenewWorkflowSchedulerInfoDsRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void RenewWorkflowSchedulerInfoDsRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void RenewWorkflowSchedulerInfoDsRequest::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void RenewWorkflowSchedulerInfoDsRequest::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void RenewWorkflowSchedulerInfoDsRequest::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void RenewWorkflowSchedulerInfoDsRequest::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void RenewWorkflowSchedulerInfoDsRequest::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetModifyCycleValue() const
{
    return m_modifyCycleValue;
}

void RenewWorkflowSchedulerInfoDsRequest::SetModifyCycleValue(const string& _modifyCycleValue)
{
    m_modifyCycleValue = _modifyCycleValue;
    m_modifyCycleValueHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::ModifyCycleValueHasBeenSet() const
{
    return m_modifyCycleValueHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetCalendarOpen() const
{
    return m_calendarOpen;
}

void RenewWorkflowSchedulerInfoDsRequest::SetCalendarOpen(const string& _calendarOpen)
{
    m_calendarOpen = _calendarOpen;
    m_calendarOpenHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::CalendarOpenHasBeenSet() const
{
    return m_calendarOpenHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetCalendarName() const
{
    return m_calendarName;
}

void RenewWorkflowSchedulerInfoDsRequest::SetCalendarName(const string& _calendarName)
{
    m_calendarName = _calendarName;
    m_calendarNameHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::CalendarNameHasBeenSet() const
{
    return m_calendarNameHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetCalendarId() const
{
    return m_calendarId;
}

void RenewWorkflowSchedulerInfoDsRequest::SetCalendarId(const string& _calendarId)
{
    m_calendarId = _calendarId;
    m_calendarIdHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::CalendarIdHasBeenSet() const
{
    return m_calendarIdHasBeenSet;
}

string RenewWorkflowSchedulerInfoDsRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void RenewWorkflowSchedulerInfoDsRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

bool RenewWorkflowSchedulerInfoDsRequest::GetClearLink() const
{
    return m_clearLink;
}

void RenewWorkflowSchedulerInfoDsRequest::SetClearLink(const bool& _clearLink)
{
    m_clearLink = _clearLink;
    m_clearLinkHasBeenSet = true;
}

bool RenewWorkflowSchedulerInfoDsRequest::ClearLinkHasBeenSet() const
{
    return m_clearLinkHasBeenSet;
}


