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

#include <tencentcloud/databuddy/v20260715/model/ListWorkspacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkspacesRequest::ListWorkspacesRequest() :
    m_workspaceIdHasBeenSet(false),
    m_workspaceKeywordHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_orderBysHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_workspaceRegionHasBeenSet(false),
    m_creatorHasBeenSet(false)
{
}

string ListWorkspacesRequest::ToJsonString() const
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

    if (m_workspaceKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_workspaceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workspaceRegion.begin(); itr != m_workspaceRegion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_creator.begin(); itr != m_creator.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListWorkspacesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListWorkspacesRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListWorkspacesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ListWorkspacesRequest::GetWorkspaceKeyword() const
{
    return m_workspaceKeyword;
}

void ListWorkspacesRequest::SetWorkspaceKeyword(const string& _workspaceKeyword)
{
    m_workspaceKeyword = _workspaceKeyword;
    m_workspaceKeywordHasBeenSet = true;
}

bool ListWorkspacesRequest::WorkspaceKeywordHasBeenSet() const
{
    return m_workspaceKeywordHasBeenSet;
}

vector<int64_t> ListWorkspacesRequest::GetStatusList() const
{
    return m_statusList;
}

void ListWorkspacesRequest::SetStatusList(const vector<int64_t>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool ListWorkspacesRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

vector<OrderBy> ListWorkspacesRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListWorkspacesRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListWorkspacesRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}

int64_t ListWorkspacesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkspacesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkspacesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkspacesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkspacesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkspacesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> ListWorkspacesRequest::GetWorkspaceRegion() const
{
    return m_workspaceRegion;
}

void ListWorkspacesRequest::SetWorkspaceRegion(const vector<string>& _workspaceRegion)
{
    m_workspaceRegion = _workspaceRegion;
    m_workspaceRegionHasBeenSet = true;
}

bool ListWorkspacesRequest::WorkspaceRegionHasBeenSet() const
{
    return m_workspaceRegionHasBeenSet;
}

vector<string> ListWorkspacesRequest::GetCreator() const
{
    return m_creator;
}

void ListWorkspacesRequest::SetCreator(const vector<string>& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool ListWorkspacesRequest::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}


