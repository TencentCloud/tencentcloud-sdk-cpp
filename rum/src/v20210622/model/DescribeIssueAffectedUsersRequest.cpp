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

#include <tencentcloud/rum/v20210622/model/DescribeIssueAffectedUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssueAffectedUsersRequest::DescribeIssueAffectedUsersRequest() :
    m_appIdHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_orderKeyHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

string DescribeIssueAffectedUsersRequest::ToJsonString() const
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

    if (m_issueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issueId.c_str(), allocator).Move(), allocator);
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

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_orderKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderKey.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIssueAffectedUsersRequest::GetAppId() const
{
    return m_appId;
}

void DescribeIssueAffectedUsersRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeIssueAffectedUsersRequest::GetIssueId() const
{
    return m_issueId;
}

void DescribeIssueAffectedUsersRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

int64_t DescribeIssueAffectedUsersRequest::GetPage() const
{
    return m_page;
}

void DescribeIssueAffectedUsersRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeIssueAffectedUsersRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIssueAffectedUsersRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeIssueAffectedUsersRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeIssueAffectedUsersRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

int64_t DescribeIssueAffectedUsersRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeIssueAffectedUsersRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeIssueAffectedUsersRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeIssueAffectedUsersRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeIssueAffectedUsersRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeIssueAffectedUsersRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeIssueAffectedUsersRequest::GetOrderKey() const
{
    return m_orderKey;
}

void DescribeIssueAffectedUsersRequest::SetOrderKey(const string& _orderKey)
{
    m_orderKey = _orderKey;
    m_orderKeyHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::OrderKeyHasBeenSet() const
{
    return m_orderKeyHasBeenSet;
}

string DescribeIssueAffectedUsersRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeIssueAffectedUsersRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeIssueAffectedUsersRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}


