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

#include <tencentcloud/mgobe/v20201014/model/Team.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mgobe::V20201014::Model;
using namespace std;

Team::Team() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_minPlayersHasBeenSet(false),
    m_maxPlayersHasBeenSet(false)
{
}

CoreInternalOutcome Team::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Team.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Team.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MinPlayers") && !value["MinPlayers"].IsNull())
    {
        if (!value["MinPlayers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Team.MinPlayers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minPlayers = value["MinPlayers"].GetInt64();
        m_minPlayersHasBeenSet = true;
    }

    if (value.HasMember("MaxPlayers") && !value["MaxPlayers"].IsNull())
    {
        if (!value["MaxPlayers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Team.MaxPlayers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPlayers = value["MaxPlayers"].GetInt64();
        m_maxPlayersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Team::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_minPlayersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPlayers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPlayers, allocator);
    }

    if (m_maxPlayersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPlayers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPlayers, allocator);
    }

}


string Team::GetId() const
{
    return m_id;
}

void Team::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Team::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Team::GetName() const
{
    return m_name;
}

void Team::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Team::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Team::GetMinPlayers() const
{
    return m_minPlayers;
}

void Team::SetMinPlayers(const int64_t& _minPlayers)
{
    m_minPlayers = _minPlayers;
    m_minPlayersHasBeenSet = true;
}

bool Team::MinPlayersHasBeenSet() const
{
    return m_minPlayersHasBeenSet;
}

int64_t Team::GetMaxPlayers() const
{
    return m_maxPlayers;
}

void Team::SetMaxPlayers(const int64_t& _maxPlayers)
{
    m_maxPlayers = _maxPlayers;
    m_maxPlayersHasBeenSet = true;
}

bool Team::MaxPlayersHasBeenSet() const
{
    return m_maxPlayersHasBeenSet;
}

