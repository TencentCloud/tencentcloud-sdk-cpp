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

#include <tencentcloud/monitor/v20230616/model/AlarmNotifyHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

AlarmNotifyHistory::AlarmNotifyHistory() :
    m_notifyIdHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_notifyTimeHasBeenSet(false),
    m_triggerTimeHasBeenSet(false),
    m_triggerLevelHasBeenSet(false),
    m_alarmContentHasBeenSet(false),
    m_alarmObjectHasBeenSet(false),
    m_channelSetHasBeenSet(false),
    m_channelsReceiversHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_promeInstanceIDHasBeenSet(false),
    m_promeInstanceRegionHasBeenSet(false),
    m_noticesHasBeenSet(false),
    m_triggerStatusHasBeenSet(false),
    m_promeConsoleURLHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome AlarmNotifyHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotifyId") && !value["NotifyId"].IsNull())
    {
        if (!value["NotifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.NotifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyId = string(value["NotifyId"].GetString());
        m_notifyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.PolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = string(value["PolicyId"].GetString());
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("NotifyTime") && !value["NotifyTime"].IsNull())
    {
        if (!value["NotifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.NotifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notifyTime = value["NotifyTime"].GetInt64();
        m_notifyTimeHasBeenSet = true;
    }

    if (value.HasMember("TriggerTime") && !value["TriggerTime"].IsNull())
    {
        if (!value["TriggerTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.TriggerTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerTime = value["TriggerTime"].GetInt64();
        m_triggerTimeHasBeenSet = true;
    }

    if (value.HasMember("TriggerLevel") && !value["TriggerLevel"].IsNull())
    {
        if (!value["TriggerLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.TriggerLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerLevel = string(value["TriggerLevel"].GetString());
        m_triggerLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmContent") && !value["AlarmContent"].IsNull())
    {
        if (!value["AlarmContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.AlarmContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmContent = string(value["AlarmContent"].GetString());
        m_alarmContentHasBeenSet = true;
    }

    if (value.HasMember("AlarmObject") && !value["AlarmObject"].IsNull())
    {
        if (!value["AlarmObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.AlarmObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmObject = string(value["AlarmObject"].GetString());
        m_alarmObjectHasBeenSet = true;
    }

    if (value.HasMember("ChannelSet") && !value["ChannelSet"].IsNull())
    {
        if (!value["ChannelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.ChannelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelSet.push_back((*itr).GetString());
        }
        m_channelSetHasBeenSet = true;
    }

    if (value.HasMember("ChannelsReceivers") && !value["ChannelsReceivers"].IsNull())
    {
        if (!value["ChannelsReceivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.ChannelsReceivers` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsReceivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelsReceivers item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_channelsReceivers.push_back(item);
        }
        m_channelsReceiversHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PromeInstanceID") && !value["PromeInstanceID"].IsNull())
    {
        if (!value["PromeInstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.PromeInstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promeInstanceID = string(value["PromeInstanceID"].GetString());
        m_promeInstanceIDHasBeenSet = true;
    }

    if (value.HasMember("PromeInstanceRegion") && !value["PromeInstanceRegion"].IsNull())
    {
        if (!value["PromeInstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.PromeInstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promeInstanceRegion = string(value["PromeInstanceRegion"].GetString());
        m_promeInstanceRegionHasBeenSet = true;
    }

    if (value.HasMember("Notices") && !value["Notices"].IsNull())
    {
        if (!value["Notices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.Notices` is not array type"));

        const rapidjson::Value &tmpValue = value["Notices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotifyRelatedNotice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notices.push_back(item);
        }
        m_noticesHasBeenSet = true;
    }

    if (value.HasMember("TriggerStatus") && !value["TriggerStatus"].IsNull())
    {
        if (!value["TriggerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.TriggerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerStatus = string(value["TriggerStatus"].GetString());
        m_triggerStatusHasBeenSet = true;
    }

    if (value.HasMember("PromeConsoleURL") && !value["PromeConsoleURL"].IsNull())
    {
        if (!value["PromeConsoleURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.PromeConsoleURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promeConsoleURL = string(value["PromeConsoleURL"].GetString());
        m_promeConsoleURLHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmNotifyHistory.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmLable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmNotifyHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notifyTime, allocator);
    }

    if (m_triggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerTime, allocator);
    }

    if (m_triggerLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmContent.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmObject.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelSet.begin(); itr != m_channelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelsReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsReceivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channelsReceivers.begin(); itr != m_channelsReceivers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_promeInstanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromeInstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promeInstanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_promeInstanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromeInstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promeInstanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_noticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notices.begin(); itr != m_notices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_triggerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_promeConsoleURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromeConsoleURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promeConsoleURL.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AlarmNotifyHistory::GetNotifyId() const
{
    return m_notifyId;
}

void AlarmNotifyHistory::SetNotifyId(const string& _notifyId)
{
    m_notifyId = _notifyId;
    m_notifyIdHasBeenSet = true;
}

bool AlarmNotifyHistory::NotifyIdHasBeenSet() const
{
    return m_notifyIdHasBeenSet;
}

string AlarmNotifyHistory::GetPolicyId() const
{
    return m_policyId;
}

void AlarmNotifyHistory::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AlarmNotifyHistory::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AlarmNotifyHistory::GetSessionId() const
{
    return m_sessionId;
}

void AlarmNotifyHistory::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool AlarmNotifyHistory::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t AlarmNotifyHistory::GetNotifyTime() const
{
    return m_notifyTime;
}

void AlarmNotifyHistory::SetNotifyTime(const int64_t& _notifyTime)
{
    m_notifyTime = _notifyTime;
    m_notifyTimeHasBeenSet = true;
}

bool AlarmNotifyHistory::NotifyTimeHasBeenSet() const
{
    return m_notifyTimeHasBeenSet;
}

int64_t AlarmNotifyHistory::GetTriggerTime() const
{
    return m_triggerTime;
}

void AlarmNotifyHistory::SetTriggerTime(const int64_t& _triggerTime)
{
    m_triggerTime = _triggerTime;
    m_triggerTimeHasBeenSet = true;
}

bool AlarmNotifyHistory::TriggerTimeHasBeenSet() const
{
    return m_triggerTimeHasBeenSet;
}

string AlarmNotifyHistory::GetTriggerLevel() const
{
    return m_triggerLevel;
}

void AlarmNotifyHistory::SetTriggerLevel(const string& _triggerLevel)
{
    m_triggerLevel = _triggerLevel;
    m_triggerLevelHasBeenSet = true;
}

bool AlarmNotifyHistory::TriggerLevelHasBeenSet() const
{
    return m_triggerLevelHasBeenSet;
}

string AlarmNotifyHistory::GetAlarmContent() const
{
    return m_alarmContent;
}

void AlarmNotifyHistory::SetAlarmContent(const string& _alarmContent)
{
    m_alarmContent = _alarmContent;
    m_alarmContentHasBeenSet = true;
}

bool AlarmNotifyHistory::AlarmContentHasBeenSet() const
{
    return m_alarmContentHasBeenSet;
}

string AlarmNotifyHistory::GetAlarmObject() const
{
    return m_alarmObject;
}

void AlarmNotifyHistory::SetAlarmObject(const string& _alarmObject)
{
    m_alarmObject = _alarmObject;
    m_alarmObjectHasBeenSet = true;
}

bool AlarmNotifyHistory::AlarmObjectHasBeenSet() const
{
    return m_alarmObjectHasBeenSet;
}

vector<string> AlarmNotifyHistory::GetChannelSet() const
{
    return m_channelSet;
}

void AlarmNotifyHistory::SetChannelSet(const vector<string>& _channelSet)
{
    m_channelSet = _channelSet;
    m_channelSetHasBeenSet = true;
}

bool AlarmNotifyHistory::ChannelSetHasBeenSet() const
{
    return m_channelSetHasBeenSet;
}

vector<ChannelsReceivers> AlarmNotifyHistory::GetChannelsReceivers() const
{
    return m_channelsReceivers;
}

void AlarmNotifyHistory::SetChannelsReceivers(const vector<ChannelsReceivers>& _channelsReceivers)
{
    m_channelsReceivers = _channelsReceivers;
    m_channelsReceiversHasBeenSet = true;
}

bool AlarmNotifyHistory::ChannelsReceiversHasBeenSet() const
{
    return m_channelsReceiversHasBeenSet;
}

string AlarmNotifyHistory::GetPolicyName() const
{
    return m_policyName;
}

void AlarmNotifyHistory::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AlarmNotifyHistory::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AlarmNotifyHistory::GetPromeInstanceID() const
{
    return m_promeInstanceID;
}

void AlarmNotifyHistory::SetPromeInstanceID(const string& _promeInstanceID)
{
    m_promeInstanceID = _promeInstanceID;
    m_promeInstanceIDHasBeenSet = true;
}

bool AlarmNotifyHistory::PromeInstanceIDHasBeenSet() const
{
    return m_promeInstanceIDHasBeenSet;
}

string AlarmNotifyHistory::GetPromeInstanceRegion() const
{
    return m_promeInstanceRegion;
}

void AlarmNotifyHistory::SetPromeInstanceRegion(const string& _promeInstanceRegion)
{
    m_promeInstanceRegion = _promeInstanceRegion;
    m_promeInstanceRegionHasBeenSet = true;
}

bool AlarmNotifyHistory::PromeInstanceRegionHasBeenSet() const
{
    return m_promeInstanceRegionHasBeenSet;
}

vector<NotifyRelatedNotice> AlarmNotifyHistory::GetNotices() const
{
    return m_notices;
}

void AlarmNotifyHistory::SetNotices(const vector<NotifyRelatedNotice>& _notices)
{
    m_notices = _notices;
    m_noticesHasBeenSet = true;
}

bool AlarmNotifyHistory::NoticesHasBeenSet() const
{
    return m_noticesHasBeenSet;
}

string AlarmNotifyHistory::GetTriggerStatus() const
{
    return m_triggerStatus;
}

void AlarmNotifyHistory::SetTriggerStatus(const string& _triggerStatus)
{
    m_triggerStatus = _triggerStatus;
    m_triggerStatusHasBeenSet = true;
}

bool AlarmNotifyHistory::TriggerStatusHasBeenSet() const
{
    return m_triggerStatusHasBeenSet;
}

string AlarmNotifyHistory::GetPromeConsoleURL() const
{
    return m_promeConsoleURL;
}

void AlarmNotifyHistory::SetPromeConsoleURL(const string& _promeConsoleURL)
{
    m_promeConsoleURL = _promeConsoleURL;
    m_promeConsoleURLHasBeenSet = true;
}

bool AlarmNotifyHistory::PromeConsoleURLHasBeenSet() const
{
    return m_promeConsoleURLHasBeenSet;
}

vector<AlarmLable> AlarmNotifyHistory::GetLabels() const
{
    return m_labels;
}

void AlarmNotifyHistory::SetLabels(const vector<AlarmLable>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool AlarmNotifyHistory::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

