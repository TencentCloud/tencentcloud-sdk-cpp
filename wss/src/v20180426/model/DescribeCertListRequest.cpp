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

#include <tencentcloud/wss/v20180426/model/DescribeCertListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wss::V20180426::Model;
using namespace std;

DescribeCertListRequest::DescribeCertListRequest() :
    m_moduleTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_withCertHasBeenSet(false),
    m_altDomainHasBeenSet(false)
{
}

string DescribeCertListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_withCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_withCert.c_str(), allocator).Move(), allocator);
    }

    if (m_altDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AltDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_altDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCertListRequest::GetModuleType() const
{
    return m_moduleType;
}

void DescribeCertListRequest::SetModuleType(const string& _moduleType)
{
    m_moduleType = _moduleType;
    m_moduleTypeHasBeenSet = true;
}

bool DescribeCertListRequest::ModuleTypeHasBeenSet() const
{
    return m_moduleTypeHasBeenSet;
}

uint64_t DescribeCertListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCertListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCertListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCertListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCertListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCertListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCertListRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeCertListRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeCertListRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeCertListRequest::GetCertType() const
{
    return m_certType;
}

void DescribeCertListRequest::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool DescribeCertListRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DescribeCertListRequest::GetId() const
{
    return m_id;
}

void DescribeCertListRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeCertListRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeCertListRequest::GetWithCert() const
{
    return m_withCert;
}

void DescribeCertListRequest::SetWithCert(const string& _withCert)
{
    m_withCert = _withCert;
    m_withCertHasBeenSet = true;
}

bool DescribeCertListRequest::WithCertHasBeenSet() const
{
    return m_withCertHasBeenSet;
}

string DescribeCertListRequest::GetAltDomain() const
{
    return m_altDomain;
}

void DescribeCertListRequest::SetAltDomain(const string& _altDomain)
{
    m_altDomain = _altDomain;
    m_altDomainHasBeenSet = true;
}

bool DescribeCertListRequest::AltDomainHasBeenSet() const
{
    return m_altDomainHasBeenSet;
}


