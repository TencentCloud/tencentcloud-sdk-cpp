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

#include <tencentcloud/eiam/v20210420/model/ListUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ListUsersRequest::ListUsersRequest() :
    m_searchConditionHasBeenSet(false),
    m_expectedFieldsHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_includeTotalHasBeenSet(false)
{
}

string ListUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_searchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_expectedFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_expectedFields.begin(); itr != m_expectedFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_includeTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeTotal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeTotal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserSearchCriteria ListUsersRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void ListUsersRequest::SetSearchCondition(const UserSearchCriteria& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool ListUsersRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}

vector<string> ListUsersRequest::GetExpectedFields() const
{
    return m_expectedFields;
}

void ListUsersRequest::SetExpectedFields(const vector<string>& _expectedFields)
{
    m_expectedFields = _expectedFields;
    m_expectedFieldsHasBeenSet = true;
}

bool ListUsersRequest::ExpectedFieldsHasBeenSet() const
{
    return m_expectedFieldsHasBeenSet;
}

SortCondition ListUsersRequest::GetSort() const
{
    return m_sort;
}

void ListUsersRequest::SetSort(const SortCondition& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool ListUsersRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t ListUsersRequest::GetOffset() const
{
    return m_offset;
}

void ListUsersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListUsersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListUsersRequest::GetLimit() const
{
    return m_limit;
}

void ListUsersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListUsersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool ListUsersRequest::GetIncludeTotal() const
{
    return m_includeTotal;
}

void ListUsersRequest::SetIncludeTotal(const bool& _includeTotal)
{
    m_includeTotal = _includeTotal;
    m_includeTotalHasBeenSet = true;
}

bool ListUsersRequest::IncludeTotalHasBeenSet() const
{
    return m_includeTotalHasBeenSet;
}


