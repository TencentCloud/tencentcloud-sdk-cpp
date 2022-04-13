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

#include <tencentcloud/ssa/v20180608/model/DescribeSocCheckItemListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeSocCheckItemListRequest::DescribeSocCheckItemListRequest() :
    m_filterHasBeenSet(false),
    m_sorterHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageIndexHasBeenSet(false)
{
}

string DescribeSocCheckItemListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sorterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sorter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sorter.begin(); itr != m_sorter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<QueryFilter> DescribeSocCheckItemListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeSocCheckItemListRequest::SetFilter(const vector<QueryFilter>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeSocCheckItemListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<QuerySort> DescribeSocCheckItemListRequest::GetSorter() const
{
    return m_sorter;
}

void DescribeSocCheckItemListRequest::SetSorter(const vector<QuerySort>& _sorter)
{
    m_sorter = _sorter;
    m_sorterHasBeenSet = true;
}

bool DescribeSocCheckItemListRequest::SorterHasBeenSet() const
{
    return m_sorterHasBeenSet;
}

int64_t DescribeSocCheckItemListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSocCheckItemListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSocCheckItemListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeSocCheckItemListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeSocCheckItemListRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeSocCheckItemListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}


