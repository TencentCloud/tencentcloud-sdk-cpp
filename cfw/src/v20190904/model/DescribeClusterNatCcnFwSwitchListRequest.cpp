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

#include <tencentcloud/cfw/v20190904/model/DescribeClusterNatCcnFwSwitchListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeClusterNatCcnFwSwitchListRequest::DescribeClusterNatCcnFwSwitchListRequest() :
    m_natTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeClusterNatCcnFwSwitchListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natType.c_str(), allocator).Move(), allocator);
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


string DescribeClusterNatCcnFwSwitchListRequest::GetNatType() const
{
    return m_natType;
}

void DescribeClusterNatCcnFwSwitchListRequest::SetNatType(const string& _natType)
{
    m_natType = _natType;
    m_natTypeHasBeenSet = true;
}

bool DescribeClusterNatCcnFwSwitchListRequest::NatTypeHasBeenSet() const
{
    return m_natTypeHasBeenSet;
}

int64_t DescribeClusterNatCcnFwSwitchListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeClusterNatCcnFwSwitchListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeClusterNatCcnFwSwitchListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeClusterNatCcnFwSwitchListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeClusterNatCcnFwSwitchListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeClusterNatCcnFwSwitchListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<CommonFilter> DescribeClusterNatCcnFwSwitchListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeClusterNatCcnFwSwitchListRequest::SetFilters(const vector<CommonFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeClusterNatCcnFwSwitchListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


