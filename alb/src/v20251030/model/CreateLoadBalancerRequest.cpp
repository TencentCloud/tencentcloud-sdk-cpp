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

#include <tencentcloud/alb/v20251030/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() :
    m_addressTypeHasBeenSet(false),
    m_loadBalancerBillingConfigHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_zoneMappingsHasBeenSet(false),
    m_addressIpVersionHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_deleteProtectionHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_internetAddressTypeHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateLoadBalancerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerBillingConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerBillingConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadBalancerBillingConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneMappings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneMappings.begin(); itr != m_zoneMappings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_addressIpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressIpVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressIpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deleteProtection.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_internetAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internetAddressType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoadBalancerRequest::GetAddressType() const
{
    return m_addressType;
}

void CreateLoadBalancerRequest::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool CreateLoadBalancerRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

LoadBalancerBillingConfig CreateLoadBalancerRequest::GetLoadBalancerBillingConfig() const
{
    return m_loadBalancerBillingConfig;
}

void CreateLoadBalancerRequest::SetLoadBalancerBillingConfig(const LoadBalancerBillingConfig& _loadBalancerBillingConfig)
{
    m_loadBalancerBillingConfig = _loadBalancerBillingConfig;
    m_loadBalancerBillingConfigHasBeenSet = true;
}

bool CreateLoadBalancerRequest::LoadBalancerBillingConfigHasBeenSet() const
{
    return m_loadBalancerBillingConfigHasBeenSet;
}

string CreateLoadBalancerRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateLoadBalancerRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateLoadBalancerRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<ZoneMappingsItem> CreateLoadBalancerRequest::GetZoneMappings() const
{
    return m_zoneMappings;
}

void CreateLoadBalancerRequest::SetZoneMappings(const vector<ZoneMappingsItem>& _zoneMappings)
{
    m_zoneMappings = _zoneMappings;
    m_zoneMappingsHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ZoneMappingsHasBeenSet() const
{
    return m_zoneMappingsHasBeenSet;
}

string CreateLoadBalancerRequest::GetAddressIpVersion() const
{
    return m_addressIpVersion;
}

void CreateLoadBalancerRequest::SetAddressIpVersion(const string& _addressIpVersion)
{
    m_addressIpVersion = _addressIpVersion;
    m_addressIpVersionHasBeenSet = true;
}

bool CreateLoadBalancerRequest::AddressIpVersionHasBeenSet() const
{
    return m_addressIpVersionHasBeenSet;
}

string CreateLoadBalancerRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateLoadBalancerRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateLoadBalancerRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

DeletionProtectionConfig CreateLoadBalancerRequest::GetDeleteProtection() const
{
    return m_deleteProtection;
}

void CreateLoadBalancerRequest::SetDeleteProtection(const DeletionProtectionConfig& _deleteProtection)
{
    m_deleteProtection = _deleteProtection;
    m_deleteProtectionHasBeenSet = true;
}

bool CreateLoadBalancerRequest::DeleteProtectionHasBeenSet() const
{
    return m_deleteProtectionHasBeenSet;
}

bool CreateLoadBalancerRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateLoadBalancerRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateLoadBalancerRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateLoadBalancerRequest::GetInternetAddressType() const
{
    return m_internetAddressType;
}

void CreateLoadBalancerRequest::SetInternetAddressType(const string& _internetAddressType)
{
    m_internetAddressType = _internetAddressType;
    m_internetAddressTypeHasBeenSet = true;
}

bool CreateLoadBalancerRequest::InternetAddressTypeHasBeenSet() const
{
    return m_internetAddressTypeHasBeenSet;
}

string CreateLoadBalancerRequest::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void CreateLoadBalancerRequest::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool CreateLoadBalancerRequest::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

vector<TagInfo> CreateLoadBalancerRequest::GetTags() const
{
    return m_tags;
}

void CreateLoadBalancerRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateLoadBalancerRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


