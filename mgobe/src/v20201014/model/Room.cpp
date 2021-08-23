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

#include <tencentcloud/mgobe/v20201014/model/Room.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mgobe::V20201014::Model;
using namespace std;

Room::Room() :
    m_nameHasBeenSet(false),
    m_maxPlayersHasBeenSet(false),
    m_ownerOpenIdHasBeenSet(false),
    m_isPrivateHasBeenSet(false),
    m_playersHasBeenSet(false),
    m_teamsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTypeHasBeenSet(false),
    m_customPropertiesHasBeenSet(false),
    m_frameSyncStateHasBeenSet(false),
    m_frameRateHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startGameTimeHasBeenSet(false),
    m_isForbidJoinHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

CoreInternalOutcome Room::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MaxPlayers") && !value["MaxPlayers"].IsNull())
    {
        if (!value["MaxPlayers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Room.MaxPlayers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPlayers = value["MaxPlayers"].GetInt64();
        m_maxPlayersHasBeenSet = true;
    }

    if (value.HasMember("OwnerOpenId") && !value["OwnerOpenId"].IsNull())
    {
        if (!value["OwnerOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.OwnerOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerOpenId = string(value["OwnerOpenId"].GetString());
        m_ownerOpenIdHasBeenSet = true;
    }

    if (value.HasMember("IsPrivate") && !value["IsPrivate"].IsNull())
    {
        if (!value["IsPrivate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Room.IsPrivate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPrivate = value["IsPrivate"].GetBool();
        m_isPrivateHasBeenSet = true;
    }

    if (value.HasMember("Players") && !value["Players"].IsNull())
    {
        if (!value["Players"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Room.Players` is not array type"));

        const rapidjson::Value &tmpValue = value["Players"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Player item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_players.push_back(item);
        }
        m_playersHasBeenSet = true;
    }

    if (value.HasMember("Teams") && !value["Teams"].IsNull())
    {
        if (!value["Teams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Room.Teams` is not array type"));

        const rapidjson::Value &tmpValue = value["Teams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Team item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_teams.push_back(item);
        }
        m_teamsHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateType") && !value["CreateType"].IsNull())
    {
        if (!value["CreateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Room.CreateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createType = value["CreateType"].GetInt64();
        m_createTypeHasBeenSet = true;
    }

    if (value.HasMember("CustomProperties") && !value["CustomProperties"].IsNull())
    {
        if (!value["CustomProperties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.CustomProperties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customProperties = string(value["CustomProperties"].GetString());
        m_customPropertiesHasBeenSet = true;
    }

    if (value.HasMember("FrameSyncState") && !value["FrameSyncState"].IsNull())
    {
        if (!value["FrameSyncState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Room.FrameSyncState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameSyncState = value["FrameSyncState"].GetInt64();
        m_frameSyncStateHasBeenSet = true;
    }

    if (value.HasMember("FrameRate") && !value["FrameRate"].IsNull())
    {
        if (!value["FrameRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Room.FrameRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameRate = value["FrameRate"].GetInt64();
        m_frameRateHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Room.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartGameTime") && !value["StartGameTime"].IsNull())
    {
        if (!value["StartGameTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Room.StartGameTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startGameTime = value["StartGameTime"].GetInt64();
        m_startGameTimeHasBeenSet = true;
    }

    if (value.HasMember("IsForbidJoin") && !value["IsForbidJoin"].IsNull())
    {
        if (!value["IsForbidJoin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Room.IsForbidJoin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isForbidJoin = value["IsForbidJoin"].GetBool();
        m_isForbidJoinHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Room.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Room::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_maxPlayersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPlayers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPlayers, allocator);
    }

    if (m_ownerOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrivateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrivate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPrivate, allocator);
    }

    if (m_playersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Players";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_players.begin(); itr != m_players.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_teamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Teams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_teams.begin(); itr != m_teams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createType, allocator);
    }

    if (m_customPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_frameSyncStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameSyncState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameSyncState, allocator);
    }

    if (m_frameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRate, allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_startGameTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartGameTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startGameTime, allocator);
    }

    if (m_isForbidJoinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsForbidJoin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isForbidJoin, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

}


string Room::GetName() const
{
    return m_name;
}

void Room::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Room::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Room::GetMaxPlayers() const
{
    return m_maxPlayers;
}

void Room::SetMaxPlayers(const int64_t& _maxPlayers)
{
    m_maxPlayers = _maxPlayers;
    m_maxPlayersHasBeenSet = true;
}

bool Room::MaxPlayersHasBeenSet() const
{
    return m_maxPlayersHasBeenSet;
}

string Room::GetOwnerOpenId() const
{
    return m_ownerOpenId;
}

void Room::SetOwnerOpenId(const string& _ownerOpenId)
{
    m_ownerOpenId = _ownerOpenId;
    m_ownerOpenIdHasBeenSet = true;
}

bool Room::OwnerOpenIdHasBeenSet() const
{
    return m_ownerOpenIdHasBeenSet;
}

bool Room::GetIsPrivate() const
{
    return m_isPrivate;
}

void Room::SetIsPrivate(const bool& _isPrivate)
{
    m_isPrivate = _isPrivate;
    m_isPrivateHasBeenSet = true;
}

bool Room::IsPrivateHasBeenSet() const
{
    return m_isPrivateHasBeenSet;
}

vector<Player> Room::GetPlayers() const
{
    return m_players;
}

void Room::SetPlayers(const vector<Player>& _players)
{
    m_players = _players;
    m_playersHasBeenSet = true;
}

bool Room::PlayersHasBeenSet() const
{
    return m_playersHasBeenSet;
}

vector<Team> Room::GetTeams() const
{
    return m_teams;
}

void Room::SetTeams(const vector<Team>& _teams)
{
    m_teams = _teams;
    m_teamsHasBeenSet = true;
}

bool Room::TeamsHasBeenSet() const
{
    return m_teamsHasBeenSet;
}

string Room::GetId() const
{
    return m_id;
}

void Room::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Room::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Room::GetType() const
{
    return m_type;
}

void Room::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Room::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t Room::GetCreateType() const
{
    return m_createType;
}

void Room::SetCreateType(const int64_t& _createType)
{
    m_createType = _createType;
    m_createTypeHasBeenSet = true;
}

bool Room::CreateTypeHasBeenSet() const
{
    return m_createTypeHasBeenSet;
}

string Room::GetCustomProperties() const
{
    return m_customProperties;
}

void Room::SetCustomProperties(const string& _customProperties)
{
    m_customProperties = _customProperties;
    m_customPropertiesHasBeenSet = true;
}

bool Room::CustomPropertiesHasBeenSet() const
{
    return m_customPropertiesHasBeenSet;
}

int64_t Room::GetFrameSyncState() const
{
    return m_frameSyncState;
}

void Room::SetFrameSyncState(const int64_t& _frameSyncState)
{
    m_frameSyncState = _frameSyncState;
    m_frameSyncStateHasBeenSet = true;
}

bool Room::FrameSyncStateHasBeenSet() const
{
    return m_frameSyncStateHasBeenSet;
}

int64_t Room::GetFrameRate() const
{
    return m_frameRate;
}

void Room::SetFrameRate(const int64_t& _frameRate)
{
    m_frameRate = _frameRate;
    m_frameRateHasBeenSet = true;
}

bool Room::FrameRateHasBeenSet() const
{
    return m_frameRateHasBeenSet;
}

string Room::GetRouteId() const
{
    return m_routeId;
}

void Room::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool Room::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

int64_t Room::GetCreateTime() const
{
    return m_createTime;
}

void Room::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Room::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Room::GetStartGameTime() const
{
    return m_startGameTime;
}

void Room::SetStartGameTime(const int64_t& _startGameTime)
{
    m_startGameTime = _startGameTime;
    m_startGameTimeHasBeenSet = true;
}

bool Room::StartGameTimeHasBeenSet() const
{
    return m_startGameTimeHasBeenSet;
}

bool Room::GetIsForbidJoin() const
{
    return m_isForbidJoin;
}

void Room::SetIsForbidJoin(const bool& _isForbidJoin)
{
    m_isForbidJoin = _isForbidJoin;
    m_isForbidJoinHasBeenSet = true;
}

bool Room::IsForbidJoinHasBeenSet() const
{
    return m_isForbidJoinHasBeenSet;
}

string Room::GetOwner() const
{
    return m_owner;
}

void Room::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool Room::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

