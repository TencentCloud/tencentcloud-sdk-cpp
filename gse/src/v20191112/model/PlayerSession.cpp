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

#include <tencentcloud/gse/v20191112/model/PlayerSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

PlayerSession::PlayerSession() :
    m_creationTimeHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_gameServerSessionIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_playerDataHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_terminationTimeHasBeenSet(false)
{
}

CoreInternalOutcome PlayerSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("DnsName") && !value["DnsName"].IsNull())
    {
        if (!value["DnsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.DnsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsName = string(value["DnsName"].GetString());
        m_dnsNameHasBeenSet = true;
    }

    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionId") && !value["GameServerSessionId"].IsNull())
    {
        if (!value["GameServerSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.GameServerSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionId = string(value["GameServerSessionId"].GetString());
        m_gameServerSessionIdHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("PlayerData") && !value["PlayerData"].IsNull())
    {
        if (!value["PlayerData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.PlayerData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerData = string(value["PlayerData"].GetString());
        m_playerDataHasBeenSet = true;
    }

    if (value.HasMember("PlayerId") && !value["PlayerId"].IsNull())
    {
        if (!value["PlayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.PlayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerId = string(value["PlayerId"].GetString());
        m_playerIdHasBeenSet = true;
    }

    if (value.HasMember("PlayerSessionId") && !value["PlayerSessionId"].IsNull())
    {
        if (!value["PlayerSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.PlayerSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerSessionId = string(value["PlayerSessionId"].GetString());
        m_playerSessionIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TerminationTime") && !value["TerminationTime"].IsNull())
    {
        if (!value["TerminationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerSession.TerminationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminationTime = string(value["TerminationTime"].GetString());
        m_terminationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayerSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsName.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_playerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerData.c_str(), allocator).Move(), allocator);
    }

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

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_terminationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminationTime.c_str(), allocator).Move(), allocator);
    }

}


string PlayerSession::GetCreationTime() const
{
    return m_creationTime;
}

void PlayerSession::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool PlayerSession::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string PlayerSession::GetDnsName() const
{
    return m_dnsName;
}

void PlayerSession::SetDnsName(const string& _dnsName)
{
    m_dnsName = _dnsName;
    m_dnsNameHasBeenSet = true;
}

bool PlayerSession::DnsNameHasBeenSet() const
{
    return m_dnsNameHasBeenSet;
}

string PlayerSession::GetFleetId() const
{
    return m_fleetId;
}

void PlayerSession::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool PlayerSession::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string PlayerSession::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void PlayerSession::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool PlayerSession::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

string PlayerSession::GetIpAddress() const
{
    return m_ipAddress;
}

void PlayerSession::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool PlayerSession::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string PlayerSession::GetPlayerData() const
{
    return m_playerData;
}

void PlayerSession::SetPlayerData(const string& _playerData)
{
    m_playerData = _playerData;
    m_playerDataHasBeenSet = true;
}

bool PlayerSession::PlayerDataHasBeenSet() const
{
    return m_playerDataHasBeenSet;
}

string PlayerSession::GetPlayerId() const
{
    return m_playerId;
}

void PlayerSession::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool PlayerSession::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

string PlayerSession::GetPlayerSessionId() const
{
    return m_playerSessionId;
}

void PlayerSession::SetPlayerSessionId(const string& _playerSessionId)
{
    m_playerSessionId = _playerSessionId;
    m_playerSessionIdHasBeenSet = true;
}

bool PlayerSession::PlayerSessionIdHasBeenSet() const
{
    return m_playerSessionIdHasBeenSet;
}

uint64_t PlayerSession::GetPort() const
{
    return m_port;
}

void PlayerSession::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool PlayerSession::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string PlayerSession::GetStatus() const
{
    return m_status;
}

void PlayerSession::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PlayerSession::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PlayerSession::GetTerminationTime() const
{
    return m_terminationTime;
}

void PlayerSession::SetTerminationTime(const string& _terminationTime)
{
    m_terminationTime = _terminationTime;
    m_terminationTimeHasBeenSet = true;
}

bool PlayerSession::TerminationTimeHasBeenSet() const
{
    return m_terminationTimeHasBeenSet;
}

