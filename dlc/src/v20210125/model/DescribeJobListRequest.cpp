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

#include <tencentcloud/dlc/v20210125/model/DescribeJobListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeJobListRequest::DescribeJobListRequest() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortFieldsHasBeenSet(false),
    m_createTimeStartHasBeenSet(false),
    m_createTimeEndHasBeenSet(false)
{
}

string DescribeJobListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
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

    if (m_sortFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sortFields.begin(); itr != m_sortFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createTimeStart, allocator);
    }

    if (m_createTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createTimeEnd, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeJobListRequest::GetPage() const
{
    return m_page;
}

void DescribeJobListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeJobListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeJobListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeJobListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeJobListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeJobListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeJobListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeJobListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<SortField> DescribeJobListRequest::GetSortFields() const
{
    return m_sortFields;
}

void DescribeJobListRequest::SetSortFields(const vector<SortField>& _sortFields)
{
    m_sortFields = _sortFields;
    m_sortFieldsHasBeenSet = true;
}

bool DescribeJobListRequest::SortFieldsHasBeenSet() const
{
    return m_sortFieldsHasBeenSet;
}

int64_t DescribeJobListRequest::GetCreateTimeStart() const
{
    return m_createTimeStart;
}

void DescribeJobListRequest::SetCreateTimeStart(const int64_t& _createTimeStart)
{
    m_createTimeStart = _createTimeStart;
    m_createTimeStartHasBeenSet = true;
}

bool DescribeJobListRequest::CreateTimeStartHasBeenSet() const
{
    return m_createTimeStartHasBeenSet;
}

int64_t DescribeJobListRequest::GetCreateTimeEnd() const
{
    return m_createTimeEnd;
}

void DescribeJobListRequest::SetCreateTimeEnd(const int64_t& _createTimeEnd)
{
    m_createTimeEnd = _createTimeEnd;
    m_createTimeEndHasBeenSet = true;
}

bool DescribeJobListRequest::CreateTimeEndHasBeenSet() const
{
    return m_createTimeEndHasBeenSet;
}


