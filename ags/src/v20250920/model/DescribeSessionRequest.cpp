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

#include <tencentcloud/ags/v20250920/model/DescribeSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DescribeSessionRequest::DescribeSessionRequest() :
    m_spaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_numRecentEventsHasBeenSet(false),
    m_afterTimestampHasBeenSet(false)
{
}

string DescribeSessionRequest::ToJsonString() const
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

    if (m_numRecentEventsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumRecentEvents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_numRecentEvents, allocator);
    }

    if (m_afterTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_afterTimestamp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSessionRequest::GetSpaceId() const
{
    return m_spaceId;
}

void DescribeSessionRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool DescribeSessionRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string DescribeSessionRequest::GetUserId() const
{
    return m_userId;
}

void DescribeSessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeSessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeSessionRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeSessionRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeSessionRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeSessionRequest::GetAgentId() const
{
    return m_agentId;
}

void DescribeSessionRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool DescribeSessionRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

int64_t DescribeSessionRequest::GetNumRecentEvents() const
{
    return m_numRecentEvents;
}

void DescribeSessionRequest::SetNumRecentEvents(const int64_t& _numRecentEvents)
{
    m_numRecentEvents = _numRecentEvents;
    m_numRecentEventsHasBeenSet = true;
}

bool DescribeSessionRequest::NumRecentEventsHasBeenSet() const
{
    return m_numRecentEventsHasBeenSet;
}

string DescribeSessionRequest::GetAfterTimestamp() const
{
    return m_afterTimestamp;
}

void DescribeSessionRequest::SetAfterTimestamp(const string& _afterTimestamp)
{
    m_afterTimestamp = _afterTimestamp;
    m_afterTimestampHasBeenSet = true;
}

bool DescribeSessionRequest::AfterTimestampHasBeenSet() const
{
    return m_afterTimestampHasBeenSet;
}


