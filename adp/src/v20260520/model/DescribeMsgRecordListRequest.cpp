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

#include <tencentcloud/adp/v20260520/model/DescribeMsgRecordListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeMsgRecordListRequest::DescribeMsgRecordListRequest() :
    m_appIdHasBeenSet(false),
    m_filterListHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

string DescribeMsgRecordListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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


string DescribeMsgRecordListRequest::GetAppId() const
{
    return m_appId;
}

void DescribeMsgRecordListRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeMsgRecordListRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<Filter> DescribeMsgRecordListRequest::GetFilterList() const
{
    return m_filterList;
}

void DescribeMsgRecordListRequest::SetFilterList(const vector<Filter>& _filterList)
{
    m_filterList = _filterList;
    m_filterListHasBeenSet = true;
}

bool DescribeMsgRecordListRequest::FilterListHasBeenSet() const
{
    return m_filterListHasBeenSet;
}

uint64_t DescribeMsgRecordListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeMsgRecordListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeMsgRecordListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeMsgRecordListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeMsgRecordListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeMsgRecordListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

Sort DescribeMsgRecordListRequest::GetSort() const
{
    return m_sort;
}

void DescribeMsgRecordListRequest::SetSort(const Sort& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeMsgRecordListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


