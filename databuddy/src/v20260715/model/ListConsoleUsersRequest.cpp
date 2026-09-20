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

#include <tencentcloud/databuddy/v20260715/model/ListConsoleUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListConsoleUsersRequest::ListConsoleUsersRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_userKeywordHasBeenSet(false),
    m_roleIdsHasBeenSet(false),
    m_orderBysHasBeenSet(false)
{
}

string ListConsoleUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


int64_t ListConsoleUsersRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListConsoleUsersRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListConsoleUsersRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListConsoleUsersRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListConsoleUsersRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListConsoleUsersRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListConsoleUsersRequest::GetUserKeyword() const
{
    return m_userKeyword;
}

void ListConsoleUsersRequest::SetUserKeyword(const string& _userKeyword)
{
    m_userKeyword = _userKeyword;
    m_userKeywordHasBeenSet = true;
}

bool ListConsoleUsersRequest::UserKeywordHasBeenSet() const
{
    return m_userKeywordHasBeenSet;
}

vector<string> ListConsoleUsersRequest::GetRoleIds() const
{
    return m_roleIds;
}

void ListConsoleUsersRequest::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool ListConsoleUsersRequest::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}

vector<OrderBy> ListConsoleUsersRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListConsoleUsersRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListConsoleUsersRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}


