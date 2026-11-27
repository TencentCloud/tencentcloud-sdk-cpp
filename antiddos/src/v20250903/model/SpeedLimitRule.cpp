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

#include <tencentcloud/antiddos/v20250903/model/SpeedLimitRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

SpeedLimitRule::SpeedLimitRule() :
    m_iPProtocolNumbersHasBeenSet(false),
    m_destinationPortRangesHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_bandwidthLimitHasBeenSet(false),
    m_packetRateLimitHasBeenSet(false)
{
}

CoreInternalOutcome SpeedLimitRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IPProtocolNumbers") && !value["IPProtocolNumbers"].IsNull())
    {
        if (!value["IPProtocolNumbers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeedLimitRule.IPProtocolNumbers` is not array type"));

        const rapidjson::Value &tmpValue = value["IPProtocolNumbers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPProtocolNumbers.push_back((*itr).GetString());
        }
        m_iPProtocolNumbersHasBeenSet = true;
    }

    if (value.HasMember("DestinationPortRanges") && !value["DestinationPortRanges"].IsNull())
    {
        if (!value["DestinationPortRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeedLimitRule.DestinationPortRanges` is not array type"));

        const rapidjson::Value &tmpValue = value["DestinationPortRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinationPortRanges.push_back(item);
        }
        m_destinationPortRangesHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedLimitRule.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("BandwidthLimit") && !value["BandwidthLimit"].IsNull())
    {
        if (!value["BandwidthLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedLimitRule.BandwidthLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthLimit = value["BandwidthLimit"].GetUint64();
        m_bandwidthLimitHasBeenSet = true;
    }

    if (value.HasMember("PacketRateLimit") && !value["PacketRateLimit"].IsNull())
    {
        if (!value["PacketRateLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpeedLimitRule.PacketRateLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packetRateLimit = value["PacketRateLimit"].GetUint64();
        m_packetRateLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeedLimitRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPProtocolNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPProtocolNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPProtocolNumbers.begin(); itr != m_iPProtocolNumbers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_destinationPortRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPortRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinationPortRanges.begin(); itr != m_destinationPortRanges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthLimit, allocator);
    }

    if (m_packetRateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketRateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetRateLimit, allocator);
    }

}


vector<string> SpeedLimitRule::GetIPProtocolNumbers() const
{
    return m_iPProtocolNumbers;
}

void SpeedLimitRule::SetIPProtocolNumbers(const vector<string>& _iPProtocolNumbers)
{
    m_iPProtocolNumbers = _iPProtocolNumbers;
    m_iPProtocolNumbersHasBeenSet = true;
}

bool SpeedLimitRule::IPProtocolNumbersHasBeenSet() const
{
    return m_iPProtocolNumbersHasBeenSet;
}

vector<PortRange> SpeedLimitRule::GetDestinationPortRanges() const
{
    return m_destinationPortRanges;
}

void SpeedLimitRule::SetDestinationPortRanges(const vector<PortRange>& _destinationPortRanges)
{
    m_destinationPortRanges = _destinationPortRanges;
    m_destinationPortRangesHasBeenSet = true;
}

bool SpeedLimitRule::DestinationPortRangesHasBeenSet() const
{
    return m_destinationPortRangesHasBeenSet;
}

string SpeedLimitRule::GetMode() const
{
    return m_mode;
}

void SpeedLimitRule::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SpeedLimitRule::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

uint64_t SpeedLimitRule::GetBandwidthLimit() const
{
    return m_bandwidthLimit;
}

void SpeedLimitRule::SetBandwidthLimit(const uint64_t& _bandwidthLimit)
{
    m_bandwidthLimit = _bandwidthLimit;
    m_bandwidthLimitHasBeenSet = true;
}

bool SpeedLimitRule::BandwidthLimitHasBeenSet() const
{
    return m_bandwidthLimitHasBeenSet;
}

uint64_t SpeedLimitRule::GetPacketRateLimit() const
{
    return m_packetRateLimit;
}

void SpeedLimitRule::SetPacketRateLimit(const uint64_t& _packetRateLimit)
{
    m_packetRateLimit = _packetRateLimit;
    m_packetRateLimitHasBeenSet = true;
}

bool SpeedLimitRule::PacketRateLimitHasBeenSet() const
{
    return m_packetRateLimitHasBeenSet;
}

