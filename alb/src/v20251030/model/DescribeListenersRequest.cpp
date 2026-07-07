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

#include <tencentcloud/alb/v20251030/model/DescribeListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeListenersRequest::DescribeListenersRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_listenerIdsHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

string DescribeListenersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
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

    if (m_listenerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_listenerIds.begin(); itr != m_listenerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeListenersRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DescribeListenersRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DescribeListenersRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<Filter> DescribeListenersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeListenersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeListenersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeListenersRequest::GetListenerIds() const
{
    return m_listenerIds;
}

void DescribeListenersRequest::SetListenerIds(const vector<string>& _listenerIds)
{
    m_listenerIds = _listenerIds;
    m_listenerIdsHasBeenSet = true;
}

bool DescribeListenersRequest::ListenerIdsHasBeenSet() const
{
    return m_listenerIdsHasBeenSet;
}

uint64_t DescribeListenersRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeListenersRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeListenersRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeListenersRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeListenersRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeListenersRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}


