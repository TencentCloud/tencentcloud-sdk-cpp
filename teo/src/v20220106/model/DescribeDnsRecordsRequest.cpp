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

#include <tencentcloud/teo/v20220106/model/DescribeDnsRecordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeDnsRecordsRequest::DescribeDnsRecordsRequest() :
    m_filtersHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_zoneIdHasBeenSet(false)
{
}

string DescribeDnsRecordsRequest::ToJsonString() const
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
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

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<DnsRecordFilter> DescribeDnsRecordsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDnsRecordsRequest::SetFilters(const vector<DnsRecordFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeDnsRecordsRequest::GetOrder() const
{
    return m_order;
}

void DescribeDnsRecordsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDnsRecordsRequest::GetDirection() const
{
    return m_direction;
}

void DescribeDnsRecordsRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescribeDnsRecordsRequest::GetMatch() const
{
    return m_match;
}

void DescribeDnsRecordsRequest::SetMatch(const string& _match)
{
    m_match = _match;
    m_matchHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::MatchHasBeenSet() const
{
    return m_matchHasBeenSet;
}

int64_t DescribeDnsRecordsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDnsRecordsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDnsRecordsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDnsRecordsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDnsRecordsRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeDnsRecordsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeDnsRecordsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}


