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

#include <tencentcloud/monitor/v20180724/model/ModifyConditionsTemplateRequestEventCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyConditionsTemplateRequestEventCondition::ModifyConditionsTemplateRequestEventCondition() :
    m_alarmNotifyPeriodHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false),
    m_eventIDHasBeenSet(false),
    m_ruleIDHasBeenSet(false)
{
}

CoreInternalOutcome ModifyConditionsTemplateRequestEventCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestEventCondition.AlarmNotifyPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = string(value["AlarmNotifyPeriod"].GetString());
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestEventCondition.AlarmNotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = string(value["AlarmNotifyType"].GetString());
        m_alarmNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestEventCondition.EventID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = string(value["EventID"].GetString());
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyConditionsTemplateRequestEventCondition.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyConditionsTemplateRequestEventCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

}


string ModifyConditionsTemplateRequestEventCondition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void ModifyConditionsTemplateRequestEventCondition::SetAlarmNotifyPeriod(const string& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestEventCondition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

string ModifyConditionsTemplateRequestEventCondition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void ModifyConditionsTemplateRequestEventCondition::SetAlarmNotifyType(const string& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestEventCondition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

string ModifyConditionsTemplateRequestEventCondition::GetEventID() const
{
    return m_eventID;
}

void ModifyConditionsTemplateRequestEventCondition::SetEventID(const string& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestEventCondition::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

int64_t ModifyConditionsTemplateRequestEventCondition::GetRuleID() const
{
    return m_ruleID;
}

void ModifyConditionsTemplateRequestEventCondition::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ModifyConditionsTemplateRequestEventCondition::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

