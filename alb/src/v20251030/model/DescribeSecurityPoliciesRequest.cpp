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

#include <tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeSecurityPoliciesRequest::DescribeSecurityPoliciesRequest() :
    m_filtersHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_securityPolicyIdsHasBeenSet(false)
{
}

string DescribeSecurityPoliciesRequest::ToJsonString() const
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

    if (m_securityPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityPolicyIds.begin(); itr != m_securityPolicyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filter> DescribeSecurityPoliciesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeSecurityPoliciesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeSecurityPoliciesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeSecurityPoliciesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeSecurityPoliciesRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeSecurityPoliciesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeSecurityPoliciesRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeSecurityPoliciesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeSecurityPoliciesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

vector<string> DescribeSecurityPoliciesRequest::GetSecurityPolicyIds() const
{
    return m_securityPolicyIds;
}

void DescribeSecurityPoliciesRequest::SetSecurityPolicyIds(const vector<string>& _securityPolicyIds)
{
    m_securityPolicyIds = _securityPolicyIds;
    m_securityPolicyIdsHasBeenSet = true;
}

bool DescribeSecurityPoliciesRequest::SecurityPolicyIdsHasBeenSet() const
{
    return m_securityPolicyIdsHasBeenSet;
}


