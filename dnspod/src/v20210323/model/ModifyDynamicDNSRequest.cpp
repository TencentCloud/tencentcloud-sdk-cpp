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

#include <tencentcloud/dnspod/v20210323/model/ModifyDynamicDNSRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyDynamicDNSRequest::ModifyDynamicDNSRequest() :
    m_domainHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordLineIdHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_ttlHasBeenSet(false)
{
}

string ModifyDynamicDNSRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordId, allocator);
    }

    if (m_recordLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordLine.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordLineId.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttl, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDynamicDNSRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDynamicDNSRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyDynamicDNSRequest::GetRecordId() const
{
    return m_recordId;
}

void ModifyDynamicDNSRequest::SetRecordId(const uint64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string ModifyDynamicDNSRequest::GetRecordLine() const
{
    return m_recordLine;
}

void ModifyDynamicDNSRequest::SetRecordLine(const string& _recordLine)
{
    m_recordLine = _recordLine;
    m_recordLineHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::RecordLineHasBeenSet() const
{
    return m_recordLineHasBeenSet;
}

uint64_t ModifyDynamicDNSRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyDynamicDNSRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string ModifyDynamicDNSRequest::GetSubDomain() const
{
    return m_subDomain;
}

void ModifyDynamicDNSRequest::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string ModifyDynamicDNSRequest::GetRecordLineId() const
{
    return m_recordLineId;
}

void ModifyDynamicDNSRequest::SetRecordLineId(const string& _recordLineId)
{
    m_recordLineId = _recordLineId;
    m_recordLineIdHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::RecordLineIdHasBeenSet() const
{
    return m_recordLineIdHasBeenSet;
}

string ModifyDynamicDNSRequest::GetValue() const
{
    return m_value;
}

void ModifyDynamicDNSRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t ModifyDynamicDNSRequest::GetTtl() const
{
    return m_ttl;
}

void ModifyDynamicDNSRequest::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool ModifyDynamicDNSRequest::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}


