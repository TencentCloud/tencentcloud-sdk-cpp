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

#include <tencentcloud/databuddy/v20260715/model/ListWorkspaceGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListWorkspaceGroupsRequest::ListWorkspaceGroupsRequest() :
    m_workspaceIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_groupKeywordHasBeenSet(false),
    m_roleIdsHasBeenSet(false),
    m_orderBysHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_groupTypeHasBeenSet(false)
{
}

string ListWorkspaceGroupsRequest::ToJsonString() const
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

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupKeyword.c_str(), allocator).Move(), allocator);
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

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListWorkspaceGroupsRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListWorkspaceGroupsRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

vector<string> ListWorkspaceGroupsRequest::GetGroupIds() const
{
    return m_groupIds;
}

void ListWorkspaceGroupsRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string ListWorkspaceGroupsRequest::GetGroupKeyword() const
{
    return m_groupKeyword;
}

void ListWorkspaceGroupsRequest::SetGroupKeyword(const string& _groupKeyword)
{
    m_groupKeyword = _groupKeyword;
    m_groupKeywordHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::GroupKeywordHasBeenSet() const
{
    return m_groupKeywordHasBeenSet;
}

vector<string> ListWorkspaceGroupsRequest::GetRoleIds() const
{
    return m_roleIds;
}

void ListWorkspaceGroupsRequest::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}

vector<OrderBy> ListWorkspaceGroupsRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListWorkspaceGroupsRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}

int64_t ListWorkspaceGroupsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkspaceGroupsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkspaceGroupsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkspaceGroupsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListWorkspaceGroupsRequest::GetGroupType() const
{
    return m_groupType;
}

void ListWorkspaceGroupsRequest::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool ListWorkspaceGroupsRequest::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}


