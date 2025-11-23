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

#include <tencentcloud/waf/v20180125/model/DescribeRateLimitsV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeRateLimitsV2Request::DescribeRateLimitsV2Request() :
    m_domainHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_limitObjectHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeRateLimitsV2Request::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_limitObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limitObject.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRateLimitsV2Request::GetDomain() const
{
    return m_domain;
}

void DescribeRateLimitsV2Request::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeRateLimitsV2Request::GetId() const
{
    return m_id;
}

void DescribeRateLimitsV2Request::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeRateLimitsV2Request::GetName() const
{
    return m_name;
}

void DescribeRateLimitsV2Request::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeRateLimitsV2Request::GetMethod() const
{
    return m_method;
}

void DescribeRateLimitsV2Request::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string DescribeRateLimitsV2Request::GetLimitObject() const
{
    return m_limitObject;
}

void DescribeRateLimitsV2Request::SetLimitObject(const string& _limitObject)
{
    m_limitObject = _limitObject;
    m_limitObjectHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::LimitObjectHasBeenSet() const
{
    return m_limitObjectHasBeenSet;
}

int64_t DescribeRateLimitsV2Request::GetStatus() const
{
    return m_status;
}

void DescribeRateLimitsV2Request::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeRateLimitsV2Request::GetOrder() const
{
    return m_order;
}

void DescribeRateLimitsV2Request::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeRateLimitsV2Request::GetBy() const
{
    return m_by;
}

void DescribeRateLimitsV2Request::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

int64_t DescribeRateLimitsV2Request::GetOffset() const
{
    return m_offset;
}

void DescribeRateLimitsV2Request::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRateLimitsV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeRateLimitsV2Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<FiltersItemNew> DescribeRateLimitsV2Request::GetFilters() const
{
    return m_filters;
}

void DescribeRateLimitsV2Request::SetFilters(const vector<FiltersItemNew>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRateLimitsV2Request::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


