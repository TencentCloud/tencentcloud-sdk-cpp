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

#include <tencentcloud/gse/v20191112/model/PlacedPlayerSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

PlacedPlayerSession::PlacedPlayerSession() :
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false)
{
}

CoreInternalOutcome PlacedPlayerSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlayerId") && !value["PlayerId"].IsNull())
    {
        if (!value["PlayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlacedPlayerSession.PlayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerId = string(value["PlayerId"].GetString());
        m_playerIdHasBeenSet = true;
    }

    if (value.HasMember("PlayerSessionId") && !value["PlayerSessionId"].IsNull())
    {
        if (!value["PlayerSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlacedPlayerSession.PlayerSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerSessionId = string(value["PlayerSessionId"].GetString());
        m_playerSessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlacedPlayerSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }

    if (m_playerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerSessionId.c_str(), allocator).Move(), allocator);
    }

}


string PlacedPlayerSession::GetPlayerId() const
{
    return m_playerId;
}

void PlacedPlayerSession::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool PlacedPlayerSession::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

string PlacedPlayerSession::GetPlayerSessionId() const
{
    return m_playerSessionId;
}

void PlacedPlayerSession::SetPlayerSessionId(const string& _playerSessionId)
{
    m_playerSessionId = _playerSessionId;
    m_playerSessionIdHasBeenSet = true;
}

bool PlacedPlayerSession::PlayerSessionIdHasBeenSet() const
{
    return m_playerSessionIdHasBeenSet;
}

