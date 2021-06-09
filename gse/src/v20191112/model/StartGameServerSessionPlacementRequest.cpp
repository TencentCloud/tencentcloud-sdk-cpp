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

#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

StartGameServerSessionPlacementRequest::StartGameServerSessionPlacementRequest() :
    m_placementIdHasBeenSet(false),
    m_gameServerSessionQueueNameHasBeenSet(false),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_desiredPlayerSessionsHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameServerSessionDataHasBeenSet(false),
    m_gameServerSessionNameHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false)
{
}

string StartGameServerSessionPlacementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlacementId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_placementId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionQueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameServerSessionQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

    if (m_desiredPlayerSessionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredPlayerSessions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_desiredPlayerSessions.begin(); itr != m_desiredPlayerSessions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_gameServerSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gameServerSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_playerLatenciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerLatencies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_playerLatencies.begin(); itr != m_playerLatencies.end(); ++itr, ++i)
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


string StartGameServerSessionPlacementRequest::GetPlacementId() const
{
    return m_placementId;
}

void StartGameServerSessionPlacementRequest::SetPlacementId(const string& _placementId)
{
    m_placementId = _placementId;
    m_placementIdHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::PlacementIdHasBeenSet() const
{
    return m_placementIdHasBeenSet;
}

string StartGameServerSessionPlacementRequest::GetGameServerSessionQueueName() const
{
    return m_gameServerSessionQueueName;
}

void StartGameServerSessionPlacementRequest::SetGameServerSessionQueueName(const string& _gameServerSessionQueueName)
{
    m_gameServerSessionQueueName = _gameServerSessionQueueName;
    m_gameServerSessionQueueNameHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::GameServerSessionQueueNameHasBeenSet() const
{
    return m_gameServerSessionQueueNameHasBeenSet;
}

uint64_t StartGameServerSessionPlacementRequest::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void StartGameServerSessionPlacementRequest::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}

vector<DesiredPlayerSession> StartGameServerSessionPlacementRequest::GetDesiredPlayerSessions() const
{
    return m_desiredPlayerSessions;
}

void StartGameServerSessionPlacementRequest::SetDesiredPlayerSessions(const vector<DesiredPlayerSession>& _desiredPlayerSessions)
{
    m_desiredPlayerSessions = _desiredPlayerSessions;
    m_desiredPlayerSessionsHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::DesiredPlayerSessionsHasBeenSet() const
{
    return m_desiredPlayerSessionsHasBeenSet;
}

vector<GameProperty> StartGameServerSessionPlacementRequest::GetGameProperties() const
{
    return m_gameProperties;
}

void StartGameServerSessionPlacementRequest::SetGameProperties(const vector<GameProperty>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

string StartGameServerSessionPlacementRequest::GetGameServerSessionData() const
{
    return m_gameServerSessionData;
}

void StartGameServerSessionPlacementRequest::SetGameServerSessionData(const string& _gameServerSessionData)
{
    m_gameServerSessionData = _gameServerSessionData;
    m_gameServerSessionDataHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::GameServerSessionDataHasBeenSet() const
{
    return m_gameServerSessionDataHasBeenSet;
}

string StartGameServerSessionPlacementRequest::GetGameServerSessionName() const
{
    return m_gameServerSessionName;
}

void StartGameServerSessionPlacementRequest::SetGameServerSessionName(const string& _gameServerSessionName)
{
    m_gameServerSessionName = _gameServerSessionName;
    m_gameServerSessionNameHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::GameServerSessionNameHasBeenSet() const
{
    return m_gameServerSessionNameHasBeenSet;
}

vector<PlayerLatency> StartGameServerSessionPlacementRequest::GetPlayerLatencies() const
{
    return m_playerLatencies;
}

void StartGameServerSessionPlacementRequest::SetPlayerLatencies(const vector<PlayerLatency>& _playerLatencies)
{
    m_playerLatencies = _playerLatencies;
    m_playerLatenciesHasBeenSet = true;
}

bool StartGameServerSessionPlacementRequest::PlayerLatenciesHasBeenSet() const
{
    return m_playerLatenciesHasBeenSet;
}


