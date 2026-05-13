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

#include <tencentcloud/ccc/v20200210/model/AICallInteractionRound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AICallInteractionRound::AICallInteractionRound() :
    m_roundIdHasBeenSet(false),
    m_roundIndexHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_messagesHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
}

CoreInternalOutcome AICallInteractionRound::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoundId") && !value["RoundId"].IsNull())
    {
        if (!value["RoundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallInteractionRound.RoundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roundId = string(value["RoundId"].GetString());
        m_roundIdHasBeenSet = true;
    }

    if (value.HasMember("RoundIndex") && !value["RoundIndex"].IsNull())
    {
        if (!value["RoundIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AICallInteractionRound.RoundIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roundIndex = value["RoundIndex"].GetInt64();
        m_roundIndexHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AICallInteractionRound.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Messages") && !value["Messages"].IsNull())
    {
        if (!value["Messages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AICallInteractionRound.Messages` is not array type"));

        const rapidjson::Value &tmpValue = value["Messages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIRoundMessage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_messages.push_back(item);
        }
        m_messagesHasBeenSet = true;
    }

    if (value.HasMember("Paths") && !value["Paths"].IsNull())
    {
        if (!value["Paths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AICallInteractionRound.Paths` is not array type"));

        const rapidjson::Value &tmpValue = value["Paths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIRoundPath item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paths.push_back(item);
        }
        m_pathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallInteractionRound::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roundId.c_str(), allocator).Move(), allocator);
    }

    if (m_roundIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roundIndex, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AICallInteractionRound::GetRoundId() const
{
    return m_roundId;
}

void AICallInteractionRound::SetRoundId(const string& _roundId)
{
    m_roundId = _roundId;
    m_roundIdHasBeenSet = true;
}

bool AICallInteractionRound::RoundIdHasBeenSet() const
{
    return m_roundIdHasBeenSet;
}

int64_t AICallInteractionRound::GetRoundIndex() const
{
    return m_roundIndex;
}

void AICallInteractionRound::SetRoundIndex(const int64_t& _roundIndex)
{
    m_roundIndex = _roundIndex;
    m_roundIndexHasBeenSet = true;
}

bool AICallInteractionRound::RoundIndexHasBeenSet() const
{
    return m_roundIndexHasBeenSet;
}

string AICallInteractionRound::GetTags() const
{
    return m_tags;
}

void AICallInteractionRound::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AICallInteractionRound::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<AIRoundMessage> AICallInteractionRound::GetMessages() const
{
    return m_messages;
}

void AICallInteractionRound::SetMessages(const vector<AIRoundMessage>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool AICallInteractionRound::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

vector<AIRoundPath> AICallInteractionRound::GetPaths() const
{
    return m_paths;
}

void AICallInteractionRound::SetPaths(const vector<AIRoundPath>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool AICallInteractionRound::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

