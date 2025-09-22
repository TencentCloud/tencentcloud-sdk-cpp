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

#include <tencentcloud/wedata/v20250806/model/WorkflowSchedulerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowSchedulerConfiguration::WorkflowSchedulerConfiguration() :
    m_scheduleTimeZoneHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_calendarOpenHasBeenSet(false),
    m_calendarNameHasBeenSet(false),
    m_calendarIdHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowSchedulerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("CalendarOpen") && !value["CalendarOpen"].IsNull())
    {
        if (!value["CalendarOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.CalendarOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarOpen = string(value["CalendarOpen"].GetString());
        m_calendarOpenHasBeenSet = true;
    }

    if (value.HasMember("CalendarName") && !value["CalendarName"].IsNull())
    {
        if (!value["CalendarName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.CalendarName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarName = string(value["CalendarName"].GetString());
        m_calendarNameHasBeenSet = true;
    }

    if (value.HasMember("CalendarId") && !value["CalendarId"].IsNull())
    {
        if (!value["CalendarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfiguration.CalendarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarId = string(value["CalendarId"].GetString());
        m_calendarIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowSchedulerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
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

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
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

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
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

}


string WorkflowSchedulerConfiguration::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void WorkflowSchedulerConfiguration::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetCycleType() const
{
    return m_cycleType;
}

void WorkflowSchedulerConfiguration::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetSelfDepend() const
{
    return m_selfDepend;
}

void WorkflowSchedulerConfiguration::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetStartTime() const
{
    return m_startTime;
}

void WorkflowSchedulerConfiguration::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetEndTime() const
{
    return m_endTime;
}

void WorkflowSchedulerConfiguration::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void WorkflowSchedulerConfiguration::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void WorkflowSchedulerConfiguration::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void WorkflowSchedulerConfiguration::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void WorkflowSchedulerConfiguration::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetCalendarOpen() const
{
    return m_calendarOpen;
}

void WorkflowSchedulerConfiguration::SetCalendarOpen(const string& _calendarOpen)
{
    m_calendarOpen = _calendarOpen;
    m_calendarOpenHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::CalendarOpenHasBeenSet() const
{
    return m_calendarOpenHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetCalendarName() const
{
    return m_calendarName;
}

void WorkflowSchedulerConfiguration::SetCalendarName(const string& _calendarName)
{
    m_calendarName = _calendarName;
    m_calendarNameHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::CalendarNameHasBeenSet() const
{
    return m_calendarNameHasBeenSet;
}

string WorkflowSchedulerConfiguration::GetCalendarId() const
{
    return m_calendarId;
}

void WorkflowSchedulerConfiguration::SetCalendarId(const string& _calendarId)
{
    m_calendarId = _calendarId;
    m_calendarIdHasBeenSet = true;
}

bool WorkflowSchedulerConfiguration::CalendarIdHasBeenSet() const
{
    return m_calendarIdHasBeenSet;
}

