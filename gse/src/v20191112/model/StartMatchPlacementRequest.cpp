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

#include <tencentcloud/gse/v20191112/model/StartMatchPlacementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

StartMatchPlacementRequest::StartMatchPlacementRequest() :
    m_placementIdHasBeenSet(false),
    m_gameServerSessionQueueNameHasBeenSet(false),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_desiredPlayerSessionsHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameServerSessionDataHasBeenSet(false),
    m_gameServerSessionNameHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_matchmakerDataHasBeenSet(false)
{
}

string StartMatchPlacementRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlacementId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_placementId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionQueueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GameServerSessionQueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gameServerSessionQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

    if (m_desiredPlayerSessionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DesiredPlayerSessions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_desiredPlayerSessions.begin(); itr != m_desiredPlayerSessions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gamePropertiesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GameProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gameProperties.begin(); itr != m_gameProperties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gameServerSessionDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GameServerSessionData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gameServerSessionData.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GameServerSessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gameServerSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_playerLatenciesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlayerLatencies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_playerLatencies.begin(); itr != m_playerLatencies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_matchmakerDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MatchmakerData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_matchmakerData.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartMatchPlacementRequest::GetPlacementId() const
{
    return m_placementId;
}

void StartMatchPlacementRequest::SetPlacementId(const string& _placementId)
{
    m_placementId = _placementId;
    m_placementIdHasBeenSet = true;
}

bool StartMatchPlacementRequest::PlacementIdHasBeenSet() const
{
    return m_placementIdHasBeenSet;
}

string StartMatchPlacementRequest::GetGameServerSessionQueueName() const
{
    return m_gameServerSessionQueueName;
}

void StartMatchPlacementRequest::SetGameServerSessionQueueName(const string& _gameServerSessionQueueName)
{
    m_gameServerSessionQueueName = _gameServerSessionQueueName;
    m_gameServerSessionQueueNameHasBeenSet = true;
}

bool StartMatchPlacementRequest::GameServerSessionQueueNameHasBeenSet() const
{
    return m_gameServerSessionQueueNameHasBeenSet;
}

uint64_t StartMatchPlacementRequest::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void StartMatchPlacementRequest::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool StartMatchPlacementRequest::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}

vector<DesiredPlayerSession> StartMatchPlacementRequest::GetDesiredPlayerSessions() const
{
    return m_desiredPlayerSessions;
}

void StartMatchPlacementRequest::SetDesiredPlayerSessions(const vector<DesiredPlayerSession>& _desiredPlayerSessions)
{
    m_desiredPlayerSessions = _desiredPlayerSessions;
    m_desiredPlayerSessionsHasBeenSet = true;
}

bool StartMatchPlacementRequest::DesiredPlayerSessionsHasBeenSet() const
{
    return m_desiredPlayerSessionsHasBeenSet;
}

vector<GameProperty> StartMatchPlacementRequest::GetGameProperties() const
{
    return m_gameProperties;
}

void StartMatchPlacementRequest::SetGameProperties(const vector<GameProperty>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool StartMatchPlacementRequest::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

string StartMatchPlacementRequest::GetGameServerSessionData() const
{
    return m_gameServerSessionData;
}

void StartMatchPlacementRequest::SetGameServerSessionData(const string& _gameServerSessionData)
{
    m_gameServerSessionData = _gameServerSessionData;
    m_gameServerSessionDataHasBeenSet = true;
}

bool StartMatchPlacementRequest::GameServerSessionDataHasBeenSet() const
{
    return m_gameServerSessionDataHasBeenSet;
}

string StartMatchPlacementRequest::GetGameServerSessionName() const
{
    return m_gameServerSessionName;
}

void StartMatchPlacementRequest::SetGameServerSessionName(const string& _gameServerSessionName)
{
    m_gameServerSessionName = _gameServerSessionName;
    m_gameServerSessionNameHasBeenSet = true;
}

bool StartMatchPlacementRequest::GameServerSessionNameHasBeenSet() const
{
    return m_gameServerSessionNameHasBeenSet;
}

vector<PlayerLatency> StartMatchPlacementRequest::GetPlayerLatencies() const
{
    return m_playerLatencies;
}

void StartMatchPlacementRequest::SetPlayerLatencies(const vector<PlayerLatency>& _playerLatencies)
{
    m_playerLatencies = _playerLatencies;
    m_playerLatenciesHasBeenSet = true;
}

bool StartMatchPlacementRequest::PlayerLatenciesHasBeenSet() const
{
    return m_playerLatenciesHasBeenSet;
}

string StartMatchPlacementRequest::GetMatchmakerData() const
{
    return m_matchmakerData;
}

void StartMatchPlacementRequest::SetMatchmakerData(const string& _matchmakerData)
{
    m_matchmakerData = _matchmakerData;
    m_matchmakerDataHasBeenSet = true;
}

bool StartMatchPlacementRequest::MatchmakerDataHasBeenSet() const
{
    return m_matchmakerDataHasBeenSet;
}


