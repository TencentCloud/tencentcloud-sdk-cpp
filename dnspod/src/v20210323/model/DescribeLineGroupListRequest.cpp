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

#include <tencentcloud/dnspod/v20210323/model/DescribeLineGroupListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeLineGroupListRequest::DescribeLineGroupListRequest() :
    m_domainHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DescribeLineGroupListRequest::ToJsonString() const
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

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLineGroupListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeLineGroupListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeLineGroupListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeLineGroupListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLineGroupListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLineGroupListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeLineGroupListRequest::GetLength() const
{
    return m_length;
}

void DescribeLineGroupListRequest::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool DescribeLineGroupListRequest::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string DescribeLineGroupListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeLineGroupListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeLineGroupListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

uint64_t DescribeLineGroupListRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeLineGroupListRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeLineGroupListRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


