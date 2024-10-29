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

#include <tencentcloud/organization/v20210331/model/ListGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListGroupsRequest::ListGroupsRequest() :
    m_zoneIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_filterUsersHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string ListGroupsRequest::ToJsonString() const
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

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterUsers.begin(); itr != m_filterUsers.end(); ++itr)
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


string ListGroupsRequest::GetZoneId() const
{
    return m_zoneId;
}

void ListGroupsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ListGroupsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ListGroupsRequest::GetNextToken() const
{
    return m_nextToken;
}

void ListGroupsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool ListGroupsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

int64_t ListGroupsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListGroupsRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListGroupsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListGroupsRequest::GetFilter() const
{
    return m_filter;
}

void ListGroupsRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ListGroupsRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string ListGroupsRequest::GetGroupType() const
{
    return m_groupType;
}

void ListGroupsRequest::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool ListGroupsRequest::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

vector<string> ListGroupsRequest::GetFilterUsers() const
{
    return m_filterUsers;
}

void ListGroupsRequest::SetFilterUsers(const vector<string>& _filterUsers)
{
    m_filterUsers = _filterUsers;
    m_filterUsersHasBeenSet = true;
}

bool ListGroupsRequest::FilterUsersHasBeenSet() const
{
    return m_filterUsersHasBeenSet;
}

string ListGroupsRequest::GetSortField() const
{
    return m_sortField;
}

void ListGroupsRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool ListGroupsRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string ListGroupsRequest::GetSortType() const
{
    return m_sortType;
}

void ListGroupsRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListGroupsRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

int64_t ListGroupsRequest::GetOffset() const
{
    return m_offset;
}

void ListGroupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


