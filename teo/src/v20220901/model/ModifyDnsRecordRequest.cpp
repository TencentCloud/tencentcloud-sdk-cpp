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

#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyDnsRecordRequest::ModifyDnsRecordRequest() :
    m_dnsRecordIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_dnsRecordTypeHasBeenSet(false),
    m_dnsRecordNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

string ModifyDnsRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dnsRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsRecordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsRecordType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsRecordType.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsRecordNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsRecordName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsRecordName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tTL, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDnsRecordRequest::GetDnsRecordId() const
{
    return m_dnsRecordId;
}

void ModifyDnsRecordRequest::SetDnsRecordId(const string& _dnsRecordId)
{
    m_dnsRecordId = _dnsRecordId;
    m_dnsRecordIdHasBeenSet = true;
}

bool ModifyDnsRecordRequest::DnsRecordIdHasBeenSet() const
{
    return m_dnsRecordIdHasBeenSet;
}

string ModifyDnsRecordRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyDnsRecordRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyDnsRecordRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyDnsRecordRequest::GetDnsRecordType() const
{
    return m_dnsRecordType;
}

void ModifyDnsRecordRequest::SetDnsRecordType(const string& _dnsRecordType)
{
    m_dnsRecordType = _dnsRecordType;
    m_dnsRecordTypeHasBeenSet = true;
}

bool ModifyDnsRecordRequest::DnsRecordTypeHasBeenSet() const
{
    return m_dnsRecordTypeHasBeenSet;
}

string ModifyDnsRecordRequest::GetDnsRecordName() const
{
    return m_dnsRecordName;
}

void ModifyDnsRecordRequest::SetDnsRecordName(const string& _dnsRecordName)
{
    m_dnsRecordName = _dnsRecordName;
    m_dnsRecordNameHasBeenSet = true;
}

bool ModifyDnsRecordRequest::DnsRecordNameHasBeenSet() const
{
    return m_dnsRecordNameHasBeenSet;
}

string ModifyDnsRecordRequest::GetContent() const
{
    return m_content;
}

void ModifyDnsRecordRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyDnsRecordRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ModifyDnsRecordRequest::GetTTL() const
{
    return m_tTL;
}

void ModifyDnsRecordRequest::SetTTL(const int64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool ModifyDnsRecordRequest::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

int64_t ModifyDnsRecordRequest::GetPriority() const
{
    return m_priority;
}

void ModifyDnsRecordRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyDnsRecordRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string ModifyDnsRecordRequest::GetMode() const
{
    return m_mode;
}

void ModifyDnsRecordRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyDnsRecordRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}


