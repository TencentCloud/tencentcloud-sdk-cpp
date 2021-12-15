/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/eiam/v20210420/model/ListUserGroupsOfUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ListUserGroupsOfUserRequest::ListUserGroupsOfUserRequest() :
    m_userIdHasBeenSet(false),
    m_searchConditionHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string ListUserGroupsOfUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListUserGroupsOfUserRequest::GetUserId() const
{
    return m_userId;
}

void ListUserGroupsOfUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ListUserGroupsOfUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

UserGroupInformationSearchCriteria ListUserGroupsOfUserRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void ListUserGroupsOfUserRequest::SetSearchCondition(const UserGroupInformationSearchCriteria& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool ListUserGroupsOfUserRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}

SortCondition ListUserGroupsOfUserRequest::GetSort() const
{
    return m_sort;
}

void ListUserGroupsOfUserRequest::SetSort(const SortCondition& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool ListUserGroupsOfUserRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t ListUserGroupsOfUserRequest::GetOffset() const
{
    return m_offset;
}

void ListUserGroupsOfUserRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListUserGroupsOfUserRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListUserGroupsOfUserRequest::GetLimit() const
{
    return m_limit;
}

void ListUserGroupsOfUserRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListUserGroupsOfUserRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


