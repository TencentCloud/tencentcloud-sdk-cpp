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

#include <tencentcloud/tdcpg/v20211118/model/Endpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

Endpoint::Endpoint() :
    m_endpointIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_endpointNameHasBeenSet(false),
    m_endpointTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_privatePortHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_wanDomainHasBeenSet(false)
{
}

CoreInternalOutcome Endpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndpointId") && !value["EndpointId"].IsNull())
    {
        if (!value["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(value["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("EndpointName") && !value["EndpointName"].IsNull())
    {
        if (!value["EndpointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.EndpointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointName = string(value["EndpointName"].GetString());
        m_endpointNameHasBeenSet = true;
    }

    if (value.HasMember("EndpointType") && !value["EndpointType"].IsNull())
    {
        if (!value["EndpointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.EndpointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointType = string(value["EndpointType"].GetString());
        m_endpointTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PrivatePort") && !value["PrivatePort"].IsNull())
    {
        if (!value["PrivatePort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.PrivatePort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_privatePort = value["PrivatePort"].GetUint64();
        m_privatePortHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.WanPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetUint64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Endpoint.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Endpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privatePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivatePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privatePort, allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

}


string Endpoint::GetEndpointId() const
{
    return m_endpointId;
}

void Endpoint::SetEndpointId(const string& _endpointId)
{
    m_endpointId = _endpointId;
    m_endpointIdHasBeenSet = true;
}

bool Endpoint::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string Endpoint::GetClusterId() const
{
    return m_clusterId;
}

void Endpoint::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Endpoint::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Endpoint::GetEndpointName() const
{
    return m_endpointName;
}

void Endpoint::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool Endpoint::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string Endpoint::GetEndpointType() const
{
    return m_endpointType;
}

void Endpoint::SetEndpointType(const string& _endpointType)
{
    m_endpointType = _endpointType;
    m_endpointTypeHasBeenSet = true;
}

bool Endpoint::EndpointTypeHasBeenSet() const
{
    return m_endpointTypeHasBeenSet;
}

string Endpoint::GetVpcId() const
{
    return m_vpcId;
}

void Endpoint::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Endpoint::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Endpoint::GetSubnetId() const
{
    return m_subnetId;
}

void Endpoint::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Endpoint::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string Endpoint::GetPrivateIp() const
{
    return m_privateIp;
}

void Endpoint::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool Endpoint::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

uint64_t Endpoint::GetPrivatePort() const
{
    return m_privatePort;
}

void Endpoint::SetPrivatePort(const uint64_t& _privatePort)
{
    m_privatePort = _privatePort;
    m_privatePortHasBeenSet = true;
}

bool Endpoint::PrivatePortHasBeenSet() const
{
    return m_privatePortHasBeenSet;
}

string Endpoint::GetWanIp() const
{
    return m_wanIp;
}

void Endpoint::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool Endpoint::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

uint64_t Endpoint::GetWanPort() const
{
    return m_wanPort;
}

void Endpoint::SetWanPort(const uint64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool Endpoint::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string Endpoint::GetWanDomain() const
{
    return m_wanDomain;
}

void Endpoint::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool Endpoint::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

