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

#include <tencentcloud/bdrc/v20260330/model/DescribeDisasterRecoverySitePairsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeDisasterRecoverySitePairsRequest::DescribeDisasterRecoverySitePairsRequest() :
    m_sitePairTypeHasBeenSet(false),
    m_sitePairIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false)
{
}

string DescribeDisasterRecoverySitePairsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sitePairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairType.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sitePairIds.begin(); itr != m_sitePairIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDisasterRecoverySitePairsRequest::GetSitePairType() const
{
    return m_sitePairType;
}

void DescribeDisasterRecoverySitePairsRequest::SetSitePairType(const string& _sitePairType)
{
    m_sitePairType = _sitePairType;
    m_sitePairTypeHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::SitePairTypeHasBeenSet() const
{
    return m_sitePairTypeHasBeenSet;
}

vector<string> DescribeDisasterRecoverySitePairsRequest::GetSitePairIds() const
{
    return m_sitePairIds;
}

void DescribeDisasterRecoverySitePairsRequest::SetSitePairIds(const vector<string>& _sitePairIds)
{
    m_sitePairIds = _sitePairIds;
    m_sitePairIdsHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::SitePairIdsHasBeenSet() const
{
    return m_sitePairIdsHasBeenSet;
}

vector<FilterModel> DescribeDisasterRecoverySitePairsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDisasterRecoverySitePairsRequest::SetFilters(const vector<FilterModel>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeDisasterRecoverySitePairsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDisasterRecoverySitePairsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDisasterRecoverySitePairsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDisasterRecoverySitePairsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDisasterRecoverySitePairsRequest::GetOrder() const
{
    return m_order;
}

void DescribeDisasterRecoverySitePairsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDisasterRecoverySitePairsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeDisasterRecoverySitePairsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeDisasterRecoverySitePairsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}


