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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMEventSearchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMEventSearchRequest::DescribeTDEMEventSearchRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_hasErrorHasBeenSet(false),
    m_minDurationHasBeenSet(false),
    m_maxDurationHasBeenSet(false)
{
}

string DescribeTDEMEventSearchRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }

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

    if (m_hasErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasError, allocator);
    }

    if (m_minDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minDuration, allocator);
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDuration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMEventSearchRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMEventSearchRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMEventSearchRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMEventSearchRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMEventSearchRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMEventSearchRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMEventSearchRequest::GetCategory() const
{
    return m_category;
}

void DescribeTDEMEventSearchRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DescribeTDEMEventSearchRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMEventSearchRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTDEMEventSearchRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeTDEMEventSearchRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeTDEMEventSearchRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeTDEMEventSearchRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

int64_t DescribeTDEMEventSearchRequest::GetPage() const
{
    return m_page;
}

void DescribeTDEMEventSearchRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeTDEMEventSearchRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTDEMEventSearchRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

bool DescribeTDEMEventSearchRequest::GetHasError() const
{
    return m_hasError;
}

void DescribeTDEMEventSearchRequest::SetHasError(const bool& _hasError)
{
    m_hasError = _hasError;
    m_hasErrorHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::HasErrorHasBeenSet() const
{
    return m_hasErrorHasBeenSet;
}

int64_t DescribeTDEMEventSearchRequest::GetMinDuration() const
{
    return m_minDuration;
}

void DescribeTDEMEventSearchRequest::SetMinDuration(const int64_t& _minDuration)
{
    m_minDuration = _minDuration;
    m_minDurationHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::MinDurationHasBeenSet() const
{
    return m_minDurationHasBeenSet;
}

int64_t DescribeTDEMEventSearchRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void DescribeTDEMEventSearchRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool DescribeTDEMEventSearchRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}


