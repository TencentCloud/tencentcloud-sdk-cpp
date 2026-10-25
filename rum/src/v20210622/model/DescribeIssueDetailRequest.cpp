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

#include <tencentcloud/rum/v20210622/model/DescribeIssueDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssueDetailRequest::DescribeIssueDetailRequest() :
    m_appIdHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_envHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeIssueDetailRequest::ToJsonString() const
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIssueDetailRequest::GetAppId() const
{
    return m_appId;
}

void DescribeIssueDetailRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeIssueDetailRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeIssueDetailRequest::GetIssueId() const
{
    return m_issueId;
}

void DescribeIssueDetailRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool DescribeIssueDetailRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

int64_t DescribeIssueDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeIssueDetailRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeIssueDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeIssueDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeIssueDetailRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeIssueDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeIssueDetailRequest::GetEnv() const
{
    return m_env;
}

void DescribeIssueDetailRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeIssueDetailRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeIssueDetailRequest::GetFilters() const
{
    return m_filters;
}

void DescribeIssueDetailRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeIssueDetailRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


