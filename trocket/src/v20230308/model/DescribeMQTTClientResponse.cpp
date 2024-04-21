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

#include <tencentcloud/trocket/v20230308/model/DescribeMQTTClientResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeMQTTClientResponse::DescribeMQTTClientResponse() :
    m_clientIdHasBeenSet(false),
    m_clientAddressHasBeenSet(false),
    m_protocolVersionHasBeenSet(false),
    m_keepaliveHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_connectTimeHasBeenSet(false),
    m_disconnectTimeHasBeenSet(false),
    m_mQTTClientSubscriptionsHasBeenSet(false),
    m_inboundHasBeenSet(false),
    m_outBoundHasBeenSet(false),
    m_cleanSessionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMQTTClientResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ClientId") && !rsp["ClientId"].IsNull())
    {
        if (!rsp["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(rsp["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClientAddress") && !rsp["ClientAddress"].IsNull())
    {
        if (!rsp["ClientAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddress = string(rsp["ClientAddress"].GetString());
        m_clientAddressHasBeenSet = true;
    }

    if (rsp.HasMember("ProtocolVersion") && !rsp["ProtocolVersion"].IsNull())
    {
        if (!rsp["ProtocolVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protocolVersion = rsp["ProtocolVersion"].GetInt64();
        m_protocolVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Keepalive") && !rsp["Keepalive"].IsNull())
    {
        if (!rsp["Keepalive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Keepalive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keepalive = rsp["Keepalive"].GetInt64();
        m_keepaliveHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectionStatus") && !rsp["ConnectionStatus"].IsNull())
    {
        if (!rsp["ConnectionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionStatus = string(rsp["ConnectionStatus"].GetString());
        m_connectionStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectTime") && !rsp["ConnectTime"].IsNull())
    {
        if (!rsp["ConnectTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectTime = rsp["ConnectTime"].GetInt64();
        m_connectTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DisconnectTime") && !rsp["DisconnectTime"].IsNull())
    {
        if (!rsp["DisconnectTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisconnectTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disconnectTime = rsp["DisconnectTime"].GetInt64();
        m_disconnectTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MQTTClientSubscriptions") && !rsp["MQTTClientSubscriptions"].IsNull())
    {
        if (!rsp["MQTTClientSubscriptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MQTTClientSubscriptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MQTTClientSubscriptions"];
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

    if (rsp.HasMember("Inbound") && !rsp["Inbound"].IsNull())
    {
        if (!rsp["Inbound"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Inbound` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inbound.Deserialize(rsp["Inbound"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inboundHasBeenSet = true;
    }

    if (rsp.HasMember("OutBound") && !rsp["OutBound"].IsNull())
    {
        if (!rsp["OutBound"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutBound` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outBound.Deserialize(rsp["OutBound"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outBoundHasBeenSet = true;
    }

    if (rsp.HasMember("CleanSession") && !rsp["CleanSession"].IsNull())
    {
        if (!rsp["CleanSession"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CleanSession` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cleanSession = rsp["CleanSession"].GetBool();
        m_cleanSessionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMQTTClientResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_inboundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inbound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inbound.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outBound.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cleanSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanSession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cleanSession, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeMQTTClientResponse::GetClientId() const
{
    return m_clientId;
}

bool DescribeMQTTClientResponse::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string DescribeMQTTClientResponse::GetClientAddress() const
{
    return m_clientAddress;
}

bool DescribeMQTTClientResponse::ClientAddressHasBeenSet() const
{
    return m_clientAddressHasBeenSet;
}

int64_t DescribeMQTTClientResponse::GetProtocolVersion() const
{
    return m_protocolVersion;
}

bool DescribeMQTTClientResponse::ProtocolVersionHasBeenSet() const
{
    return m_protocolVersionHasBeenSet;
}

int64_t DescribeMQTTClientResponse::GetKeepalive() const
{
    return m_keepalive;
}

bool DescribeMQTTClientResponse::KeepaliveHasBeenSet() const
{
    return m_keepaliveHasBeenSet;
}

string DescribeMQTTClientResponse::GetConnectionStatus() const
{
    return m_connectionStatus;
}

bool DescribeMQTTClientResponse::ConnectionStatusHasBeenSet() const
{
    return m_connectionStatusHasBeenSet;
}

int64_t DescribeMQTTClientResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeMQTTClientResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeMQTTClientResponse::GetConnectTime() const
{
    return m_connectTime;
}

bool DescribeMQTTClientResponse::ConnectTimeHasBeenSet() const
{
    return m_connectTimeHasBeenSet;
}

int64_t DescribeMQTTClientResponse::GetDisconnectTime() const
{
    return m_disconnectTime;
}

bool DescribeMQTTClientResponse::DisconnectTimeHasBeenSet() const
{
    return m_disconnectTimeHasBeenSet;
}

vector<MQTTClientSubscription> DescribeMQTTClientResponse::GetMQTTClientSubscriptions() const
{
    return m_mQTTClientSubscriptions;
}

bool DescribeMQTTClientResponse::MQTTClientSubscriptionsHasBeenSet() const
{
    return m_mQTTClientSubscriptionsHasBeenSet;
}

StatisticsReport DescribeMQTTClientResponse::GetInbound() const
{
    return m_inbound;
}

bool DescribeMQTTClientResponse::InboundHasBeenSet() const
{
    return m_inboundHasBeenSet;
}

StatisticsReport DescribeMQTTClientResponse::GetOutBound() const
{
    return m_outBound;
}

bool DescribeMQTTClientResponse::OutBoundHasBeenSet() const
{
    return m_outBoundHasBeenSet;
}

bool DescribeMQTTClientResponse::GetCleanSession() const
{
    return m_cleanSession;
}

bool DescribeMQTTClientResponse::CleanSessionHasBeenSet() const
{
    return m_cleanSessionHasBeenSet;
}


