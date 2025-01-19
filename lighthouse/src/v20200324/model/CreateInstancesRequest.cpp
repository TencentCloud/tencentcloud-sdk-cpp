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

#include <tencentcloud/lighthouse/v20200324/model/CreateInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

CreateInstancesRequest::CreateInstancesRequest() :
    m_bundleIdHasBeenSet(false),
    m_blueprintIdHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_loginConfigurationHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_firewallTemplateIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_initCommandHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_subdomainHasBeenSet(false)
{
}

string CreateInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_loginConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_firewallTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirewallTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firewallTemplateId.c_str(), allocator).Move(), allocator);
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

    if (m_initCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_initCommand.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_subdomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subdomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subdomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstancesRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateInstancesRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateInstancesRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateInstancesRequest::GetBlueprintId() const
{
    return m_blueprintId;
}

void CreateInstancesRequest::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool CreateInstancesRequest::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

InstanceChargePrepaid CreateInstancesRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void CreateInstancesRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string CreateInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t CreateInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateInstancesRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

vector<string> CreateInstancesRequest::GetZones() const
{
    return m_zones;
}

void CreateInstancesRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateInstancesRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

bool CreateInstancesRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateInstancesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateInstancesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateInstancesRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateInstancesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateInstancesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

LoginConfiguration CreateInstancesRequest::GetLoginConfiguration() const
{
    return m_loginConfiguration;
}

void CreateInstancesRequest::SetLoginConfiguration(const LoginConfiguration& _loginConfiguration)
{
    m_loginConfiguration = _loginConfiguration;
    m_loginConfigurationHasBeenSet = true;
}

bool CreateInstancesRequest::LoginConfigurationHasBeenSet() const
{
    return m_loginConfigurationHasBeenSet;
}

vector<DockerContainerConfiguration> CreateInstancesRequest::GetContainers() const
{
    return m_containers;
}

void CreateInstancesRequest::SetContainers(const vector<DockerContainerConfiguration>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool CreateInstancesRequest::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

bool CreateInstancesRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateInstancesRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateInstancesRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

string CreateInstancesRequest::GetFirewallTemplateId() const
{
    return m_firewallTemplateId;
}

void CreateInstancesRequest::SetFirewallTemplateId(const string& _firewallTemplateId)
{
    m_firewallTemplateId = _firewallTemplateId;
    m_firewallTemplateIdHasBeenSet = true;
}

bool CreateInstancesRequest::FirewallTemplateIdHasBeenSet() const
{
    return m_firewallTemplateIdHasBeenSet;
}

vector<Tag> CreateInstancesRequest::GetTags() const
{
    return m_tags;
}

void CreateInstancesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInstancesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

Command CreateInstancesRequest::GetInitCommand() const
{
    return m_initCommand;
}

void CreateInstancesRequest::SetInitCommand(const Command& _initCommand)
{
    m_initCommand = _initCommand;
    m_initCommandHasBeenSet = true;
}

bool CreateInstancesRequest::InitCommandHasBeenSet() const
{
    return m_initCommandHasBeenSet;
}

string CreateInstancesRequest::GetDomainName() const
{
    return m_domainName;
}

void CreateInstancesRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool CreateInstancesRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string CreateInstancesRequest::GetSubdomain() const
{
    return m_subdomain;
}

void CreateInstancesRequest::SetSubdomain(const string& _subdomain)
{
    m_subdomain = _subdomain;
    m_subdomainHasBeenSet = true;
}

bool CreateInstancesRequest::SubdomainHasBeenSet() const
{
    return m_subdomainHasBeenSet;
}


