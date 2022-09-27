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

#include <tencentcloud/ciam/v20220331/model/DescribeUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

DescribeUserRequest::DescribeUserRequest() :
    m_userStoreIdHasBeenSet(false),
    m_pageableHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_originalHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string DescribeUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pageable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageable.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_originalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Original";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_original, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void DescribeUserRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool DescribeUserRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

Pageable DescribeUserRequest::GetPageable() const
{
    return m_pageable;
}

void DescribeUserRequest::SetPageable(const Pageable& _pageable)
{
    m_pageable = _pageable;
    m_pageableHasBeenSet = true;
}

bool DescribeUserRequest::PageableHasBeenSet() const
{
    return m_pageableHasBeenSet;
}

vector<QueryUserFilter> DescribeUserRequest::GetFilters() const
{
    return m_filters;
}

void DescribeUserRequest::SetFilters(const vector<QueryUserFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeUserRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

bool DescribeUserRequest::GetOriginal() const
{
    return m_original;
}

void DescribeUserRequest::SetOriginal(const bool& _original)
{
    m_original = _original;
    m_originalHasBeenSet = true;
}

bool DescribeUserRequest::OriginalHasBeenSet() const
{
    return m_originalHasBeenSet;
}

Sort DescribeUserRequest::GetSort() const
{
    return m_sort;
}

void DescribeUserRequest::SetSort(const Sort& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeUserRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


