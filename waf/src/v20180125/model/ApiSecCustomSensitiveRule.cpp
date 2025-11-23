/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/ApiSecCustomSensitiveRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiSecCustomSensitiveRule::ApiSecCustomSensitiveRule() :
    m_positionHasBeenSet(false),
    m_matchKeyHasBeenSet(false),
    m_matchValueHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_matchCondHasBeenSet(false),
    m_isPanHasBeenSet(false)
{
}

CoreInternalOutcome ApiSecCustomSensitiveRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomSensitiveRule.Position` is not array type"));

        const rapidjson::Value &tmpValue = value["Position"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_position.push_back((*itr).GetString());
        }
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("MatchKey") && !value["MatchKey"].IsNull())
    {
        if (!value["MatchKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomSensitiveRule.MatchKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchKey = string(value["MatchKey"].GetString());
        m_matchKeyHasBeenSet = true;
    }

    if (value.HasMember("MatchValue") && !value["MatchValue"].IsNull())
    {
        if (!value["MatchValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomSensitiveRule.MatchValue` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchValue.push_back((*itr).GetString());
        }
        m_matchValueHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomSensitiveRule.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("MatchCond") && !value["MatchCond"].IsNull())
    {
        if (!value["MatchCond"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomSensitiveRule.MatchCond` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchCond"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchCond.push_back((*itr).GetString());
        }
        m_matchCondHasBeenSet = true;
    }

    if (value.HasMember("IsPan") && !value["IsPan"].IsNull())
    {
        if (!value["IsPan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiSecCustomSensitiveRule.IsPan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPan = value["IsPan"].GetInt64();
        m_isPanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiSecCustomSensitiveRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_position.begin(); itr != m_position.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_matchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_matchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchValue.begin(); itr != m_matchValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_matchCondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchCond.begin(); itr != m_matchCond.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isPanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPan, allocator);
    }

}


vector<string> ApiSecCustomSensitiveRule::GetPosition() const
{
    return m_position;
}

void ApiSecCustomSensitiveRule::SetPosition(const vector<string>& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ApiSecCustomSensitiveRule::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string ApiSecCustomSensitiveRule::GetMatchKey() const
{
    return m_matchKey;
}

void ApiSecCustomSensitiveRule::SetMatchKey(const string& _matchKey)
{
    m_matchKey = _matchKey;
    m_matchKeyHasBeenSet = true;
}

bool ApiSecCustomSensitiveRule::MatchKeyHasBeenSet() const
{
    return m_matchKeyHasBeenSet;
}

vector<string> ApiSecCustomSensitiveRule::GetMatchValue() const
{
    return m_matchValue;
}

void ApiSecCustomSensitiveRule::SetMatchValue(const vector<string>& _matchValue)
{
    m_matchValue = _matchValue;
    m_matchValueHasBeenSet = true;
}

bool ApiSecCustomSensitiveRule::MatchValueHasBeenSet() const
{
    return m_matchValueHasBeenSet;
}

string ApiSecCustomSensitiveRule::GetLevel() const
{
    return m_level;
}

void ApiSecCustomSensitiveRule::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ApiSecCustomSensitiveRule::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<string> ApiSecCustomSensitiveRule::GetMatchCond() const
{
    return m_matchCond;
}

void ApiSecCustomSensitiveRule::SetMatchCond(const vector<string>& _matchCond)
{
    m_matchCond = _matchCond;
    m_matchCondHasBeenSet = true;
}

bool ApiSecCustomSensitiveRule::MatchCondHasBeenSet() const
{
    return m_matchCondHasBeenSet;
}

int64_t ApiSecCustomSensitiveRule::GetIsPan() const
{
    return m_isPan;
}

void ApiSecCustomSensitiveRule::SetIsPan(const int64_t& _isPan)
{
    m_isPan = _isPan;
    m_isPanHasBeenSet = true;
}

bool ApiSecCustomSensitiveRule::IsPanHasBeenSet() const
{
    return m_isPanHasBeenSet;
}

