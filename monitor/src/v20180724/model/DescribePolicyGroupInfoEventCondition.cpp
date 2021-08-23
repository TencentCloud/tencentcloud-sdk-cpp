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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoEventCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupInfoEventCondition::DescribePolicyGroupInfoEventCondition() :
    m_eventIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_eventShowNameHasBeenSet(false),
    m_alarmNotifyPeriodHasBeenSet(false),
    m_alarmNotifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupInfoEventCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoEventCondition.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoEventCondition.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("EventShowName") && !value["EventShowName"].IsNull())
    {
        if (!value["EventShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoEventCondition.EventShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventShowName = string(value["EventShowName"].GetString());
        m_eventShowNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyPeriod") && !value["AlarmNotifyPeriod"].IsNull())
    {
        if (!value["AlarmNotifyPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoEventCondition.AlarmNotifyPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyPeriod = value["AlarmNotifyPeriod"].GetInt64();
        m_alarmNotifyPeriodHasBeenSet = true;
    }

    if (value.HasMember("AlarmNotifyType") && !value["AlarmNotifyType"].IsNull())
    {
        if (!value["AlarmNotifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyGroupInfoEventCondition.AlarmNotifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNotifyType = value["AlarmNotifyType"].GetInt64();
        m_alarmNotifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyGroupInfoEventCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_eventShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNotifyPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyPeriod, allocator);
    }

    if (m_alarmNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmNotifyType, allocator);
    }

}


int64_t DescribePolicyGroupInfoEventCondition::GetEventId() const
{
    return m_eventId;
}

void DescribePolicyGroupInfoEventCondition::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribePolicyGroupInfoEventCondition::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t DescribePolicyGroupInfoEventCondition::GetRuleId() const
{
    return m_ruleId;
}

void DescribePolicyGroupInfoEventCondition::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribePolicyGroupInfoEventCondition::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribePolicyGroupInfoEventCondition::GetEventShowName() const
{
    return m_eventShowName;
}

void DescribePolicyGroupInfoEventCondition::SetEventShowName(const string& _eventShowName)
{
    m_eventShowName = _eventShowName;
    m_eventShowNameHasBeenSet = true;
}

bool DescribePolicyGroupInfoEventCondition::EventShowNameHasBeenSet() const
{
    return m_eventShowNameHasBeenSet;
}

int64_t DescribePolicyGroupInfoEventCondition::GetAlarmNotifyPeriod() const
{
    return m_alarmNotifyPeriod;
}

void DescribePolicyGroupInfoEventCondition::SetAlarmNotifyPeriod(const int64_t& _alarmNotifyPeriod)
{
    m_alarmNotifyPeriod = _alarmNotifyPeriod;
    m_alarmNotifyPeriodHasBeenSet = true;
}

bool DescribePolicyGroupInfoEventCondition::AlarmNotifyPeriodHasBeenSet() const
{
    return m_alarmNotifyPeriodHasBeenSet;
}

int64_t DescribePolicyGroupInfoEventCondition::GetAlarmNotifyType() const
{
    return m_alarmNotifyType;
}

void DescribePolicyGroupInfoEventCondition::SetAlarmNotifyType(const int64_t& _alarmNotifyType)
{
    m_alarmNotifyType = _alarmNotifyType;
    m_alarmNotifyTypeHasBeenSet = true;
}

bool DescribePolicyGroupInfoEventCondition::AlarmNotifyTypeHasBeenSet() const
{
    return m_alarmNotifyTypeHasBeenSet;
}

