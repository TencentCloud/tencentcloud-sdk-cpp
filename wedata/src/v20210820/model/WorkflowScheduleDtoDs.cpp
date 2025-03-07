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

#include <tencentcloud/wedata/v20210820/model/WorkflowScheduleDtoDs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

WorkflowScheduleDtoDs::WorkflowScheduleDtoDs() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createrHasBeenSet(false),
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
    m_dependencyWorkflowHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_firstSubmitTimeHasBeenSet(false),
    m_latestSubmitTimeHasBeenSet(false),
    m_calendarOpenHasBeenSet(false),
    m_calendarNameHasBeenSet(false),
    m_calendarIdHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowScheduleDtoDs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creater") && !value["Creater"].IsNull())
    {
        if (!value["Creater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.Creater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creater = string(value["Creater"].GetString());
        m_createrHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("StartupTime") && !value["StartupTime"].IsNull())
    {
        if (!value["StartupTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.StartupTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = value["StartupTime"].GetInt64();
        m_startupTimeHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CycleStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetInt64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceInitStrategy") && !value["InstanceInitStrategy"].IsNull())
    {
        if (!value["InstanceInitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.InstanceInitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceInitStrategy = string(value["InstanceInitStrategy"].GetString());
        m_instanceInitStrategyHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("FirstSubmitTime") && !value["FirstSubmitTime"].IsNull())
    {
        if (!value["FirstSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.FirstSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSubmitTime = string(value["FirstSubmitTime"].GetString());
        m_firstSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestSubmitTime") && !value["LatestSubmitTime"].IsNull())
    {
        if (!value["LatestSubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.LatestSubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestSubmitTime = string(value["LatestSubmitTime"].GetString());
        m_latestSubmitTimeHasBeenSet = true;
    }

    if (value.HasMember("CalendarOpen") && !value["CalendarOpen"].IsNull())
    {
        if (!value["CalendarOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CalendarOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarOpen = string(value["CalendarOpen"].GetString());
        m_calendarOpenHasBeenSet = true;
    }

    if (value.HasMember("CalendarName") && !value["CalendarName"].IsNull())
    {
        if (!value["CalendarName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CalendarName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarName = string(value["CalendarName"].GetString());
        m_calendarNameHasBeenSet = true;
    }

    if (value.HasMember("CalendarId") && !value["CalendarId"].IsNull())
    {
        if (!value["CalendarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.CalendarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarId = string(value["CalendarId"].GetString());
        m_calendarIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowScheduleDtoDs.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowScheduleDtoDs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creater.c_str(), allocator).Move(), allocator);
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

    if (m_calendarOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calendarOpen.c_str(), allocator).Move(), allocator);
    }

    if (m_calendarNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calendarName.c_str(), allocator).Move(), allocator);
    }

    if (m_calendarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calendarId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowScheduleDtoDs::GetProjectId() const
{
    return m_projectId;
}

void WorkflowScheduleDtoDs::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string WorkflowScheduleDtoDs::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowScheduleDtoDs::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowScheduleDtoDs::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCreater() const
{
    return m_creater;
}

void WorkflowScheduleDtoDs::SetCreater(const string& _creater)
{
    m_creater = _creater;
    m_createrHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CreaterHasBeenSet() const
{
    return m_createrHasBeenSet;
}

string WorkflowScheduleDtoDs::GetModifyTime() const
{
    return m_modifyTime;
}

void WorkflowScheduleDtoDs::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t WorkflowScheduleDtoDs::GetDelayTime() const
{
    return m_delayTime;
}

void WorkflowScheduleDtoDs::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

int64_t WorkflowScheduleDtoDs::GetStartupTime() const
{
    return m_startupTime;
}

void WorkflowScheduleDtoDs::SetStartupTime(const int64_t& _startupTime)
{
    m_startupTime = _startupTime;
    m_startupTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetSelfDepend() const
{
    return m_selfDepend;
}

void WorkflowScheduleDtoDs::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string WorkflowScheduleDtoDs::GetStartTime() const
{
    return m_startTime;
}

void WorkflowScheduleDtoDs::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetEndTime() const
{
    return m_endTime;
}

void WorkflowScheduleDtoDs::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetTaskAction() const
{
    return m_taskAction;
}

void WorkflowScheduleDtoDs::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCycleType() const
{
    return m_cycleType;
}

void WorkflowScheduleDtoDs::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t WorkflowScheduleDtoDs::GetCycleStep() const
{
    return m_cycleStep;
}

void WorkflowScheduleDtoDs::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void WorkflowScheduleDtoDs::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string WorkflowScheduleDtoDs::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void WorkflowScheduleDtoDs::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void WorkflowScheduleDtoDs::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void WorkflowScheduleDtoDs::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string WorkflowScheduleDtoDs::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void WorkflowScheduleDtoDs::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string WorkflowScheduleDtoDs::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void WorkflowScheduleDtoDs::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string WorkflowScheduleDtoDs::GetFirstSubmitTime() const
{
    return m_firstSubmitTime;
}

void WorkflowScheduleDtoDs::SetFirstSubmitTime(const string& _firstSubmitTime)
{
    m_firstSubmitTime = _firstSubmitTime;
    m_firstSubmitTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::FirstSubmitTimeHasBeenSet() const
{
    return m_firstSubmitTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetLatestSubmitTime() const
{
    return m_latestSubmitTime;
}

void WorkflowScheduleDtoDs::SetLatestSubmitTime(const string& _latestSubmitTime)
{
    m_latestSubmitTime = _latestSubmitTime;
    m_latestSubmitTimeHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::LatestSubmitTimeHasBeenSet() const
{
    return m_latestSubmitTimeHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCalendarOpen() const
{
    return m_calendarOpen;
}

void WorkflowScheduleDtoDs::SetCalendarOpen(const string& _calendarOpen)
{
    m_calendarOpen = _calendarOpen;
    m_calendarOpenHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CalendarOpenHasBeenSet() const
{
    return m_calendarOpenHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCalendarName() const
{
    return m_calendarName;
}

void WorkflowScheduleDtoDs::SetCalendarName(const string& _calendarName)
{
    m_calendarName = _calendarName;
    m_calendarNameHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CalendarNameHasBeenSet() const
{
    return m_calendarNameHasBeenSet;
}

string WorkflowScheduleDtoDs::GetCalendarId() const
{
    return m_calendarId;
}

void WorkflowScheduleDtoDs::SetCalendarId(const string& _calendarId)
{
    m_calendarId = _calendarId;
    m_calendarIdHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::CalendarIdHasBeenSet() const
{
    return m_calendarIdHasBeenSet;
}

string WorkflowScheduleDtoDs::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void WorkflowScheduleDtoDs::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool WorkflowScheduleDtoDs::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

