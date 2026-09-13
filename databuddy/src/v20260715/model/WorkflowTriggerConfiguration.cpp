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

#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowTriggerConfiguration::WorkflowTriggerConfiguration() :
    m_triggerIdHasBeenSet(false),
    m_schedulerStatusHasBeenSet(false),
    m_triggerModeHasBeenSet(false),
    m_schedulerTimeZoneHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_configModeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTriggerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("SchedulerStatus") && !value["SchedulerStatus"].IsNull())
    {
        if (!value["SchedulerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.SchedulerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerStatus = string(value["SchedulerStatus"].GetString());
        m_schedulerStatusHasBeenSet = true;
    }

    if (value.HasMember("TriggerMode") && !value["TriggerMode"].IsNull())
    {
        if (!value["TriggerMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.TriggerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerMode = string(value["TriggerMode"].GetString());
        m_triggerModeHasBeenSet = true;
    }

    if (value.HasMember("SchedulerTimeZone") && !value["SchedulerTimeZone"].IsNull())
    {
        if (!value["SchedulerTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.SchedulerTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerTimeZone = string(value["SchedulerTimeZone"].GetString());
        m_schedulerTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigMode") && !value["ConfigMode"].IsNull())
    {
        if (!value["ConfigMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.ConfigMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configMode = string(value["ConfigMode"].GetString());
        m_configModeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CrontabExpression") && !value["CrontabExpression"].IsNull())
    {
        if (!value["CrontabExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.CrontabExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crontabExpression = string(value["CrontabExpression"].GetString());
        m_crontabExpressionHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTriggerConfiguration.AdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedConfig.Deserialize(value["AdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTriggerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerMode.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerTimeZone.c_str(), allocator).Move(), allocator);
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

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WorkflowTriggerConfiguration::GetTriggerId() const
{
    return m_triggerId;
}

void WorkflowTriggerConfiguration::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string WorkflowTriggerConfiguration::GetSchedulerStatus() const
{
    return m_schedulerStatus;
}

void WorkflowTriggerConfiguration::SetSchedulerStatus(const string& _schedulerStatus)
{
    m_schedulerStatus = _schedulerStatus;
    m_schedulerStatusHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::SchedulerStatusHasBeenSet() const
{
    return m_schedulerStatusHasBeenSet;
}

string WorkflowTriggerConfiguration::GetTriggerMode() const
{
    return m_triggerMode;
}

void WorkflowTriggerConfiguration::SetTriggerMode(const string& _triggerMode)
{
    m_triggerMode = _triggerMode;
    m_triggerModeHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::TriggerModeHasBeenSet() const
{
    return m_triggerModeHasBeenSet;
}

string WorkflowTriggerConfiguration::GetSchedulerTimeZone() const
{
    return m_schedulerTimeZone;
}

void WorkflowTriggerConfiguration::SetSchedulerTimeZone(const string& _schedulerTimeZone)
{
    m_schedulerTimeZone = _schedulerTimeZone;
    m_schedulerTimeZoneHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::SchedulerTimeZoneHasBeenSet() const
{
    return m_schedulerTimeZoneHasBeenSet;
}

string WorkflowTriggerConfiguration::GetStartTime() const
{
    return m_startTime;
}

void WorkflowTriggerConfiguration::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string WorkflowTriggerConfiguration::GetEndTime() const
{
    return m_endTime;
}

void WorkflowTriggerConfiguration::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string WorkflowTriggerConfiguration::GetConfigMode() const
{
    return m_configMode;
}

void WorkflowTriggerConfiguration::SetConfigMode(const string& _configMode)
{
    m_configMode = _configMode;
    m_configModeHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::ConfigModeHasBeenSet() const
{
    return m_configModeHasBeenSet;
}

string WorkflowTriggerConfiguration::GetCycleType() const
{
    return m_cycleType;
}

void WorkflowTriggerConfiguration::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string WorkflowTriggerConfiguration::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void WorkflowTriggerConfiguration::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string WorkflowTriggerConfiguration::GetExtraInfo() const
{
    return m_extraInfo;
}

void WorkflowTriggerConfiguration::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

WorkflowTriggerAdvancedConfiguration WorkflowTriggerConfiguration::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void WorkflowTriggerConfiguration::SetAdvancedConfig(const WorkflowTriggerAdvancedConfiguration& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool WorkflowTriggerConfiguration::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

