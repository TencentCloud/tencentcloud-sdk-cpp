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

#include <tencentcloud/dlc/v20210125/model/DescribeJobLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeJobLogRequest::DescribeJobLogRequest() :
    m_jobIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_statementIndexHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_logLevelHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false)
{
}

string DescribeJobLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_statementIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statementIndex, allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobLogRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeJobLogRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeJobLogRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeJobLogRequest::GetLogType() const
{
    return m_logType;
}

void DescribeJobLogRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool DescribeJobLogRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

int64_t DescribeJobLogRequest::GetStatementIndex() const
{
    return m_statementIndex;
}

void DescribeJobLogRequest::SetStatementIndex(const int64_t& _statementIndex)
{
    m_statementIndex = _statementIndex;
    m_statementIndexHasBeenSet = true;
}

bool DescribeJobLogRequest::StatementIndexHasBeenSet() const
{
    return m_statementIndexHasBeenSet;
}

string DescribeJobLogRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeJobLogRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeJobLogRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t DescribeJobLogRequest::GetLimit() const
{
    return m_limit;
}

void DescribeJobLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeJobLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeJobLogRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeJobLogRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeJobLogRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeJobLogRequest::GetPodName() const
{
    return m_podName;
}

void DescribeJobLogRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool DescribeJobLogRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeJobLogRequest::GetLogLevel() const
{
    return m_logLevel;
}

void DescribeJobLogRequest::SetLogLevel(const string& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool DescribeJobLogRequest::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}

int64_t DescribeJobLogRequest::GetFrom() const
{
    return m_from;
}

void DescribeJobLogRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool DescribeJobLogRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t DescribeJobLogRequest::GetTo() const
{
    return m_to;
}

void DescribeJobLogRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool DescribeJobLogRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}


