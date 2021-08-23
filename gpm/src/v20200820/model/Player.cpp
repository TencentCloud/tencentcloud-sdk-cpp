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

#include <tencentcloud/gpm/v20200820/model/Player.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

Player::Player() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_matchAttributesHasBeenSet(false),
    m_teamHasBeenSet(false),
    m_customPlayerStatusHasBeenSet(false),
    m_customProfileHasBeenSet(false),
    m_regionLatenciesHasBeenSet(false)
{
}

CoreInternalOutcome Player::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
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

    if (value.HasMember("MatchAttributes") && !value["MatchAttributes"].IsNull())
    {
        if (!value["MatchAttributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Player.MatchAttributes` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchAttributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MatchAttribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchAttributes.push_back(item);
        }
        m_matchAttributesHasBeenSet = true;
    }

    if (value.HasMember("Team") && !value["Team"].IsNull())
    {
        if (!value["Team"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Player.Team` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_team = string(value["Team"].GetString());
        m_teamHasBeenSet = true;
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

    if (value.HasMember("RegionLatencies") && !value["RegionLatencies"].IsNull())
    {
        if (!value["RegionLatencies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Player.RegionLatencies` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionLatencies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionLatency item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionLatencies.push_back(item);
        }
        m_regionLatenciesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Player::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_matchAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchAttributes.begin(); itr != m_matchAttributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_teamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Team";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_team.c_str(), allocator).Move(), allocator);
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

    if (m_regionLatenciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionLatencies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionLatencies.begin(); itr != m_regionLatencies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Player::GetId() const
{
    return m_id;
}

void Player::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Player::IdHasBeenSet() const
{
    return m_idHasBeenSet;
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

vector<MatchAttribute> Player::GetMatchAttributes() const
{
    return m_matchAttributes;
}

void Player::SetMatchAttributes(const vector<MatchAttribute>& _matchAttributes)
{
    m_matchAttributes = _matchAttributes;
    m_matchAttributesHasBeenSet = true;
}

bool Player::MatchAttributesHasBeenSet() const
{
    return m_matchAttributesHasBeenSet;
}

string Player::GetTeam() const
{
    return m_team;
}

void Player::SetTeam(const string& _team)
{
    m_team = _team;
    m_teamHasBeenSet = true;
}

bool Player::TeamHasBeenSet() const
{
    return m_teamHasBeenSet;
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

vector<RegionLatency> Player::GetRegionLatencies() const
{
    return m_regionLatencies;
}

void Player::SetRegionLatencies(const vector<RegionLatency>& _regionLatencies)
{
    m_regionLatencies = _regionLatencies;
    m_regionLatenciesHasBeenSet = true;
}

bool Player::RegionLatenciesHasBeenSet() const
{
    return m_regionLatenciesHasBeenSet;
}

