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

#include <tencentcloud/mps/v20190612/model/FlowSRTInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowSRTInfo::FlowSRTInfo() :
    m_timestampHasBeenSet(false),
    m_sendPacketLossRateHasBeenSet(false),
    m_sendRetransmissionRateHasBeenSet(false),
    m_recvPacketLossRateHasBeenSet(false),
    m_recvRetransmissionRateHasBeenSet(false),
    m_rTTHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sendPacketDropNumberHasBeenSet(false),
    m_recvPacketDropNumberHasBeenSet(false)
{
}

CoreInternalOutcome FlowSRTInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SendPacketLossRate") && !value["SendPacketLossRate"].IsNull())
    {
        if (!value["SendPacketLossRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendPacketLossRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendPacketLossRate = value["SendPacketLossRate"].GetInt64();
        m_sendPacketLossRateHasBeenSet = true;
    }

    if (value.HasMember("SendRetransmissionRate") && !value["SendRetransmissionRate"].IsNull())
    {
        if (!value["SendRetransmissionRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendRetransmissionRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendRetransmissionRate = value["SendRetransmissionRate"].GetInt64();
        m_sendRetransmissionRateHasBeenSet = true;
    }

    if (value.HasMember("RecvPacketLossRate") && !value["RecvPacketLossRate"].IsNull())
    {
        if (!value["RecvPacketLossRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvPacketLossRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvPacketLossRate = value["RecvPacketLossRate"].GetInt64();
        m_recvPacketLossRateHasBeenSet = true;
    }

    if (value.HasMember("RecvRetransmissionRate") && !value["RecvRetransmissionRate"].IsNull())
    {
        if (!value["RecvRetransmissionRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvRetransmissionRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvRetransmissionRate = value["RecvRetransmissionRate"].GetInt64();
        m_recvRetransmissionRateHasBeenSet = true;
    }

    if (value.HasMember("RTT") && !value["RTT"].IsNull())
    {
        if (!value["RTT"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RTT` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rTT = value["RTT"].GetInt64();
        m_rTTHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SendPacketDropNumber") && !value["SendPacketDropNumber"].IsNull())
    {
        if (!value["SendPacketDropNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.SendPacketDropNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendPacketDropNumber = value["SendPacketDropNumber"].GetInt64();
        m_sendPacketDropNumberHasBeenSet = true;
    }

    if (value.HasMember("RecvPacketDropNumber") && !value["RecvPacketDropNumber"].IsNull())
    {
        if (!value["RecvPacketDropNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowSRTInfo.RecvPacketDropNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recvPacketDropNumber = value["RecvPacketDropNumber"].GetInt64();
        m_recvPacketDropNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowSRTInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_sendPacketLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendPacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendPacketLossRate, allocator);
    }

    if (m_sendRetransmissionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendRetransmissionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendRetransmissionRate, allocator);
    }

    if (m_recvPacketLossRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvPacketLossRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvPacketLossRate, allocator);
    }

    if (m_recvRetransmissionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvRetransmissionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvRetransmissionRate, allocator);
    }

    if (m_rTTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rTT, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sendPacketDropNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendPacketDropNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendPacketDropNumber, allocator);
    }

    if (m_recvPacketDropNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvPacketDropNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recvPacketDropNumber, allocator);
    }

}


int64_t FlowSRTInfo::GetTimestamp() const
{
    return m_timestamp;
}

void FlowSRTInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool FlowSRTInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t FlowSRTInfo::GetSendPacketLossRate() const
{
    return m_sendPacketLossRate;
}

void FlowSRTInfo::SetSendPacketLossRate(const int64_t& _sendPacketLossRate)
{
    m_sendPacketLossRate = _sendPacketLossRate;
    m_sendPacketLossRateHasBeenSet = true;
}

bool FlowSRTInfo::SendPacketLossRateHasBeenSet() const
{
    return m_sendPacketLossRateHasBeenSet;
}

int64_t FlowSRTInfo::GetSendRetransmissionRate() const
{
    return m_sendRetransmissionRate;
}

void FlowSRTInfo::SetSendRetransmissionRate(const int64_t& _sendRetransmissionRate)
{
    m_sendRetransmissionRate = _sendRetransmissionRate;
    m_sendRetransmissionRateHasBeenSet = true;
}

bool FlowSRTInfo::SendRetransmissionRateHasBeenSet() const
{
    return m_sendRetransmissionRateHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvPacketLossRate() const
{
    return m_recvPacketLossRate;
}

void FlowSRTInfo::SetRecvPacketLossRate(const int64_t& _recvPacketLossRate)
{
    m_recvPacketLossRate = _recvPacketLossRate;
    m_recvPacketLossRateHasBeenSet = true;
}

bool FlowSRTInfo::RecvPacketLossRateHasBeenSet() const
{
    return m_recvPacketLossRateHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvRetransmissionRate() const
{
    return m_recvRetransmissionRate;
}

void FlowSRTInfo::SetRecvRetransmissionRate(const int64_t& _recvRetransmissionRate)
{
    m_recvRetransmissionRate = _recvRetransmissionRate;
    m_recvRetransmissionRateHasBeenSet = true;
}

bool FlowSRTInfo::RecvRetransmissionRateHasBeenSet() const
{
    return m_recvRetransmissionRateHasBeenSet;
}

int64_t FlowSRTInfo::GetRTT() const
{
    return m_rTT;
}

void FlowSRTInfo::SetRTT(const int64_t& _rTT)
{
    m_rTT = _rTT;
    m_rTTHasBeenSet = true;
}

bool FlowSRTInfo::RTTHasBeenSet() const
{
    return m_rTTHasBeenSet;
}

string FlowSRTInfo::GetSessionId() const
{
    return m_sessionId;
}

void FlowSRTInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool FlowSRTInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t FlowSRTInfo::GetSendPacketDropNumber() const
{
    return m_sendPacketDropNumber;
}

void FlowSRTInfo::SetSendPacketDropNumber(const int64_t& _sendPacketDropNumber)
{
    m_sendPacketDropNumber = _sendPacketDropNumber;
    m_sendPacketDropNumberHasBeenSet = true;
}

bool FlowSRTInfo::SendPacketDropNumberHasBeenSet() const
{
    return m_sendPacketDropNumberHasBeenSet;
}

int64_t FlowSRTInfo::GetRecvPacketDropNumber() const
{
    return m_recvPacketDropNumber;
}

void FlowSRTInfo::SetRecvPacketDropNumber(const int64_t& _recvPacketDropNumber)
{
    m_recvPacketDropNumber = _recvPacketDropNumber;
    m_recvPacketDropNumberHasBeenSet = true;
}

bool FlowSRTInfo::RecvPacketDropNumberHasBeenSet() const
{
    return m_recvPacketDropNumberHasBeenSet;
}

