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

#include <tencentcloud/antiddos/v20250903/model/PacketFilterCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

PacketFilterCondition::PacketFilterCondition() :
    m_matchBeginHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome PacketFilterCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchBegin") && !value["MatchBegin"].IsNull())
    {
        if (!value["MatchBegin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterCondition.MatchBegin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchBegin = string(value["MatchBegin"].GetString());
        m_matchBeginHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PacketFilterCondition.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PacketFilterCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PacketFilterCondition::GetMatchBegin() const
{
    return m_matchBegin;
}

void PacketFilterCondition::SetMatchBegin(const string& _matchBegin)
{
    m_matchBegin = _matchBegin;
    m_matchBeginHasBeenSet = true;
}

bool PacketFilterCondition::MatchBeginHasBeenSet() const
{
    return m_matchBeginHasBeenSet;
}

PacketMatchContent PacketFilterCondition::GetContent() const
{
    return m_content;
}

void PacketFilterCondition::SetContent(const PacketMatchContent& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PacketFilterCondition::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

