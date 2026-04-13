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

#include <tencentcloud/config/v20220802/model/AlarmPolicyRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

AlarmPolicyRsp::AlarmPolicyRsp() :
    m_alarmPolicyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_eventScopeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_noticePeriodHasBeenSet(false),
    m_noticeTimeHasBeenSet(false),
    m_notificationMechanismHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicyRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmPolicyId") && !value["AlarmPolicyId"].IsNull())
    {
        if (!value["AlarmPolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.AlarmPolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmPolicyId = value["AlarmPolicyId"].GetUint64();
        m_alarmPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("EventScope") && !value["EventScope"].IsNull())
    {
        if (!value["EventScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.EventScope` is not array type"));

        const rapidjson::Value &tmpValue = value["EventScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventScope.push_back((*itr).GetInt64());
        }
        m_eventScopeHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.RiskLevel` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskLevel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskLevel.push_back((*itr).GetInt64());
        }
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("NoticePeriod") && !value["NoticePeriod"].IsNull())
    {
        if (!value["NoticePeriod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.NoticePeriod` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticePeriod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noticePeriod.push_back((*itr).GetInt64());
        }
        m_noticePeriodHasBeenSet = true;
    }

    if (value.HasMember("NoticeTime") && !value["NoticeTime"].IsNull())
    {
        if (!value["NoticeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.NoticeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeTime = string(value["NoticeTime"].GetString());
        m_noticeTimeHasBeenSet = true;
    }

    if (value.HasMember("NotificationMechanism") && !value["NotificationMechanism"].IsNull())
    {
        if (!value["NotificationMechanism"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.NotificationMechanism` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationMechanism = string(value["NotificationMechanism"].GetString());
        m_notificationMechanismHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyRsp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicyRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmPolicyId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_eventScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventScope.begin(); itr != m_eventScope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLevel.begin(); itr != m_riskLevel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_noticePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticePeriod.begin(); itr != m_noticePeriod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_noticeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationMechanismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationMechanism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notificationMechanism.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AlarmPolicyRsp::GetAlarmPolicyId() const
{
    return m_alarmPolicyId;
}

void AlarmPolicyRsp::SetAlarmPolicyId(const uint64_t& _alarmPolicyId)
{
    m_alarmPolicyId = _alarmPolicyId;
    m_alarmPolicyIdHasBeenSet = true;
}

bool AlarmPolicyRsp::AlarmPolicyIdHasBeenSet() const
{
    return m_alarmPolicyIdHasBeenSet;
}

string AlarmPolicyRsp::GetName() const
{
    return m_name;
}

void AlarmPolicyRsp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlarmPolicyRsp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AlarmPolicyRsp::GetType() const
{
    return m_type;
}

void AlarmPolicyRsp::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlarmPolicyRsp::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<int64_t> AlarmPolicyRsp::GetEventScope() const
{
    return m_eventScope;
}

void AlarmPolicyRsp::SetEventScope(const vector<int64_t>& _eventScope)
{
    m_eventScope = _eventScope;
    m_eventScopeHasBeenSet = true;
}

bool AlarmPolicyRsp::EventScopeHasBeenSet() const
{
    return m_eventScopeHasBeenSet;
}

vector<int64_t> AlarmPolicyRsp::GetRiskLevel() const
{
    return m_riskLevel;
}

void AlarmPolicyRsp::SetRiskLevel(const vector<int64_t>& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool AlarmPolicyRsp::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<int64_t> AlarmPolicyRsp::GetNoticePeriod() const
{
    return m_noticePeriod;
}

void AlarmPolicyRsp::SetNoticePeriod(const vector<int64_t>& _noticePeriod)
{
    m_noticePeriod = _noticePeriod;
    m_noticePeriodHasBeenSet = true;
}

bool AlarmPolicyRsp::NoticePeriodHasBeenSet() const
{
    return m_noticePeriodHasBeenSet;
}

string AlarmPolicyRsp::GetNoticeTime() const
{
    return m_noticeTime;
}

void AlarmPolicyRsp::SetNoticeTime(const string& _noticeTime)
{
    m_noticeTime = _noticeTime;
    m_noticeTimeHasBeenSet = true;
}

bool AlarmPolicyRsp::NoticeTimeHasBeenSet() const
{
    return m_noticeTimeHasBeenSet;
}

string AlarmPolicyRsp::GetNotificationMechanism() const
{
    return m_notificationMechanism;
}

void AlarmPolicyRsp::SetNotificationMechanism(const string& _notificationMechanism)
{
    m_notificationMechanism = _notificationMechanism;
    m_notificationMechanismHasBeenSet = true;
}

bool AlarmPolicyRsp::NotificationMechanismHasBeenSet() const
{
    return m_notificationMechanismHasBeenSet;
}

int64_t AlarmPolicyRsp::GetStatus() const
{
    return m_status;
}

void AlarmPolicyRsp::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmPolicyRsp::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlarmPolicyRsp::GetDescription() const
{
    return m_description;
}

void AlarmPolicyRsp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AlarmPolicyRsp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

