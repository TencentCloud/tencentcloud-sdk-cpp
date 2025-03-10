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

#include <tencentcloud/mqtt/v20240516/model/MQTTClientInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

MQTTClientInfo::MQTTClientInfo() :
    m_clientIdHasBeenSet(false),
    m_clientAddressHasBeenSet(false),
    m_protocolVersionHasBeenSet(false),
    m_keepaliveHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_connectTimeHasBeenSet(false),
    m_disconnectTimeHasBeenSet(false),
    m_mQTTClientSubscriptionsHasBeenSet(false)
{
}

CoreInternalOutcome MQTTClientInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientAddress") && !value["ClientAddress"].IsNull())
    {
        if (!value["ClientAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.ClientAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddress = string(value["ClientAddress"].GetString());
        m_clientAddressHasBeenSet = true;
    }

    if (value.HasMember("ProtocolVersion") && !value["ProtocolVersion"].IsNull())
    {
        if (!value["ProtocolVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.ProtocolVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolVersion = value["ProtocolVersion"].GetInt64();
        m_protocolVersionHasBeenSet = true;
    }

    if (value.HasMember("Keepalive") && !value["Keepalive"].IsNull())
    {
        if (!value["Keepalive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.Keepalive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keepalive = value["Keepalive"].GetInt64();
        m_keepaliveHasBeenSet = true;
    }

    if (value.HasMember("ConnectionStatus") && !value["ConnectionStatus"].IsNull())
    {
        if (!value["ConnectionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.ConnectionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionStatus = string(value["ConnectionStatus"].GetString());
        m_connectionStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ConnectTime") && !value["ConnectTime"].IsNull())
    {
        if (!value["ConnectTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.ConnectTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTime = value["ConnectTime"].GetInt64();
        m_connectTimeHasBeenSet = true;
    }

    if (value.HasMember("DisconnectTime") && !value["DisconnectTime"].IsNull())
    {
        if (!value["DisconnectTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.DisconnectTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disconnectTime = value["DisconnectTime"].GetInt64();
        m_disconnectTimeHasBeenSet = true;
    }

    if (value.HasMember("MQTTClientSubscriptions") && !value["MQTTClientSubscriptions"].IsNull())
    {
        if (!value["MQTTClientSubscriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MQTTClientInfo.MQTTClientSubscriptions` is not array type"));

        const rapidjson::Value &tmpValue = value["MQTTClientSubscriptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MQTTClientSubscription item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mQTTClientSubscriptions.push_back(item);
        }
        m_mQTTClientSubscriptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTClientInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocolVersion, allocator);
    }

    if (m_keepaliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keepalive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepalive, allocator);
    }

    if (m_connectionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_connectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectTime, allocator);
    }

    if (m_disconnectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisconnectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disconnectTime, allocator);
    }

    if (m_mQTTClientSubscriptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MQTTClientSubscriptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mQTTClientSubscriptions.begin(); itr != m_mQTTClientSubscriptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MQTTClientInfo::GetClientId() const
{
    return m_clientId;
}

void MQTTClientInfo::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool MQTTClientInfo::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string MQTTClientInfo::GetClientAddress() const
{
    return m_clientAddress;
}

void MQTTClientInfo::SetClientAddress(const string& _clientAddress)
{
    m_clientAddress = _clientAddress;
    m_clientAddressHasBeenSet = true;
}

bool MQTTClientInfo::ClientAddressHasBeenSet() const
{
    return m_clientAddressHasBeenSet;
}

int64_t MQTTClientInfo::GetProtocolVersion() const
{
    return m_protocolVersion;
}

void MQTTClientInfo::SetProtocolVersion(const int64_t& _protocolVersion)
{
    m_protocolVersion = _protocolVersion;
    m_protocolVersionHasBeenSet = true;
}

bool MQTTClientInfo::ProtocolVersionHasBeenSet() const
{
    return m_protocolVersionHasBeenSet;
}

int64_t MQTTClientInfo::GetKeepalive() const
{
    return m_keepalive;
}

void MQTTClientInfo::SetKeepalive(const int64_t& _keepalive)
{
    m_keepalive = _keepalive;
    m_keepaliveHasBeenSet = true;
}

bool MQTTClientInfo::KeepaliveHasBeenSet() const
{
    return m_keepaliveHasBeenSet;
}

string MQTTClientInfo::GetConnectionStatus() const
{
    return m_connectionStatus;
}

void MQTTClientInfo::SetConnectionStatus(const string& _connectionStatus)
{
    m_connectionStatus = _connectionStatus;
    m_connectionStatusHasBeenSet = true;
}

bool MQTTClientInfo::ConnectionStatusHasBeenSet() const
{
    return m_connectionStatusHasBeenSet;
}

int64_t MQTTClientInfo::GetCreateTime() const
{
    return m_createTime;
}

void MQTTClientInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MQTTClientInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t MQTTClientInfo::GetConnectTime() const
{
    return m_connectTime;
}

void MQTTClientInfo::SetConnectTime(const int64_t& _connectTime)
{
    m_connectTime = _connectTime;
    m_connectTimeHasBeenSet = true;
}

bool MQTTClientInfo::ConnectTimeHasBeenSet() const
{
    return m_connectTimeHasBeenSet;
}

int64_t MQTTClientInfo::GetDisconnectTime() const
{
    return m_disconnectTime;
}

void MQTTClientInfo::SetDisconnectTime(const int64_t& _disconnectTime)
{
    m_disconnectTime = _disconnectTime;
    m_disconnectTimeHasBeenSet = true;
}

bool MQTTClientInfo::DisconnectTimeHasBeenSet() const
{
    return m_disconnectTimeHasBeenSet;
}

vector<MQTTClientSubscription> MQTTClientInfo::GetMQTTClientSubscriptions() const
{
    return m_mQTTClientSubscriptions;
}

void MQTTClientInfo::SetMQTTClientSubscriptions(const vector<MQTTClientSubscription>& _mQTTClientSubscriptions)
{
    m_mQTTClientSubscriptions = _mQTTClientSubscriptions;
    m_mQTTClientSubscriptionsHasBeenSet = true;
}

bool MQTTClientInfo::MQTTClientSubscriptionsHasBeenSet() const
{
    return m_mQTTClientSubscriptionsHasBeenSet;
}

