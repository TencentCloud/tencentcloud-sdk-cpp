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

#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

CreateGameServerSessionRequest::CreateGameServerSessionRequest() :
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_aliasIdHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameServerSessionDataHasBeenSet(false),
    m_gameServerSessionIdHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string CreateGameServerSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

    if (m_aliasIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_gamePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gameProperties.begin(); itr != m_gameProperties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gameServerSessionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameServerSessionData.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameServerSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_idempotencyTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdempotencyToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idempotencyToken.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateGameServerSessionRequest::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void CreateGameServerSessionRequest::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool CreateGameServerSessionRequest::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}

string CreateGameServerSessionRequest::GetAliasId() const
{
    return m_aliasId;
}

void CreateGameServerSessionRequest::SetAliasId(const string& _aliasId)
{
    m_aliasId = _aliasId;
    m_aliasIdHasBeenSet = true;
}

bool CreateGameServerSessionRequest::AliasIdHasBeenSet() const
{
    return m_aliasIdHasBeenSet;
}

string CreateGameServerSessionRequest::GetCreatorId() const
{
    return m_creatorId;
}

void CreateGameServerSessionRequest::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool CreateGameServerSessionRequest::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string CreateGameServerSessionRequest::GetFleetId() const
{
    return m_fleetId;
}

void CreateGameServerSessionRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool CreateGameServerSessionRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

vector<GameProperty> CreateGameServerSessionRequest::GetGameProperties() const
{
    return m_gameProperties;
}

void CreateGameServerSessionRequest::SetGameProperties(const vector<GameProperty>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool CreateGameServerSessionRequest::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

string CreateGameServerSessionRequest::GetGameServerSessionData() const
{
    return m_gameServerSessionData;
}

void CreateGameServerSessionRequest::SetGameServerSessionData(const string& _gameServerSessionData)
{
    m_gameServerSessionData = _gameServerSessionData;
    m_gameServerSessionDataHasBeenSet = true;
}

bool CreateGameServerSessionRequest::GameServerSessionDataHasBeenSet() const
{
    return m_gameServerSessionDataHasBeenSet;
}

string CreateGameServerSessionRequest::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void CreateGameServerSessionRequest::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool CreateGameServerSessionRequest::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

string CreateGameServerSessionRequest::GetIdempotencyToken() const
{
    return m_idempotencyToken;
}

void CreateGameServerSessionRequest::SetIdempotencyToken(const string& _idempotencyToken)
{
    m_idempotencyToken = _idempotencyToken;
    m_idempotencyTokenHasBeenSet = true;
}

bool CreateGameServerSessionRequest::IdempotencyTokenHasBeenSet() const
{
    return m_idempotencyTokenHasBeenSet;
}

string CreateGameServerSessionRequest::GetName() const
{
    return m_name;
}

void CreateGameServerSessionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateGameServerSessionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


