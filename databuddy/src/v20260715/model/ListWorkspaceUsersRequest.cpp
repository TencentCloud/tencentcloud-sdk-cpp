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

#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkspaceUsersRequest::ListWorkspaceUsersRequest() :
    m_workspaceIdHasBeenSet(false),
    m_userKeywordHasBeenSet(false),
    m_roleIdsHasBeenSet(false),
    m_userUinsHasBeenSet(false),
    m_orderBysHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_extendInfoHasBeenSet(false)
{
}

string ListWorkspaceUsersRequest::ToJsonString() const
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

    if (m_userKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIds.begin(); itr != m_roleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_extendInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListWorkspaceUsersRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListWorkspaceUsersRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ListWorkspaceUsersRequest::GetUserKeyword() const
{
    return m_userKeyword;
}

void ListWorkspaceUsersRequest::SetUserKeyword(const string& _userKeyword)
{
    m_userKeyword = _userKeyword;
    m_userKeywordHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::UserKeywordHasBeenSet() const
{
    return m_userKeywordHasBeenSet;
}

vector<string> ListWorkspaceUsersRequest::GetRoleIds() const
{
    return m_roleIds;
}

void ListWorkspaceUsersRequest::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}

vector<string> ListWorkspaceUsersRequest::GetUserUins() const
{
    return m_userUins;
}

void ListWorkspaceUsersRequest::SetUserUins(const vector<string>& _userUins)
{
    m_userUins = _userUins;
    m_userUinsHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::UserUinsHasBeenSet() const
{
    return m_userUinsHasBeenSet;
}

vector<OrderBy> ListWorkspaceUsersRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListWorkspaceUsersRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}

int64_t ListWorkspaceUsersRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkspaceUsersRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkspaceUsersRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkspaceUsersRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListWorkspaceUsersRequest::GetExtendInfo() const
{
    return m_extendInfo;
}

void ListWorkspaceUsersRequest::SetExtendInfo(const string& _extendInfo)
{
    m_extendInfo = _extendInfo;
    m_extendInfoHasBeenSet = true;
}

bool ListWorkspaceUsersRequest::ExtendInfoHasBeenSet() const
{
    return m_extendInfoHasBeenSet;
}


