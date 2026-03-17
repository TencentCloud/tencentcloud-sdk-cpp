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

#include <tencentcloud/tcss/v20201101/model/DescribeImageDenyRuleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageDenyRuleListRequest::DescribeImageDenyRuleListRequest() :
    m_filtersHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_topTurnOnHasBeenSet(false)
{
}

string DescribeImageDenyRuleListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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

    if (m_topTurnOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopTurnOn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topTurnOn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<RunTimeFilters> DescribeImageDenyRuleListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeImageDenyRuleListRequest::SetFilters(const vector<RunTimeFilters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeImageDenyRuleListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeImageDenyRuleListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeImageDenyRuleListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeImageDenyRuleListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeImageDenyRuleListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeImageDenyRuleListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeImageDenyRuleListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeImageDenyRuleListRequest::GetOrder() const
{
    return m_order;
}

void DescribeImageDenyRuleListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeImageDenyRuleListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeImageDenyRuleListRequest::GetBy() const
{
    return m_by;
}

void DescribeImageDenyRuleListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeImageDenyRuleListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

bool DescribeImageDenyRuleListRequest::GetTopTurnOn() const
{
    return m_topTurnOn;
}

void DescribeImageDenyRuleListRequest::SetTopTurnOn(const bool& _topTurnOn)
{
    m_topTurnOn = _topTurnOn;
    m_topTurnOnHasBeenSet = true;
}

bool DescribeImageDenyRuleListRequest::TopTurnOnHasBeenSet() const
{
    return m_topTurnOnHasBeenSet;
}


