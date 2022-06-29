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

#include <tencentcloud/tke/v20180525/model/PrometheusNotificationItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PrometheusNotificationItem::PrometheusNotificationItem() :
    m_enabledHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_webHookHasBeenSet(false),
    m_alertManagerHasBeenSet(false),
    m_repeatIntervalHasBeenSet(false),
    m_timeRangeStartHasBeenSet(false),
    m_timeRangeEndHasBeenSet(false),
    m_notifyWayHasBeenSet(false),
    m_receiverGroupsHasBeenSet(false),
    m_phoneNotifyOrderHasBeenSet(false),
    m_phoneCircleTimesHasBeenSet(false),
    m_phoneInnerIntervalHasBeenSet(false),
    m_phoneCircleIntervalHasBeenSet(false),
    m_phoneArriveNoticeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusNotificationItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("WebHook") && !value["WebHook"].IsNull())
    {
        if (!value["WebHook"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.WebHook` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webHook = string(value["WebHook"].GetString());
        m_webHookHasBeenSet = true;
    }

    if (value.HasMember("AlertManager") && !value["AlertManager"].IsNull())
    {
        if (!value["AlertManager"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.AlertManager` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alertManager.Deserialize(value["AlertManager"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alertManagerHasBeenSet = true;
    }

    if (value.HasMember("RepeatInterval") && !value["RepeatInterval"].IsNull())
    {
        if (!value["RepeatInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.RepeatInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repeatInterval = string(value["RepeatInterval"].GetString());
        m_repeatIntervalHasBeenSet = true;
    }

    if (value.HasMember("TimeRangeStart") && !value["TimeRangeStart"].IsNull())
    {
        if (!value["TimeRangeStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.TimeRangeStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeStart = string(value["TimeRangeStart"].GetString());
        m_timeRangeStartHasBeenSet = true;
    }

    if (value.HasMember("TimeRangeEnd") && !value["TimeRangeEnd"].IsNull())
    {
        if (!value["TimeRangeEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.TimeRangeEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRangeEnd = string(value["TimeRangeEnd"].GetString());
        m_timeRangeEndHasBeenSet = true;
    }

    if (value.HasMember("NotifyWay") && !value["NotifyWay"].IsNull())
    {
        if (!value["NotifyWay"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.NotifyWay` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyWay"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyWay.push_back((*itr).GetString());
        }
        m_notifyWayHasBeenSet = true;
    }

    if (value.HasMember("ReceiverGroups") && !value["ReceiverGroups"].IsNull())
    {
        if (!value["ReceiverGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.ReceiverGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverGroups.push_back((*itr).GetString());
        }
        m_receiverGroupsHasBeenSet = true;
    }

    if (value.HasMember("PhoneNotifyOrder") && !value["PhoneNotifyOrder"].IsNull())
    {
        if (!value["PhoneNotifyOrder"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.PhoneNotifyOrder` is not array type"));

        const rapidjson::Value &tmpValue = value["PhoneNotifyOrder"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_phoneNotifyOrder.push_back((*itr).GetUint64());
        }
        m_phoneNotifyOrderHasBeenSet = true;
    }

    if (value.HasMember("PhoneCircleTimes") && !value["PhoneCircleTimes"].IsNull())
    {
        if (!value["PhoneCircleTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.PhoneCircleTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCircleTimes = value["PhoneCircleTimes"].GetInt64();
        m_phoneCircleTimesHasBeenSet = true;
    }

    if (value.HasMember("PhoneInnerInterval") && !value["PhoneInnerInterval"].IsNull())
    {
        if (!value["PhoneInnerInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.PhoneInnerInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneInnerInterval = value["PhoneInnerInterval"].GetInt64();
        m_phoneInnerIntervalHasBeenSet = true;
    }

    if (value.HasMember("PhoneCircleInterval") && !value["PhoneCircleInterval"].IsNull())
    {
        if (!value["PhoneCircleInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.PhoneCircleInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneCircleInterval = value["PhoneCircleInterval"].GetInt64();
        m_phoneCircleIntervalHasBeenSet = true;
    }

    if (value.HasMember("PhoneArriveNotice") && !value["PhoneArriveNotice"].IsNull())
    {
        if (!value["PhoneArriveNotice"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusNotificationItem.PhoneArriveNotice` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_phoneArriveNotice = value["PhoneArriveNotice"].GetBool();
        m_phoneArriveNoticeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusNotificationItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_webHookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebHook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webHook.c_str(), allocator).Move(), allocator);
    }

    if (m_alertManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alertManager.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_repeatIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repeatInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRangeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRangeEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRangeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyWay.begin(); itr != m_notifyWay.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_receiverGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverGroups.begin(); itr != m_receiverGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_phoneNotifyOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNotifyOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_phoneNotifyOrder.begin(); itr != m_phoneNotifyOrder.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_phoneCircleTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCircleTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneCircleTimes, allocator);
    }

    if (m_phoneInnerIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneInnerInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneInnerInterval, allocator);
    }

    if (m_phoneCircleIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCircleInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneCircleInterval, allocator);
    }

    if (m_phoneArriveNoticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneArriveNotice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneArriveNotice, allocator);
    }

}


bool PrometheusNotificationItem::GetEnabled() const
{
    return m_enabled;
}

void PrometheusNotificationItem::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PrometheusNotificationItem::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string PrometheusNotificationItem::GetType() const
{
    return m_type;
}

void PrometheusNotificationItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PrometheusNotificationItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PrometheusNotificationItem::GetWebHook() const
{
    return m_webHook;
}

void PrometheusNotificationItem::SetWebHook(const string& _webHook)
{
    m_webHook = _webHook;
    m_webHookHasBeenSet = true;
}

bool PrometheusNotificationItem::WebHookHasBeenSet() const
{
    return m_webHookHasBeenSet;
}

PrometheusAlertManagerConfig PrometheusNotificationItem::GetAlertManager() const
{
    return m_alertManager;
}

void PrometheusNotificationItem::SetAlertManager(const PrometheusAlertManagerConfig& _alertManager)
{
    m_alertManager = _alertManager;
    m_alertManagerHasBeenSet = true;
}

bool PrometheusNotificationItem::AlertManagerHasBeenSet() const
{
    return m_alertManagerHasBeenSet;
}

string PrometheusNotificationItem::GetRepeatInterval() const
{
    return m_repeatInterval;
}

void PrometheusNotificationItem::SetRepeatInterval(const string& _repeatInterval)
{
    m_repeatInterval = _repeatInterval;
    m_repeatIntervalHasBeenSet = true;
}

bool PrometheusNotificationItem::RepeatIntervalHasBeenSet() const
{
    return m_repeatIntervalHasBeenSet;
}

string PrometheusNotificationItem::GetTimeRangeStart() const
{
    return m_timeRangeStart;
}

void PrometheusNotificationItem::SetTimeRangeStart(const string& _timeRangeStart)
{
    m_timeRangeStart = _timeRangeStart;
    m_timeRangeStartHasBeenSet = true;
}

bool PrometheusNotificationItem::TimeRangeStartHasBeenSet() const
{
    return m_timeRangeStartHasBeenSet;
}

string PrometheusNotificationItem::GetTimeRangeEnd() const
{
    return m_timeRangeEnd;
}

void PrometheusNotificationItem::SetTimeRangeEnd(const string& _timeRangeEnd)
{
    m_timeRangeEnd = _timeRangeEnd;
    m_timeRangeEndHasBeenSet = true;
}

bool PrometheusNotificationItem::TimeRangeEndHasBeenSet() const
{
    return m_timeRangeEndHasBeenSet;
}

vector<string> PrometheusNotificationItem::GetNotifyWay() const
{
    return m_notifyWay;
}

void PrometheusNotificationItem::SetNotifyWay(const vector<string>& _notifyWay)
{
    m_notifyWay = _notifyWay;
    m_notifyWayHasBeenSet = true;
}

bool PrometheusNotificationItem::NotifyWayHasBeenSet() const
{
    return m_notifyWayHasBeenSet;
}

vector<string> PrometheusNotificationItem::GetReceiverGroups() const
{
    return m_receiverGroups;
}

void PrometheusNotificationItem::SetReceiverGroups(const vector<string>& _receiverGroups)
{
    m_receiverGroups = _receiverGroups;
    m_receiverGroupsHasBeenSet = true;
}

bool PrometheusNotificationItem::ReceiverGroupsHasBeenSet() const
{
    return m_receiverGroupsHasBeenSet;
}

vector<uint64_t> PrometheusNotificationItem::GetPhoneNotifyOrder() const
{
    return m_phoneNotifyOrder;
}

void PrometheusNotificationItem::SetPhoneNotifyOrder(const vector<uint64_t>& _phoneNotifyOrder)
{
    m_phoneNotifyOrder = _phoneNotifyOrder;
    m_phoneNotifyOrderHasBeenSet = true;
}

bool PrometheusNotificationItem::PhoneNotifyOrderHasBeenSet() const
{
    return m_phoneNotifyOrderHasBeenSet;
}

int64_t PrometheusNotificationItem::GetPhoneCircleTimes() const
{
    return m_phoneCircleTimes;
}

void PrometheusNotificationItem::SetPhoneCircleTimes(const int64_t& _phoneCircleTimes)
{
    m_phoneCircleTimes = _phoneCircleTimes;
    m_phoneCircleTimesHasBeenSet = true;
}

bool PrometheusNotificationItem::PhoneCircleTimesHasBeenSet() const
{
    return m_phoneCircleTimesHasBeenSet;
}

int64_t PrometheusNotificationItem::GetPhoneInnerInterval() const
{
    return m_phoneInnerInterval;
}

void PrometheusNotificationItem::SetPhoneInnerInterval(const int64_t& _phoneInnerInterval)
{
    m_phoneInnerInterval = _phoneInnerInterval;
    m_phoneInnerIntervalHasBeenSet = true;
}

bool PrometheusNotificationItem::PhoneInnerIntervalHasBeenSet() const
{
    return m_phoneInnerIntervalHasBeenSet;
}

int64_t PrometheusNotificationItem::GetPhoneCircleInterval() const
{
    return m_phoneCircleInterval;
}

void PrometheusNotificationItem::SetPhoneCircleInterval(const int64_t& _phoneCircleInterval)
{
    m_phoneCircleInterval = _phoneCircleInterval;
    m_phoneCircleIntervalHasBeenSet = true;
}

bool PrometheusNotificationItem::PhoneCircleIntervalHasBeenSet() const
{
    return m_phoneCircleIntervalHasBeenSet;
}

bool PrometheusNotificationItem::GetPhoneArriveNotice() const
{
    return m_phoneArriveNotice;
}

void PrometheusNotificationItem::SetPhoneArriveNotice(const bool& _phoneArriveNotice)
{
    m_phoneArriveNotice = _phoneArriveNotice;
    m_phoneArriveNoticeHasBeenSet = true;
}

bool PrometheusNotificationItem::PhoneArriveNoticeHasBeenSet() const
{
    return m_phoneArriveNoticeHasBeenSet;
}

