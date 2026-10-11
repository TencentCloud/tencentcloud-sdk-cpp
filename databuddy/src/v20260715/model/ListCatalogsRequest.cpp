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

#include <tencentcloud/databuddy/v20260715/model/ListCatalogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListCatalogsRequest::ListCatalogsRequest() :
    m_workspaceIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_currentWorkspaceOnlyHasBeenSet(false),
    m_fetchOptionHasBeenSet(false),
    m_catalogSourcesHasBeenSet(false)
{
}

string ListCatalogsRequest::ToJsonString() const
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

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_currentWorkspaceOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentWorkspaceOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_currentWorkspaceOnly, allocator);
    }

    if (m_fetchOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fetchOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_catalogSourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogSources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_catalogSources.begin(); itr != m_catalogSources.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListCatalogsRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListCatalogsRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListCatalogsRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t ListCatalogsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListCatalogsRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListCatalogsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListCatalogsRequest::GetPageToken() const
{
    return m_pageToken;
}

void ListCatalogsRequest::SetPageToken(const string& _pageToken)
{
    m_pageToken = _pageToken;
    m_pageTokenHasBeenSet = true;
}

bool ListCatalogsRequest::PageTokenHasBeenSet() const
{
    return m_pageTokenHasBeenSet;
}

vector<string> ListCatalogsRequest::GetTypes() const
{
    return m_types;
}

void ListCatalogsRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool ListCatalogsRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

bool ListCatalogsRequest::GetCurrentWorkspaceOnly() const
{
    return m_currentWorkspaceOnly;
}

void ListCatalogsRequest::SetCurrentWorkspaceOnly(const bool& _currentWorkspaceOnly)
{
    m_currentWorkspaceOnly = _currentWorkspaceOnly;
    m_currentWorkspaceOnlyHasBeenSet = true;
}

bool ListCatalogsRequest::CurrentWorkspaceOnlyHasBeenSet() const
{
    return m_currentWorkspaceOnlyHasBeenSet;
}

FetchOption ListCatalogsRequest::GetFetchOption() const
{
    return m_fetchOption;
}

void ListCatalogsRequest::SetFetchOption(const FetchOption& _fetchOption)
{
    m_fetchOption = _fetchOption;
    m_fetchOptionHasBeenSet = true;
}

bool ListCatalogsRequest::FetchOptionHasBeenSet() const
{
    return m_fetchOptionHasBeenSet;
}

vector<string> ListCatalogsRequest::GetCatalogSources() const
{
    return m_catalogSources;
}

void ListCatalogsRequest::SetCatalogSources(const vector<string>& _catalogSources)
{
    m_catalogSources = _catalogSources;
    m_catalogSourcesHasBeenSet = true;
}

bool ListCatalogsRequest::CatalogSourcesHasBeenSet() const
{
    return m_catalogSourcesHasBeenSet;
}


