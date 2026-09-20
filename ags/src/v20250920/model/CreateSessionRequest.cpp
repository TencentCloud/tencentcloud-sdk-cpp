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

#include <tencentcloud/ags/v20250920/model/CreateSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CreateSessionRequest::CreateSessionRequest() :
    m_spaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string CreateSessionRequest::ToJsonString() const
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

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_state.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSessionRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateSessionRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateSessionRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string CreateSessionRequest::GetUserId() const
{
    return m_userId;
}

void CreateSessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateSessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateSessionRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateSessionRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateSessionRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string CreateSessionRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateSessionRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateSessionRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateSessionRequest::GetTitle() const
{
    return m_title;
}

void CreateSessionRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool CreateSessionRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

SessionState CreateSessionRequest::GetState() const
{
    return m_state;
}

void CreateSessionRequest::SetState(const SessionState& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CreateSessionRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<MetadataVar> CreateSessionRequest::GetMetadata() const
{
    return m_metadata;
}

void CreateSessionRequest::SetMetadata(const vector<MetadataVar>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool CreateSessionRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


