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

#include <tencentcloud/gse/v20191112/model/GameServerSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GameServerSession::GameServerSession() :
    m_creationTimeHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_currentPlayerSessionCountHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_gameServerSessionDataHasBeenSet(false),
    m_gameServerSessionIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_matchmakerDataHasBeenSet(false),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_playerSessionCreationPolicyHasBeenSet(false),
    m_portHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_currentCustomCountHasBeenSet(false),
    m_maxCustomCountHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_availabilityStatusHasBeenSet(false)
{
}

CoreInternalOutcome GameServerSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("CurrentPlayerSessionCount") && !value["CurrentPlayerSessionCount"].IsNull())
    {
        if (!value["CurrentPlayerSessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.CurrentPlayerSessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPlayerSessionCount = value["CurrentPlayerSessionCount"].GetUint64();
        m_currentPlayerSessionCountHasBeenSet = true;
    }

    if (value.HasMember("DnsName") && !value["DnsName"].IsNull())
    {
        if (!value["DnsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.DnsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsName = string(value["DnsName"].GetString());
        m_dnsNameHasBeenSet = true;
    }

    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("GameProperties") && !value["GameProperties"].IsNull())
    {
        if (!value["GameProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSession.GameProperties` is not array type"));

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

    if (value.HasMember("GameServerSessionData") && !value["GameServerSessionData"].IsNull())
    {
        if (!value["GameServerSessionData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.GameServerSessionData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionData = string(value["GameServerSessionData"].GetString());
        m_gameServerSessionDataHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionId") && !value["GameServerSessionId"].IsNull())
    {
        if (!value["GameServerSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.GameServerSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionId = string(value["GameServerSessionId"].GetString());
        m_gameServerSessionIdHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.IpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddress = string(value["IpAddress"].GetString());
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("MatchmakerData") && !value["MatchmakerData"].IsNull())
    {
        if (!value["MatchmakerData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.MatchmakerData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchmakerData = string(value["MatchmakerData"].GetString());
        m_matchmakerDataHasBeenSet = true;
    }

    if (value.HasMember("MaximumPlayerSessionCount") && !value["MaximumPlayerSessionCount"].IsNull())
    {
        if (!value["MaximumPlayerSessionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.MaximumPlayerSessionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumPlayerSessionCount = value["MaximumPlayerSessionCount"].GetUint64();
        m_maximumPlayerSessionCountHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PlayerSessionCreationPolicy") && !value["PlayerSessionCreationPolicy"].IsNull())
    {
        if (!value["PlayerSessionCreationPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.PlayerSessionCreationPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerSessionCreationPolicy = string(value["PlayerSessionCreationPolicy"].GetString());
        m_playerSessionCreationPolicyHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("TerminationTime") && !value["TerminationTime"].IsNull())
    {
        if (!value["TerminationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.TerminationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminationTime = string(value["TerminationTime"].GetString());
        m_terminationTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("CurrentCustomCount") && !value["CurrentCustomCount"].IsNull())
    {
        if (!value["CurrentCustomCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.CurrentCustomCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentCustomCount = value["CurrentCustomCount"].GetInt64();
        m_currentCustomCountHasBeenSet = true;
    }

    if (value.HasMember("MaxCustomCount") && !value["MaxCustomCount"].IsNull())
    {
        if (!value["MaxCustomCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.MaxCustomCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCustomCount = value["MaxCustomCount"].GetInt64();
        m_maxCustomCountHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("AvailabilityStatus") && !value["AvailabilityStatus"].IsNull())
    {
        if (!value["AvailabilityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSession.AvailabilityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availabilityStatus = string(value["AvailabilityStatus"].GetString());
        m_availabilityStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GameServerSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPlayerSessionCount, allocator);
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

    if (m_gameServerSessionDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionData.c_str(), allocator).Move(), allocator);
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

    if (m_matchmakerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchmakerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchmakerData.c_str(), allocator).Move(), allocator);
    }

    if (m_maximumPlayerSessionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumPlayerSessionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumPlayerSessionCount, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_playerSessionCreationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerSessionCreationPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerSessionCreationPolicy.c_str(), allocator).Move(), allocator);
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

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

    if (m_terminationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_currentCustomCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentCustomCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentCustomCount, allocator);
    }

    if (m_maxCustomCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCustomCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCustomCount, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_availabilityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availabilityStatus.c_str(), allocator).Move(), allocator);
    }

}


string GameServerSession::GetCreationTime() const
{
    return m_creationTime;
}

void GameServerSession::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool GameServerSession::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string GameServerSession::GetCreatorId() const
{
    return m_creatorId;
}

void GameServerSession::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool GameServerSession::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

uint64_t GameServerSession::GetCurrentPlayerSessionCount() const
{
    return m_currentPlayerSessionCount;
}

void GameServerSession::SetCurrentPlayerSessionCount(const uint64_t& _currentPlayerSessionCount)
{
    m_currentPlayerSessionCount = _currentPlayerSessionCount;
    m_currentPlayerSessionCountHasBeenSet = true;
}

bool GameServerSession::CurrentPlayerSessionCountHasBeenSet() const
{
    return m_currentPlayerSessionCountHasBeenSet;
}

string GameServerSession::GetDnsName() const
{
    return m_dnsName;
}

void GameServerSession::SetDnsName(const string& _dnsName)
{
    m_dnsName = _dnsName;
    m_dnsNameHasBeenSet = true;
}

bool GameServerSession::DnsNameHasBeenSet() const
{
    return m_dnsNameHasBeenSet;
}

string GameServerSession::GetFleetId() const
{
    return m_fleetId;
}

void GameServerSession::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool GameServerSession::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

vector<GameProperty> GameServerSession::GetGameProperties() const
{
    return m_gameProperties;
}

void GameServerSession::SetGameProperties(const vector<GameProperty>& _gameProperties)
{
    m_gameProperties = _gameProperties;
    m_gamePropertiesHasBeenSet = true;
}

bool GameServerSession::GamePropertiesHasBeenSet() const
{
    return m_gamePropertiesHasBeenSet;
}

string GameServerSession::GetGameServerSessionData() const
{
    return m_gameServerSessionData;
}

void GameServerSession::SetGameServerSessionData(const string& _gameServerSessionData)
{
    m_gameServerSessionData = _gameServerSessionData;
    m_gameServerSessionDataHasBeenSet = true;
}

bool GameServerSession::GameServerSessionDataHasBeenSet() const
{
    return m_gameServerSessionDataHasBeenSet;
}

string GameServerSession::GetGameServerSessionId() const
{
    return m_gameServerSessionId;
}

void GameServerSession::SetGameServerSessionId(const string& _gameServerSessionId)
{
    m_gameServerSessionId = _gameServerSessionId;
    m_gameServerSessionIdHasBeenSet = true;
}

bool GameServerSession::GameServerSessionIdHasBeenSet() const
{
    return m_gameServerSessionIdHasBeenSet;
}

string GameServerSession::GetIpAddress() const
{
    return m_ipAddress;
}

void GameServerSession::SetIpAddress(const string& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool GameServerSession::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

string GameServerSession::GetMatchmakerData() const
{
    return m_matchmakerData;
}

void GameServerSession::SetMatchmakerData(const string& _matchmakerData)
{
    m_matchmakerData = _matchmakerData;
    m_matchmakerDataHasBeenSet = true;
}

bool GameServerSession::MatchmakerDataHasBeenSet() const
{
    return m_matchmakerDataHasBeenSet;
}

uint64_t GameServerSession::GetMaximumPlayerSessionCount() const
{
    return m_maximumPlayerSessionCount;
}

void GameServerSession::SetMaximumPlayerSessionCount(const uint64_t& _maximumPlayerSessionCount)
{
    m_maximumPlayerSessionCount = _maximumPlayerSessionCount;
    m_maximumPlayerSessionCountHasBeenSet = true;
}

bool GameServerSession::MaximumPlayerSessionCountHasBeenSet() const
{
    return m_maximumPlayerSessionCountHasBeenSet;
}

string GameServerSession::GetName() const
{
    return m_name;
}

void GameServerSession::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GameServerSession::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GameServerSession::GetPlayerSessionCreationPolicy() const
{
    return m_playerSessionCreationPolicy;
}

void GameServerSession::SetPlayerSessionCreationPolicy(const string& _playerSessionCreationPolicy)
{
    m_playerSessionCreationPolicy = _playerSessionCreationPolicy;
    m_playerSessionCreationPolicyHasBeenSet = true;
}

bool GameServerSession::PlayerSessionCreationPolicyHasBeenSet() const
{
    return m_playerSessionCreationPolicyHasBeenSet;
}

uint64_t GameServerSession::GetPort() const
{
    return m_port;
}

void GameServerSession::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool GameServerSession::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string GameServerSession::GetStatus() const
{
    return m_status;
}

void GameServerSession::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GameServerSession::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GameServerSession::GetStatusReason() const
{
    return m_statusReason;
}

void GameServerSession::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool GameServerSession::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

string GameServerSession::GetTerminationTime() const
{
    return m_terminationTime;
}

void GameServerSession::SetTerminationTime(const string& _terminationTime)
{
    m_terminationTime = _terminationTime;
    m_terminationTimeHasBeenSet = true;
}

bool GameServerSession::TerminationTimeHasBeenSet() const
{
    return m_terminationTimeHasBeenSet;
}

string GameServerSession::GetInstanceType() const
{
    return m_instanceType;
}

void GameServerSession::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool GameServerSession::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t GameServerSession::GetCurrentCustomCount() const
{
    return m_currentCustomCount;
}

void GameServerSession::SetCurrentCustomCount(const int64_t& _currentCustomCount)
{
    m_currentCustomCount = _currentCustomCount;
    m_currentCustomCountHasBeenSet = true;
}

bool GameServerSession::CurrentCustomCountHasBeenSet() const
{
    return m_currentCustomCountHasBeenSet;
}

int64_t GameServerSession::GetMaxCustomCount() const
{
    return m_maxCustomCount;
}

void GameServerSession::SetMaxCustomCount(const int64_t& _maxCustomCount)
{
    m_maxCustomCount = _maxCustomCount;
    m_maxCustomCountHasBeenSet = true;
}

bool GameServerSession::MaxCustomCountHasBeenSet() const
{
    return m_maxCustomCountHasBeenSet;
}

int64_t GameServerSession::GetWeight() const
{
    return m_weight;
}

void GameServerSession::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool GameServerSession::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string GameServerSession::GetAvailabilityStatus() const
{
    return m_availabilityStatus;
}

void GameServerSession::SetAvailabilityStatus(const string& _availabilityStatus)
{
    m_availabilityStatus = _availabilityStatus;
    m_availabilityStatusHasBeenSet = true;
}

bool GameServerSession::AvailabilityStatusHasBeenSet() const
{
    return m_availabilityStatusHasBeenSet;
}

