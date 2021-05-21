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
using namespace rapidjson;
using namespace std;

ModifyDynamicDNSRequest::ModifyDynamicDNSRequest() :
    m_domainHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_recordLineHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_recordLineIdHasBeenSet(false)
{
}

string ModifyDynamicDNSRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordId, allocator);
    }

    if (m_recordLineHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordLine.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_subDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLineIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordLineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recordLineId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


