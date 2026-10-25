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

#include <tencentcloud/rum/v20210622/model/DescribeIssuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssuesRequest::DescribeIssuesRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_envHasBeenSet(false),
    m_issueTypesHasBeenSet(false),
    m_statusesHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeIssuesRequest::ToJsonString() const
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

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_issueTypes.begin(); itr != m_issueTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statuses.begin(); itr != m_statuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIssuesRequest::GetAppId() const
{
    return m_appId;
}

void DescribeIssuesRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeIssuesRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeIssuesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeIssuesRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeIssuesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeIssuesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeIssuesRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeIssuesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeIssuesRequest::GetEnv() const
{
    return m_env;
}

void DescribeIssuesRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeIssuesRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

vector<string> DescribeIssuesRequest::GetIssueTypes() const
{
    return m_issueTypes;
}

void DescribeIssuesRequest::SetIssueTypes(const vector<string>& _issueTypes)
{
    m_issueTypes = _issueTypes;
    m_issueTypesHasBeenSet = true;
}

bool DescribeIssuesRequest::IssueTypesHasBeenSet() const
{
    return m_issueTypesHasBeenSet;
}

vector<string> DescribeIssuesRequest::GetStatuses() const
{
    return m_statuses;
}

void DescribeIssuesRequest::SetStatuses(const vector<string>& _statuses)
{
    m_statuses = _statuses;
    m_statusesHasBeenSet = true;
}

bool DescribeIssuesRequest::StatusesHasBeenSet() const
{
    return m_statusesHasBeenSet;
}

string DescribeIssuesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeIssuesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeIssuesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeIssuesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeIssuesRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeIssuesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeIssuesRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeIssuesRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeIssuesRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeIssuesRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeIssuesRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeIssuesRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

int64_t DescribeIssuesRequest::GetPage() const
{
    return m_page;
}

void DescribeIssuesRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeIssuesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeIssuesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIssuesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIssuesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


