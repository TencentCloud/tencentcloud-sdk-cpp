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

#include <tencentcloud/dnspod/v20210323/model/DescribeDomainLogFilterFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeDomainLogFilterFileRequest::DescribeDomainLogFilterFileRequest() :
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_operateBeginHasBeenSet(false),
    m_operateEndHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_operateClientIPHasBeenSet(false),
    m_operateContentHasBeenSet(false)
{
}

string DescribeDomainLogFilterFileRequest::ToJsonString() const
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

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_operateBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_operateEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operateUin, allocator);
    }

    if (m_operateClientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateClientIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateClientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_operateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDomainLogFilterFileRequest::GetDomain() const
{
    return m_domain;
}

void DescribeDomainLogFilterFileRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeDomainLogFilterFileRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeDomainLogFilterFileRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string DescribeDomainLogFilterFileRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDomainLogFilterFileRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeDomainLogFilterFileRequest::GetOperateBegin() const
{
    return m_operateBegin;
}

void DescribeDomainLogFilterFileRequest::SetOperateBegin(const string& _operateBegin)
{
    m_operateBegin = _operateBegin;
    m_operateBeginHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::OperateBeginHasBeenSet() const
{
    return m_operateBeginHasBeenSet;
}

string DescribeDomainLogFilterFileRequest::GetOperateEnd() const
{
    return m_operateEnd;
}

void DescribeDomainLogFilterFileRequest::SetOperateEnd(const string& _operateEnd)
{
    m_operateEnd = _operateEnd;
    m_operateEndHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::OperateEndHasBeenSet() const
{
    return m_operateEndHasBeenSet;
}

uint64_t DescribeDomainLogFilterFileRequest::GetOperateUin() const
{
    return m_operateUin;
}

void DescribeDomainLogFilterFileRequest::SetOperateUin(const uint64_t& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string DescribeDomainLogFilterFileRequest::GetOperateClientIP() const
{
    return m_operateClientIP;
}

void DescribeDomainLogFilterFileRequest::SetOperateClientIP(const string& _operateClientIP)
{
    m_operateClientIP = _operateClientIP;
    m_operateClientIPHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::OperateClientIPHasBeenSet() const
{
    return m_operateClientIPHasBeenSet;
}

string DescribeDomainLogFilterFileRequest::GetOperateContent() const
{
    return m_operateContent;
}

void DescribeDomainLogFilterFileRequest::SetOperateContent(const string& _operateContent)
{
    m_operateContent = _operateContent;
    m_operateContentHasBeenSet = true;
}

bool DescribeDomainLogFilterFileRequest::OperateContentHasBeenSet() const
{
    return m_operateContentHasBeenSet;
}


