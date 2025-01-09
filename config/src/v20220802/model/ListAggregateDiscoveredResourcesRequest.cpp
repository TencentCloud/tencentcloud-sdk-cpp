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

#include <tencentcloud/config/v20220802/model/ListAggregateDiscoveredResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ListAggregateDiscoveredResourcesRequest::ListAggregateDiscoveredResourcesRequest() :
    m_maxResultsHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_orderTypeHasBeenSet(false)
{
}

string ListAggregateDiscoveredResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListAggregateDiscoveredResourcesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListAggregateDiscoveredResourcesRequest::SetMaxResults(const uint64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListAggregateDiscoveredResourcesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListAggregateDiscoveredResourcesRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void ListAggregateDiscoveredResourcesRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool ListAggregateDiscoveredResourcesRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

vector<Filter> ListAggregateDiscoveredResourcesRequest::GetFilters() const
{
    return m_filters;
}

void ListAggregateDiscoveredResourcesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListAggregateDiscoveredResourcesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<Tag> ListAggregateDiscoveredResourcesRequest::GetTags() const
{
    return m_tags;
}

void ListAggregateDiscoveredResourcesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ListAggregateDiscoveredResourcesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ListAggregateDiscoveredResourcesRequest::GetNextToken() const
{
    return m_nextToken;
}

void ListAggregateDiscoveredResourcesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool ListAggregateDiscoveredResourcesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string ListAggregateDiscoveredResourcesRequest::GetOrderType() const
{
    return m_orderType;
}

void ListAggregateDiscoveredResourcesRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool ListAggregateDiscoveredResourcesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}


