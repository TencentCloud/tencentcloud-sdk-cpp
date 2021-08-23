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

#include <tencentcloud/gse/v20191112/model/GameServerSessionPlacement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GameServerSessionPlacement::GameServerSessionPlacement() :
    m_placementIdHasBeenSet(false),
    m_gameServerSessionQueueNameHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_gameServerSessionIdHasBeenSet(false),
    m_gameServerSessionNameHasBeenSet(false),
    m_gameServerSessionRegionHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_gameServerSessionDataHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_portHasBeenSet(false),
    m_matchmakerDataHasBeenSet(false),
    m_placedPlayerSessionsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome GameServerSessionPlacement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlacementId") && !value["PlacementId"].IsNull())
    {
        if (!value["PlacementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.PlacementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_placementId = string(value["PlacementId"].GetString());
        m_placementIdHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionQueueName") && !value["GameServerSessionQueueName"].IsNull())
    {
        if (!value["GameServerSessionQueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.GameServerSessionQueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionQueueName = string(value["GameServerSessionQueueName"].GetString());
        m_gameServerSessionQueueNameHasBeenSet = true;
    }

    if (value.HasMember("PlayerLatencies") && !value["PlayerLatencies"].IsNull())
    {
        if (!value["PlayerLatencies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.PlayerLatencies` is not array type"));

        const rapidjson::Value &tmpValue = value["PlayerLatencies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlayerLatency item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_playerLatencies.push_back(item);
        }
        m_playerLatenciesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DnsName") && !value["DnsName"].IsNull())
    {
        if (!value["DnsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.DnsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsName = string(value["DnsName"].GetString());
        m_dnsNameHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionId") && !value["GameServerSessionId"].IsNull())
    {
        if (!value["GameServerSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.GameServerSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionId = string(value["GameServerSessionId"].GetString());
        m_gameServerSessionIdHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionName") && !value["GameServerSessionName"].IsNull())
    {
        if (!value["GameServerSessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.GameServerSessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionName = string(value["GameServerSessionName"].GetString());
        m_gameServerSessionNameHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionRegion") && !value["GameServerSessionRegion"].IsNull())
    {
        if (!value["GameServerSessionRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.GameServerSessionRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionRegion = string(value["GameServerSessionRegion"].GetString());
        m_gameServerSessionRegionHasBeenSet = true;
    }

    if (value.HasMember("GameProperties") && !value["GameProperties"].IsNull())
    {
        if (!value["GameProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.GameProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["GameProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GameProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gameProperties.push_back(item);
        }
        m_gamePropertiesHasBeenSet = true;
    }

    if (value.HasMember("MaximumPlayerSessionCount") && !value["MaximumPlayerSessionCount"].IsNull())
    {
        if (!value["MaximumPlayerSessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.MaximumPlayerSessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumPlayerSessionCount = value["MaximumPlayerSessionCount"].GetUint64();
        m_maximumPlayerSessionCountHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionData") && !value["GameServerSessionData"].IsNull())
    {
        if (!value["GameServerSessionData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.GameServerSessionData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionData = string(value["GameServerSessionData"].GetString());
        m_gameServerSessionDataHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("MatchmakerData") && !value["MatchmakerData"].IsNull())
    {
        if (!value["MatchmakerData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.MatchmakerData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchmakerData = string(value["MatchmakerData"].GetString());
        m_matchmakerDataHasBeenSet = true;
    }

    if (value.HasMember("PlacedPlayerSessions") && !value["PlacedPlayerSessions"].IsNull())
    {
        if (!value["PlacedPlayerSessions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.PlacedPlayerSessions` is not array type"));

        const rapidjson::Value &tmpValue = value["PlacedPlayerSessions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlacedPlayerSession item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_placedPlayerSessions.push_back(item);
        }
        m_placedPlayerSessionsHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionPlacement.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GameServerSessionPlacement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_placementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlacementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_placementId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionQueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_playerLatenciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerLatencies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_playerLatencies.begin(); itr != m_playerLatencies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsName.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_gamePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gameProperties.begin(); itr != m_gameProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

    if (m_gameServerSessionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionData.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_matchmakerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchmakerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchmakerData.c_str(), allocator).Move(), allocator);
    }

    if (m_placedPlayerSessionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlacedPlayerSessions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_placedPlayerSessions.begin(); itr != m_placedPlayerSessions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string GameServerSessionPlacement::GetPlacementId() const
{
    return m_placementId;
}

void GameServerSessionPlacement::SetPlacementId(const string& _placementId)
{
    m_placementId = _placementId;
    m_placementIdHasBeenSet = true;
}

bool GameServerSessionPlacement::PlacementIdHasBeenSet() const
{
    return m_placementIdHasBeenSet;
}

string GameServerSessionPlacement::GetGameServerSessionQueueName() const
{
    return m_gameServerSessionQueueName;
}

void GameServerSessionPlacement::SetGameServerSessionQueueName(const string& _gameServerSessionQueueName)
{
    m_gameServerSessionQueueName = _gameServerSessionQueueName;
    m_gameServerSessionQueueNameHasBeenSet = true;
}

bool GameServerSessionPlacement::GameServerSessionQueueNameHasBeenSet() const
{
    return m_gameServerSessionQueueNameHasBeenSet;
}

vector<PlayerLatency> GameServerSessionPlacement::GetPlayerLatencies() const
{
    return m_playerLatencies;
}

void GameServerSessionPlacement::SetPlayerLatencies(const vector<PlayerLatency>& _playerLatencies)
{
    m_playerLatencies = _playerLatencies;
    m_playerLatenciesHasBeenSet = true;
}

bool GameServerSessionPlacement::PlayerLatenciesHasBeenSet() const
{
    return m_playerLatenciesHasBeenSet;
}

string GameServerSessionPlacement::GetStatus() const
{
    return m_status;
}

void GameServerSessionPlacement::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GameServerSessionPlacement::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GameServerSessionPlacement::GetDnsName() const
{
    return m_dnsName;
}

void GameServerSessionPlacement::SetDnsName(const string& _dnsName)
{
    m_dnsName = _dnsName;
    m_dnsNameHasBeenSet = true;
}

bool GameServerSessionPlacement::DnsNameHasBeenSet() const
{
    return m_dnsNameHasBeenSet;
}

string GameServerSessionPlacement::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void GameServerSessionPlacement::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool GameServerSessionPlacement::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

string GameServerSessionPlacement::GetGameServerSessionName() const
{
    return m_gameServerSessionName;
}

void GameServerSessionPlacement::SetGameServerSessionName(const string& _gameServerSessionName)
{
    m_gameServerSessionName = _gameServerSessionName;
    m_gameServerSessionNameHasBeenSet = true;
}

bool GameServerSessionPlacement::GameServerSessionNameHasBeenSet() const
{
    return m_gameServerSessionNameHasBeenSet;
}

string GameServerSessionPlacement::GetGameServerSessionRegion() const
{
    return m_gameServerSessionRegion;
}

void GameServerSessionPlacement::SetGameServerSessionRegion(const string& _gameServerSessionRegion)
{
    m_gameServerSessionRegion = _gameServerSessionRegion;
    m_gameServerSessionRegionHasBeenSet = true;
}

bool GameServerSessionPlacement::GameServerSessionRegionHasBeenSet() const
{
    return m_gameServerSessionRegionHasBeenSet;
}

vector<GameProperty> GameServerSessionPlacement::GetGameProperties() const
{
    return m_gameProperties;
}

void GameServerSessionPlacement::SetGameProperties(const vector<GameProperty>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool GameServerSessionPlacement::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

uint64_t GameServerSessionPlacement::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void GameServerSessionPlacement::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool GameServerSessionPlacement::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}

string GameServerSessionPlacement::GetGameServerSessionData() const
{
    return m_gameServerSessionData;
}

void GameServerSessionPlacement::SetGameServerSessionData(const string& _gameServerSessionData)
{
    m_gameServerSessionData = _gameServerSessionData;
    m_gameServerSessionDataHasBeenSet = true;
}

bool GameServerSessionPlacement::GameServerSessionDataHasBeenSet() const
{
    return m_gameServerSessionDataHasBeenSet;
}

string GameServerSessionPlacement::GetIpAddress() const
{
    return m_ipAddress;
}

void GameServerSessionPlacement::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool GameServerSessionPlacement::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

uint64_t GameServerSessionPlacement::GetPort() const
{
    return m_port;
}

void GameServerSessionPlacement::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool GameServerSessionPlacement::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string GameServerSessionPlacement::GetMatchmakerData() const
{
    return m_matchmakerData;
}

void GameServerSessionPlacement::SetMatchmakerData(const string& _matchmakerData)
{
    m_matchmakerData = _matchmakerData;
    m_matchmakerDataHasBeenSet = true;
}

bool GameServerSessionPlacement::MatchmakerDataHasBeenSet() const
{
    return m_matchmakerDataHasBeenSet;
}

vector<PlacedPlayerSession> GameServerSessionPlacement::GetPlacedPlayerSessions() const
{
    return m_placedPlayerSessions;
}

void GameServerSessionPlacement::SetPlacedPlayerSessions(const vector<PlacedPlayerSession>& _placedPlayerSessions)
{
    m_placedPlayerSessions = _placedPlayerSessions;
    m_placedPlayerSessionsHasBeenSet = true;
}

bool GameServerSessionPlacement::PlacedPlayerSessionsHasBeenSet() const
{
    return m_placedPlayerSessionsHasBeenSet;
}

string GameServerSessionPlacement::GetStartTime() const
{
    return m_startTime;
}

void GameServerSessionPlacement::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GameServerSessionPlacement::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GameServerSessionPlacement::GetEndTime() const
{
    return m_endTime;
}

void GameServerSessionPlacement::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GameServerSessionPlacement::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

