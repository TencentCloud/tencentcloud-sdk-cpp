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

#include <tencentcloud/alb/v20251030/model/DescribeRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeRulesRequest::DescribeRulesRequest() :
    m_listenerIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_ruleIdsHasBeenSet(false)
{
}

string DescribeRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRulesRequest::GetListenerId() const
{
    return m_listenerId;
}

void DescribeRulesRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DescribeRulesRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DescribeRulesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DescribeRulesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DescribeRulesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<Filter> DescribeRulesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRulesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRulesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeRulesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeRulesRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeRulesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeRulesRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeRulesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeRulesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

vector<string> DescribeRulesRequest::GetRuleIds() const
{
    return m_ruleIds;
}

void DescribeRulesRequest::SetRuleIds(const vector<string>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool DescribeRulesRequest::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}


