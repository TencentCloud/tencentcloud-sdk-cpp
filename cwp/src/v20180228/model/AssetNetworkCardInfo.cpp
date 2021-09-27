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

#include <tencentcloud/cwp/v20180228/model/AssetNetworkCardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetNetworkCardInfo::AssetNetworkCardInfo() :
    m_nameHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_gateWayHasBeenSet(false),
    m_macHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_dnsServerHasBeenSet(false)
{
}

CoreInternalOutcome AssetNetworkCardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNetworkCardInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNetworkCardInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("GateWay") && !value["GateWay"].IsNull())
    {
        if (!value["GateWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNetworkCardInfo.GateWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateWay = string(value["GateWay"].GetString());
        m_gateWayHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNetworkCardInfo.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNetworkCardInfo.Ipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6 = string(value["Ipv6"].GetString());
        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("DnsServer") && !value["DnsServer"].IsNull())
    {
        if (!value["DnsServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNetworkCardInfo.DnsServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsServer = string(value["DnsServer"].GetString());
        m_dnsServerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetNetworkCardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_gateWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GateWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateWay.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsServer.c_str(), allocator).Move(), allocator);
    }

}


string AssetNetworkCardInfo::GetName() const
{
    return m_name;
}

void AssetNetworkCardInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetNetworkCardInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetNetworkCardInfo::GetIp() const
{
    return m_ip;
}

void AssetNetworkCardInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AssetNetworkCardInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string AssetNetworkCardInfo::GetGateWay() const
{
    return m_gateWay;
}

void AssetNetworkCardInfo::SetGateWay(const string& _gateWay)
{
    m_gateWay = _gateWay;
    m_gateWayHasBeenSet = true;
}

bool AssetNetworkCardInfo::GateWayHasBeenSet() const
{
    return m_gateWayHasBeenSet;
}

string AssetNetworkCardInfo::GetMac() const
{
    return m_mac;
}

void AssetNetworkCardInfo::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool AssetNetworkCardInfo::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string AssetNetworkCardInfo::GetIpv6() const
{
    return m_ipv6;
}

void AssetNetworkCardInfo::SetIpv6(const string& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool AssetNetworkCardInfo::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

string AssetNetworkCardInfo::GetDnsServer() const
{
    return m_dnsServer;
}

void AssetNetworkCardInfo::SetDnsServer(const string& _dnsServer)
{
    m_dnsServer = _dnsServer;
    m_dnsServerHasBeenSet = true;
}

bool AssetNetworkCardInfo::DnsServerHasBeenSet() const
{
    return m_dnsServerHasBeenSet;
}

