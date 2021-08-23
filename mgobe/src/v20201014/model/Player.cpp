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

#include <tencentcloud/mgobe/v20201014/model/Player.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mgobe::V20201014::Model;
using namespace std;

Player::Player() :
    m_openIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_isRobotHasBeenSet(false),
    m_playerIdHasBeenSet(false),
    m_customPlayerStatusHasBeenSet(false),
    m_customProfileHasBeenSet(false)
{
}

CoreInternalOutcome Player::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("IsRobot") && !value["IsRobot"].IsNull())
    {
        if (!value["IsRobot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Player.IsRobot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRobot = value["IsRobot"].GetBool();
        m_isRobotHasBeenSet = true;
    }

    if (value.HasMember("PlayerId") && !value["PlayerId"].IsNull())
    {
        if (!value["PlayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.PlayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerId = string(value["PlayerId"].GetString());
        m_playerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomPlayerStatus") && !value["CustomPlayerStatus"].IsNull())
    {
        if (!value["CustomPlayerStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Player.CustomPlayerStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customPlayerStatus = value["CustomPlayerStatus"].GetUint64();
        m_customPlayerStatusHasBeenSet = true;
    }

    if (value.HasMember("CustomProfile") && !value["CustomProfile"].IsNull())
    {
        if (!value["CustomProfile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.CustomProfile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customProfile = string(value["CustomProfile"].GetString());
        m_customProfileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Player::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_isRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRobot, allocator);
    }

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }

    if (m_customPlayerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPlayerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customPlayerStatus, allocator);
    }

    if (m_customProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customProfile.c_str(), allocator).Move(), allocator);
    }

}


string Player::GetOpenId() const
{
    return m_openId;
}

void Player::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool Player::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string Player::GetName() const
{
    return m_name;
}

void Player::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Player::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Player::GetTeamId() const
{
    return m_teamId;
}

void Player::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool Player::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

bool Player::GetIsRobot() const
{
    return m_isRobot;
}

void Player::SetIsRobot(const bool& _isRobot)
{
    m_isRobot = _isRobot;
    m_isRobotHasBeenSet = true;
}

bool Player::IsRobotHasBeenSet() const
{
    return m_isRobotHasBeenSet;
}

string Player::GetPlayerId() const
{
    return m_playerId;
}

void Player::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool Player::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

uint64_t Player::GetCustomPlayerStatus() const
{
    return m_customPlayerStatus;
}

void Player::SetCustomPlayerStatus(const uint64_t& _customPlayerStatus)
{
    m_customPlayerStatus = _customPlayerStatus;
    m_customPlayerStatusHasBeenSet = true;
}

bool Player::CustomPlayerStatusHasBeenSet() const
{
    return m_customPlayerStatusHasBeenSet;
}

string Player::GetCustomProfile() const
{
    return m_customProfile;
}

void Player::SetCustomProfile(const string& _customProfile)
{
    m_customProfile = _customProfile;
    m_customProfileHasBeenSet = true;
}

bool Player::CustomProfileHasBeenSet() const
{
    return m_customProfileHasBeenSet;
}

