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

#include <tencentcloud/gse/v20191112/model/GameServerSessionQueue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GameServerSessionQueue::GameServerSessionQueue() :
    m_nameHasBeenSet(false),
    m_gameServerSessionQueueArnHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_playerLatencyPoliciesHasBeenSet(false),
    m_timeoutInSecondsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome GameServerSessionQueue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueue.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("GameServerSessionQueueArn") && !value["GameServerSessionQueueArn"].IsNull())
    {
        if (!value["GameServerSessionQueueArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueue.GameServerSessionQueueArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gameServerSessionQueueArn = string(value["GameServerSessionQueueArn"].GetString());
        m_gameServerSessionQueueArnHasBeenSet = true;
    }

    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueue.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GameServerSessionQueueDestination item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("PlayerLatencyPolicies") && !value["PlayerLatencyPolicies"].IsNull())
    {
        if (!value["PlayerLatencyPolicies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueue.PlayerLatencyPolicies` is not array type"));

        const rapidjson::Value &tmpValue = value["PlayerLatencyPolicies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlayerLatencyPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_playerLatencyPolicies.push_back(item);
        }
        m_playerLatencyPoliciesHasBeenSet = true;
    }

    if (value.HasMember("TimeoutInSeconds") && !value["TimeoutInSeconds"].IsNull())
    {
        if (!value["TimeoutInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueue.TimeoutInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutInSeconds = value["TimeoutInSeconds"].GetUint64();
        m_timeoutInSecondsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueue.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GameServerSessionQueue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_gameServerSessionQueueArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionQueueArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gameServerSessionQueueArn.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_playerLatencyPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerLatencyPolicies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_playerLatencyPolicies.begin(); itr != m_playerLatencyPolicies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timeoutInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutInSeconds, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GameServerSessionQueue::GetName() const
{
    return m_name;
}

void GameServerSessionQueue::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GameServerSessionQueue::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GameServerSessionQueue::GetGameServerSessionQueueArn() const
{
    return m_gameServerSessionQueueArn;
}

void GameServerSessionQueue::SetGameServerSessionQueueArn(const string& _gameServerSessionQueueArn)
{
    m_gameServerSessionQueueArn = _gameServerSessionQueueArn;
    m_gameServerSessionQueueArnHasBeenSet = true;
}

bool GameServerSessionQueue::GameServerSessionQueueArnHasBeenSet() const
{
    return m_gameServerSessionQueueArnHasBeenSet;
}

vector<GameServerSessionQueueDestination> GameServerSessionQueue::GetDestinations() const
{
    return m_destinations;
}

void GameServerSessionQueue::SetDestinations(const vector<GameServerSessionQueueDestination>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool GameServerSessionQueue::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

vector<PlayerLatencyPolicy> GameServerSessionQueue::GetPlayerLatencyPolicies() const
{
    return m_playerLatencyPolicies;
}

void GameServerSessionQueue::SetPlayerLatencyPolicies(const vector<PlayerLatencyPolicy>& _playerLatencyPolicies)
{
    m_playerLatencyPolicies = _playerLatencyPolicies;
    m_playerLatencyPoliciesHasBeenSet = true;
}

bool GameServerSessionQueue::PlayerLatencyPoliciesHasBeenSet() const
{
    return m_playerLatencyPoliciesHasBeenSet;
}

uint64_t GameServerSessionQueue::GetTimeoutInSeconds() const
{
    return m_timeoutInSeconds;
}

void GameServerSessionQueue::SetTimeoutInSeconds(const uint64_t& _timeoutInSeconds)
{
    m_timeoutInSeconds = _timeoutInSeconds;
    m_timeoutInSecondsHasBeenSet = true;
}

bool GameServerSessionQueue::TimeoutInSecondsHasBeenSet() const
{
    return m_timeoutInSecondsHasBeenSet;
}

vector<Tag> GameServerSessionQueue::GetTags() const
{
    return m_tags;
}

void GameServerSessionQueue::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool GameServerSessionQueue::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

