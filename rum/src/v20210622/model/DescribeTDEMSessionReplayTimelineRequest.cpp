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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMSessionReplayTimelineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMSessionReplayTimelineRequest::DescribeTDEMSessionReplayTimelineRequest() :
    m_appIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_cursorEventIdHasBeenSet(false)
{
}

string DescribeTDEMSessionReplayTimelineRequest::ToJsonString() const
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

    if (m_cursorEventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CursorEventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursorEventId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMSessionReplayTimelineRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMSessionReplayTimelineRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeTDEMSessionReplayTimelineRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeTDEMSessionReplayTimelineRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t DescribeTDEMSessionReplayTimelineRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMSessionReplayTimelineRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMSessionReplayTimelineRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMSessionReplayTimelineRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeTDEMSessionReplayTimelineRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTDEMSessionReplayTimelineRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTDEMSessionReplayTimelineRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeTDEMSessionReplayTimelineRequest::SetCursor(const int64_t& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

string DescribeTDEMSessionReplayTimelineRequest::GetCursorEventId() const
{
    return m_cursorEventId;
}

void DescribeTDEMSessionReplayTimelineRequest::SetCursorEventId(const string& _cursorEventId)
{
    m_cursorEventId = _cursorEventId;
    m_cursorEventIdHasBeenSet = true;
}

bool DescribeTDEMSessionReplayTimelineRequest::CursorEventIdHasBeenSet() const
{
    return m_cursorEventIdHasBeenSet;
}


