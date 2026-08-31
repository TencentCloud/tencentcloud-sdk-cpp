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

#include <tencentcloud/ioa/v20220601/model/DeviceNetworkCardBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceNetworkCardBrief::DeviceNetworkCardBrief() :
    m_macAddressHasBeenSet(false),
    m_networkCardNameHasBeenSet(false),
    m_networkCardTypeHasBeenSet(false),
    m_networkCardStatusHasBeenSet(false),
    m_ipv4AddressHasBeenSet(false),
    m_ipv6AddressHasBeenSet(false)
{
}

CoreInternalOutcome DeviceNetworkCardBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkCardBrief.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("NetworkCardName") && !value["NetworkCardName"].IsNull())
    {
        if (!value["NetworkCardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkCardBrief.NetworkCardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkCardName = string(value["NetworkCardName"].GetString());
        m_networkCardNameHasBeenSet = true;
    }

    if (value.HasMember("NetworkCardType") && !value["NetworkCardType"].IsNull())
    {
        if (!value["NetworkCardType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkCardBrief.NetworkCardType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkCardType = value["NetworkCardType"].GetInt64();
        m_networkCardTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkCardStatus") && !value["NetworkCardStatus"].IsNull())
    {
        if (!value["NetworkCardStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkCardBrief.NetworkCardStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_networkCardStatus = value["NetworkCardStatus"].GetInt64();
        m_networkCardStatusHasBeenSet = true;
    }

    if (value.HasMember("Ipv4Address") && !value["Ipv4Address"].IsNull())
    {
        if (!value["Ipv4Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkCardBrief.Ipv4Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4Address = string(value["Ipv4Address"].GetString());
        m_ipv4AddressHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Address") && !value["Ipv6Address"].IsNull())
    {
        if (!value["Ipv6Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceNetworkCardBrief.Ipv6Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Address = string(value["Ipv6Address"].GetString());
        m_ipv6AddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceNetworkCardBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_networkCardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkCardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkCardName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkCardType, allocator);
    }

    if (m_networkCardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkCardStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkCardStatus, allocator);
    }

    if (m_ipv4AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv4Address.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6AddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6Address.c_str(), allocator).Move(), allocator);
    }

}


string DeviceNetworkCardBrief::GetMacAddress() const
{
    return m_macAddress;
}

void DeviceNetworkCardBrief::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool DeviceNetworkCardBrief::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string DeviceNetworkCardBrief::GetNetworkCardName() const
{
    return m_networkCardName;
}

void DeviceNetworkCardBrief::SetNetworkCardName(const string& _networkCardName)
{
    m_networkCardName = _networkCardName;
    m_networkCardNameHasBeenSet = true;
}

bool DeviceNetworkCardBrief::NetworkCardNameHasBeenSet() const
{
    return m_networkCardNameHasBeenSet;
}

int64_t DeviceNetworkCardBrief::GetNetworkCardType() const
{
    return m_networkCardType;
}

void DeviceNetworkCardBrief::SetNetworkCardType(const int64_t& _networkCardType)
{
    m_networkCardType = _networkCardType;
    m_networkCardTypeHasBeenSet = true;
}

bool DeviceNetworkCardBrief::NetworkCardTypeHasBeenSet() const
{
    return m_networkCardTypeHasBeenSet;
}

int64_t DeviceNetworkCardBrief::GetNetworkCardStatus() const
{
    return m_networkCardStatus;
}

void DeviceNetworkCardBrief::SetNetworkCardStatus(const int64_t& _networkCardStatus)
{
    m_networkCardStatus = _networkCardStatus;
    m_networkCardStatusHasBeenSet = true;
}

bool DeviceNetworkCardBrief::NetworkCardStatusHasBeenSet() const
{
    return m_networkCardStatusHasBeenSet;
}

string DeviceNetworkCardBrief::GetIpv4Address() const
{
    return m_ipv4Address;
}

void DeviceNetworkCardBrief::SetIpv4Address(const string& _ipv4Address)
{
    m_ipv4Address = _ipv4Address;
    m_ipv4AddressHasBeenSet = true;
}

bool DeviceNetworkCardBrief::Ipv4AddressHasBeenSet() const
{
    return m_ipv4AddressHasBeenSet;
}

string DeviceNetworkCardBrief::GetIpv6Address() const
{
    return m_ipv6Address;
}

void DeviceNetworkCardBrief::SetIpv6Address(const string& _ipv6Address)
{
    m_ipv6Address = _ipv6Address;
    m_ipv6AddressHasBeenSet = true;
}

bool DeviceNetworkCardBrief::Ipv6AddressHasBeenSet() const
{
    return m_ipv6AddressHasBeenSet;
}

