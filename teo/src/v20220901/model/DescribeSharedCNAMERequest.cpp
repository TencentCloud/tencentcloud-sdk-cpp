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

#include <tencentcloud/teo/v20220901/model/DescribeSharedCNAMERequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DescribeSharedCNAMERequest::DescribeSharedCNAMERequest() :
    m_zoneIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeSharedCNAMERequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
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

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_matchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Match";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_match.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSharedCNAMERequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeSharedCNAMERequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<AdvancedFilter> DescribeSharedCNAMERequest::GetFilters() const
{
    return m_filters;
}

void DescribeSharedCNAMERequest::SetFilters(const vector<AdvancedFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeSharedCNAMERequest::GetDirection() const
{
    return m_direction;
}

void DescribeSharedCNAMERequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescribeSharedCNAMERequest::GetMatch() const
{
    return m_match;
}

void DescribeSharedCNAMERequest::SetMatch(const string& _match)
{
    m_match = _match;
    m_matchHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::MatchHasBeenSet() const
{
    return m_matchHasBeenSet;
}

string DescribeSharedCNAMERequest::GetOrder() const
{
    return m_order;
}

void DescribeSharedCNAMERequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t DescribeSharedCNAMERequest::GetOffset() const
{
    return m_offset;
}

void DescribeSharedCNAMERequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeSharedCNAMERequest::GetLimit() const
{
    return m_limit;
}

void DescribeSharedCNAMERequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSharedCNAMERequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


