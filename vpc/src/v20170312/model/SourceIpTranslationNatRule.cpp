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

#include <tencentcloud/vpc/v20170312/model/SourceIpTranslationNatRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

SourceIpTranslationNatRule::SourceIpTranslationNatRule() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_natGatewaySnatIdHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome SourceIpTranslationNatRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.PublicIpAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["PublicIpAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicIpAddresses.push_back((*itr).GetString());
        }
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("NatGatewaySnatId") && !value["NatGatewaySnatId"].IsNull())
    {
        if (!value["NatGatewaySnatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.NatGatewaySnatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewaySnatId = string(value["NatGatewaySnatId"].GetString());
        m_natGatewaySnatIdHasBeenSet = true;
    }

    if (value.HasMember("NatGatewayId") && !value["NatGatewayId"].IsNull())
    {
        if (!value["NatGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.NatGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewayId = string(value["NatGatewayId"].GetString());
        m_natGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIpTranslationNatRule.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceIpTranslationNatRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publicIpAddresses.begin(); itr != m_publicIpAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewaySnatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewaySnatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewaySnatId.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string SourceIpTranslationNatRule::GetResourceId() const
{
    return m_resourceId;
}

void SourceIpTranslationNatRule::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SourceIpTranslationNatRule::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string SourceIpTranslationNatRule::GetResourceType() const
{
    return m_resourceType;
}

void SourceIpTranslationNatRule::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool SourceIpTranslationNatRule::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string SourceIpTranslationNatRule::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void SourceIpTranslationNatRule::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool SourceIpTranslationNatRule::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

vector<string> SourceIpTranslationNatRule::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void SourceIpTranslationNatRule::SetPublicIpAddresses(const vector<string>& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool SourceIpTranslationNatRule::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string SourceIpTranslationNatRule::GetDescription() const
{
    return m_description;
}

void SourceIpTranslationNatRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SourceIpTranslationNatRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SourceIpTranslationNatRule::GetNatGatewaySnatId() const
{
    return m_natGatewaySnatId;
}

void SourceIpTranslationNatRule::SetNatGatewaySnatId(const string& _natGatewaySnatId)
{
    m_natGatewaySnatId = _natGatewaySnatId;
    m_natGatewaySnatIdHasBeenSet = true;
}

bool SourceIpTranslationNatRule::NatGatewaySnatIdHasBeenSet() const
{
    return m_natGatewaySnatIdHasBeenSet;
}

string SourceIpTranslationNatRule::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void SourceIpTranslationNatRule::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool SourceIpTranslationNatRule::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string SourceIpTranslationNatRule::GetVpcId() const
{
    return m_vpcId;
}

void SourceIpTranslationNatRule::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool SourceIpTranslationNatRule::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string SourceIpTranslationNatRule::GetCreatedTime() const
{
    return m_createdTime;
}

void SourceIpTranslationNatRule::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool SourceIpTranslationNatRule::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

