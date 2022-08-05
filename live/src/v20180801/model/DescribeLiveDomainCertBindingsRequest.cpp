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

#include <tencentcloud/live/v20180801/model/DescribeLiveDomainCertBindingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveDomainCertBindingsRequest::DescribeLiveDomainCertBindingsRequest() :
    m_domainSearchHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

string DescribeLiveDomainCertBindingsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainSearch.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_length, allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveDomainCertBindingsRequest::GetDomainSearch() const
{
    return m_domainSearch;
}

void DescribeLiveDomainCertBindingsRequest::SetDomainSearch(const string& _domainSearch)
{
    m_domainSearch = _domainSearch;
    m_domainSearchHasBeenSet = true;
}

bool DescribeLiveDomainCertBindingsRequest::DomainSearchHasBeenSet() const
{
    return m_domainSearchHasBeenSet;
}

int64_t DescribeLiveDomainCertBindingsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLiveDomainCertBindingsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLiveDomainCertBindingsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeLiveDomainCertBindingsRequest::GetLength() const
{
    return m_length;
}

void DescribeLiveDomainCertBindingsRequest::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool DescribeLiveDomainCertBindingsRequest::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string DescribeLiveDomainCertBindingsRequest::GetDomainName() const
{
    return m_domainName;
}

void DescribeLiveDomainCertBindingsRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DescribeLiveDomainCertBindingsRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DescribeLiveDomainCertBindingsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeLiveDomainCertBindingsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeLiveDomainCertBindingsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}


