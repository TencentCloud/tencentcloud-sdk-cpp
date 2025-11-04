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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQConnection::RabbitMQConnection() :
    m_connectionNameHasBeenSet(false),
    m_peerHostHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_userHasBeenSet(false),
    m_sSLHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_incomingBytesHasBeenSet(false),
    m_outgoingBytesHasBeenSet(false),
    m_heartbeatHasBeenSet(false),
    m_maxChannelHasBeenSet(false),
    m_idleSinceHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectionName") && !value["ConnectionName"].IsNull())
    {
        if (!value["ConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.ConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionName = string(value["ConnectionName"].GetString());
        m_connectionNameHasBeenSet = true;
    }

    if (value.HasMember("PeerHost") && !value["PeerHost"].IsNull())
    {
        if (!value["PeerHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.PeerHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerHost = string(value["PeerHost"].GetString());
        m_peerHostHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("SSL") && !value["SSL"].IsNull())
    {
        if (!value["SSL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.SSL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sSL = value["SSL"].GetBool();
        m_sSLHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Channels") && !value["Channels"].IsNull())
    {
        if (!value["Channels"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.Channels` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channels = value["Channels"].GetInt64();
        m_channelsHasBeenSet = true;
    }

    if (value.HasMember("IncomingBytes") && !value["IncomingBytes"].IsNull())
    {
        if (!value["IncomingBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.IncomingBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_incomingBytes = value["IncomingBytes"].GetDouble();
        m_incomingBytesHasBeenSet = true;
    }

    if (value.HasMember("OutgoingBytes") && !value["OutgoingBytes"].IsNull())
    {
        if (!value["OutgoingBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.OutgoingBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outgoingBytes = value["OutgoingBytes"].GetDouble();
        m_outgoingBytesHasBeenSet = true;
    }

    if (value.HasMember("Heartbeat") && !value["Heartbeat"].IsNull())
    {
        if (!value["Heartbeat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.Heartbeat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_heartbeat = value["Heartbeat"].GetUint64();
        m_heartbeatHasBeenSet = true;
    }

    if (value.HasMember("MaxChannel") && !value["MaxChannel"].IsNull())
    {
        if (!value["MaxChannel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.MaxChannel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChannel = value["MaxChannel"].GetUint64();
        m_maxChannelHasBeenSet = true;
    }

    if (value.HasMember("IdleSince") && !value["IdleSince"].IsNull())
    {
        if (!value["IdleSince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConnection.IdleSince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idleSince = string(value["IdleSince"].GetString());
        m_idleSinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerHost.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSL, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channels, allocator);
    }

    if (m_incomingBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomingBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incomingBytes, allocator);
    }

    if (m_outgoingBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutgoingBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outgoingBytes, allocator);
    }

    if (m_heartbeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Heartbeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heartbeat, allocator);
    }

    if (m_maxChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxChannel, allocator);
    }

    if (m_idleSinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleSince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idleSince.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQConnection::GetConnectionName() const
{
    return m_connectionName;
}

void RabbitMQConnection::SetConnectionName(const string& _connectionName)
{
    m_connectionName = _connectionName;
    m_connectionNameHasBeenSet = true;
}

bool RabbitMQConnection::ConnectionNameHasBeenSet() const
{
    return m_connectionNameHasBeenSet;
}

string RabbitMQConnection::GetPeerHost() const
{
    return m_peerHost;
}

void RabbitMQConnection::SetPeerHost(const string& _peerHost)
{
    m_peerHost = _peerHost;
    m_peerHostHasBeenSet = true;
}

bool RabbitMQConnection::PeerHostHasBeenSet() const
{
    return m_peerHostHasBeenSet;
}

string RabbitMQConnection::GetState() const
{
    return m_state;
}

void RabbitMQConnection::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool RabbitMQConnection::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string RabbitMQConnection::GetUser() const
{
    return m_user;
}

void RabbitMQConnection::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool RabbitMQConnection::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

bool RabbitMQConnection::GetSSL() const
{
    return m_sSL;
}

void RabbitMQConnection::SetSSL(const bool& _sSL)
{
    m_sSL = _sSL;
    m_sSLHasBeenSet = true;
}

bool RabbitMQConnection::SSLHasBeenSet() const
{
    return m_sSLHasBeenSet;
}

string RabbitMQConnection::GetProtocol() const
{
    return m_protocol;
}

void RabbitMQConnection::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool RabbitMQConnection::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t RabbitMQConnection::GetChannels() const
{
    return m_channels;
}

void RabbitMQConnection::SetChannels(const int64_t& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool RabbitMQConnection::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

double RabbitMQConnection::GetIncomingBytes() const
{
    return m_incomingBytes;
}

void RabbitMQConnection::SetIncomingBytes(const double& _incomingBytes)
{
    m_incomingBytes = _incomingBytes;
    m_incomingBytesHasBeenSet = true;
}

bool RabbitMQConnection::IncomingBytesHasBeenSet() const
{
    return m_incomingBytesHasBeenSet;
}

double RabbitMQConnection::GetOutgoingBytes() const
{
    return m_outgoingBytes;
}

void RabbitMQConnection::SetOutgoingBytes(const double& _outgoingBytes)
{
    m_outgoingBytes = _outgoingBytes;
    m_outgoingBytesHasBeenSet = true;
}

bool RabbitMQConnection::OutgoingBytesHasBeenSet() const
{
    return m_outgoingBytesHasBeenSet;
}

uint64_t RabbitMQConnection::GetHeartbeat() const
{
    return m_heartbeat;
}

void RabbitMQConnection::SetHeartbeat(const uint64_t& _heartbeat)
{
    m_heartbeat = _heartbeat;
    m_heartbeatHasBeenSet = true;
}

bool RabbitMQConnection::HeartbeatHasBeenSet() const
{
    return m_heartbeatHasBeenSet;
}

uint64_t RabbitMQConnection::GetMaxChannel() const
{
    return m_maxChannel;
}

void RabbitMQConnection::SetMaxChannel(const uint64_t& _maxChannel)
{
    m_maxChannel = _maxChannel;
    m_maxChannelHasBeenSet = true;
}

bool RabbitMQConnection::MaxChannelHasBeenSet() const
{
    return m_maxChannelHasBeenSet;
}

string RabbitMQConnection::GetIdleSince() const
{
    return m_idleSince;
}

void RabbitMQConnection::SetIdleSince(const string& _idleSince)
{
    m_idleSince = _idleSince;
    m_idleSinceHasBeenSet = true;
}

bool RabbitMQConnection::IdleSinceHasBeenSet() const
{
    return m_idleSinceHasBeenSet;
}

