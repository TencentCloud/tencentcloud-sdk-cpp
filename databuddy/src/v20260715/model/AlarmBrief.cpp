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

#include <tencentcloud/databuddy/v20260715/model/AlarmBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

AlarmBrief::AlarmBrief() :
    m_alarmIdHasBeenSet(false),
    m_alarmMonitorTypeHasBeenSet(false),
    m_alarmGroupsHasBeenSet(false),
    m_doNotDisturbWhenSkippedHasBeenSet(false),
    m_doNotDisturbWhenManuallyTerminatedHasBeenSet(false),
    m_doNotDisturbUntilTheLastRetryHasBeenSet(false)
{
}

CoreInternalOutcome AlarmBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmBrief.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmMonitorType") && !value["AlarmMonitorType"].IsNull())
    {
        if (!value["AlarmMonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmBrief.AlarmMonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMonitorType = string(value["AlarmMonitorType"].GetString());
        m_alarmMonitorTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmGroups") && !value["AlarmGroups"].IsNull())
    {
        if (!value["AlarmGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmBrief.AlarmGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmGroups.push_back(item);
        }
        m_alarmGroupsHasBeenSet = true;
    }

    if (value.HasMember("DoNotDisturbWhenSkipped") && !value["DoNotDisturbWhenSkipped"].IsNull())
    {
        if (!value["DoNotDisturbWhenSkipped"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmBrief.DoNotDisturbWhenSkipped` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_doNotDisturbWhenSkipped = value["DoNotDisturbWhenSkipped"].GetBool();
        m_doNotDisturbWhenSkippedHasBeenSet = true;
    }

    if (value.HasMember("DoNotDisturbWhenManuallyTerminated") && !value["DoNotDisturbWhenManuallyTerminated"].IsNull())
    {
        if (!value["DoNotDisturbWhenManuallyTerminated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmBrief.DoNotDisturbWhenManuallyTerminated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_doNotDisturbWhenManuallyTerminated = value["DoNotDisturbWhenManuallyTerminated"].GetBool();
        m_doNotDisturbWhenManuallyTerminatedHasBeenSet = true;
    }

    if (value.HasMember("DoNotDisturbUntilTheLastRetry") && !value["DoNotDisturbUntilTheLastRetry"].IsNull())
    {
        if (!value["DoNotDisturbUntilTheLastRetry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmBrief.DoNotDisturbUntilTheLastRetry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_doNotDisturbUntilTheLastRetry = value["DoNotDisturbUntilTheLastRetry"].GetBool();
        m_doNotDisturbUntilTheLastRetryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmMonitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMonitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmGroups.begin(); itr != m_alarmGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_doNotDisturbWhenSkippedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoNotDisturbWhenSkipped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doNotDisturbWhenSkipped, allocator);
    }

    if (m_doNotDisturbWhenManuallyTerminatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoNotDisturbWhenManuallyTerminated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doNotDisturbWhenManuallyTerminated, allocator);
    }

    if (m_doNotDisturbUntilTheLastRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoNotDisturbUntilTheLastRetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doNotDisturbUntilTheLastRetry, allocator);
    }

}


string AlarmBrief::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmBrief::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmBrief::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmBrief::GetAlarmMonitorType() const
{
    return m_alarmMonitorType;
}

void AlarmBrief::SetAlarmMonitorType(const string& _alarmMonitorType)
{
    m_alarmMonitorType = _alarmMonitorType;
    m_alarmMonitorTypeHasBeenSet = true;
}

bool AlarmBrief::AlarmMonitorTypeHasBeenSet() const
{
    return m_alarmMonitorTypeHasBeenSet;
}

vector<AlarmGroup> AlarmBrief::GetAlarmGroups() const
{
    return m_alarmGroups;
}

void AlarmBrief::SetAlarmGroups(const vector<AlarmGroup>& _alarmGroups)
{
    m_alarmGroups = _alarmGroups;
    m_alarmGroupsHasBeenSet = true;
}

bool AlarmBrief::AlarmGroupsHasBeenSet() const
{
    return m_alarmGroupsHasBeenSet;
}

bool AlarmBrief::GetDoNotDisturbWhenSkipped() const
{
    return m_doNotDisturbWhenSkipped;
}

void AlarmBrief::SetDoNotDisturbWhenSkipped(const bool& _doNotDisturbWhenSkipped)
{
    m_doNotDisturbWhenSkipped = _doNotDisturbWhenSkipped;
    m_doNotDisturbWhenSkippedHasBeenSet = true;
}

bool AlarmBrief::DoNotDisturbWhenSkippedHasBeenSet() const
{
    return m_doNotDisturbWhenSkippedHasBeenSet;
}

bool AlarmBrief::GetDoNotDisturbWhenManuallyTerminated() const
{
    return m_doNotDisturbWhenManuallyTerminated;
}

void AlarmBrief::SetDoNotDisturbWhenManuallyTerminated(const bool& _doNotDisturbWhenManuallyTerminated)
{
    m_doNotDisturbWhenManuallyTerminated = _doNotDisturbWhenManuallyTerminated;
    m_doNotDisturbWhenManuallyTerminatedHasBeenSet = true;
}

bool AlarmBrief::DoNotDisturbWhenManuallyTerminatedHasBeenSet() const
{
    return m_doNotDisturbWhenManuallyTerminatedHasBeenSet;
}

bool AlarmBrief::GetDoNotDisturbUntilTheLastRetry() const
{
    return m_doNotDisturbUntilTheLastRetry;
}

void AlarmBrief::SetDoNotDisturbUntilTheLastRetry(const bool& _doNotDisturbUntilTheLastRetry)
{
    m_doNotDisturbUntilTheLastRetry = _doNotDisturbUntilTheLastRetry;
    m_doNotDisturbUntilTheLastRetryHasBeenSet = true;
}

bool AlarmBrief::DoNotDisturbUntilTheLastRetryHasBeenSet() const
{
    return m_doNotDisturbUntilTheLastRetryHasBeenSet;
}

