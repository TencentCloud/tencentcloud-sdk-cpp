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

#include <tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

CreateInstanceByApiRequest::CreateInstanceByApiRequest() :
    m_instanceNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_userVPCIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_chargePropertiesHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_tagItemsHasBeenSet(false)
{
}

string CreateInstanceByApiRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_userVPCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVPCId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVPCId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_chargePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeProperties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargeProperties.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tags.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceByApiRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceByApiRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceByApiRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateInstanceByApiRequest::GetZone() const
{
    return m_zone;
}

void CreateInstanceByApiRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateInstanceByApiRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateInstanceByApiRequest::GetUserVPCId() const
{
    return m_userVPCId;
}

void CreateInstanceByApiRequest::SetUserVPCId(const string& _userVPCId)
{
    m_userVPCId = _userVPCId;
    m_userVPCIdHasBeenSet = true;
}

bool CreateInstanceByApiRequest::UserVPCIdHasBeenSet() const
{
    return m_userVPCIdHasBeenSet;
}

string CreateInstanceByApiRequest::GetUserSubnetId() const
{
    return m_userSubnetId;
}

void CreateInstanceByApiRequest::SetUserSubnetId(const string& _userSubnetId)
{
    m_userSubnetId = _userSubnetId;
    m_userSubnetIdHasBeenSet = true;
}

bool CreateInstanceByApiRequest::UserSubnetIdHasBeenSet() const
{
    return m_userSubnetIdHasBeenSet;
}

ChargeProperties CreateInstanceByApiRequest::GetChargeProperties() const
{
    return m_chargeProperties;
}

void CreateInstanceByApiRequest::SetChargeProperties(const ChargeProperties& _chargeProperties)
{
    m_chargeProperties = _chargeProperties;
    m_chargePropertiesHasBeenSet = true;
}

bool CreateInstanceByApiRequest::ChargePropertiesHasBeenSet() const
{
    return m_chargePropertiesHasBeenSet;
}

string CreateInstanceByApiRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void CreateInstanceByApiRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool CreateInstanceByApiRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

vector<ResourceSpecNew> CreateInstanceByApiRequest::GetResources() const
{
    return m_resources;
}

void CreateInstanceByApiRequest::SetResources(const vector<ResourceSpecNew>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool CreateInstanceByApiRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

Tag CreateInstanceByApiRequest::GetTags() const
{
    return m_tags;
}

void CreateInstanceByApiRequest::SetTags(const Tag& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstanceByApiRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateInstanceByApiRequest::GetProductVersion() const
{
    return m_productVersion;
}

void CreateInstanceByApiRequest::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool CreateInstanceByApiRequest::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

vector<Tag> CreateInstanceByApiRequest::GetTagItems() const
{
    return m_tagItems;
}

void CreateInstanceByApiRequest::SetTagItems(const vector<Tag>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool CreateInstanceByApiRequest::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}


