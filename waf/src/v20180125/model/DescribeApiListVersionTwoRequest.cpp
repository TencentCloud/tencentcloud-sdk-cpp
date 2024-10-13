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

#include <tencentcloud/waf/v20180125/model/DescribeApiListVersionTwoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiListVersionTwoRequest::DescribeApiListVersionTwoRequest() :
    m_domainHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_needTotalCountHasBeenSet(false),
    m_startTsHasBeenSet(false),
    m_endTsHasBeenSet(false)
{
}

string DescribeApiListVersionTwoRequest::ToJsonString() const
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

    if (m_needTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedTotalCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needTotalCount, allocator);
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


string DescribeApiListVersionTwoRequest::GetDomain() const
{
    return m_domain;
}

void DescribeApiListVersionTwoRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeApiListVersionTwoRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeApiListVersionTwoRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeApiListVersionTwoRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeApiListVersionTwoRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<ApiDataFilter> DescribeApiListVersionTwoRequest::GetFilters() const
{
    return m_filters;
}

void DescribeApiListVersionTwoRequest::SetFilters(const vector<ApiDataFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeApiListVersionTwoRequest::GetSort() const
{
    return m_sort;
}

void DescribeApiListVersionTwoRequest::SetSort(const vector<string>& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

bool DescribeApiListVersionTwoRequest::GetNeedTotalCount() const
{
    return m_needTotalCount;
}

void DescribeApiListVersionTwoRequest::SetNeedTotalCount(const bool& _needTotalCount)
{
    m_needTotalCount = _needTotalCount;
    m_needTotalCountHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::NeedTotalCountHasBeenSet() const
{
    return m_needTotalCountHasBeenSet;
}

int64_t DescribeApiListVersionTwoRequest::GetStartTs() const
{
    return m_startTs;
}

void DescribeApiListVersionTwoRequest::SetStartTs(const int64_t& _startTs)
{
    m_startTs = _startTs;
    m_startTsHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::StartTsHasBeenSet() const
{
    return m_startTsHasBeenSet;
}

int64_t DescribeApiListVersionTwoRequest::GetEndTs() const
{
    return m_endTs;
}

void DescribeApiListVersionTwoRequest::SetEndTs(const int64_t& _endTs)
{
    m_endTs = _endTs;
    m_endTsHasBeenSet = true;
}

bool DescribeApiListVersionTwoRequest::EndTsHasBeenSet() const
{
    return m_endTsHasBeenSet;
}


