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

#include <tencentcloud/config/v20220802/model/AddAlarmPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

AddAlarmPolicyRequest::AddAlarmPolicyRequest() :
    m_nameHasBeenSet(false),
    m_eventScopeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_noticeTimeHasBeenSet(false),
    m_notificationMechanismHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_noticePeriodHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string AddAlarmPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eventScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventScope.begin(); itr != m_eventScope.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskLevel.begin(); itr != m_riskLevel.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_noticeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_noticeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notificationMechanismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationMechanism";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notificationMechanism.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_noticePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticePeriod.begin(); itr != m_noticePeriod.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAlarmPolicyRequest::GetName() const
{
    return m_name;
}

void AddAlarmPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddAlarmPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> AddAlarmPolicyRequest::GetEventScope() const
{
    return m_eventScope;
}

void AddAlarmPolicyRequest::SetEventScope(const vector<int64_t>& _eventScope)
{
    m_eventScope = _eventScope;
    m_eventScopeHasBeenSet = true;
}

bool AddAlarmPolicyRequest::EventScopeHasBeenSet() const
{
    return m_eventScopeHasBeenSet;
}

vector<int64_t> AddAlarmPolicyRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void AddAlarmPolicyRequest::SetRiskLevel(const vector<int64_t>& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool AddAlarmPolicyRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string AddAlarmPolicyRequest::GetNoticeTime() const
{
    return m_noticeTime;
}

void AddAlarmPolicyRequest::SetNoticeTime(const string& _noticeTime)
{
    m_noticeTime = _noticeTime;
    m_noticeTimeHasBeenSet = true;
}

bool AddAlarmPolicyRequest::NoticeTimeHasBeenSet() const
{
    return m_noticeTimeHasBeenSet;
}

string AddAlarmPolicyRequest::GetNotificationMechanism() const
{
    return m_notificationMechanism;
}

void AddAlarmPolicyRequest::SetNotificationMechanism(const string& _notificationMechanism)
{
    m_notificationMechanism = _notificationMechanism;
    m_notificationMechanismHasBeenSet = true;
}

bool AddAlarmPolicyRequest::NotificationMechanismHasBeenSet() const
{
    return m_notificationMechanismHasBeenSet;
}

int64_t AddAlarmPolicyRequest::GetStatus() const
{
    return m_status;
}

void AddAlarmPolicyRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AddAlarmPolicyRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<int64_t> AddAlarmPolicyRequest::GetNoticePeriod() const
{
    return m_noticePeriod;
}

void AddAlarmPolicyRequest::SetNoticePeriod(const vector<int64_t>& _noticePeriod)
{
    m_noticePeriod = _noticePeriod;
    m_noticePeriodHasBeenSet = true;
}

bool AddAlarmPolicyRequest::NoticePeriodHasBeenSet() const
{
    return m_noticePeriodHasBeenSet;
}

string AddAlarmPolicyRequest::GetDescription() const
{
    return m_description;
}

void AddAlarmPolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddAlarmPolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


