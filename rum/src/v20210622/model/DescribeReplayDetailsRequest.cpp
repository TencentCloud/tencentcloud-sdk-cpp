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

#include <tencentcloud/rum/v20210622/model/DescribeReplayDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeReplayDetailsRequest::DescribeReplayDetailsRequest() :
    m_appIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_replayIdHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_startOffsetMsHasBeenSet(false),
    m_endOffsetMsHasBeenSet(false)
{
}

string DescribeReplayDetailsRequest::ToJsonString() const
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

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_replayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replayId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_categories.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cursor, allocator);
    }

    if (m_startOffsetMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOffsetMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startOffsetMs, allocator);
    }

    if (m_endOffsetMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOffsetMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endOffsetMs, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeReplayDetailsRequest::GetAppId() const
{
    return m_appId;
}

void DescribeReplayDetailsRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeReplayDetailsRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeReplayDetailsRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeReplayDetailsRequest::GetReplayId() const
{
    return m_replayId;
}

void DescribeReplayDetailsRequest::SetReplayId(const string& _replayId)
{
    m_replayId = _replayId;
    m_replayIdHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::ReplayIdHasBeenSet() const
{
    return m_replayIdHasBeenSet;
}

string DescribeReplayDetailsRequest::GetCategories() const
{
    return m_categories;
}

void DescribeReplayDetailsRequest::SetCategories(const string& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

int64_t DescribeReplayDetailsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeReplayDetailsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeReplayDetailsRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeReplayDetailsRequest::SetCursor(const int64_t& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t DescribeReplayDetailsRequest::GetStartOffsetMs() const
{
    return m_startOffsetMs;
}

void DescribeReplayDetailsRequest::SetStartOffsetMs(const int64_t& _startOffsetMs)
{
    m_startOffsetMs = _startOffsetMs;
    m_startOffsetMsHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::StartOffsetMsHasBeenSet() const
{
    return m_startOffsetMsHasBeenSet;
}

int64_t DescribeReplayDetailsRequest::GetEndOffsetMs() const
{
    return m_endOffsetMs;
}

void DescribeReplayDetailsRequest::SetEndOffsetMs(const int64_t& _endOffsetMs)
{
    m_endOffsetMs = _endOffsetMs;
    m_endOffsetMsHasBeenSet = true;
}

bool DescribeReplayDetailsRequest::EndOffsetMsHasBeenSet() const
{
    return m_endOffsetMsHasBeenSet;
}


