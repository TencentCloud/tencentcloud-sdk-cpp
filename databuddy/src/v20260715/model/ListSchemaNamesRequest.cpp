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

#include <tencentcloud/databuddy/v20260715/model/ListSchemaNamesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListSchemaNamesRequest::ListSchemaNamesRequest() :
    m_catalogNameHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_pageTokenHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_catalogSourceHasBeenSet(false)
{
}

string ListSchemaNamesRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_maxResults.c_str(), allocator).Move(), allocator);
    }

    if (m_pageTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageToken.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListSchemaNamesRequest::GetCatalogName() const
{
    return m_catalogName;
}

void ListSchemaNamesRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool ListSchemaNamesRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string ListSchemaNamesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListSchemaNamesRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListSchemaNamesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ListSchemaNamesRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListSchemaNamesRequest::SetMaxResults(const string& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListSchemaNamesRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListSchemaNamesRequest::GetPageToken() const
{
    return m_pageToken;
}

void ListSchemaNamesRequest::SetPageToken(const string& _pageToken)
{
    m_pageToken = _pageToken;
    m_pageTokenHasBeenSet = true;
}

bool ListSchemaNamesRequest::PageTokenHasBeenSet() const
{
    return m_pageTokenHasBeenSet;
}

string ListSchemaNamesRequest::GetConnectionId() const
{
    return m_connectionId;
}

void ListSchemaNamesRequest::SetConnectionId(const string& _connectionId)
{
    m_connectionId = _connectionId;
    m_connectionIdHasBeenSet = true;
}

bool ListSchemaNamesRequest::ConnectionIdHasBeenSet() const
{
    return m_connectionIdHasBeenSet;
}

string ListSchemaNamesRequest::GetCatalogSource() const
{
    return m_catalogSource;
}

void ListSchemaNamesRequest::SetCatalogSource(const string& _catalogSource)
{
    m_catalogSource = _catalogSource;
    m_catalogSourceHasBeenSet = true;
}

bool ListSchemaNamesRequest::CatalogSourceHasBeenSet() const
{
    return m_catalogSourceHasBeenSet;
}


