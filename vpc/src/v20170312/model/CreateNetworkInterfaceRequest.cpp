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

#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest() :
    m_vpcIdHasBeenSet(false),
    m_networkInterfaceNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_ipv6AddressesHasBeenSet(false),
    m_ipv6AddressCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trunkingFlagHasBeenSet(false),
    m_isRdmaHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_terminationProtectionHasBeenSet(false),
    m_trafficProtectionHasBeenSet(false)
{
}

string CreateNetworkInterfaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_secondaryPrivateIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryPrivateIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secondaryPrivateIpAddressCount, allocator);
    }

    if (m_ipv6AddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Addresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv6Addresses.begin(); itr != m_ipv6Addresses.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipv6AddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6AddressCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_trunkingFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrunkingFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trunkingFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_isRdmaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRdma";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRdma, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_terminationProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_terminationProtection, allocator);
    }

    if (m_trafficProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trafficProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNetworkInterfaceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateNetworkInterfaceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateNetworkInterfaceRequest::GetNetworkInterfaceName() const
{
    return m_networkInterfaceName;
}

void CreateNetworkInterfaceRequest::SetNetworkInterfaceName(const string& _networkInterfaceName)
{
    m_networkInterfaceName = _networkInterfaceName;
    m_networkInterfaceNameHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::NetworkInterfaceNameHasBeenSet() const
{
    return m_networkInterfaceNameHasBeenSet;
}

string CreateNetworkInterfaceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateNetworkInterfaceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateNetworkInterfaceRequest::GetNetworkInterfaceDescription() const
{
    return m_networkInterfaceDescription;
}

void CreateNetworkInterfaceRequest::SetNetworkInterfaceDescription(const string& _networkInterfaceDescription)
{
    m_networkInterfaceDescription = _networkInterfaceDescription;
    m_networkInterfaceDescriptionHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::NetworkInterfaceDescriptionHasBeenSet() const
{
    return m_networkInterfaceDescriptionHasBeenSet;
}

string CreateNetworkInterfaceRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void CreateNetworkInterfaceRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

vector<string> CreateNetworkInterfaceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateNetworkInterfaceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<PrivateIpAddressSpecification> CreateNetworkInterfaceRequest::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void CreateNetworkInterfaceRequest::SetPrivateIpAddresses(const vector<PrivateIpAddressSpecification>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

uint64_t CreateNetworkInterfaceRequest::GetSecondaryPrivateIpAddressCount() const
{
    return m_secondaryPrivateIpAddressCount;
}

void CreateNetworkInterfaceRequest::SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount)
{
    m_secondaryPrivateIpAddressCount = _secondaryPrivateIpAddressCount;
    m_secondaryPrivateIpAddressCountHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::SecondaryPrivateIpAddressCountHasBeenSet() const
{
    return m_secondaryPrivateIpAddressCountHasBeenSet;
}

vector<Ipv6Address> CreateNetworkInterfaceRequest::GetIpv6Addresses() const
{
    return m_ipv6Addresses;
}

void CreateNetworkInterfaceRequest::SetIpv6Addresses(const vector<Ipv6Address>& _ipv6Addresses)
{
    m_ipv6Addresses = _ipv6Addresses;
    m_ipv6AddressesHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::Ipv6AddressesHasBeenSet() const
{
    return m_ipv6AddressesHasBeenSet;
}

uint64_t CreateNetworkInterfaceRequest::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void CreateNetworkInterfaceRequest::SetIpv6AddressCount(const uint64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

vector<Tag> CreateNetworkInterfaceRequest::GetTags() const
{
    return m_tags;
}

void CreateNetworkInterfaceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateNetworkInterfaceRequest::GetTrunkingFlag() const
{
    return m_trunkingFlag;
}

void CreateNetworkInterfaceRequest::SetTrunkingFlag(const string& _trunkingFlag)
{
    m_trunkingFlag = _trunkingFlag;
    m_trunkingFlagHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::TrunkingFlagHasBeenSet() const
{
    return m_trunkingFlagHasBeenSet;
}

bool CreateNetworkInterfaceRequest::GetIsRdma() const
{
    return m_isRdma;
}

void CreateNetworkInterfaceRequest::SetIsRdma(const bool& _isRdma)
{
    m_isRdma = _isRdma;
    m_isRdmaHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::IsRdmaHasBeenSet() const
{
    return m_isRdmaHasBeenSet;
}

string CreateNetworkInterfaceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateNetworkInterfaceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

bool CreateNetworkInterfaceRequest::GetTerminationProtection() const
{
    return m_terminationProtection;
}

void CreateNetworkInterfaceRequest::SetTerminationProtection(const bool& _terminationProtection)
{
    m_terminationProtection = _terminationProtection;
    m_terminationProtectionHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::TerminationProtectionHasBeenSet() const
{
    return m_terminationProtectionHasBeenSet;
}

bool CreateNetworkInterfaceRequest::GetTrafficProtection() const
{
    return m_trafficProtection;
}

void CreateNetworkInterfaceRequest::SetTrafficProtection(const bool& _trafficProtection)
{
    m_trafficProtection = _trafficProtection;
    m_trafficProtectionHasBeenSet = true;
}

bool CreateNetworkInterfaceRequest::TrafficProtectionHasBeenSet() const
{
    return m_trafficProtectionHasBeenSet;
}


