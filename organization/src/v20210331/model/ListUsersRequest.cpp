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

#include <tencentcloud/organization/v20210331/model/ListUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListUsersRequest::ListUsersRequest() :
    m_zoneIdHasBeenSet(false),
    m_userStatusHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_filterGroupsHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string ListUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_userStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_filterGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterGroups.begin(); itr != m_filterGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListUsersRequest::GetZoneId() const
{
    return m_zoneId;
}

void ListUsersRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ListUsersRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ListUsersRequest::GetUserStatus() const
{
    return m_userStatus;
}

void ListUsersRequest::SetUserStatus(const string& _userStatus)
{
    m_userStatus = _userStatus;
    m_userStatusHasBeenSet = true;
}

bool ListUsersRequest::UserStatusHasBeenSet() const
{
    return m_userStatusHasBeenSet;
}

string ListUsersRequest::GetUserType() const
{
    return m_userType;
}

void ListUsersRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool ListUsersRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string ListUsersRequest::GetFilter() const
{
    return m_filter;
}

void ListUsersRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ListUsersRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t ListUsersRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListUsersRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListUsersRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListUsersRequest::GetNextToken() const
{
    return m_nextToken;
}

void ListUsersRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool ListUsersRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

vector<string> ListUsersRequest::GetFilterGroups() const
{
    return m_filterGroups;
}

void ListUsersRequest::SetFilterGroups(const vector<string>& _filterGroups)
{
    m_filterGroups = _filterGroups;
    m_filterGroupsHasBeenSet = true;
}

bool ListUsersRequest::FilterGroupsHasBeenSet() const
{
    return m_filterGroupsHasBeenSet;
}

string ListUsersRequest::GetSortField() const
{
    return m_sortField;
}

void ListUsersRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool ListUsersRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string ListUsersRequest::GetSortType() const
{
    return m_sortType;
}

void ListUsersRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListUsersRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

int64_t ListUsersRequest::GetOffset() const
{
    return m_offset;
}

void ListUsersRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListUsersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


