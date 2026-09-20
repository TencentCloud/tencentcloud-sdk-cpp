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

#include <tencentcloud/ags/v20250920/model/DescribeEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DescribeEventsRequest::DescribeEventsRequest() :
    m_spaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_afterTimestampHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_afterTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_afterTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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


string DescribeEventsRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeEventsRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeEventsRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string DescribeEventsRequest::GetUserId() const
{
    return m_userId;
}

void DescribeEventsRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeEventsRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeEventsRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeEventsRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeEventsRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeEventsRequest::GetAgentId() const
{
    return m_agentId;
}

void DescribeEventsRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool DescribeEventsRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeEventsRequest::GetAuthor() const
{
    return m_author;
}

void DescribeEventsRequest::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool DescribeEventsRequest::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string DescribeEventsRequest::GetAfterTimestamp() const
{
    return m_afterTimestamp;
}

void DescribeEventsRequest::SetAfterTimestamp(const string& _afterTimestamp)
{
    m_afterTimestamp = _afterTimestamp;
    m_afterTimestampHasBeenSet = true;
}

bool DescribeEventsRequest::AfterTimestampHasBeenSet() const
{
    return m_afterTimestampHasBeenSet;
}

int64_t DescribeEventsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEventsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEventsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEventsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEventsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEventsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


