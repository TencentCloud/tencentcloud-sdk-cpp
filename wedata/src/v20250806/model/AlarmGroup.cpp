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

#include <tencentcloud/wedata/v20250806/model/AlarmGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

AlarmGroup::AlarmGroup() :
    m_alarmEscalationRecipientIdsHasBeenSet(false),
    m_alarmEscalationIntervalHasBeenSet(false),
    m_notificationFatigueHasBeenSet(false),
    m_alarmWaysHasBeenSet(false),
    m_webHooksHasBeenSet(false),
    m_alarmRecipientTypeHasBeenSet(false),
    m_alarmRecipientIdsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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
        if (!value["AlarmEscalationInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmEscalationInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEscalationInterval = value["AlarmEscalationInterval"].GetInt64();
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

    if (value.HasMember("WebHooks") && !value["WebHooks"].IsNull())
    {
        if (!value["WebHooks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.WebHooks` is not array type"));

        const rapidjson::Value &tmpValue = value["WebHooks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmWayWebHook item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webHooks.push_back(item);
        }
        m_webHooksHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientType") && !value["AlarmRecipientType"].IsNull())
    {
        if (!value["AlarmRecipientType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmRecipientType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientType = value["AlarmRecipientType"].GetInt64();
        m_alarmRecipientTypeHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void AlarmGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_webHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webHooks.begin(); itr != m_webHooks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmRecipientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRecipientType, allocator);
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

int64_t AlarmGroup::GetAlarmEscalationInterval() const
{
    return m_alarmEscalationInterval;
}

void AlarmGroup::SetAlarmEscalationInterval(const int64_t& _alarmEscalationInterval)
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

vector<AlarmWayWebHook> AlarmGroup::GetWebHooks() const
{
    return m_webHooks;
}

void AlarmGroup::SetWebHooks(const vector<AlarmWayWebHook>& _webHooks)
{
    m_webHooks = _webHooks;
    m_webHooksHasBeenSet = true;
}

bool AlarmGroup::WebHooksHasBeenSet() const
{
    return m_webHooksHasBeenSet;
}

int64_t AlarmGroup::GetAlarmRecipientType() const
{
    return m_alarmRecipientType;
}

void AlarmGroup::SetAlarmRecipientType(const int64_t& _alarmRecipientType)
{
    m_alarmRecipientType = _alarmRecipientType;
    m_alarmRecipientTypeHasBeenSet = true;
}

bool AlarmGroup::AlarmRecipientTypeHasBeenSet() const
{
    return m_alarmRecipientTypeHasBeenSet;
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

