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

#include <tencentcloud/vpc/v20170312/model/DescribeIPv6AddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeIPv6AddressesRequest::DescribeIPv6AddressesRequest() :
    m_iPv6AddressIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_traditionalHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeIPv6AddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iPv6AddressIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6AddressIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPv6AddressIds.begin(); itr != m_iPv6AddressIds.end(); ++itr)
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

    if (m_traditionalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Traditional";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_traditional, allocator);
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


vector<string> DescribeIPv6AddressesRequest::GetIPv6AddressIds() const
{
    return m_iPv6AddressIds;
}

void DescribeIPv6AddressesRequest::SetIPv6AddressIds(const vector<string>& _iPv6AddressIds)
{
    m_iPv6AddressIds = _iPv6AddressIds;
    m_iPv6AddressIdsHasBeenSet = true;
}

bool DescribeIPv6AddressesRequest::IPv6AddressIdsHasBeenSet() const
{
    return m_iPv6AddressIdsHasBeenSet;
}

vector<Filter> DescribeIPv6AddressesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeIPv6AddressesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeIPv6AddressesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeIPv6AddressesRequest::GetTraditional() const
{
    return m_traditional;
}

void DescribeIPv6AddressesRequest::SetTraditional(const bool& _traditional)
{
    m_traditional = _traditional;
    m_traditionalHasBeenSet = true;
}

bool DescribeIPv6AddressesRequest::TraditionalHasBeenSet() const
{
    return m_traditionalHasBeenSet;
}

int64_t DescribeIPv6AddressesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIPv6AddressesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIPv6AddressesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeIPv6AddressesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIPv6AddressesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIPv6AddressesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


