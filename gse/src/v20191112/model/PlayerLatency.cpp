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

#include <tencentcloud/gse/v20191112/model/PlayerLatency.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

PlayerLatency::PlayerLatency() :
    m_playerIdHasBeenSet(false),
    m_regionIdentifierHasBeenSet(false),
    m_latencyInMillisecondsHasBeenSet(false)
{
}

CoreInternalOutcome PlayerLatency::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlayerId") && !value["PlayerId"].IsNull())
    {
        if (!value["PlayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerLatency.PlayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playerId = string(value["PlayerId"].GetString());
        m_playerIdHasBeenSet = true;
    }

    if (value.HasMember("RegionIdentifier") && !value["RegionIdentifier"].IsNull())
    {
        if (!value["RegionIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerLatency.RegionIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionIdentifier = string(value["RegionIdentifier"].GetString());
        m_regionIdentifierHasBeenSet = true;
    }

    if (value.HasMember("LatencyInMilliseconds") && !value["LatencyInMilliseconds"].IsNull())
    {
        if (!value["LatencyInMilliseconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerLatency.LatencyInMilliseconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_latencyInMilliseconds = value["LatencyInMilliseconds"].GetUint64();
        m_latencyInMillisecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayerLatency::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playerId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_latencyInMillisecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyInMilliseconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latencyInMilliseconds, allocator);
    }

}


string PlayerLatency::GetPlayerId() const
{
    return m_playerId;
}

void PlayerLatency::SetPlayerId(const string& _playerId)
{
    m_playerId = _playerId;
    m_playerIdHasBeenSet = true;
}

bool PlayerLatency::PlayerIdHasBeenSet() const
{
    return m_playerIdHasBeenSet;
}

string PlayerLatency::GetRegionIdentifier() const
{
    return m_regionIdentifier;
}

void PlayerLatency::SetRegionIdentifier(const string& _regionIdentifier)
{
    m_regionIdentifier = _regionIdentifier;
    m_regionIdentifierHasBeenSet = true;
}

bool PlayerLatency::RegionIdentifierHasBeenSet() const
{
    return m_regionIdentifierHasBeenSet;
}

uint64_t PlayerLatency::GetLatencyInMilliseconds() const
{
    return m_latencyInMilliseconds;
}

void PlayerLatency::SetLatencyInMilliseconds(const uint64_t& _latencyInMilliseconds)
{
    m_latencyInMilliseconds = _latencyInMilliseconds;
    m_latencyInMillisecondsHasBeenSet = true;
}

bool PlayerLatency::LatencyInMillisecondsHasBeenSet() const
{
    return m_latencyInMillisecondsHasBeenSet;
}

