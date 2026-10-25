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

#include <tencentcloud/databuddy/v20260715/model/ListFeatureTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListFeatureTablesRequest::ListFeatureTablesRequest() :
    m_workspaceIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_catalogNamesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerMeHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_orderBysHasBeenSet(false)
{
}

string ListFeatureTablesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogNames.begin(); itr != m_catalogNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerMe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ownerMe, allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_pageTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageToken.c_str(), allocator).Move(), allocator);
    }

    if (m_orderBysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderBys.begin(); itr != m_orderBys.end(); ++itr, ++i)
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


string ListFeatureTablesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListFeatureTablesRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListFeatureTablesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ListFeatureTablesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListFeatureTablesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListFeatureTablesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> ListFeatureTablesRequest::GetCatalogNames() const
{
    return m_catalogNames;
}

void ListFeatureTablesRequest::SetCatalogNames(const vector<string>& _catalogNames)
{
    m_catalogNames = _catalogNames;
    m_catalogNamesHasBeenSet = true;
}

bool ListFeatureTablesRequest::CatalogNamesHasBeenSet() const
{
    return m_catalogNamesHasBeenSet;
}

vector<string> ListFeatureTablesRequest::GetTags() const
{
    return m_tags;
}

void ListFeatureTablesRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ListFeatureTablesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool ListFeatureTablesRequest::GetOwnerMe() const
{
    return m_ownerMe;
}

void ListFeatureTablesRequest::SetOwnerMe(const bool& _ownerMe)
{
    m_ownerMe = _ownerMe;
    m_ownerMeHasBeenSet = true;
}

bool ListFeatureTablesRequest::OwnerMeHasBeenSet() const
{
    return m_ownerMeHasBeenSet;
}

int64_t ListFeatureTablesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListFeatureTablesRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListFeatureTablesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListFeatureTablesRequest::GetPageToken() const
{
    return m_pageToken;
}

void ListFeatureTablesRequest::SetPageToken(const string& _pageToken)
{
    m_pageToken = _pageToken;
    m_pageTokenHasBeenSet = true;
}

bool ListFeatureTablesRequest::PageTokenHasBeenSet() const
{
    return m_pageTokenHasBeenSet;
}

vector<OrderBy> ListFeatureTablesRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListFeatureTablesRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListFeatureTablesRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}


