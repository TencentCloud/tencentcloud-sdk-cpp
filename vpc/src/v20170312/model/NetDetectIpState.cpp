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

#include <tencentcloud/vpc/v20170312/model/NetDetectIpState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetDetectIpState::NetDetectIpState() :
    m_detectDestinationIpHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_delayHasBeenSet(false),
    m_packetLossRateHasBeenSet(false)
{
}

CoreInternalOutcome NetDetectIpState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectDestinationIp") && !value["DetectDestinationIp"].IsNull())
    {
        if (!value["DetectDestinationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetectIpState.DetectDestinationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectDestinationIp = string(value["DetectDestinationIp"].GetString());
        m_detectDestinationIpHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetectIpState.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Delay") && !value["Delay"].IsNull())
    {
        if (!value["Delay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetectIpState.Delay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delay = value["Delay"].GetUint64();
        m_delayHasBeenSet = true;
    }

    if (value.HasMember("PacketLossRate") && !value["PacketLossRate"].IsNull())
    {
        if (!value["PacketLossRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetDetectIpState.PacketLossRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packetLossRate = value["PacketLossRate"].GetUint64();
        m_packetLossRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetDetectIpState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectDestinationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectDestinationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectDestinationIp.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_delayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delay, allocator);
    }

    if (m_packetLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packetLossRate, allocator);
    }

}


string NetDetectIpState::GetDetectDestinationIp() const
{
    return m_detectDestinationIp;
}

void NetDetectIpState::SetDetectDestinationIp(const string& _detectDestinationIp)
{
    m_detectDestinationIp = _detectDestinationIp;
    m_detectDestinationIpHasBeenSet = true;
}

bool NetDetectIpState::DetectDestinationIpHasBeenSet() const
{
    return m_detectDestinationIpHasBeenSet;
}

int64_t NetDetectIpState::GetState() const
{
    return m_state;
}

void NetDetectIpState::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool NetDetectIpState::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t NetDetectIpState::GetDelay() const
{
    return m_delay;
}

void NetDetectIpState::SetDelay(const uint64_t& _delay)
{
    m_delay = _delay;
    m_delayHasBeenSet = true;
}

bool NetDetectIpState::DelayHasBeenSet() const
{
    return m_delayHasBeenSet;
}

uint64_t NetDetectIpState::GetPacketLossRate() const
{
    return m_packetLossRate;
}

void NetDetectIpState::SetPacketLossRate(const uint64_t& _packetLossRate)
{
    m_packetLossRate = _packetLossRate;
    m_packetLossRateHasBeenSet = true;
}

bool NetDetectIpState::PacketLossRateHasBeenSet() const
{
    return m_packetLossRateHasBeenSet;
}

