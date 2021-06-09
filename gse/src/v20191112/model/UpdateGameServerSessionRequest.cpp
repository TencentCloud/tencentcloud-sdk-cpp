/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateGameServerSessionRequest::UpdateGameServerSessionRequest() :
    m_gameServerSessionIdHasBeenSet(false),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_playerSessionCreationPolicyHasBeenSet(false),
    m_protectionPolicyHasBeenSet(false)
{
}

string UpdateGameServerSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gameServerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameServerSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_playerSessionCreationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerSessionCreationPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playerSessionCreationPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectionPolicy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateGameServerSessionRequest::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void UpdateGameServerSessionRequest::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool UpdateGameServerSessionRequest::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

uint64_t UpdateGameServerSessionRequest::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void UpdateGameServerSessionRequest::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool UpdateGameServerSessionRequest::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}

string UpdateGameServerSessionRequest::GetName() const
{
    return m_name;
}

void UpdateGameServerSessionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateGameServerSessionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateGameServerSessionRequest::GetPlayerSessionCreationPolicy() const
{
    return m_playerSessionCreationPolicy;
}

void UpdateGameServerSessionRequest::SetPlayerSessionCreationPolicy(const string& _playerSessionCreationPolicy)
{
    m_playerSessionCreationPolicy = _playerSessionCreationPolicy;
    m_playerSessionCreationPolicyHasBeenSet = true;
}

bool UpdateGameServerSessionRequest::PlayerSessionCreationPolicyHasBeenSet() const
{
    return m_playerSessionCreationPolicyHasBeenSet;
}

string UpdateGameServerSessionRequest::GetProtectionPolicy() const
{
    return m_protectionPolicy;
}

void UpdateGameServerSessionRequest::SetProtectionPolicy(const string& _protectionPolicy)
{
    m_protectionPolicy = _protectionPolicy;
    m_protectionPolicyHasBeenSet = true;
}

bool UpdateGameServerSessionRequest::ProtectionPolicyHasBeenSet() const
{
    return m_protectionPolicyHasBeenSet;
}


