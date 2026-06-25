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

#include <tencentcloud/csip/v20221121/model/NetworkCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NetworkCardInfo::NetworkCardInfo() :
    m_dnsServerHasBeenSet(false),
    m_gatewayHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_macHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome NetworkCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsServer") && !value["DnsServer"].IsNull())
    {
        if (!value["DnsServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCardInfo.DnsServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsServer = string(value["DnsServer"].GetString());
        m_dnsServerHasBeenSet = true;
    }

    if (value.HasMember("Gateway") && !value["Gateway"].IsNull())
    {
        if (!value["Gateway"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCardInfo.Gateway` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateway = string(value["Gateway"].GetString());
        m_gatewayHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCardInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCardInfo.Ipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6 = string(value["Ipv6"].GetString());
        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCardInfo.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkCardInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnsServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsServer.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateway.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string NetworkCardInfo::GetDnsServer() const
{
    return m_dnsServer;
}

void NetworkCardInfo::SetDnsServer(const string& _dnsServer)
{
    m_dnsServer = _dnsServer;
    m_dnsServerHasBeenSet = true;
}

bool NetworkCardInfo::DnsServerHasBeenSet() const
{
    return m_dnsServerHasBeenSet;
}

string NetworkCardInfo::GetGateway() const
{
    return m_gateway;
}

void NetworkCardInfo::SetGateway(const string& _gateway)
{
    m_gateway = _gateway;
    m_gatewayHasBeenSet = true;
}

bool NetworkCardInfo::GatewayHasBeenSet() const
{
    return m_gatewayHasBeenSet;
}

string NetworkCardInfo::GetIp() const
{
    return m_ip;
}

void NetworkCardInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool NetworkCardInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string NetworkCardInfo::GetIpv6() const
{
    return m_ipv6;
}

void NetworkCardInfo::SetIpv6(const string& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool NetworkCardInfo::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

string NetworkCardInfo::GetMac() const
{
    return m_mac;
}

void NetworkCardInfo::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool NetworkCardInfo::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string NetworkCardInfo::GetName() const
{
    return m_name;
}

void NetworkCardInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NetworkCardInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

