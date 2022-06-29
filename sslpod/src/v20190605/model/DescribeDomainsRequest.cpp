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

#include <tencentcloud/sslpod/v20190605/model/DescribeDomainsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

DescribeDomainsRequest::DescribeDomainsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchTypeHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_gradeHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_hashHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_domainHasBeenSet(false)
{
}

string DescribeDomainsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_searchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_gradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grade.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_hashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hash.c_str(), allocator).Move(), allocator);
    }

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDomainsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDomainsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDomainsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDomainsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDomainsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDomainsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDomainsRequest::GetSearchType() const
{
    return m_searchType;
}

void DescribeDomainsRequest::SetSearchType(const string& _searchType)
{
    m_searchType = _searchType;
    m_searchTypeHasBeenSet = true;
}

bool DescribeDomainsRequest::SearchTypeHasBeenSet() const
{
    return m_searchTypeHasBeenSet;
}

string DescribeDomainsRequest::GetTag() const
{
    return m_tag;
}

void DescribeDomainsRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeDomainsRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string DescribeDomainsRequest::GetGrade() const
{
    return m_grade;
}

void DescribeDomainsRequest::SetGrade(const string& _grade)
{
    m_grade = _grade;
    m_gradeHasBeenSet = true;
}

bool DescribeDomainsRequest::GradeHasBeenSet() const
{
    return m_gradeHasBeenSet;
}

string DescribeDomainsRequest::GetBrand() const
{
    return m_brand;
}

void DescribeDomainsRequest::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool DescribeDomainsRequest::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string DescribeDomainsRequest::GetCode() const
{
    return m_code;
}

void DescribeDomainsRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DescribeDomainsRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DescribeDomainsRequest::GetHash() const
{
    return m_hash;
}

void DescribeDomainsRequest::SetHash(const string& _hash)
{
    m_hash = _hash;
    m_hashHasBeenSet = true;
}

bool DescribeDomainsRequest::HashHasBeenSet() const
{
    return m_hashHasBeenSet;
}

string DescribeDomainsRequest::GetItem() const
{
    return m_item;
}

void DescribeDomainsRequest::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool DescribeDomainsRequest::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string DescribeDomainsRequest::GetStatus() const
{
    return m_status;
}

void DescribeDomainsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDomainsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDomainsRequest::GetDomain() const
{
    return m_domain;
}

void DescribeDomainsRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeDomainsRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}


