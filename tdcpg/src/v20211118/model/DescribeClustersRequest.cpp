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

#include <tencentcloud/tdcpg/v20211118/model/DescribeClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

DescribeClustersRequest::DescribeClustersRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false)
{
}

string DescribeClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeClustersRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeClustersRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeClustersRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeClustersRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeClustersRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeClustersRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeClustersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeClustersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeClustersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeClustersRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeClustersRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeClustersRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeClustersRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeClustersRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeClustersRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}


