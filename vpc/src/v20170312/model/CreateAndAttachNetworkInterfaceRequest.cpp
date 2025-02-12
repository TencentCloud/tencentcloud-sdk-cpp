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

#include <tencentcloud/vpc/v20170312/model/CreateAndAttachNetworkInterfaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateAndAttachNetworkInterfaceRequest::CreateAndAttachNetworkInterfaceRequest() :
    m_vpcIdHasBeenSet(false),
    m_networkInterfaceNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_attachTypeHasBeenSet(false),
    m_isRdmaHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string CreateAndAttachNetworkInterfaceRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_networkInterfaceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceDescription.c_str(), allocator).Move(), allocator);
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

    if (m_attachTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attachType, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndAttachNetworkInterfaceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateAndAttachNetworkInterfaceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateAndAttachNetworkInterfaceRequest::GetNetworkInterfaceName() const
{
    return m_networkInterfaceName;
}

void CreateAndAttachNetworkInterfaceRequest::SetNetworkInterfaceName(const string& _networkInterfaceName)
{
    m_networkInterfaceName = _networkInterfaceName;
    m_networkInterfaceNameHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::NetworkInterfaceNameHasBeenSet() const
{
    return m_networkInterfaceNameHasBeenSet;
}

string CreateAndAttachNetworkInterfaceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateAndAttachNetworkInterfaceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateAndAttachNetworkInterfaceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAndAttachNetworkInterfaceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<PrivateIpAddressSpecification> CreateAndAttachNetworkInterfaceRequest::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void CreateAndAttachNetworkInterfaceRequest::SetPrivateIpAddresses(const vector<PrivateIpAddressSpecification>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

uint64_t CreateAndAttachNetworkInterfaceRequest::GetSecondaryPrivateIpAddressCount() const
{
    return m_secondaryPrivateIpAddressCount;
}

void CreateAndAttachNetworkInterfaceRequest::SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount)
{
    m_secondaryPrivateIpAddressCount = _secondaryPrivateIpAddressCount;
    m_secondaryPrivateIpAddressCountHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::SecondaryPrivateIpAddressCountHasBeenSet() const
{
    return m_secondaryPrivateIpAddressCountHasBeenSet;
}

string CreateAndAttachNetworkInterfaceRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void CreateAndAttachNetworkInterfaceRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

vector<string> CreateAndAttachNetworkInterfaceRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateAndAttachNetworkInterfaceRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateAndAttachNetworkInterfaceRequest::GetNetworkInterfaceDescription() const
{
    return m_networkInterfaceDescription;
}

void CreateAndAttachNetworkInterfaceRequest::SetNetworkInterfaceDescription(const string& _networkInterfaceDescription)
{
    m_networkInterfaceDescription = _networkInterfaceDescription;
    m_networkInterfaceDescriptionHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::NetworkInterfaceDescriptionHasBeenSet() const
{
    return m_networkInterfaceDescriptionHasBeenSet;
}

vector<Tag> CreateAndAttachNetworkInterfaceRequest::GetTags() const
{
    return m_tags;
}

void CreateAndAttachNetworkInterfaceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateAndAttachNetworkInterfaceRequest::GetAttachType() const
{
    return m_attachType;
}

void CreateAndAttachNetworkInterfaceRequest::SetAttachType(const uint64_t& _attachType)
{
    m_attachType = _attachType;
    m_attachTypeHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::AttachTypeHasBeenSet() const
{
    return m_attachTypeHasBeenSet;
}

bool CreateAndAttachNetworkInterfaceRequest::GetIsRdma() const
{
    return m_isRdma;
}

void CreateAndAttachNetworkInterfaceRequest::SetIsRdma(const bool& _isRdma)
{
    m_isRdma = _isRdma;
    m_isRdmaHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::IsRdmaHasBeenSet() const
{
    return m_isRdmaHasBeenSet;
}

string CreateAndAttachNetworkInterfaceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateAndAttachNetworkInterfaceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateAndAttachNetworkInterfaceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


