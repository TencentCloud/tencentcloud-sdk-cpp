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

#include <tencentcloud/dlc/v20210125/model/DescribeJobDefinitionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeJobDefinitionsRequest::DescribeJobDefinitionsRequest() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortFieldsHasBeenSet(false),
    m_createTimeStartHasBeenSet(false),
    m_createTimeEndHasBeenSet(false),
    m_instanceTimeRangeHasBeenSet(false)
{
}

string DescribeJobDefinitionsRequest::ToJsonString() const
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

    if (m_instanceTimeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceTimeRange, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeJobDefinitionsRequest::GetPage() const
{
    return m_page;
}

void DescribeJobDefinitionsRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeJobDefinitionsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeJobDefinitionsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeJobDefinitionsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeJobDefinitionsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<SortField> DescribeJobDefinitionsRequest::GetSortFields() const
{
    return m_sortFields;
}

void DescribeJobDefinitionsRequest::SetSortFields(const vector<SortField>& _sortFields)
{
    m_sortFields = _sortFields;
    m_sortFieldsHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::SortFieldsHasBeenSet() const
{
    return m_sortFieldsHasBeenSet;
}

int64_t DescribeJobDefinitionsRequest::GetCreateTimeStart() const
{
    return m_createTimeStart;
}

void DescribeJobDefinitionsRequest::SetCreateTimeStart(const int64_t& _createTimeStart)
{
    m_createTimeStart = _createTimeStart;
    m_createTimeStartHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::CreateTimeStartHasBeenSet() const
{
    return m_createTimeStartHasBeenSet;
}

int64_t DescribeJobDefinitionsRequest::GetCreateTimeEnd() const
{
    return m_createTimeEnd;
}

void DescribeJobDefinitionsRequest::SetCreateTimeEnd(const int64_t& _createTimeEnd)
{
    m_createTimeEnd = _createTimeEnd;
    m_createTimeEndHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::CreateTimeEndHasBeenSet() const
{
    return m_createTimeEndHasBeenSet;
}

int64_t DescribeJobDefinitionsRequest::GetInstanceTimeRange() const
{
    return m_instanceTimeRange;
}

void DescribeJobDefinitionsRequest::SetInstanceTimeRange(const int64_t& _instanceTimeRange)
{
    m_instanceTimeRange = _instanceTimeRange;
    m_instanceTimeRangeHasBeenSet = true;
}

bool DescribeJobDefinitionsRequest::InstanceTimeRangeHasBeenSet() const
{
    return m_instanceTimeRangeHasBeenSet;
}


