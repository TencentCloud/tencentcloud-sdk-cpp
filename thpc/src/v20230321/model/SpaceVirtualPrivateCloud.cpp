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

#include <tencentcloud/thpc/v20230321/model/SpaceVirtualPrivateCloud.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

SpaceVirtualPrivateCloud::SpaceVirtualPrivateCloud() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_asVpcGatewayHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_ipv6AddressCountHasBeenSet(false)
{
}

CoreInternalOutcome SpaceVirtualPrivateCloud::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceVirtualPrivateCloud.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceVirtualPrivateCloud.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AsVpcGateway") && !value["AsVpcGateway"].IsNull())
    {
        if (!value["AsVpcGateway"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceVirtualPrivateCloud.AsVpcGateway` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_asVpcGateway = value["AsVpcGateway"].GetBool();
        m_asVpcGatewayHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpaceVirtualPrivateCloud.PrivateIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateIpAddresses.push_back((*itr).GetString());
        }
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("Ipv6AddressCount") && !value["Ipv6AddressCount"].IsNull())
    {
        if (!value["Ipv6AddressCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceVirtualPrivateCloud.Ipv6AddressCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6AddressCount = value["Ipv6AddressCount"].GetUint64();
        m_ipv6AddressCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceVirtualPrivateCloud::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_asVpcGatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsVpcGateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asVpcGateway, allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipv6AddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6AddressCount, allocator);
    }

}


string SpaceVirtualPrivateCloud::GetVpcId() const
{
    return m_vpcId;
}

void SpaceVirtualPrivateCloud::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SpaceVirtualPrivateCloud::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SpaceVirtualPrivateCloud::GetSubnetId() const
{
    return m_subnetId;
}

void SpaceVirtualPrivateCloud::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SpaceVirtualPrivateCloud::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool SpaceVirtualPrivateCloud::GetAsVpcGateway() const
{
    return m_asVpcGateway;
}

void SpaceVirtualPrivateCloud::SetAsVpcGateway(const bool& _asVpcGateway)
{
    m_asVpcGateway = _asVpcGateway;
    m_asVpcGatewayHasBeenSet = true;
}

bool SpaceVirtualPrivateCloud::AsVpcGatewayHasBeenSet() const
{
    return m_asVpcGatewayHasBeenSet;
}

vector<string> SpaceVirtualPrivateCloud::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void SpaceVirtualPrivateCloud::SetPrivateIpAddresses(const vector<string>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool SpaceVirtualPrivateCloud::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

uint64_t SpaceVirtualPrivateCloud::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void SpaceVirtualPrivateCloud::SetIpv6AddressCount(const uint64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool SpaceVirtualPrivateCloud::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

