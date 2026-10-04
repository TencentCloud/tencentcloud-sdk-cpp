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

#include <tencentcloud/databuddy/v20260715/model/ListSchemasRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListSchemasRequest::ListSchemasRequest() :
    m_catalogNameHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_fetchOptionHasBeenSet(false),
    m_connectionIdHasBeenSet(false)
{
}

string ListSchemasRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
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

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fetchOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FetchOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fetchOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListSchemasRequest::GetCatalogName() const
{
    return m_catalogName;
}

void ListSchemasRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool ListSchemasRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

int64_t ListSchemasRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListSchemasRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListSchemasRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListSchemasRequest::GetPageToken() const
{
    return m_pageToken;
}

void ListSchemasRequest::SetPageToken(const string& _pageToken)
{
    m_pageToken = _pageToken;
    m_pageTokenHasBeenSet = true;
}

bool ListSchemasRequest::PageTokenHasBeenSet() const
{
    return m_pageTokenHasBeenSet;
}

string ListSchemasRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListSchemasRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListSchemasRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

FetchOption ListSchemasRequest::GetFetchOption() const
{
    return m_fetchOption;
}

void ListSchemasRequest::SetFetchOption(const FetchOption& _fetchOption)
{
    m_fetchOption = _fetchOption;
    m_fetchOptionHasBeenSet = true;
}

bool ListSchemasRequest::FetchOptionHasBeenSet() const
{
    return m_fetchOptionHasBeenSet;
}

string ListSchemasRequest::GetConnectionId() const
{
    return m_connectionId;
}

void ListSchemasRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool ListSchemasRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}


