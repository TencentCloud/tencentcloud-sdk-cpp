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

#include <tencentcloud/wedata/v20250806/model/CreateTaskSchedulerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateTaskSchedulerConfiguration::CreateTaskSchedulerConfiguration() :
    m_cycleTypeHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false),
    m_scheduleRunTypeHasBeenSet(false),
    m_calendarOpenHasBeenSet(false),
    m_calendarIdHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_upstreamDependencyConfigListHasBeenSet(false),
    m_eventListenerListHasBeenSet(false),
    m_runPriorityHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_maxRetryAttemptsHasBeenSet(false),
    m_executionTTLHasBeenSet(false),
    m_waitExecutionTotalTTLHasBeenSet(false),
    m_allowRedoTypeHasBeenSet(false),
    m_paramTaskOutListHasBeenSet(false),
    m_paramTaskInListHasBeenSet(false),
    m_taskOutputRegistryListHasBeenSet(false),
    m_initStrategyHasBeenSet(false)
{
}

CoreInternalOutcome CreateTaskSchedulerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleRunType") && !value["ScheduleRunType"].IsNull())
    {
        if (!value["ScheduleRunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ScheduleRunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleRunType = string(value["ScheduleRunType"].GetString());
        m_scheduleRunTypeHasBeenSet = true;
    }

    if (value.HasMember("CalendarOpen") && !value["CalendarOpen"].IsNull())
    {
        if (!value["CalendarOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.CalendarOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarOpen = string(value["CalendarOpen"].GetString());
        m_calendarOpenHasBeenSet = true;
    }

    if (value.HasMember("CalendarId") && !value["CalendarId"].IsNull())
    {
        if (!value["CalendarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.CalendarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarId = string(value["CalendarId"].GetString());
        m_calendarIdHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDependencyConfigList") && !value["UpstreamDependencyConfigList"].IsNull())
    {
        if (!value["UpstreamDependencyConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.UpstreamDependencyConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamDependencyConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependencyTaskBrief item;
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

    if (value.HasMember("EventListenerList") && !value["EventListenerList"].IsNull())
    {
        if (!value["EventListenerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.EventListenerList` is not array type"));

        const rapidjson::Value &tmpValue = value["EventListenerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventListener item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventListenerList.push_back(item);
        }
        m_eventListenerListHasBeenSet = true;
    }

    if (value.HasMember("RunPriority") && !value["RunPriority"].IsNull())
    {
        if (!value["RunPriority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.RunPriority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = string(value["RunPriority"].GetString());
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.RetryWait` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = string(value["RetryWait"].GetString());
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryAttempts") && !value["MaxRetryAttempts"].IsNull())
    {
        if (!value["MaxRetryAttempts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.MaxRetryAttempts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryAttempts = string(value["MaxRetryAttempts"].GetString());
        m_maxRetryAttemptsHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTTL") && !value["ExecutionTTL"].IsNull())
    {
        if (!value["ExecutionTTL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ExecutionTTL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionTTL = string(value["ExecutionTTL"].GetString());
        m_executionTTLHasBeenSet = true;
    }

    if (value.HasMember("WaitExecutionTotalTTL") && !value["WaitExecutionTotalTTL"].IsNull())
    {
        if (!value["WaitExecutionTotalTTL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.WaitExecutionTotalTTL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitExecutionTotalTTL = string(value["WaitExecutionTotalTTL"].GetString());
        m_waitExecutionTotalTTLHasBeenSet = true;
    }

    if (value.HasMember("AllowRedoType") && !value["AllowRedoType"].IsNull())
    {
        if (!value["AllowRedoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.AllowRedoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowRedoType = string(value["AllowRedoType"].GetString());
        m_allowRedoTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamTaskOutList") && !value["ParamTaskOutList"].IsNull())
    {
        if (!value["ParamTaskOutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ParamTaskOutList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.ParamTaskInList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.TaskOutputRegistryList` is not array type"));

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

    if (value.HasMember("InitStrategy") && !value["InitStrategy"].IsNull())
    {
        if (!value["InitStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTaskSchedulerConfiguration.InitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initStrategy = string(value["InitStrategy"].GetString());
        m_initStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateTaskSchedulerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
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

    if (m_scheduleRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleRunType.c_str(), allocator).Move(), allocator);
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

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfDepend.c_str(), allocator).Move(), allocator);
    }

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

    if (m_eventListenerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventListenerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventListenerList.begin(); itr != m_eventListenerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runPriority.c_str(), allocator).Move(), allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retryWait.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRetryAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxRetryAttempts.c_str(), allocator).Move(), allocator);
    }

    if (m_executionTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionTTL.c_str(), allocator).Move(), allocator);
    }

    if (m_waitExecutionTotalTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitExecutionTotalTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_waitExecutionTotalTTL.c_str(), allocator).Move(), allocator);
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

    if (m_initStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initStrategy.c_str(), allocator).Move(), allocator);
    }

}


string CreateTaskSchedulerConfiguration::GetCycleType() const
{
    return m_cycleType;
}

void CreateTaskSchedulerConfiguration::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void CreateTaskSchedulerConfiguration::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void CreateTaskSchedulerConfiguration::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetStartTime() const
{
    return m_startTime;
}

void CreateTaskSchedulerConfiguration::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetEndTime() const
{
    return m_endTime;
}

void CreateTaskSchedulerConfiguration::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void CreateTaskSchedulerConfiguration::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void CreateTaskSchedulerConfiguration::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetScheduleRunType() const
{
    return m_scheduleRunType;
}

void CreateTaskSchedulerConfiguration::SetScheduleRunType(const string& _scheduleRunType)
{
    m_scheduleRunType = _scheduleRunType;
    m_scheduleRunTypeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ScheduleRunTypeHasBeenSet() const
{
    return m_scheduleRunTypeHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetCalendarOpen() const
{
    return m_calendarOpen;
}

void CreateTaskSchedulerConfiguration::SetCalendarOpen(const string& _calendarOpen)
{
    m_calendarOpen = _calendarOpen;
    m_calendarOpenHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::CalendarOpenHasBeenSet() const
{
    return m_calendarOpenHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetCalendarId() const
{
    return m_calendarId;
}

void CreateTaskSchedulerConfiguration::SetCalendarId(const string& _calendarId)
{
    m_calendarId = _calendarId;
    m_calendarIdHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::CalendarIdHasBeenSet() const
{
    return m_calendarIdHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetSelfDepend() const
{
    return m_selfDepend;
}

void CreateTaskSchedulerConfiguration::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

vector<DependencyTaskBrief> CreateTaskSchedulerConfiguration::GetUpstreamDependencyConfigList() const
{
    return m_upstreamDependencyConfigList;
}

void CreateTaskSchedulerConfiguration::SetUpstreamDependencyConfigList(const vector<DependencyTaskBrief>& _upstreamDependencyConfigList)
{
    m_upstreamDependencyConfigList = _upstreamDependencyConfigList;
    m_upstreamDependencyConfigListHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::UpstreamDependencyConfigListHasBeenSet() const
{
    return m_upstreamDependencyConfigListHasBeenSet;
}

vector<EventListener> CreateTaskSchedulerConfiguration::GetEventListenerList() const
{
    return m_eventListenerList;
}

void CreateTaskSchedulerConfiguration::SetEventListenerList(const vector<EventListener>& _eventListenerList)
{
    m_eventListenerList = _eventListenerList;
    m_eventListenerListHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::EventListenerListHasBeenSet() const
{
    return m_eventListenerListHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetRunPriority() const
{
    return m_runPriority;
}

void CreateTaskSchedulerConfiguration::SetRunPriority(const string& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetRetryWait() const
{
    return m_retryWait;
}

void CreateTaskSchedulerConfiguration::SetRetryWait(const string& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetMaxRetryAttempts() const
{
    return m_maxRetryAttempts;
}

void CreateTaskSchedulerConfiguration::SetMaxRetryAttempts(const string& _maxRetryAttempts)
{
    m_maxRetryAttempts = _maxRetryAttempts;
    m_maxRetryAttemptsHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::MaxRetryAttemptsHasBeenSet() const
{
    return m_maxRetryAttemptsHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetExecutionTTL() const
{
    return m_executionTTL;
}

void CreateTaskSchedulerConfiguration::SetExecutionTTL(const string& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetWaitExecutionTotalTTL() const
{
    return m_waitExecutionTotalTTL;
}

void CreateTaskSchedulerConfiguration::SetWaitExecutionTotalTTL(const string& _waitExecutionTotalTTL)
{
    m_waitExecutionTotalTTL = _waitExecutionTotalTTL;
    m_waitExecutionTotalTTLHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::WaitExecutionTotalTTLHasBeenSet() const
{
    return m_waitExecutionTotalTTLHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetAllowRedoType() const
{
    return m_allowRedoType;
}

void CreateTaskSchedulerConfiguration::SetAllowRedoType(const string& _allowRedoType)
{
    m_allowRedoType = _allowRedoType;
    m_allowRedoTypeHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::AllowRedoTypeHasBeenSet() const
{
    return m_allowRedoTypeHasBeenSet;
}

vector<OutTaskParameter> CreateTaskSchedulerConfiguration::GetParamTaskOutList() const
{
    return m_paramTaskOutList;
}

void CreateTaskSchedulerConfiguration::SetParamTaskOutList(const vector<OutTaskParameter>& _paramTaskOutList)
{
    m_paramTaskOutList = _paramTaskOutList;
    m_paramTaskOutListHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ParamTaskOutListHasBeenSet() const
{
    return m_paramTaskOutListHasBeenSet;
}

vector<InTaskParameter> CreateTaskSchedulerConfiguration::GetParamTaskInList() const
{
    return m_paramTaskInList;
}

void CreateTaskSchedulerConfiguration::SetParamTaskInList(const vector<InTaskParameter>& _paramTaskInList)
{
    m_paramTaskInList = _paramTaskInList;
    m_paramTaskInListHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::ParamTaskInListHasBeenSet() const
{
    return m_paramTaskInListHasBeenSet;
}

vector<TaskDataRegistry> CreateTaskSchedulerConfiguration::GetTaskOutputRegistryList() const
{
    return m_taskOutputRegistryList;
}

void CreateTaskSchedulerConfiguration::SetTaskOutputRegistryList(const vector<TaskDataRegistry>& _taskOutputRegistryList)
{
    m_taskOutputRegistryList = _taskOutputRegistryList;
    m_taskOutputRegistryListHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::TaskOutputRegistryListHasBeenSet() const
{
    return m_taskOutputRegistryListHasBeenSet;
}

string CreateTaskSchedulerConfiguration::GetInitStrategy() const
{
    return m_initStrategy;
}

void CreateTaskSchedulerConfiguration::SetInitStrategy(const string& _initStrategy)
{
    m_initStrategy = _initStrategy;
    m_initStrategyHasBeenSet = true;
}

bool CreateTaskSchedulerConfiguration::InitStrategyHasBeenSet() const
{
    return m_initStrategyHasBeenSet;
}

