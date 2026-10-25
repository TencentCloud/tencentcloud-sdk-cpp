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

#include <tencentcloud/rum/v20210622/model/DescribeIssueBreadcrumbsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssueBreadcrumbsRequest::DescribeIssueBreadcrumbsRequest() :
    m_appIdHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_beforeHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeIssueBreadcrumbsRequest::ToJsonString() const
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

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_beforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Before";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_before, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIssueBreadcrumbsRequest::GetAppId() const
{
    return m_appId;
}

void DescribeIssueBreadcrumbsRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeIssueBreadcrumbsRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeIssueBreadcrumbsRequest::GetIssueId() const
{
    return m_issueId;
}

void DescribeIssueBreadcrumbsRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool DescribeIssueBreadcrumbsRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

string DescribeIssueBreadcrumbsRequest::GetEventId() const
{
    return m_eventId;
}

void DescribeIssueBreadcrumbsRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribeIssueBreadcrumbsRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

int64_t DescribeIssueBreadcrumbsRequest::GetBefore() const
{
    return m_before;
}

void DescribeIssueBreadcrumbsRequest::SetBefore(const int64_t& _before)
{
    m_before = _before;
    m_beforeHasBeenSet = true;
}

bool DescribeIssueBreadcrumbsRequest::BeforeHasBeenSet() const
{
    return m_beforeHasBeenSet;
}

int64_t DescribeIssueBreadcrumbsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIssueBreadcrumbsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIssueBreadcrumbsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


