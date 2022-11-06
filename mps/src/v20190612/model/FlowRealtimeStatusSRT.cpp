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

#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusSRT.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowRealtimeStatusSRT::FlowRealtimeStatusSRT() :
    m_latencyHasBeenSet(false),
    m_rTTHasBeenSet(false),
    m_packetsHasBeenSet(false),
    m_packetLossRateHasBeenSet(false),
    m_retransmitRateHasBeenSet(false),
    m_droppedPacketsHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

CoreInternalOutcome FlowRealtimeStatusSRT::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.Latency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetInt64();
        m_latencyHasBeenSet = true;
    }

    if (value.HasMember("RTT") && !value["RTT"].IsNull())
    {
        if (!value["RTT"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.RTT` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rTT = value["RTT"].GetInt64();
        m_rTTHasBeenSet = true;
    }

    if (value.HasMember("Packets") && !value["Packets"].IsNull())
    {
        if (!value["Packets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.Packets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packets = value["Packets"].GetInt64();
        m_packetsHasBeenSet = true;
    }

    if (value.HasMember("PacketLossRate") && !value["PacketLossRate"].IsNull())
    {
        if (!value["PacketLossRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.PacketLossRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packetLossRate = value["PacketLossRate"].GetDouble();
        m_packetLossRateHasBeenSet = true;
    }

    if (value.HasMember("RetransmitRate") && !value["RetransmitRate"].IsNull())
    {
        if (!value["RetransmitRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.RetransmitRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_retransmitRate = value["RetransmitRate"].GetDouble();
        m_retransmitRateHasBeenSet = true;
    }

    if (value.HasMember("DroppedPackets") && !value["DroppedPackets"].IsNull())
    {
        if (!value["DroppedPackets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.DroppedPackets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_droppedPackets = value["DroppedPackets"].GetInt64();
        m_droppedPacketsHasBeenSet = true;
    }

    if (value.HasMember("Encryption") && !value["Encryption"].IsNull())
    {
        if (!value["Encryption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusSRT.Encryption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryption = string(value["Encryption"].GetString());
        m_encryptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowRealtimeStatusSRT::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

    if (m_rTTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rTT, allocator);
    }

    if (m_packetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Packets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packets, allocator);
    }

    if (m_packetLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetLossRate, allocator);
    }

    if (m_retransmitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetransmitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retransmitRate, allocator);
    }

    if (m_droppedPacketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DroppedPackets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_droppedPackets, allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryption.c_str(), allocator).Move(), allocator);
    }

}


int64_t FlowRealtimeStatusSRT::GetLatency() const
{
    return m_latency;
}

void FlowRealtimeStatusSRT::SetLatency(const int64_t& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

int64_t FlowRealtimeStatusSRT::GetRTT() const
{
    return m_rTT;
}

void FlowRealtimeStatusSRT::SetRTT(const int64_t& _rTT)
{
    m_rTT = _rTT;
    m_rTTHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::RTTHasBeenSet() const
{
    return m_rTTHasBeenSet;
}

int64_t FlowRealtimeStatusSRT::GetPackets() const
{
    return m_packets;
}

void FlowRealtimeStatusSRT::SetPackets(const int64_t& _packets)
{
    m_packets = _packets;
    m_packetsHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::PacketsHasBeenSet() const
{
    return m_packetsHasBeenSet;
}

double FlowRealtimeStatusSRT::GetPacketLossRate() const
{
    return m_packetLossRate;
}

void FlowRealtimeStatusSRT::SetPacketLossRate(const double& _packetLossRate)
{
    m_packetLossRate = _packetLossRate;
    m_packetLossRateHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::PacketLossRateHasBeenSet() const
{
    return m_packetLossRateHasBeenSet;
}

double FlowRealtimeStatusSRT::GetRetransmitRate() const
{
    return m_retransmitRate;
}

void FlowRealtimeStatusSRT::SetRetransmitRate(const double& _retransmitRate)
{
    m_retransmitRate = _retransmitRate;
    m_retransmitRateHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::RetransmitRateHasBeenSet() const
{
    return m_retransmitRateHasBeenSet;
}

int64_t FlowRealtimeStatusSRT::GetDroppedPackets() const
{
    return m_droppedPackets;
}

void FlowRealtimeStatusSRT::SetDroppedPackets(const int64_t& _droppedPackets)
{
    m_droppedPackets = _droppedPackets;
    m_droppedPacketsHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::DroppedPacketsHasBeenSet() const
{
    return m_droppedPacketsHasBeenSet;
}

string FlowRealtimeStatusSRT::GetEncryption() const
{
    return m_encryption;
}

void FlowRealtimeStatusSRT::SetEncryption(const string& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool FlowRealtimeStatusSRT::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

