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

#include <tencentcloud/monitor/v20180724/model/EventCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

EventCondition::EventCondition() :
    m_alarmNotifyPeriodHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false),
    m_eventIDHasBeenSet(false),
    m_eventDisplayNameHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

CoreInternalOutcome EventCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCondition.AlarmNotifyPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = string(value["AlarmNotifyPeriod"].GetString());
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCondition.AlarmNotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = string(value["AlarmNotifyType"].GetString());
        m_alarmNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCondition.EventID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = string(value["EventID"].GetString());
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("EventDisplayName") && !value["EventDisplayName"].IsNull())
    {
        if (!value["EventDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCondition.EventDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDisplayName = string(value["EventDisplayName"].GetString());
        m_eventDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCondition.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCondition.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmNotifyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmNotifyPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmNotifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventID.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

}


string EventCondition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void EventCondition::SetAlarmNotifyPeriod(const string& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool EventCondition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

string EventCondition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void EventCondition::SetAlarmNotifyType(const string& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool EventCondition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

string EventCondition::GetEventID() const
{
    return m_eventID;
}

void EventCondition::SetEventID(const string& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool EventCondition::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string EventCondition::GetEventDisplayName() const
{
    return m_eventDisplayName;
}

void EventCondition::SetEventDisplayName(const string& _eventDisplayName)
{
    m_eventDisplayName = _eventDisplayName;
    m_eventDisplayNameHasBeenSet = true;
}

bool EventCondition::EventDisplayNameHasBeenSet() const
{
    return m_eventDisplayNameHasBeenSet;
}

string EventCondition::GetRuleID() const
{
    return m_ruleID;
}

void EventCondition::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool EventCondition::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string EventCondition::GetMetricName() const
{
    return m_metricName;
}

void EventCondition::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool EventCondition::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

