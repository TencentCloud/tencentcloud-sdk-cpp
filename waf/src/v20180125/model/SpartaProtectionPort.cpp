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

#include <tencentcloud/waf/v20180125/model/SpartaProtectionPort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SpartaProtectionPort::SpartaProtectionPort() :
    m_nginxServerIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_upstreamPortHasBeenSet(false),
    m_upstreamProtocolHasBeenSet(false)
{
}

CoreInternalOutcome SpartaProtectionPort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NginxServerId") && !value["NginxServerId"].IsNull())
    {
        if (!value["NginxServerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpartaProtectionPort.NginxServerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nginxServerId = value["NginxServerId"].GetUint64();
        m_nginxServerIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpartaProtectionPort.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpartaProtectionPort.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("UpstreamPort") && !value["UpstreamPort"].IsNull())
    {
        if (!value["UpstreamPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpartaProtectionPort.UpstreamPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamPort = string(value["UpstreamPort"].GetString());
        m_upstreamPortHasBeenSet = true;
    }

    if (value.HasMember("UpstreamProtocol") && !value["UpstreamProtocol"].IsNull())
    {
        if (!value["UpstreamProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpartaProtectionPort.UpstreamProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamProtocol = string(value["UpstreamProtocol"].GetString());
        m_upstreamProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpartaProtectionPort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nginxServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NginxServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nginxServerId, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamPort.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamProtocol.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SpartaProtectionPort::GetNginxServerId() const
{
    return m_nginxServerId;
}

void SpartaProtectionPort::SetNginxServerId(const uint64_t& _nginxServerId)
{
    m_nginxServerId = _nginxServerId;
    m_nginxServerIdHasBeenSet = true;
}

bool SpartaProtectionPort::NginxServerIdHasBeenSet() const
{
    return m_nginxServerIdHasBeenSet;
}

string SpartaProtectionPort::GetPort() const
{
    return m_port;
}

void SpartaProtectionPort::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool SpartaProtectionPort::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string SpartaProtectionPort::GetProtocol() const
{
    return m_protocol;
}

void SpartaProtectionPort::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SpartaProtectionPort::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string SpartaProtectionPort::GetUpstreamPort() const
{
    return m_upstreamPort;
}

void SpartaProtectionPort::SetUpstreamPort(const string& _upstreamPort)
{
    m_upstreamPort = _upstreamPort;
    m_upstreamPortHasBeenSet = true;
}

bool SpartaProtectionPort::UpstreamPortHasBeenSet() const
{
    return m_upstreamPortHasBeenSet;
}

string SpartaProtectionPort::GetUpstreamProtocol() const
{
    return m_upstreamProtocol;
}

void SpartaProtectionPort::SetUpstreamProtocol(const string& _upstreamProtocol)
{
    m_upstreamProtocol = _upstreamProtocol;
    m_upstreamProtocolHasBeenSet = true;
}

bool SpartaProtectionPort::UpstreamProtocolHasBeenSet() const
{
    return m_upstreamProtocolHasBeenSet;
}

