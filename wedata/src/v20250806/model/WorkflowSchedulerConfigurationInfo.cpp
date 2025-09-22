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

#include <tencentcloud/wedata/v20250806/model/WorkflowSchedulerConfigurationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowSchedulerConfigurationInfo::WorkflowSchedulerConfigurationInfo() :
    m_scheduleTimeZoneHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_dependencyWorkflowHasBeenSet(false),
    m_modifyCycleValueHasBeenSet(false),
    m_clearLinkHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_calendarOpenHasBeenSet(false),
    m_calendarIdHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowSchedulerConfigurationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("DependencyWorkflow") && !value["DependencyWorkflow"].IsNull())
    {
        if (!value["DependencyWorkflow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.DependencyWorkflow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependencyWorkflow = string(value["DependencyWorkflow"].GetString());
        m_dependencyWorkflowHasBeenSet = true;
    }

    if (value.HasMember("ModifyCycleValue") && !value["ModifyCycleValue"].IsNull())
    {
        if (!value["ModifyCycleValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.ModifyCycleValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyCycleValue = string(value["ModifyCycleValue"].GetString());
        m_modifyCycleValueHasBeenSet = true;
    }

    if (value.HasMember("ClearLink") && !value["ClearLink"].IsNull())
    {
        if (!value["ClearLink"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.ClearLink` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_clearLink = value["ClearLink"].GetBool();
        m_clearLinkHasBeenSet = true;
    }

    if (value.HasMember("MainCyclicConfig") && !value["MainCyclicConfig"].IsNull())
    {
        if (!value["MainCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("CalendarOpen") && !value["CalendarOpen"].IsNull())
    {
        if (!value["CalendarOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.CalendarOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarOpen = string(value["CalendarOpen"].GetString());
        m_calendarOpenHasBeenSet = true;
    }

    if (value.HasMember("CalendarId") && !value["CalendarId"].IsNull())
    {
        if (!value["CalendarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowSchedulerConfigurationInfo.CalendarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarId = string(value["CalendarId"].GetString());
        m_calendarIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowSchedulerConfigurationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_dependencyWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependencyWorkflow.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyCycleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyCycleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyCycleValue.c_str(), allocator).Move(), allocator);
    }

    if (m_clearLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clearLink, allocator);
    }

    if (m_mainCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_subordinateCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubordinateCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subordinateCyclicConfig.c_str(), allocator).Move(), allocator);
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

    if (m_calendarOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calendarOpen.c_str(), allocator).Move(), allocator);
    }

    if (m_calendarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calendarId.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowSchedulerConfigurationInfo::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void WorkflowSchedulerConfigurationInfo::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetCycleType() const
{
    return m_cycleType;
}

void WorkflowSchedulerConfigurationInfo::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetSelfDepend() const
{
    return m_selfDepend;
}

void WorkflowSchedulerConfigurationInfo::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetStartTime() const
{
    return m_startTime;
}

void WorkflowSchedulerConfigurationInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetEndTime() const
{
    return m_endTime;
}

void WorkflowSchedulerConfigurationInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void WorkflowSchedulerConfigurationInfo::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetDependencyWorkflow() const
{
    return m_dependencyWorkflow;
}

void WorkflowSchedulerConfigurationInfo::SetDependencyWorkflow(const string& _dependencyWorkflow)
{
    m_dependencyWorkflow = _dependencyWorkflow;
    m_dependencyWorkflowHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::DependencyWorkflowHasBeenSet() const
{
    return m_dependencyWorkflowHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetModifyCycleValue() const
{
    return m_modifyCycleValue;
}

void WorkflowSchedulerConfigurationInfo::SetModifyCycleValue(const string& _modifyCycleValue)
{
    m_modifyCycleValue = _modifyCycleValue;
    m_modifyCycleValueHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::ModifyCycleValueHasBeenSet() const
{
    return m_modifyCycleValueHasBeenSet;
}

bool WorkflowSchedulerConfigurationInfo::GetClearLink() const
{
    return m_clearLink;
}

void WorkflowSchedulerConfigurationInfo::SetClearLink(const bool& _clearLink)
{
    m_clearLink = _clearLink;
    m_clearLinkHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::ClearLinkHasBeenSet() const
{
    return m_clearLinkHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void WorkflowSchedulerConfigurationInfo::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void WorkflowSchedulerConfigurationInfo::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void WorkflowSchedulerConfigurationInfo::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void WorkflowSchedulerConfigurationInfo::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetCalendarOpen() const
{
    return m_calendarOpen;
}

void WorkflowSchedulerConfigurationInfo::SetCalendarOpen(const string& _calendarOpen)
{
    m_calendarOpen = _calendarOpen;
    m_calendarOpenHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::CalendarOpenHasBeenSet() const
{
    return m_calendarOpenHasBeenSet;
}

string WorkflowSchedulerConfigurationInfo::GetCalendarId() const
{
    return m_calendarId;
}

void WorkflowSchedulerConfigurationInfo::SetCalendarId(const string& _calendarId)
{
    m_calendarId = _calendarId;
    m_calendarIdHasBeenSet = true;
}

bool WorkflowSchedulerConfigurationInfo::CalendarIdHasBeenSet() const
{
    return m_calendarIdHasBeenSet;
}

