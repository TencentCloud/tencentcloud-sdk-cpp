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

#include <tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

DescribeGatewayLoadBalancersRequest::DescribeGatewayLoadBalancersRequest() :
    m_loadBalancerIdsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_searchKeyHasBeenSet(false)
{
}

string DescribeGatewayLoadBalancersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeGatewayLoadBalancersRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void DescribeGatewayLoadBalancersRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool DescribeGatewayLoadBalancersRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

int64_t DescribeGatewayLoadBalancersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGatewayLoadBalancersRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGatewayLoadBalancersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeGatewayLoadBalancersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGatewayLoadBalancersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGatewayLoadBalancersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeGatewayLoadBalancersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeGatewayLoadBalancersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeGatewayLoadBalancersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeGatewayLoadBalancersRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeGatewayLoadBalancersRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeGatewayLoadBalancersRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}


