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

#include <tencentcloud/wedata/v20250806/model/TaskSchedulerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskSchedulerConfiguration::TaskSchedulerConfiguration() :
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
    m_calendarNameHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_upstreamDependencyConfigListHasBeenSet(false),
    m_downStreamDependencyConfigListHasBeenSet(false),
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

CoreInternalOutcome TaskSchedulerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleRunType") && !value["ScheduleRunType"].IsNull())
    {
        if (!value["ScheduleRunType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ScheduleRunType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleRunType = value["ScheduleRunType"].GetInt64();
        m_scheduleRunTypeHasBeenSet = true;
    }

    if (value.HasMember("CalendarOpen") && !value["CalendarOpen"].IsNull())
    {
        if (!value["CalendarOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.CalendarOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarOpen = string(value["CalendarOpen"].GetString());
        m_calendarOpenHasBeenSet = true;
    }

    if (value.HasMember("CalendarId") && !value["CalendarId"].IsNull())
    {
        if (!value["CalendarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.CalendarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarId = string(value["CalendarId"].GetString());
        m_calendarIdHasBeenSet = true;
    }

    if (value.HasMember("CalendarName") && !value["CalendarName"].IsNull())
    {
        if (!value["CalendarName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.CalendarName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calendarName = string(value["CalendarName"].GetString());
        m_calendarNameHasBeenSet = true;
    }

    if (value.HasMember("SelfDepend") && !value["SelfDepend"].IsNull())
    {
        if (!value["SelfDepend"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.SelfDepend` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfDepend = string(value["SelfDepend"].GetString());
        m_selfDependHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDependencyConfigList") && !value["UpstreamDependencyConfigList"].IsNull())
    {
        if (!value["UpstreamDependencyConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.UpstreamDependencyConfigList` is not array type"));

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

    if (value.HasMember("DownStreamDependencyConfigList") && !value["DownStreamDependencyConfigList"].IsNull())
    {
        if (!value["DownStreamDependencyConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.DownStreamDependencyConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["DownStreamDependencyConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependencyTaskBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_downStreamDependencyConfigList.push_back(item);
        }
        m_downStreamDependencyConfigListHasBeenSet = true;
    }

    if (value.HasMember("EventListenerList") && !value["EventListenerList"].IsNull())
    {
        if (!value["EventListenerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.EventListenerList` is not array type"));

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
        if (!value["RunPriority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.RunPriority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runPriority = value["RunPriority"].GetUint64();
        m_runPriorityHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.RetryWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetInt64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryAttempts") && !value["MaxRetryAttempts"].IsNull())
    {
        if (!value["MaxRetryAttempts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.MaxRetryAttempts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryAttempts = value["MaxRetryAttempts"].GetInt64();
        m_maxRetryAttemptsHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTTL") && !value["ExecutionTTL"].IsNull())
    {
        if (!value["ExecutionTTL"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ExecutionTTL` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionTTL = value["ExecutionTTL"].GetInt64();
        m_executionTTLHasBeenSet = true;
    }

    if (value.HasMember("WaitExecutionTotalTTL") && !value["WaitExecutionTotalTTL"].IsNull())
    {
        if (!value["WaitExecutionTotalTTL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.WaitExecutionTotalTTL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waitExecutionTotalTTL = string(value["WaitExecutionTotalTTL"].GetString());
        m_waitExecutionTotalTTLHasBeenSet = true;
    }

    if (value.HasMember("AllowRedoType") && !value["AllowRedoType"].IsNull())
    {
        if (!value["AllowRedoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.AllowRedoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowRedoType = string(value["AllowRedoType"].GetString());
        m_allowRedoTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamTaskOutList") && !value["ParamTaskOutList"].IsNull())
    {
        if (!value["ParamTaskOutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ParamTaskOutList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.ParamTaskInList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.TaskOutputRegistryList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `TaskSchedulerConfiguration.InitStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initStrategy = string(value["InitStrategy"].GetString());
        m_initStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskSchedulerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_scheduleRunType, allocator);
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

    if (m_calendarNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalendarName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calendarName.c_str(), allocator).Move(), allocator);
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

    if (m_downStreamDependencyConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownStreamDependencyConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_downStreamDependencyConfigList.begin(); itr != m_downStreamDependencyConfigList.end(); ++itr, ++i)
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
        value.AddMember(iKey, m_runPriority, allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryWait, allocator);
    }

    if (m_maxRetryAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryAttempts, allocator);
    }

    if (m_executionTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionTTL, allocator);
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


string TaskSchedulerConfiguration::GetCycleType() const
{
    return m_cycleType;
}

void TaskSchedulerConfiguration::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string TaskSchedulerConfiguration::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void TaskSchedulerConfiguration::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string TaskSchedulerConfiguration::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void TaskSchedulerConfiguration::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool TaskSchedulerConfiguration::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string TaskSchedulerConfiguration::GetStartTime() const
{
    return m_startTime;
}

void TaskSchedulerConfiguration::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskSchedulerConfiguration::GetEndTime() const
{
    return m_endTime;
}

void TaskSchedulerConfiguration::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskSchedulerConfiguration::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TaskSchedulerConfiguration::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TaskSchedulerConfiguration::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TaskSchedulerConfiguration::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

int64_t TaskSchedulerConfiguration::GetScheduleRunType() const
{
    return m_scheduleRunType;
}

void TaskSchedulerConfiguration::SetScheduleRunType(const int64_t& _scheduleRunType)
{
    m_scheduleRunType = _scheduleRunType;
    m_scheduleRunTypeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ScheduleRunTypeHasBeenSet() const
{
    return m_scheduleRunTypeHasBeenSet;
}

string TaskSchedulerConfiguration::GetCalendarOpen() const
{
    return m_calendarOpen;
}

void TaskSchedulerConfiguration::SetCalendarOpen(const string& _calendarOpen)
{
    m_calendarOpen = _calendarOpen;
    m_calendarOpenHasBeenSet = true;
}

bool TaskSchedulerConfiguration::CalendarOpenHasBeenSet() const
{
    return m_calendarOpenHasBeenSet;
}

string TaskSchedulerConfiguration::GetCalendarId() const
{
    return m_calendarId;
}

void TaskSchedulerConfiguration::SetCalendarId(const string& _calendarId)
{
    m_calendarId = _calendarId;
    m_calendarIdHasBeenSet = true;
}

bool TaskSchedulerConfiguration::CalendarIdHasBeenSet() const
{
    return m_calendarIdHasBeenSet;
}

string TaskSchedulerConfiguration::GetCalendarName() const
{
    return m_calendarName;
}

void TaskSchedulerConfiguration::SetCalendarName(const string& _calendarName)
{
    m_calendarName = _calendarName;
    m_calendarNameHasBeenSet = true;
}

bool TaskSchedulerConfiguration::CalendarNameHasBeenSet() const
{
    return m_calendarNameHasBeenSet;
}

string TaskSchedulerConfiguration::GetSelfDepend() const
{
    return m_selfDepend;
}

void TaskSchedulerConfiguration::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool TaskSchedulerConfiguration::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

vector<DependencyTaskBrief> TaskSchedulerConfiguration::GetUpstreamDependencyConfigList() const
{
    return m_upstreamDependencyConfigList;
}

void TaskSchedulerConfiguration::SetUpstreamDependencyConfigList(const vector<DependencyTaskBrief>& _upstreamDependencyConfigList)
{
    m_upstreamDependencyConfigList = _upstreamDependencyConfigList;
    m_upstreamDependencyConfigListHasBeenSet = true;
}

bool TaskSchedulerConfiguration::UpstreamDependencyConfigListHasBeenSet() const
{
    return m_upstreamDependencyConfigListHasBeenSet;
}

vector<DependencyTaskBrief> TaskSchedulerConfiguration::GetDownStreamDependencyConfigList() const
{
    return m_downStreamDependencyConfigList;
}

void TaskSchedulerConfiguration::SetDownStreamDependencyConfigList(const vector<DependencyTaskBrief>& _downStreamDependencyConfigList)
{
    m_downStreamDependencyConfigList = _downStreamDependencyConfigList;
    m_downStreamDependencyConfigListHasBeenSet = true;
}

bool TaskSchedulerConfiguration::DownStreamDependencyConfigListHasBeenSet() const
{
    return m_downStreamDependencyConfigListHasBeenSet;
}

vector<EventListener> TaskSchedulerConfiguration::GetEventListenerList() const
{
    return m_eventListenerList;
}

void TaskSchedulerConfiguration::SetEventListenerList(const vector<EventListener>& _eventListenerList)
{
    m_eventListenerList = _eventListenerList;
    m_eventListenerListHasBeenSet = true;
}

bool TaskSchedulerConfiguration::EventListenerListHasBeenSet() const
{
    return m_eventListenerListHasBeenSet;
}

uint64_t TaskSchedulerConfiguration::GetRunPriority() const
{
    return m_runPriority;
}

void TaskSchedulerConfiguration::SetRunPriority(const uint64_t& _runPriority)
{
    m_runPriority = _runPriority;
    m_runPriorityHasBeenSet = true;
}

bool TaskSchedulerConfiguration::RunPriorityHasBeenSet() const
{
    return m_runPriorityHasBeenSet;
}

int64_t TaskSchedulerConfiguration::GetRetryWait() const
{
    return m_retryWait;
}

void TaskSchedulerConfiguration::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskSchedulerConfiguration::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t TaskSchedulerConfiguration::GetMaxRetryAttempts() const
{
    return m_maxRetryAttempts;
}

void TaskSchedulerConfiguration::SetMaxRetryAttempts(const int64_t& _maxRetryAttempts)
{
    m_maxRetryAttempts = _maxRetryAttempts;
    m_maxRetryAttemptsHasBeenSet = true;
}

bool TaskSchedulerConfiguration::MaxRetryAttemptsHasBeenSet() const
{
    return m_maxRetryAttemptsHasBeenSet;
}

int64_t TaskSchedulerConfiguration::GetExecutionTTL() const
{
    return m_executionTTL;
}

void TaskSchedulerConfiguration::SetExecutionTTL(const int64_t& _executionTTL)
{
    m_executionTTL = _executionTTL;
    m_executionTTLHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ExecutionTTLHasBeenSet() const
{
    return m_executionTTLHasBeenSet;
}

string TaskSchedulerConfiguration::GetWaitExecutionTotalTTL() const
{
    return m_waitExecutionTotalTTL;
}

void TaskSchedulerConfiguration::SetWaitExecutionTotalTTL(const string& _waitExecutionTotalTTL)
{
    m_waitExecutionTotalTTL = _waitExecutionTotalTTL;
    m_waitExecutionTotalTTLHasBeenSet = true;
}

bool TaskSchedulerConfiguration::WaitExecutionTotalTTLHasBeenSet() const
{
    return m_waitExecutionTotalTTLHasBeenSet;
}

string TaskSchedulerConfiguration::GetAllowRedoType() const
{
    return m_allowRedoType;
}

void TaskSchedulerConfiguration::SetAllowRedoType(const string& _allowRedoType)
{
    m_allowRedoType = _allowRedoType;
    m_allowRedoTypeHasBeenSet = true;
}

bool TaskSchedulerConfiguration::AllowRedoTypeHasBeenSet() const
{
    return m_allowRedoTypeHasBeenSet;
}

vector<OutTaskParameter> TaskSchedulerConfiguration::GetParamTaskOutList() const
{
    return m_paramTaskOutList;
}

void TaskSchedulerConfiguration::SetParamTaskOutList(const vector<OutTaskParameter>& _paramTaskOutList)
{
    m_paramTaskOutList = _paramTaskOutList;
    m_paramTaskOutListHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ParamTaskOutListHasBeenSet() const
{
    return m_paramTaskOutListHasBeenSet;
}

vector<InTaskParameter> TaskSchedulerConfiguration::GetParamTaskInList() const
{
    return m_paramTaskInList;
}

void TaskSchedulerConfiguration::SetParamTaskInList(const vector<InTaskParameter>& _paramTaskInList)
{
    m_paramTaskInList = _paramTaskInList;
    m_paramTaskInListHasBeenSet = true;
}

bool TaskSchedulerConfiguration::ParamTaskInListHasBeenSet() const
{
    return m_paramTaskInListHasBeenSet;
}

vector<TaskDataRegistry> TaskSchedulerConfiguration::GetTaskOutputRegistryList() const
{
    return m_taskOutputRegistryList;
}

void TaskSchedulerConfiguration::SetTaskOutputRegistryList(const vector<TaskDataRegistry>& _taskOutputRegistryList)
{
    m_taskOutputRegistryList = _taskOutputRegistryList;
    m_taskOutputRegistryListHasBeenSet = true;
}

bool TaskSchedulerConfiguration::TaskOutputRegistryListHasBeenSet() const
{
    return m_taskOutputRegistryListHasBeenSet;
}

string TaskSchedulerConfiguration::GetInitStrategy() const
{
    return m_initStrategy;
}

void TaskSchedulerConfiguration::SetInitStrategy(const string& _initStrategy)
{
    m_initStrategy = _initStrategy;
    m_initStrategyHasBeenSet = true;
}

bool TaskSchedulerConfiguration::InitStrategyHasBeenSet() const
{
    return m_initStrategyHasBeenSet;
}

