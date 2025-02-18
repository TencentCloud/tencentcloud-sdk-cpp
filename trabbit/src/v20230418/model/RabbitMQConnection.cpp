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
    m_channelsHasBeenSet(false)
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

