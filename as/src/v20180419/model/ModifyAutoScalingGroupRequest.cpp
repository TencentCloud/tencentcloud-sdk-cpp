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

#include <tencentcloud/as/v20180419/model/ModifyAutoScalingGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ModifyAutoScalingGroupRequest::ModifyAutoScalingGroupRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_defaultCooldownHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_zonesCheckPolicyHasBeenSet(false),
    m_serviceSettingsHasBeenSet(false),
    m_ipv6AddressCountHasBeenSet(false),
    m_multiZoneSubnetPolicyHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_loadBalancerHealthCheckGracePeriodHasBeenSet(false),
    m_instanceAllocationPolicyHasBeenSet(false),
    m_spotMixedAllocationPolicyHasBeenSet(false),
    m_capacityRebalanceHasBeenSet(false),
    m_instanceNameIndexSettingsHasBeenSet(false)
{
}

string ModifyAutoScalingGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCooldownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCooldown";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultCooldown, allocator);
    }

    if (m_desiredCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_launchConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_terminationPoliciesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationPolicies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_terminationPolicies.begin(); itr != m_terminationPolicies.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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

    if (m_retryPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_retryPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesCheckPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZonesCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zonesCheckPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipv6AddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6AddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipv6AddressCount, allocator);
    }

    if (m_multiZoneSubnetPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZoneSubnetPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_multiZoneSubnetPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthCheckType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerHealthCheckGracePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerHealthCheckGracePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadBalancerHealthCheckGracePeriod, allocator);
    }

    if (m_instanceAllocationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAllocationPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceAllocationPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_spotMixedAllocationPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotMixedAllocationPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spotMixedAllocationPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_capacityRebalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityRebalance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_capacityRebalance, allocator);
    }

    if (m_instanceNameIndexSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameIndexSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceNameIndexSettings.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAutoScalingGroupRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ModifyAutoScalingGroupRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetAutoScalingGroupName() const
{
    return m_autoScalingGroupName;
}

void ModifyAutoScalingGroupRequest::SetAutoScalingGroupName(const string& _autoScalingGroupName)
{
    m_autoScalingGroupName = _autoScalingGroupName;
    m_autoScalingGroupNameHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::AutoScalingGroupNameHasBeenSet() const
{
    return m_autoScalingGroupNameHasBeenSet;
}

uint64_t ModifyAutoScalingGroupRequest::GetDefaultCooldown() const
{
    return m_defaultCooldown;
}

void ModifyAutoScalingGroupRequest::SetDefaultCooldown(const uint64_t& _defaultCooldown)
{
    m_defaultCooldown = _defaultCooldown;
    m_defaultCooldownHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::DefaultCooldownHasBeenSet() const
{
    return m_defaultCooldownHasBeenSet;
}

uint64_t ModifyAutoScalingGroupRequest::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void ModifyAutoScalingGroupRequest::SetDesiredCapacity(const uint64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void ModifyAutoScalingGroupRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

uint64_t ModifyAutoScalingGroupRequest::GetMaxSize() const
{
    return m_maxSize;
}

void ModifyAutoScalingGroupRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t ModifyAutoScalingGroupRequest::GetMinSize() const
{
    return m_minSize;
}

void ModifyAutoScalingGroupRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

uint64_t ModifyAutoScalingGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyAutoScalingGroupRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> ModifyAutoScalingGroupRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void ModifyAutoScalingGroupRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<string> ModifyAutoScalingGroupRequest::GetTerminationPolicies() const
{
    return m_terminationPolicies;
}

void ModifyAutoScalingGroupRequest::SetTerminationPolicies(const vector<string>& _terminationPolicies)
{
    m_terminationPolicies = _terminationPolicies;
    m_terminationPoliciesHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::TerminationPoliciesHasBeenSet() const
{
    return m_terminationPoliciesHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyAutoScalingGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> ModifyAutoScalingGroupRequest::GetZones() const
{
    return m_zones;
}

void ModifyAutoScalingGroupRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetRetryPolicy() const
{
    return m_retryPolicy;
}

void ModifyAutoScalingGroupRequest::SetRetryPolicy(const string& _retryPolicy)
{
    m_retryPolicy = _retryPolicy;
    m_retryPolicyHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::RetryPolicyHasBeenSet() const
{
    return m_retryPolicyHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetZonesCheckPolicy() const
{
    return m_zonesCheckPolicy;
}

void ModifyAutoScalingGroupRequest::SetZonesCheckPolicy(const string& _zonesCheckPolicy)
{
    m_zonesCheckPolicy = _zonesCheckPolicy;
    m_zonesCheckPolicyHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::ZonesCheckPolicyHasBeenSet() const
{
    return m_zonesCheckPolicyHasBeenSet;
}

ServiceSettings ModifyAutoScalingGroupRequest::GetServiceSettings() const
{
    return m_serviceSettings;
}

void ModifyAutoScalingGroupRequest::SetServiceSettings(const ServiceSettings& _serviceSettings)
{
    m_serviceSettings = _serviceSettings;
    m_serviceSettingsHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::ServiceSettingsHasBeenSet() const
{
    return m_serviceSettingsHasBeenSet;
}

int64_t ModifyAutoScalingGroupRequest::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void ModifyAutoScalingGroupRequest::SetIpv6AddressCount(const int64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetMultiZoneSubnetPolicy() const
{
    return m_multiZoneSubnetPolicy;
}

void ModifyAutoScalingGroupRequest::SetMultiZoneSubnetPolicy(const string& _multiZoneSubnetPolicy)
{
    m_multiZoneSubnetPolicy = _multiZoneSubnetPolicy;
    m_multiZoneSubnetPolicyHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::MultiZoneSubnetPolicyHasBeenSet() const
{
    return m_multiZoneSubnetPolicyHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetHealthCheckType() const
{
    return m_healthCheckType;
}

void ModifyAutoScalingGroupRequest::SetHealthCheckType(const string& _healthCheckType)
{
    m_healthCheckType = _healthCheckType;
    m_healthCheckTypeHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::HealthCheckTypeHasBeenSet() const
{
    return m_healthCheckTypeHasBeenSet;
}

uint64_t ModifyAutoScalingGroupRequest::GetLoadBalancerHealthCheckGracePeriod() const
{
    return m_loadBalancerHealthCheckGracePeriod;
}

void ModifyAutoScalingGroupRequest::SetLoadBalancerHealthCheckGracePeriod(const uint64_t& _loadBalancerHealthCheckGracePeriod)
{
    m_loadBalancerHealthCheckGracePeriod = _loadBalancerHealthCheckGracePeriod;
    m_loadBalancerHealthCheckGracePeriodHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::LoadBalancerHealthCheckGracePeriodHasBeenSet() const
{
    return m_loadBalancerHealthCheckGracePeriodHasBeenSet;
}

string ModifyAutoScalingGroupRequest::GetInstanceAllocationPolicy() const
{
    return m_instanceAllocationPolicy;
}

void ModifyAutoScalingGroupRequest::SetInstanceAllocationPolicy(const string& _instanceAllocationPolicy)
{
    m_instanceAllocationPolicy = _instanceAllocationPolicy;
    m_instanceAllocationPolicyHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::InstanceAllocationPolicyHasBeenSet() const
{
    return m_instanceAllocationPolicyHasBeenSet;
}

SpotMixedAllocationPolicy ModifyAutoScalingGroupRequest::GetSpotMixedAllocationPolicy() const
{
    return m_spotMixedAllocationPolicy;
}

void ModifyAutoScalingGroupRequest::SetSpotMixedAllocationPolicy(const SpotMixedAllocationPolicy& _spotMixedAllocationPolicy)
{
    m_spotMixedAllocationPolicy = _spotMixedAllocationPolicy;
    m_spotMixedAllocationPolicyHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::SpotMixedAllocationPolicyHasBeenSet() const
{
    return m_spotMixedAllocationPolicyHasBeenSet;
}

bool ModifyAutoScalingGroupRequest::GetCapacityRebalance() const
{
    return m_capacityRebalance;
}

void ModifyAutoScalingGroupRequest::SetCapacityRebalance(const bool& _capacityRebalance)
{
    m_capacityRebalance = _capacityRebalance;
    m_capacityRebalanceHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::CapacityRebalanceHasBeenSet() const
{
    return m_capacityRebalanceHasBeenSet;
}

InstanceNameIndexSettings ModifyAutoScalingGroupRequest::GetInstanceNameIndexSettings() const
{
    return m_instanceNameIndexSettings;
}

void ModifyAutoScalingGroupRequest::SetInstanceNameIndexSettings(const InstanceNameIndexSettings& _instanceNameIndexSettings)
{
    m_instanceNameIndexSettings = _instanceNameIndexSettings;
    m_instanceNameIndexSettingsHasBeenSet = true;
}

bool ModifyAutoScalingGroupRequest::InstanceNameIndexSettingsHasBeenSet() const
{
    return m_instanceNameIndexSettingsHasBeenSet;
}


