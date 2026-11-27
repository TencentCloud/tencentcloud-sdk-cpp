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

#include <tencentcloud/antiddos/v20250903/model/TrafficSignatureConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

TrafficSignatureConfig::TrafficSignatureConfig() :
    m_switchHasBeenSet(false),
    m_trafficSignatureKeysHasBeenSet(false),
    m_udpCheckPortRangesHasBeenSet(false),
    m_tcpCheckPortRangesHasBeenSet(false),
    m_udpTrafficSignatureOffsetHasBeenSet(false),
    m_tcpTrafficSignatureOffsetHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSignatureConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSignatureConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("TrafficSignatureKeys") && !value["TrafficSignatureKeys"].IsNull())
    {
        if (!value["TrafficSignatureKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSignatureConfig.TrafficSignatureKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficSignatureKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_trafficSignatureKeys.push_back((*itr).GetString());
        }
        m_trafficSignatureKeysHasBeenSet = true;
    }

    if (value.HasMember("UdpCheckPortRanges") && !value["UdpCheckPortRanges"].IsNull())
    {
        if (!value["UdpCheckPortRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSignatureConfig.UdpCheckPortRanges` is not array type"));

        const rapidjson::Value &tmpValue = value["UdpCheckPortRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_udpCheckPortRanges.push_back(item);
        }
        m_udpCheckPortRangesHasBeenSet = true;
    }

    if (value.HasMember("TcpCheckPortRanges") && !value["TcpCheckPortRanges"].IsNull())
    {
        if (!value["TcpCheckPortRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSignatureConfig.TcpCheckPortRanges` is not array type"));

        const rapidjson::Value &tmpValue = value["TcpCheckPortRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tcpCheckPortRanges.push_back(item);
        }
        m_tcpCheckPortRangesHasBeenSet = true;
    }

    if (value.HasMember("UdpTrafficSignatureOffset") && !value["UdpTrafficSignatureOffset"].IsNull())
    {
        if (!value["UdpTrafficSignatureOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSignatureConfig.UdpTrafficSignatureOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_udpTrafficSignatureOffset = value["UdpTrafficSignatureOffset"].GetUint64();
        m_udpTrafficSignatureOffsetHasBeenSet = true;
    }

    if (value.HasMember("TcpTrafficSignatureOffset") && !value["TcpTrafficSignatureOffset"].IsNull())
    {
        if (!value["TcpTrafficSignatureOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSignatureConfig.TcpTrafficSignatureOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcpTrafficSignatureOffset = value["TcpTrafficSignatureOffset"].GetInt64();
        m_tcpTrafficSignatureOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSignatureConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficSignatureKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficSignatureKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trafficSignatureKeys.begin(); itr != m_trafficSignatureKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_udpCheckPortRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpCheckPortRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_udpCheckPortRanges.begin(); itr != m_udpCheckPortRanges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tcpCheckPortRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpCheckPortRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tcpCheckPortRanges.begin(); itr != m_tcpCheckPortRanges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_udpTrafficSignatureOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UdpTrafficSignatureOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_udpTrafficSignatureOffset, allocator);
    }

    if (m_tcpTrafficSignatureOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpTrafficSignatureOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcpTrafficSignatureOffset, allocator);
    }

}


string TrafficSignatureConfig::GetSwitch() const
{
    return m_switch;
}

void TrafficSignatureConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool TrafficSignatureConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> TrafficSignatureConfig::GetTrafficSignatureKeys() const
{
    return m_trafficSignatureKeys;
}

void TrafficSignatureConfig::SetTrafficSignatureKeys(const vector<string>& _trafficSignatureKeys)
{
    m_trafficSignatureKeys = _trafficSignatureKeys;
    m_trafficSignatureKeysHasBeenSet = true;
}

bool TrafficSignatureConfig::TrafficSignatureKeysHasBeenSet() const
{
    return m_trafficSignatureKeysHasBeenSet;
}

vector<PortRange> TrafficSignatureConfig::GetUdpCheckPortRanges() const
{
    return m_udpCheckPortRanges;
}

void TrafficSignatureConfig::SetUdpCheckPortRanges(const vector<PortRange>& _udpCheckPortRanges)
{
    m_udpCheckPortRanges = _udpCheckPortRanges;
    m_udpCheckPortRangesHasBeenSet = true;
}

bool TrafficSignatureConfig::UdpCheckPortRangesHasBeenSet() const
{
    return m_udpCheckPortRangesHasBeenSet;
}

vector<PortRange> TrafficSignatureConfig::GetTcpCheckPortRanges() const
{
    return m_tcpCheckPortRanges;
}

void TrafficSignatureConfig::SetTcpCheckPortRanges(const vector<PortRange>& _tcpCheckPortRanges)
{
    m_tcpCheckPortRanges = _tcpCheckPortRanges;
    m_tcpCheckPortRangesHasBeenSet = true;
}

bool TrafficSignatureConfig::TcpCheckPortRangesHasBeenSet() const
{
    return m_tcpCheckPortRangesHasBeenSet;
}

uint64_t TrafficSignatureConfig::GetUdpTrafficSignatureOffset() const
{
    return m_udpTrafficSignatureOffset;
}

void TrafficSignatureConfig::SetUdpTrafficSignatureOffset(const uint64_t& _udpTrafficSignatureOffset)
{
    m_udpTrafficSignatureOffset = _udpTrafficSignatureOffset;
    m_udpTrafficSignatureOffsetHasBeenSet = true;
}

bool TrafficSignatureConfig::UdpTrafficSignatureOffsetHasBeenSet() const
{
    return m_udpTrafficSignatureOffsetHasBeenSet;
}

int64_t TrafficSignatureConfig::GetTcpTrafficSignatureOffset() const
{
    return m_tcpTrafficSignatureOffset;
}

void TrafficSignatureConfig::SetTcpTrafficSignatureOffset(const int64_t& _tcpTrafficSignatureOffset)
{
    m_tcpTrafficSignatureOffset = _tcpTrafficSignatureOffset;
    m_tcpTrafficSignatureOffsetHasBeenSet = true;
}

bool TrafficSignatureConfig::TcpTrafficSignatureOffsetHasBeenSet() const
{
    return m_tcpTrafficSignatureOffsetHasBeenSet;
}

