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

#include <tencentcloud/cls/v20201016/model/NetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NetInfo::NetInfo() :
    m_hostHasBeenSet(false),
    m_portHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_virtualGatewayTypeHasBeenSet(false),
    m_isSSLHasBeenSet(false)
{
}

CoreInternalOutcome NetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.NetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetUint64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualGatewayType") && !value["VirtualGatewayType"].IsNull())
    {
        if (!value["VirtualGatewayType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.VirtualGatewayType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualGatewayType = value["VirtualGatewayType"].GetUint64();
        m_virtualGatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("IsSSL") && !value["IsSSL"].IsNull())
    {
        if (!value["IsSSL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetInfo.IsSSL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSSL = value["IsSSL"].GetBool();
        m_isSSLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualGatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualGatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualGatewayType, allocator);
    }

    if (m_isSSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSSL, allocator);
    }

}


string NetInfo::GetHost() const
{
    return m_host;
}

void NetInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool NetInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

uint64_t NetInfo::GetPort() const
{
    return m_port;
}

void NetInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool NetInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string NetInfo::GetToken() const
{
    return m_token;
}

void NetInfo::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool NetInfo::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t NetInfo::GetNetType() const
{
    return m_netType;
}

void NetInfo::SetNetType(const uint64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool NetInfo::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string NetInfo::GetVpcId() const
{
    return m_vpcId;
}

void NetInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t NetInfo::GetVirtualGatewayType() const
{
    return m_virtualGatewayType;
}

void NetInfo::SetVirtualGatewayType(const uint64_t& _virtualGatewayType)
{
    m_virtualGatewayType = _virtualGatewayType;
    m_virtualGatewayTypeHasBeenSet = true;
}

bool NetInfo::VirtualGatewayTypeHasBeenSet() const
{
    return m_virtualGatewayTypeHasBeenSet;
}

bool NetInfo::GetIsSSL() const
{
    return m_isSSL;
}

void NetInfo::SetIsSSL(const bool& _isSSL)
{
    m_isSSL = _isSSL;
    m_isSSLHasBeenSet = true;
}

bool NetInfo::IsSSLHasBeenSet() const
{
    return m_isSSLHasBeenSet;
}

