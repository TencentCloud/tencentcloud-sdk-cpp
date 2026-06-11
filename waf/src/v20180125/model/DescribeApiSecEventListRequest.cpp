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

#include <tencentcloud/waf/v20180125/model/DescribeApiSecEventListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiSecEventListRequest::DescribeApiSecEventListRequest() :
    m_domainHasBeenSet(false),
    m_needTotalCountHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_startTsHasBeenSet(false),
    m_endTsHasBeenSet(false)
{
}

string DescribeApiSecEventListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_needTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedTotalCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needTotalCount, allocator);
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

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sort.begin(); itr != m_sort.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTs, allocator);
    }

    if (m_endTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTs, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiSecEventListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeApiSecEventListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

bool DescribeApiSecEventListRequest::GetNeedTotalCount() const
{
    return m_needTotalCount;
}

void DescribeApiSecEventListRequest::SetNeedTotalCount(const bool& _needTotalCount)
{
    m_needTotalCount = _needTotalCount;
    m_needTotalCountHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::NeedTotalCountHasBeenSet() const
{
    return m_needTotalCountHasBeenSet;
}

vector<ApiDataFilter> DescribeApiSecEventListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeApiSecEventListRequest::SetFilters(const vector<ApiDataFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeApiSecEventListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeApiSecEventListRequest::SetPageIndex(const uint64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t DescribeApiSecEventListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeApiSecEventListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeApiSecEventListRequest::GetSort() const
{
    return m_sort;
}

void DescribeApiSecEventListRequest::SetSort(const vector<string>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t DescribeApiSecEventListRequest::GetStartTs() const
{
    return m_startTs;
}

void DescribeApiSecEventListRequest::SetStartTs(const uint64_t& _startTs)
{
    m_startTs = _startTs;
    m_startTsHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::StartTsHasBeenSet() const
{
    return m_startTsHasBeenSet;
}

uint64_t DescribeApiSecEventListRequest::GetEndTs() const
{
    return m_endTs;
}

void DescribeApiSecEventListRequest::SetEndTs(const uint64_t& _endTs)
{
    m_endTs = _endTs;
    m_endTsHasBeenSet = true;
}

bool DescribeApiSecEventListRequest::EndTsHasBeenSet() const
{
    return m_endTsHasBeenSet;
}


