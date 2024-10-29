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

#include <tencentcloud/cls/v20201016/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateAlarmNoticeRequest::CreateAlarmNoticeRequest() :
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_noticeReceiversHasBeenSet(false),
    m_webCallbacksHasBeenSet(false),
    m_noticeRulesHasBeenSet(false),
    m_jumpDomainHasBeenSet(false),
    m_deliverStatusHasBeenSet(false),
    m_deliverConfigHasBeenSet(false),
    m_alarmShieldStatusHasBeenSet(false)
{
}

string CreateAlarmNoticeRequest::ToJsonString() const
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeReceivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeReceivers.begin(); itr != m_noticeReceivers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_webCallbacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCallbacks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webCallbacks.begin(); itr != m_webCallbacks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_noticeRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeRules.begin(); itr != m_noticeRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_jumpDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliverStatus, allocator);
    }

    if (m_deliverConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deliverConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_alarmShieldStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmShieldStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmShieldStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAlarmNoticeRequest::GetName() const
{
    return m_name;
}

void CreateAlarmNoticeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Tag> CreateAlarmNoticeRequest::GetTags() const
{
    return m_tags;
}

void CreateAlarmNoticeRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateAlarmNoticeRequest::GetType() const
{
    return m_type;
}

void CreateAlarmNoticeRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<NoticeReceiver> CreateAlarmNoticeRequest::GetNoticeReceivers() const
{
    return m_noticeReceivers;
}

void CreateAlarmNoticeRequest::SetNoticeReceivers(const vector<NoticeReceiver>& _noticeReceivers)
{
    m_noticeReceivers = _noticeReceivers;
    m_noticeReceiversHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::NoticeReceiversHasBeenSet() const
{
    return m_noticeReceiversHasBeenSet;
}

vector<WebCallback> CreateAlarmNoticeRequest::GetWebCallbacks() const
{
    return m_webCallbacks;
}

void CreateAlarmNoticeRequest::SetWebCallbacks(const vector<WebCallback>& _webCallbacks)
{
    m_webCallbacks = _webCallbacks;
    m_webCallbacksHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::WebCallbacksHasBeenSet() const
{
    return m_webCallbacksHasBeenSet;
}

vector<NoticeRule> CreateAlarmNoticeRequest::GetNoticeRules() const
{
    return m_noticeRules;
}

void CreateAlarmNoticeRequest::SetNoticeRules(const vector<NoticeRule>& _noticeRules)
{
    m_noticeRules = _noticeRules;
    m_noticeRulesHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::NoticeRulesHasBeenSet() const
{
    return m_noticeRulesHasBeenSet;
}

string CreateAlarmNoticeRequest::GetJumpDomain() const
{
    return m_jumpDomain;
}

void CreateAlarmNoticeRequest::SetJumpDomain(const string& _jumpDomain)
{
    m_jumpDomain = _jumpDomain;
    m_jumpDomainHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::JumpDomainHasBeenSet() const
{
    return m_jumpDomainHasBeenSet;
}

uint64_t CreateAlarmNoticeRequest::GetDeliverStatus() const
{
    return m_deliverStatus;
}

void CreateAlarmNoticeRequest::SetDeliverStatus(const uint64_t& _deliverStatus)
{
    m_deliverStatus = _deliverStatus;
    m_deliverStatusHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::DeliverStatusHasBeenSet() const
{
    return m_deliverStatusHasBeenSet;
}

DeliverConfig CreateAlarmNoticeRequest::GetDeliverConfig() const
{
    return m_deliverConfig;
}

void CreateAlarmNoticeRequest::SetDeliverConfig(const DeliverConfig& _deliverConfig)
{
    m_deliverConfig = _deliverConfig;
    m_deliverConfigHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::DeliverConfigHasBeenSet() const
{
    return m_deliverConfigHasBeenSet;
}

uint64_t CreateAlarmNoticeRequest::GetAlarmShieldStatus() const
{
    return m_alarmShieldStatus;
}

void CreateAlarmNoticeRequest::SetAlarmShieldStatus(const uint64_t& _alarmShieldStatus)
{
    m_alarmShieldStatus = _alarmShieldStatus;
    m_alarmShieldStatusHasBeenSet = true;
}

bool CreateAlarmNoticeRequest::AlarmShieldStatusHasBeenSet() const
{
    return m_alarmShieldStatusHasBeenSet;
}


