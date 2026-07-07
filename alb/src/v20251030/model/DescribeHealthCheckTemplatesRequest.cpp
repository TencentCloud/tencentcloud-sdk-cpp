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

#include <tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeHealthCheckTemplatesRequest::DescribeHealthCheckTemplatesRequest() :
    m_filtersHasBeenSet(false),
    m_healthCheckTemplateIdsHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

string DescribeHealthCheckTemplatesRequest::ToJsonString() const
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

    if (m_healthCheckTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthCheckTemplateIds.begin(); itr != m_healthCheckTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxResults.c_str(), allocator).Move(), allocator);
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


vector<Filter> DescribeHealthCheckTemplatesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeHealthCheckTemplatesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeHealthCheckTemplatesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeHealthCheckTemplatesRequest::GetHealthCheckTemplateIds() const
{
    return m_healthCheckTemplateIds;
}

void DescribeHealthCheckTemplatesRequest::SetHealthCheckTemplateIds(const vector<string>& _healthCheckTemplateIds)
{
    m_healthCheckTemplateIds = _healthCheckTemplateIds;
    m_healthCheckTemplateIdsHasBeenSet = true;
}

bool DescribeHealthCheckTemplatesRequest::HealthCheckTemplateIdsHasBeenSet() const
{
    return m_healthCheckTemplateIdsHasBeenSet;
}

string DescribeHealthCheckTemplatesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void DescribeHealthCheckTemplatesRequest::SetMaxResults(const string& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool DescribeHealthCheckTemplatesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string DescribeHealthCheckTemplatesRequest::GetNextToken() const
{
    return m_nextToken;
}

void DescribeHealthCheckTemplatesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool DescribeHealthCheckTemplatesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}


