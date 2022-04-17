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

#include <tencentcloud/waf/v20180125/model/DescribeAutoDenyIPRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeAutoDenyIPRequest::DescribeAutoDenyIPRequest() :
    m_domainHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_countHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_vtsMinHasBeenSet(false),
    m_vtsMaxHasBeenSet(false),
    m_ctsMinHasBeenSet(false),
    m_ctsMaxHasBeenSet(false),
    m_skipHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string DescribeAutoDenyIPRequest::ToJsonString() const
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

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_vtsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VtsMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vtsMin, allocator);
    }

    if (m_vtsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VtsMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vtsMax, allocator);
    }

    if (m_ctsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsMin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ctsMin, allocator);
    }

    if (m_ctsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsMax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ctsMax, allocator);
    }

    if (m_skipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skip, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAutoDenyIPRequest::GetDomain() const
{
    return m_domain;
}

void DescribeAutoDenyIPRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeAutoDenyIPRequest::GetIp() const
{
    return m_ip;
}

void DescribeAutoDenyIPRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DescribeAutoDenyIPRequest::GetCount() const
{
    return m_count;
}

void DescribeAutoDenyIPRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DescribeAutoDenyIPRequest::GetCategory() const
{
    return m_category;
}

void DescribeAutoDenyIPRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t DescribeAutoDenyIPRequest::GetVtsMin() const
{
    return m_vtsMin;
}

void DescribeAutoDenyIPRequest::SetVtsMin(const uint64_t& _vtsMin)
{
    m_vtsMin = _vtsMin;
    m_vtsMinHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::VtsMinHasBeenSet() const
{
    return m_vtsMinHasBeenSet;
}

uint64_t DescribeAutoDenyIPRequest::GetVtsMax() const
{
    return m_vtsMax;
}

void DescribeAutoDenyIPRequest::SetVtsMax(const uint64_t& _vtsMax)
{
    m_vtsMax = _vtsMax;
    m_vtsMaxHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::VtsMaxHasBeenSet() const
{
    return m_vtsMaxHasBeenSet;
}

uint64_t DescribeAutoDenyIPRequest::GetCtsMin() const
{
    return m_ctsMin;
}

void DescribeAutoDenyIPRequest::SetCtsMin(const uint64_t& _ctsMin)
{
    m_ctsMin = _ctsMin;
    m_ctsMinHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::CtsMinHasBeenSet() const
{
    return m_ctsMinHasBeenSet;
}

uint64_t DescribeAutoDenyIPRequest::GetCtsMax() const
{
    return m_ctsMax;
}

void DescribeAutoDenyIPRequest::SetCtsMax(const uint64_t& _ctsMax)
{
    m_ctsMax = _ctsMax;
    m_ctsMaxHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::CtsMaxHasBeenSet() const
{
    return m_ctsMaxHasBeenSet;
}

uint64_t DescribeAutoDenyIPRequest::GetSkip() const
{
    return m_skip;
}

void DescribeAutoDenyIPRequest::SetSkip(const uint64_t& _skip)
{
    m_skip = _skip;
    m_skipHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::SkipHasBeenSet() const
{
    return m_skipHasBeenSet;
}

uint64_t DescribeAutoDenyIPRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAutoDenyIPRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAutoDenyIPRequest::GetName() const
{
    return m_name;
}

void DescribeAutoDenyIPRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAutoDenyIPRequest::GetSort() const
{
    return m_sort;
}

void DescribeAutoDenyIPRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeAutoDenyIPRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


