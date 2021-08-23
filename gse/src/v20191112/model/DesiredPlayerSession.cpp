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

#include <tencentcloud/gse/v20191112/model/DesiredPlayerSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DesiredPlayerSession::DesiredPlayerSession() :
    m_playerIdHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
}

CoreInternalOutcome DesiredPlayerSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlayerId") && !value["PlayerId"].IsNull())
    {
        if (!value["PlayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesiredPlayerSession.PlayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerId = string(value["PlayerId"].GetString());
        m_playerIdHasBeenSet = true;
    }

    if (value.HasMember("PlayerData") && !value["PlayerData"].IsNull())
    {
        if (!value["PlayerData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DesiredPlayerSession.PlayerData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerData = string(value["PlayerData"].GetString());
        m_playerDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DesiredPlayerSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }

    if (m_playerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerData.c_str(), allocator).Move(), allocator);
    }

}


string DesiredPlayerSession::GetPlayerId() const
{
    return m_playerId;
}

void DesiredPlayerSession::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool DesiredPlayerSession::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

string DesiredPlayerSession::GetPlayerData() const
{
    return m_playerData;
}

void DesiredPlayerSession::SetPlayerData(const string& _playerData)
{
    m_playerData = _playerData;
    m_playerDataHasBeenSet = true;
}

bool DesiredPlayerSession::PlayerDataHasBeenSet() const
{
    return m_playerDataHasBeenSet;
}

