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

#include <tencentcloud/ags/v20250920/model/AppendEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

AppendEventRequest::AppendEventRequest() :
    m_spaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_agentIdHasBeenSet(false)
{
}

string AppendEventRequest::ToJsonString() const
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

    if (m_eventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Event";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_event.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AppendEventRequest::GetSpaceId() const
{
    return m_spaceId;
}

void AppendEventRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool AppendEventRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string AppendEventRequest::GetUserId() const
{
    return m_userId;
}

void AppendEventRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AppendEventRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string AppendEventRequest::GetSessionId() const
{
    return m_sessionId;
}

void AppendEventRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool AppendEventRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

EventInfo AppendEventRequest::GetEvent() const
{
    return m_event;
}

void AppendEventRequest::SetEvent(const EventInfo& _event)
{
    m_event = _event;
    m_eventHasBeenSet = true;
}

bool AppendEventRequest::EventHasBeenSet() const
{
    return m_eventHasBeenSet;
}

string AppendEventRequest::GetAgentId() const
{
    return m_agentId;
}

void AppendEventRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AppendEventRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}


