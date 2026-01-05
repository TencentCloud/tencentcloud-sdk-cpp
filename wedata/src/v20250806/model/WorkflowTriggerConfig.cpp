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

#include <tencentcloud/wedata/v20250806/model/WorkflowTriggerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

WorkflowTriggerConfig::WorkflowTriggerConfig() :
    m_triggerModeHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_configModeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_fileArrivalPathHasBeenSet(false),
    m_triggerMinimumIntervalSecondHasBeenSet(false),
    m_triggerWaitTimeSecondHasBeenSet(false),
    m_schedulerStatusHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTriggerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerMode") && !value["TriggerMode"].IsNull())
    {
        if (!value["TriggerMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.TriggerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerMode = string(value["TriggerMode"].GetString());
        m_triggerModeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigMode") && !value["ConfigMode"].IsNull())
    {
        if (!value["ConfigMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.ConfigMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configMode = string(value["ConfigMode"].GetString());
        m_configModeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("FileArrivalPath") && !value["FileArrivalPath"].IsNull())
    {
        if (!value["FileArrivalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.FileArrivalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileArrivalPath = string(value["FileArrivalPath"].GetString());
        m_fileArrivalPathHasBeenSet = true;
    }

    if (value.HasMember("TriggerMinimumIntervalSecond") && !value["TriggerMinimumIntervalSecond"].IsNull())
    {
        if (!value["TriggerMinimumIntervalSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.TriggerMinimumIntervalSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerMinimumIntervalSecond = value["TriggerMinimumIntervalSecond"].GetUint64();
        m_triggerMinimumIntervalSecondHasBeenSet = true;
    }

    if (value.HasMember("TriggerWaitTimeSecond") && !value["TriggerWaitTimeSecond"].IsNull())
    {
        if (!value["TriggerWaitTimeSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.TriggerWaitTimeSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerWaitTimeSecond = value["TriggerWaitTimeSecond"].GetUint64();
        m_triggerWaitTimeSecondHasBeenSet = true;
    }

    if (value.HasMember("SchedulerStatus") && !value["SchedulerStatus"].IsNull())
    {
        if (!value["SchedulerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfig.SchedulerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerStatus = string(value["SchedulerStatus"].GetString());
        m_schedulerStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTriggerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerMode.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
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

    if (m_configModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configMode.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileArrivalPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileArrivalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileArrivalPath.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerMinimumIntervalSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerMinimumIntervalSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerMinimumIntervalSecond, allocator);
    }

    if (m_triggerWaitTimeSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerWaitTimeSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerWaitTimeSecond, allocator);
    }

    if (m_schedulerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerStatus.c_str(), allocator).Move(), allocator);
    }

}


string WorkflowTriggerConfig::GetTriggerMode() const
{
    return m_triggerMode;
}

void WorkflowTriggerConfig::SetTriggerMode(const string& _triggerMode)
{
    m_triggerMode = _triggerMode;
    m_triggerModeHasBeenSet = true;
}

bool WorkflowTriggerConfig::TriggerModeHasBeenSet() const
{
    return m_triggerModeHasBeenSet;
}

string WorkflowTriggerConfig::GetExtraInfo() const
{
    return m_extraInfo;
}

void WorkflowTriggerConfig::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool WorkflowTriggerConfig::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string WorkflowTriggerConfig::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void WorkflowTriggerConfig::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool WorkflowTriggerConfig::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string WorkflowTriggerConfig::GetStartTime() const
{
    return m_startTime;
}

void WorkflowTriggerConfig::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowTriggerConfig::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowTriggerConfig::GetEndTime() const
{
    return m_endTime;
}

void WorkflowTriggerConfig::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowTriggerConfig::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowTriggerConfig::GetConfigMode() const
{
    return m_configMode;
}

void WorkflowTriggerConfig::SetConfigMode(const string& _configMode)
{
    m_configMode = _configMode;
    m_configModeHasBeenSet = true;
}

bool WorkflowTriggerConfig::ConfigModeHasBeenSet() const
{
    return m_configModeHasBeenSet;
}

string WorkflowTriggerConfig::GetCycleType() const
{
    return m_cycleType;
}

void WorkflowTriggerConfig::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool WorkflowTriggerConfig::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string WorkflowTriggerConfig::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void WorkflowTriggerConfig::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool WorkflowTriggerConfig::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string WorkflowTriggerConfig::GetTriggerId() const
{
    return m_triggerId;
}

void WorkflowTriggerConfig::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool WorkflowTriggerConfig::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string WorkflowTriggerConfig::GetFileArrivalPath() const
{
    return m_fileArrivalPath;
}

void WorkflowTriggerConfig::SetFileArrivalPath(const string& _fileArrivalPath)
{
    m_fileArrivalPath = _fileArrivalPath;
    m_fileArrivalPathHasBeenSet = true;
}

bool WorkflowTriggerConfig::FileArrivalPathHasBeenSet() const
{
    return m_fileArrivalPathHasBeenSet;
}

uint64_t WorkflowTriggerConfig::GetTriggerMinimumIntervalSecond() const
{
    return m_triggerMinimumIntervalSecond;
}

void WorkflowTriggerConfig::SetTriggerMinimumIntervalSecond(const uint64_t& _triggerMinimumIntervalSecond)
{
    m_triggerMinimumIntervalSecond = _triggerMinimumIntervalSecond;
    m_triggerMinimumIntervalSecondHasBeenSet = true;
}

bool WorkflowTriggerConfig::TriggerMinimumIntervalSecondHasBeenSet() const
{
    return m_triggerMinimumIntervalSecondHasBeenSet;
}

uint64_t WorkflowTriggerConfig::GetTriggerWaitTimeSecond() const
{
    return m_triggerWaitTimeSecond;
}

void WorkflowTriggerConfig::SetTriggerWaitTimeSecond(const uint64_t& _triggerWaitTimeSecond)
{
    m_triggerWaitTimeSecond = _triggerWaitTimeSecond;
    m_triggerWaitTimeSecondHasBeenSet = true;
}

bool WorkflowTriggerConfig::TriggerWaitTimeSecondHasBeenSet() const
{
    return m_triggerWaitTimeSecondHasBeenSet;
}

string WorkflowTriggerConfig::GetSchedulerStatus() const
{
    return m_schedulerStatus;
}

void WorkflowTriggerConfig::SetSchedulerStatus(const string& _schedulerStatus)
{
    m_schedulerStatus = _schedulerStatus;
    m_schedulerStatusHasBeenSet = true;
}

bool WorkflowTriggerConfig::SchedulerStatusHasBeenSet() const
{
    return m_schedulerStatusHasBeenSet;
}

