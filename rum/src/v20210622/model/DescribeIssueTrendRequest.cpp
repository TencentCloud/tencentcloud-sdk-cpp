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

#include <tencentcloud/rum/v20210622/model/DescribeIssueTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssueTrendRequest::DescribeIssueTrendRequest() :
    m_appIdHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_envHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeIssueTrendRequest::ToJsonString() const
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

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_env.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIssueTrendRequest::GetAppId() const
{
    return m_appId;
}

void DescribeIssueTrendRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeIssueTrendRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeIssueTrendRequest::GetIssueId() const
{
    return m_issueId;
}

void DescribeIssueTrendRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool DescribeIssueTrendRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

int64_t DescribeIssueTrendRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeIssueTrendRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeIssueTrendRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeIssueTrendRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeIssueTrendRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeIssueTrendRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeIssueTrendRequest::GetBucket() const
{
    return m_bucket;
}

void DescribeIssueTrendRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool DescribeIssueTrendRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string DescribeIssueTrendRequest::GetEnv() const
{
    return m_env;
}

void DescribeIssueTrendRequest::SetEnv(const string& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DescribeIssueTrendRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string DescribeIssueTrendRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeIssueTrendRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeIssueTrendRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeIssueTrendRequest::GetFilters() const
{
    return m_filters;
}

void DescribeIssueTrendRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeIssueTrendRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


