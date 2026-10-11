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

#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkspaceGroupUsersRequest::ListWorkspaceGroupUsersRequest() :
    m_workspaceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_nameKeywordsHasBeenSet(false),
    m_userUinsHasBeenSet(false),
    m_orderBysHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string ListWorkspaceGroupUsersRequest::ToJsonString() const
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameKeywords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameKeywords.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userUins.begin(); itr != m_userUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListWorkspaceGroupUsersRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListWorkspaceGroupUsersRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ListWorkspaceGroupUsersRequest::GetGroupId() const
{
    return m_groupId;
}

void ListWorkspaceGroupUsersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ListWorkspaceGroupUsersRequest::GetNameKeywords() const
{
    return m_nameKeywords;
}

void ListWorkspaceGroupUsersRequest::SetNameKeywords(const string& _nameKeywords)
{
    m_nameKeywords = _nameKeywords;
    m_nameKeywordsHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::NameKeywordsHasBeenSet() const
{
    return m_nameKeywordsHasBeenSet;
}

vector<string> ListWorkspaceGroupUsersRequest::GetUserUins() const
{
    return m_userUins;
}

void ListWorkspaceGroupUsersRequest::SetUserUins(const vector<string>& _userUins)
{
    m_userUins = _userUins;
    m_userUinsHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::UserUinsHasBeenSet() const
{
    return m_userUinsHasBeenSet;
}

vector<OrderBy> ListWorkspaceGroupUsersRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListWorkspaceGroupUsersRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}

int64_t ListWorkspaceGroupUsersRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkspaceGroupUsersRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkspaceGroupUsersRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkspaceGroupUsersRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkspaceGroupUsersRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


