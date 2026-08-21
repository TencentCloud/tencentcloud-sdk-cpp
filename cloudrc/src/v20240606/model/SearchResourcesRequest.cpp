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

#include <tencentcloud/cloudrc/v20240606/model/SearchResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudrc::V20240606::Model;
using namespace std;

SearchResourcesRequest::SearchResourcesRequest() :
    m_viewIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string SearchResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
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

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchResourcesRequest::GetViewId() const
{
    return m_viewId;
}

void SearchResourcesRequest::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool SearchResourcesRequest::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}

int64_t SearchResourcesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void SearchResourcesRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool SearchResourcesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string SearchResourcesRequest::GetNextToken() const
{
    return m_nextToken;
}

void SearchResourcesRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool SearchResourcesRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

vector<ExtendedFilter> SearchResourcesRequest::GetFilters() const
{
    return m_filters;
}

void SearchResourcesRequest::SetFilters(const vector<ExtendedFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool SearchResourcesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string SearchResourcesRequest::GetSortBy() const
{
    return m_sortBy;
}

void SearchResourcesRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool SearchResourcesRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string SearchResourcesRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void SearchResourcesRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool SearchResourcesRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


