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

#include <tencentcloud/adp/v20260520/model/DescribePluginSummaryListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribePluginSummaryListRequest::DescribePluginSummaryListRequest() :
    m_spaceIdHasBeenSet(false),
    m_filterListHasBeenSet(false),
    m_isFavoriteOnlyHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_sortTypeHasBeenSet(false)
{
}

string DescribePluginSummaryListRequest::ToJsonString() const
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

    if (m_isFavoriteOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFavoriteOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFavoriteOnly, allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_module, allocator);
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

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sortType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePluginSummaryListRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribePluginSummaryListRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

vector<Filter> DescribePluginSummaryListRequest::GetFilterList() const
{
    return m_filterList;
}

void DescribePluginSummaryListRequest::SetFilterList(const vector<Filter>& _filterList)
{
    m_filterList = _filterList;
    m_filterListHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::FilterListHasBeenSet() const
{
    return m_filterListHasBeenSet;
}

bool DescribePluginSummaryListRequest::GetIsFavoriteOnly() const
{
    return m_isFavoriteOnly;
}

void DescribePluginSummaryListRequest::SetIsFavoriteOnly(const bool& _isFavoriteOnly)
{
    m_isFavoriteOnly = _isFavoriteOnly;
    m_isFavoriteOnlyHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::IsFavoriteOnlyHasBeenSet() const
{
    return m_isFavoriteOnlyHasBeenSet;
}

int64_t DescribePluginSummaryListRequest::GetModule() const
{
    return m_module;
}

void DescribePluginSummaryListRequest::SetModule(const int64_t& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribePluginSummaryListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribePluginSummaryListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribePluginSummaryListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribePluginSummaryListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribePluginSummaryListRequest::GetQuery() const
{
    return m_query;
}

void DescribePluginSummaryListRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t DescribePluginSummaryListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribePluginSummaryListRequest::SetSortType(const int64_t& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribePluginSummaryListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}


