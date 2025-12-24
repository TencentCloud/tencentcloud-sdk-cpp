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

#include <tencentcloud/wedata/v20210820/model/AlarmGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmGroup::AlarmGroup() :
    m_alarmWaysHasBeenSet(false),
    m_alarmRecipientTypeHasBeenSet(false),
    m_alarmRecipientsHasBeenSet(false),
    m_alarmRecipientIdsHasBeenSet(false),
    m_alarmEscalationRecipientsHasBeenSet(false),
    m_alarmEscalationRecipientIdsHasBeenSet(false),
    m_alarmEscalationIntervalHasBeenSet(false),
    m_notificationFatigueHasBeenSet(false),
    m_alarmMessageRuleHasBeenSet(false)
{
}

CoreInternalOutcome AlarmGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmWays") && !value["AlarmWays"].IsNull())
    {
        if (!value["AlarmWays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmWays` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmWays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmWays.push_back((*itr).GetString());
        }
        m_alarmWaysHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientType") && !value["AlarmRecipientType"].IsNull())
    {
        if (!value["AlarmRecipientType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmRecipientType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientType = value["AlarmRecipientType"].GetUint64();
        m_alarmRecipientTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipients") && !value["AlarmRecipients"].IsNull())
    {
        if (!value["AlarmRecipients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmRecipients` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmRecipients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmRecipients.push_back((*itr).GetString());
        }
        m_alarmRecipientsHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientIds") && !value["AlarmRecipientIds"].IsNull())
    {
        if (!value["AlarmRecipientIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmRecipientIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmRecipientIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmRecipientIds.push_back((*itr).GetString());
        }
        m_alarmRecipientIdsHasBeenSet = true;
    }

    if (value.HasMember("AlarmEscalationRecipients") && !value["AlarmEscalationRecipients"].IsNull())
    {
        if (!value["AlarmEscalationRecipients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmEscalationRecipients` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmEscalationRecipients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmEscalationRecipients.push_back((*itr).GetString());
        }
        m_alarmEscalationRecipientsHasBeenSet = true;
    }

    if (value.HasMember("AlarmEscalationRecipientIds") && !value["AlarmEscalationRecipientIds"].IsNull())
    {
        if (!value["AlarmEscalationRecipientIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmEscalationRecipientIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmEscalationRecipientIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmEscalationRecipientIds.push_back((*itr).GetString());
        }
        m_alarmEscalationRecipientIdsHasBeenSet = true;
    }

    if (value.HasMember("AlarmEscalationInterval") && !value["AlarmEscalationInterval"].IsNull())
    {
        if (!value["AlarmEscalationInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmEscalationInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEscalationInterval = value["AlarmEscalationInterval"].GetUint64();
        m_alarmEscalationIntervalHasBeenSet = true;
    }

    if (value.HasMember("NotificationFatigue") && !value["NotificationFatigue"].IsNull())
    {
        if (!value["NotificationFatigue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.NotificationFatigue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notificationFatigue.Deserialize(value["NotificationFatigue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notificationFatigueHasBeenSet = true;
    }

    if (value.HasMember("AlarmMessageRule") && !value["AlarmMessageRule"].IsNull())
    {
        if (!value["AlarmMessageRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmMessageRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMessageRule = string(value["AlarmMessageRule"].GetString());
        m_alarmMessageRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmWays.begin(); itr != m_alarmWays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmRecipientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRecipientType, allocator);
    }

    if (m_alarmRecipientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmRecipients.begin(); itr != m_alarmRecipients.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmRecipientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmRecipientIds.begin(); itr != m_alarmRecipientIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmEscalationRecipientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEscalationRecipients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmEscalationRecipients.begin(); itr != m_alarmEscalationRecipients.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmEscalationRecipientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEscalationRecipientIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmEscalationRecipientIds.begin(); itr != m_alarmEscalationRecipientIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmEscalationIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEscalationInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEscalationInterval, allocator);
    }

    if (m_notificationFatigueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationFatigue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notificationFatigue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alarmMessageRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMessageRule.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AlarmGroup::GetAlarmWays() const
{
    return m_alarmWays;
}

void AlarmGroup::SetAlarmWays(const vector<string>& _alarmWays)
{
    m_alarmWays = _alarmWays;
    m_alarmWaysHasBeenSet = true;
}

bool AlarmGroup::AlarmWaysHasBeenSet() const
{
    return m_alarmWaysHasBeenSet;
}

uint64_t AlarmGroup::GetAlarmRecipientType() const
{
    return m_alarmRecipientType;
}

void AlarmGroup::SetAlarmRecipientType(const uint64_t& _alarmRecipientType)
{
    m_alarmRecipientType = _alarmRecipientType;
    m_alarmRecipientTypeHasBeenSet = true;
}

bool AlarmGroup::AlarmRecipientTypeHasBeenSet() const
{
    return m_alarmRecipientTypeHasBeenSet;
}

vector<string> AlarmGroup::GetAlarmRecipients() const
{
    return m_alarmRecipients;
}

void AlarmGroup::SetAlarmRecipients(const vector<string>& _alarmRecipients)
{
    m_alarmRecipients = _alarmRecipients;
    m_alarmRecipientsHasBeenSet = true;
}

bool AlarmGroup::AlarmRecipientsHasBeenSet() const
{
    return m_alarmRecipientsHasBeenSet;
}

vector<string> AlarmGroup::GetAlarmRecipientIds() const
{
    return m_alarmRecipientIds;
}

void AlarmGroup::SetAlarmRecipientIds(const vector<string>& _alarmRecipientIds)
{
    m_alarmRecipientIds = _alarmRecipientIds;
    m_alarmRecipientIdsHasBeenSet = true;
}

bool AlarmGroup::AlarmRecipientIdsHasBeenSet() const
{
    return m_alarmRecipientIdsHasBeenSet;
}

vector<string> AlarmGroup::GetAlarmEscalationRecipients() const
{
    return m_alarmEscalationRecipients;
}

void AlarmGroup::SetAlarmEscalationRecipients(const vector<string>& _alarmEscalationRecipients)
{
    m_alarmEscalationRecipients = _alarmEscalationRecipients;
    m_alarmEscalationRecipientsHasBeenSet = true;
}

bool AlarmGroup::AlarmEscalationRecipientsHasBeenSet() const
{
    return m_alarmEscalationRecipientsHasBeenSet;
}

vector<string> AlarmGroup::GetAlarmEscalationRecipientIds() const
{
    return m_alarmEscalationRecipientIds;
}

void AlarmGroup::SetAlarmEscalationRecipientIds(const vector<string>& _alarmEscalationRecipientIds)
{
    m_alarmEscalationRecipientIds = _alarmEscalationRecipientIds;
    m_alarmEscalationRecipientIdsHasBeenSet = true;
}

bool AlarmGroup::AlarmEscalationRecipientIdsHasBeenSet() const
{
    return m_alarmEscalationRecipientIdsHasBeenSet;
}

uint64_t AlarmGroup::GetAlarmEscalationInterval() const
{
    return m_alarmEscalationInterval;
}

void AlarmGroup::SetAlarmEscalationInterval(const uint64_t& _alarmEscalationInterval)
{
    m_alarmEscalationInterval = _alarmEscalationInterval;
    m_alarmEscalationIntervalHasBeenSet = true;
}

bool AlarmGroup::AlarmEscalationIntervalHasBeenSet() const
{
    return m_alarmEscalationIntervalHasBeenSet;
}

NotificationFatigue AlarmGroup::GetNotificationFatigue() const
{
    return m_notificationFatigue;
}

void AlarmGroup::SetNotificationFatigue(const NotificationFatigue& _notificationFatigue)
{
    m_notificationFatigue = _notificationFatigue;
    m_notificationFatigueHasBeenSet = true;
}

bool AlarmGroup::NotificationFatigueHasBeenSet() const
{
    return m_notificationFatigueHasBeenSet;
}

string AlarmGroup::GetAlarmMessageRule() const
{
    return m_alarmMessageRule;
}

void AlarmGroup::SetAlarmMessageRule(const string& _alarmMessageRule)
{
    m_alarmMessageRule = _alarmMessageRule;
    m_alarmMessageRuleHasBeenSet = true;
}

bool AlarmGroup::AlarmMessageRuleHasBeenSet() const
{
    return m_alarmMessageRuleHasBeenSet;
}

