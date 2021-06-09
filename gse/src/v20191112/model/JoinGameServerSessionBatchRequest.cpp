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

#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

JoinGameServerSessionBatchRequest::JoinGameServerSessionBatchRequest() :
    m_gameServerSessionIdHasBeenSet(false),
    m_playerIdsHasBeenSet(false),
    m_playerDataMapHasBeenSet(false)
{
}

string JoinGameServerSessionBatchRequest::ToJsonString() const
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

    if (m_playerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_playerIds.begin(); itr != m_playerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_playerDataMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerDataMap";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playerDataMap.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string JoinGameServerSessionBatchRequest::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void JoinGameServerSessionBatchRequest::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool JoinGameServerSessionBatchRequest::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

vector<string> JoinGameServerSessionBatchRequest::GetPlayerIds() const
{
    return m_playerIds;
}

void JoinGameServerSessionBatchRequest::SetPlayerIds(const vector<string>& _playerIds)
{
    m_playerIds = _playerIds;
    m_playerIdsHasBeenSet = true;
}

bool JoinGameServerSessionBatchRequest::PlayerIdsHasBeenSet() const
{
    return m_playerIdsHasBeenSet;
}

PlayerDataMap JoinGameServerSessionBatchRequest::GetPlayerDataMap() const
{
    return m_playerDataMap;
}

void JoinGameServerSessionBatchRequest::SetPlayerDataMap(const PlayerDataMap& _playerDataMap)
{
    m_playerDataMap = _playerDataMap;
    m_playerDataMapHasBeenSet = true;
}

bool JoinGameServerSessionBatchRequest::PlayerDataMapHasBeenSet() const
{
    return m_playerDataMapHasBeenSet;
}


