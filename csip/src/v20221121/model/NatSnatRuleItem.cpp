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

#include <tencentcloud/csip/v20221121/model/NatSnatRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

NatSnatRuleItem::NatSnatRuleItem() :
    m_natGatewaySnatIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_publicIpAddressesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome NatSnatRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatGatewaySnatId") && !value["NatGatewaySnatId"].IsNull())
    {
        if (!value["NatGatewaySnatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.NatGatewaySnatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natGatewaySnatId = string(value["NatGatewaySnatId"].GetString());
        m_natGatewaySnatIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddress") && !value["PrivateIpAddress"].IsNull())
    {
        if (!value["PrivateIpAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.PrivateIpAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddress = string(value["PrivateIpAddress"].GetString());
        m_privateIpAddressHasBeenSet = true;
    }

    if (value.HasMember("PublicIpAddresses") && !value["PublicIpAddresses"].IsNull())
    {
        if (!value["PublicIpAddresses"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.PublicIpAddresses` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpAddresses = string(value["PublicIpAddresses"].GetString());
        m_publicIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatSnatRuleItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatSnatRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natGatewaySnatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewaySnatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natGatewaySnatId.c_str(), allocator).Move(), allocator);
    }

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
        value.AddMember(iKey, rapidjson::Value(m_publicIpAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string NatSnatRuleItem::GetNatGatewaySnatId() const
{
    return m_natGatewaySnatId;
}

void NatSnatRuleItem::SetNatGatewaySnatId(const string& _natGatewaySnatId)
{
    m_natGatewaySnatId = _natGatewaySnatId;
    m_natGatewaySnatIdHasBeenSet = true;
}

bool NatSnatRuleItem::NatGatewaySnatIdHasBeenSet() const
{
    return m_natGatewaySnatIdHasBeenSet;
}

string NatSnatRuleItem::GetResourceId() const
{
    return m_resourceId;
}

void NatSnatRuleItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool NatSnatRuleItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string NatSnatRuleItem::GetResourceType() const
{
    return m_resourceType;
}

void NatSnatRuleItem::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool NatSnatRuleItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string NatSnatRuleItem::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void NatSnatRuleItem::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool NatSnatRuleItem::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}

string NatSnatRuleItem::GetPublicIpAddresses() const
{
    return m_publicIpAddresses;
}

void NatSnatRuleItem::SetPublicIpAddresses(const string& _publicIpAddresses)
{
    m_publicIpAddresses = _publicIpAddresses;
    m_publicIpAddressesHasBeenSet = true;
}

bool NatSnatRuleItem::PublicIpAddressesHasBeenSet() const
{
    return m_publicIpAddressesHasBeenSet;
}

string NatSnatRuleItem::GetDescription() const
{
    return m_description;
}

void NatSnatRuleItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NatSnatRuleItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NatSnatRuleItem::GetCreatedTime() const
{
    return m_createdTime;
}

void NatSnatRuleItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool NatSnatRuleItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

