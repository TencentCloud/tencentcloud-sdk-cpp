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

#include <tencentcloud/adp/v20260520/model/DescribeSkillSummaryListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeSkillSummaryListRequest::DescribeSkillSummaryListRequest() :
    m_spaceIdHasBeenSet(false),
    m_favoriteOnlyHasBeenSet(false),
    m_filterListHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

string DescribeSkillSummaryListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_favoriteOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FavoriteOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_favoriteOnly, allocator);
    }

    if (m_filterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterList.begin(); itr != m_filterList.end(); ++itr, ++i)
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

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSkillSummaryListRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeSkillSummaryListRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeSkillSummaryListRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

bool DescribeSkillSummaryListRequest::GetFavoriteOnly() const
{
    return m_favoriteOnly;
}

void DescribeSkillSummaryListRequest::SetFavoriteOnly(const bool& _favoriteOnly)
{
    m_favoriteOnly = _favoriteOnly;
    m_favoriteOnlyHasBeenSet = true;
}

bool DescribeSkillSummaryListRequest::FavoriteOnlyHasBeenSet() const
{
    return m_favoriteOnlyHasBeenSet;
}

vector<Filter> DescribeSkillSummaryListRequest::GetFilterList() const
{
    return m_filterList;
}

void DescribeSkillSummaryListRequest::SetFilterList(const vector<Filter>& _filterList)
{
    m_filterList = _filterList;
    m_filterListHasBeenSet = true;
}

bool DescribeSkillSummaryListRequest::FilterListHasBeenSet() const
{
    return m_filterListHasBeenSet;
}

uint64_t DescribeSkillSummaryListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeSkillSummaryListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeSkillSummaryListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeSkillSummaryListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSkillSummaryListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSkillSummaryListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeSkillSummaryListRequest::GetQuery() const
{
    return m_query;
}

void DescribeSkillSummaryListRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeSkillSummaryListRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}


