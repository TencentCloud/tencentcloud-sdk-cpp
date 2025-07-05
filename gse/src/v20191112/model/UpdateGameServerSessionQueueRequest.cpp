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

#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateGameServerSessionQueueRequest::UpdateGameServerSessionQueueRequest() :
    m_nameHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_playerLatencyPoliciesHasBeenSet(false),
    m_timeoutInSecondsHasBeenSet(false)
{
}

string UpdateGameServerSessionQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_playerLatencyPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerLatencyPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_playerLatencyPolicies.begin(); itr != m_playerLatencyPolicies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeoutInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutInSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateGameServerSessionQueueRequest::GetName() const
{
    return m_name;
}

void UpdateGameServerSessionQueueRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateGameServerSessionQueueRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<GameServerSessionQueueDestination> UpdateGameServerSessionQueueRequest::GetDestinations() const
{
    return m_destinations;
}

void UpdateGameServerSessionQueueRequest::SetDestinations(const vector<GameServerSessionQueueDestination>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool UpdateGameServerSessionQueueRequest::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

vector<PlayerLatencyPolicy> UpdateGameServerSessionQueueRequest::GetPlayerLatencyPolicies() const
{
    return m_playerLatencyPolicies;
}

void UpdateGameServerSessionQueueRequest::SetPlayerLatencyPolicies(const vector<PlayerLatencyPolicy>& _playerLatencyPolicies)
{
    m_playerLatencyPolicies = _playerLatencyPolicies;
    m_playerLatencyPoliciesHasBeenSet = true;
}

bool UpdateGameServerSessionQueueRequest::PlayerLatencyPoliciesHasBeenSet() const
{
    return m_playerLatencyPoliciesHasBeenSet;
}

uint64_t UpdateGameServerSessionQueueRequest::GetTimeoutInSeconds() const
{
    return m_timeoutInSeconds;
}

void UpdateGameServerSessionQueueRequest::SetTimeoutInSeconds(const uint64_t& _timeoutInSeconds)
{
    m_timeoutInSeconds = _timeoutInSeconds;
    m_timeoutInSecondsHasBeenSet = true;
}

bool UpdateGameServerSessionQueueRequest::TimeoutInSecondsHasBeenSet() const
{
    return m_timeoutInSecondsHasBeenSet;
}


