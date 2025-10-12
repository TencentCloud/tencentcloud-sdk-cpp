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

#include <tencentcloud/wedata/v20250806/model/CreateResourceGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateResourceGroupRequest::CreateResourceGroupRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_autoRenewEnabledHasBeenSet(false),
    m_purchasePeriodHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subNetHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_associatedProjectIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateResourceGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_type.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoRenewEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewEnabled, allocator);
    }

    if (m_purchasePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchasePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_purchasePeriod, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubNet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subNet.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_associatedProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateResourceGroupRequest::GetName() const
{
    return m_name;
}

void CreateResourceGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateResourceGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

ResourceType CreateResourceGroupRequest::GetType() const
{
    return m_type;
}

void CreateResourceGroupRequest::SetType(const ResourceType& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateResourceGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool CreateResourceGroupRequest::GetAutoRenewEnabled() const
{
    return m_autoRenewEnabled;
}

void CreateResourceGroupRequest::SetAutoRenewEnabled(const bool& _autoRenewEnabled)
{
    m_autoRenewEnabled = _autoRenewEnabled;
    m_autoRenewEnabledHasBeenSet = true;
}

bool CreateResourceGroupRequest::AutoRenewEnabledHasBeenSet() const
{
    return m_autoRenewEnabledHasBeenSet;
}

int64_t CreateResourceGroupRequest::GetPurchasePeriod() const
{
    return m_purchasePeriod;
}

void CreateResourceGroupRequest::SetPurchasePeriod(const int64_t& _purchasePeriod)
{
    m_purchasePeriod = _purchasePeriod;
    m_purchasePeriodHasBeenSet = true;
}

bool CreateResourceGroupRequest::PurchasePeriodHasBeenSet() const
{
    return m_purchasePeriodHasBeenSet;
}

string CreateResourceGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateResourceGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateResourceGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateResourceGroupRequest::GetSubNet() const
{
    return m_subNet;
}

void CreateResourceGroupRequest::SetSubNet(const string& _subNet)
{
    m_subNet = _subNet;
    m_subNetHasBeenSet = true;
}

bool CreateResourceGroupRequest::SubNetHasBeenSet() const
{
    return m_subNetHasBeenSet;
}

string CreateResourceGroupRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateResourceGroupRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateResourceGroupRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string CreateResourceGroupRequest::GetAssociatedProjectId() const
{
    return m_associatedProjectId;
}

void CreateResourceGroupRequest::SetAssociatedProjectId(const string& _associatedProjectId)
{
    m_associatedProjectId = _associatedProjectId;
    m_associatedProjectIdHasBeenSet = true;
}

bool CreateResourceGroupRequest::AssociatedProjectIdHasBeenSet() const
{
    return m_associatedProjectIdHasBeenSet;
}

string CreateResourceGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateResourceGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateResourceGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


