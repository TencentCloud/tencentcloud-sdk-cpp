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

#include <tencentcloud/advisor/v20200721/model/Conditions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

Conditions::Conditions() :
    m_conditionIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_levelDescHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome Conditions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConditionId") && !value["ConditionId"].IsNull())
    {
        if (!value["ConditionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.ConditionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_conditionId = value["ConditionId"].GetUint64();
        m_conditionIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("LevelDesc") && !value["LevelDesc"].IsNull())
    {
        if (!value["LevelDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.LevelDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelDesc = string(value["LevelDesc"].GetString());
        m_levelDescHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Conditions.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Conditions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conditionId, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_levelDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Conditions::GetConditionId() const
{
    return m_conditionId;
}

void Conditions::SetConditionId(const uint64_t& _conditionId)
{
    m_conditionId = _conditionId;
    m_conditionIdHasBeenSet = true;
}

bool Conditions::ConditionIdHasBeenSet() const
{
    return m_conditionIdHasBeenSet;
}

uint64_t Conditions::GetLevel() const
{
    return m_level;
}

void Conditions::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Conditions::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string Conditions::GetLevelDesc() const
{
    return m_levelDesc;
}

void Conditions::SetLevelDesc(const string& _levelDesc)
{
    m_levelDesc = _levelDesc;
    m_levelDescHasBeenSet = true;
}

bool Conditions::LevelDescHasBeenSet() const
{
    return m_levelDescHasBeenSet;
}

string Conditions::GetDesc() const
{
    return m_desc;
}

void Conditions::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Conditions::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

