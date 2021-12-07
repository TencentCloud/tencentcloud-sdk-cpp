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

#include <tencentcloud/tcss/v20201101/model/ContainerNetwork.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ContainerNetwork::ContainerNetwork() :
    m_endpointIDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkIDHasBeenSet(false),
    m_gatewayHasBeenSet(false),
    m_ipv4HasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_mACHasBeenSet(false)
{
}

CoreInternalOutcome ContainerNetwork::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointID") && !value["EndpointID"].IsNull())
    {
        if (!value["EndpointID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.EndpointID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointID = string(value["EndpointID"].GetString());
        m_endpointIDHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NetworkID") && !value["NetworkID"].IsNull())
    {
        if (!value["NetworkID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.NetworkID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkID = string(value["NetworkID"].GetString());
        m_networkIDHasBeenSet = true;
    }

    if (value.HasMember("Gateway") && !value["Gateway"].IsNull())
    {
        if (!value["Gateway"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.Gateway` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateway = string(value["Gateway"].GetString());
        m_gatewayHasBeenSet = true;
    }

    if (value.HasMember("Ipv4") && !value["Ipv4"].IsNull())
    {
        if (!value["Ipv4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.Ipv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv4 = string(value["Ipv4"].GetString());
        m_ipv4HasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.Ipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6 = string(value["Ipv6"].GetString());
        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("MAC") && !value["MAC"].IsNull())
    {
        if (!value["MAC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetwork.MAC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mAC = string(value["MAC"].GetString());
        m_mACHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerNetwork::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointID.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_networkIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkID.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateway.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv4.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_mACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MAC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mAC.c_str(), allocator).Move(), allocator);
    }

}


string ContainerNetwork::GetEndpointID() const
{
    return m_endpointID;
}

void ContainerNetwork::SetEndpointID(const string& _endpointID)
{
    m_endpointID = _endpointID;
    m_endpointIDHasBeenSet = true;
}

bool ContainerNetwork::EndpointIDHasBeenSet() const
{
    return m_endpointIDHasBeenSet;
}

string ContainerNetwork::GetMode() const
{
    return m_mode;
}

void ContainerNetwork::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ContainerNetwork::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ContainerNetwork::GetName() const
{
    return m_name;
}

void ContainerNetwork::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerNetwork::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerNetwork::GetNetworkID() const
{
    return m_networkID;
}

void ContainerNetwork::SetNetworkID(const string& _networkID)
{
    m_networkID = _networkID;
    m_networkIDHasBeenSet = true;
}

bool ContainerNetwork::NetworkIDHasBeenSet() const
{
    return m_networkIDHasBeenSet;
}

string ContainerNetwork::GetGateway() const
{
    return m_gateway;
}

void ContainerNetwork::SetGateway(const string& _gateway)
{
    m_gateway = _gateway;
    m_gatewayHasBeenSet = true;
}

bool ContainerNetwork::GatewayHasBeenSet() const
{
    return m_gatewayHasBeenSet;
}

string ContainerNetwork::GetIpv4() const
{
    return m_ipv4;
}

void ContainerNetwork::SetIpv4(const string& _ipv4)
{
    m_ipv4 = _ipv4;
    m_ipv4HasBeenSet = true;
}

bool ContainerNetwork::Ipv4HasBeenSet() const
{
    return m_ipv4HasBeenSet;
}

string ContainerNetwork::GetIpv6() const
{
    return m_ipv6;
}

void ContainerNetwork::SetIpv6(const string& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool ContainerNetwork::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

string ContainerNetwork::GetMAC() const
{
    return m_mAC;
}

void ContainerNetwork::SetMAC(const string& _mAC)
{
    m_mAC = _mAC;
    m_mACHasBeenSet = true;
}

bool ContainerNetwork::MACHasBeenSet() const
{
    return m_mACHasBeenSet;
}

