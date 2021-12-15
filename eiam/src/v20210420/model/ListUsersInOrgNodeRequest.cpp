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

#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ListUsersInOrgNodeRequest::ListUsersInOrgNodeRequest() :
    m_orgNodeIdHasBeenSet(false),
    m_includeOrgNodeChildInfoHasBeenSet(false),
    m_searchConditionHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string ListUsersInOrgNodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_includeOrgNodeChildInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeOrgNodeChildInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeOrgNodeChildInfo, allocator);
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


string ListUsersInOrgNodeRequest::GetOrgNodeId() const
{
    return m_orgNodeId;
}

void ListUsersInOrgNodeRequest::SetOrgNodeId(const string& _orgNodeId)
{
    m_orgNodeId = _orgNodeId;
    m_orgNodeIdHasBeenSet = true;
}

bool ListUsersInOrgNodeRequest::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

bool ListUsersInOrgNodeRequest::GetIncludeOrgNodeChildInfo() const
{
    return m_includeOrgNodeChildInfo;
}

void ListUsersInOrgNodeRequest::SetIncludeOrgNodeChildInfo(const bool& _includeOrgNodeChildInfo)
{
    m_includeOrgNodeChildInfo = _includeOrgNodeChildInfo;
    m_includeOrgNodeChildInfoHasBeenSet = true;
}

bool ListUsersInOrgNodeRequest::IncludeOrgNodeChildInfoHasBeenSet() const
{
    return m_includeOrgNodeChildInfoHasBeenSet;
}

ListUsersInOrgNodeSearchCriteria ListUsersInOrgNodeRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void ListUsersInOrgNodeRequest::SetSearchCondition(const ListUsersInOrgNodeSearchCriteria& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool ListUsersInOrgNodeRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}

SortCondition ListUsersInOrgNodeRequest::GetSort() const
{
    return m_sort;
}

void ListUsersInOrgNodeRequest::SetSort(const SortCondition& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool ListUsersInOrgNodeRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t ListUsersInOrgNodeRequest::GetOffset() const
{
    return m_offset;
}

void ListUsersInOrgNodeRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListUsersInOrgNodeRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListUsersInOrgNodeRequest::GetLimit() const
{
    return m_limit;
}

void ListUsersInOrgNodeRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListUsersInOrgNodeRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


