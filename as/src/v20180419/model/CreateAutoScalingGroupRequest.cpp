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

#include <tencentcloud/as/v20180419/model/CreateAutoScalingGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest() :
    m_autoScalingGroupNameHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_defaultCooldownHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_loadBalancerIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_forwardLoadBalancersHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_zonesCheckPolicyHasBeenSet(false),
    m_tagsHasBeenSet(false),
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

string CreateAutoScalingGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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

    if (m_loadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_forwardLoadBalancersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardLoadBalancers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_forwardLoadBalancers.begin(); itr != m_forwardLoadBalancers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateAutoScalingGroupRequest::GetAutoScalingGroupName() const
{
    return m_autoScalingGroupName;
}

void CreateAutoScalingGroupRequest::SetAutoScalingGroupName(const string& _autoScalingGroupName)
{
    m_autoScalingGroupName = _autoScalingGroupName;
    m_autoScalingGroupNameHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::AutoScalingGroupNameHasBeenSet() const
{
    return m_autoScalingGroupNameHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void CreateAutoScalingGroupRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

uint64_t CreateAutoScalingGroupRequest::GetMaxSize() const
{
    return m_maxSize;
}

void CreateAutoScalingGroupRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t CreateAutoScalingGroupRequest::GetMinSize() const
{
    return m_minSize;
}

void CreateAutoScalingGroupRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateAutoScalingGroupRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t CreateAutoScalingGroupRequest::GetDefaultCooldown() const
{
    return m_defaultCooldown;
}

void CreateAutoScalingGroupRequest::SetDefaultCooldown(const uint64_t& _defaultCooldown)
{
    m_defaultCooldown = _defaultCooldown;
    m_defaultCooldownHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::DefaultCooldownHasBeenSet() const
{
    return m_defaultCooldownHasBeenSet;
}

uint64_t CreateAutoScalingGroupRequest::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void CreateAutoScalingGroupRequest::SetDesiredCapacity(const uint64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

vector<string> CreateAutoScalingGroupRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void CreateAutoScalingGroupRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

uint64_t CreateAutoScalingGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateAutoScalingGroupRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<ForwardLoadBalancer> CreateAutoScalingGroupRequest::GetForwardLoadBalancers() const
{
    return m_forwardLoadBalancers;
}

void CreateAutoScalingGroupRequest::SetForwardLoadBalancers(const vector<ForwardLoadBalancer>& _forwardLoadBalancers)
{
    m_forwardLoadBalancers = _forwardLoadBalancers;
    m_forwardLoadBalancersHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::ForwardLoadBalancersHasBeenSet() const
{
    return m_forwardLoadBalancersHasBeenSet;
}

vector<string> CreateAutoScalingGroupRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateAutoScalingGroupRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<string> CreateAutoScalingGroupRequest::GetTerminationPolicies() const
{
    return m_terminationPolicies;
}

void CreateAutoScalingGroupRequest::SetTerminationPolicies(const vector<string>& _terminationPolicies)
{
    m_terminationPolicies = _terminationPolicies;
    m_terminationPoliciesHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::TerminationPoliciesHasBeenSet() const
{
    return m_terminationPoliciesHasBeenSet;
}

vector<string> CreateAutoScalingGroupRequest::GetZones() const
{
    return m_zones;
}

void CreateAutoScalingGroupRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetRetryPolicy() const
{
    return m_retryPolicy;
}

void CreateAutoScalingGroupRequest::SetRetryPolicy(const string& _retryPolicy)
{
    m_retryPolicy = _retryPolicy;
    m_retryPolicyHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::RetryPolicyHasBeenSet() const
{
    return m_retryPolicyHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetZonesCheckPolicy() const
{
    return m_zonesCheckPolicy;
}

void CreateAutoScalingGroupRequest::SetZonesCheckPolicy(const string& _zonesCheckPolicy)
{
    m_zonesCheckPolicy = _zonesCheckPolicy;
    m_zonesCheckPolicyHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::ZonesCheckPolicyHasBeenSet() const
{
    return m_zonesCheckPolicyHasBeenSet;
}

vector<Tag> CreateAutoScalingGroupRequest::GetTags() const
{
    return m_tags;
}

void CreateAutoScalingGroupRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ServiceSettings CreateAutoScalingGroupRequest::GetServiceSettings() const
{
    return m_serviceSettings;
}

void CreateAutoScalingGroupRequest::SetServiceSettings(const ServiceSettings& _serviceSettings)
{
    m_serviceSettings = _serviceSettings;
    m_serviceSettingsHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::ServiceSettingsHasBeenSet() const
{
    return m_serviceSettingsHasBeenSet;
}

int64_t CreateAutoScalingGroupRequest::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void CreateAutoScalingGroupRequest::SetIpv6AddressCount(const int64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetMultiZoneSubnetPolicy() const
{
    return m_multiZoneSubnetPolicy;
}

void CreateAutoScalingGroupRequest::SetMultiZoneSubnetPolicy(const string& _multiZoneSubnetPolicy)
{
    m_multiZoneSubnetPolicy = _multiZoneSubnetPolicy;
    m_multiZoneSubnetPolicyHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::MultiZoneSubnetPolicyHasBeenSet() const
{
    return m_multiZoneSubnetPolicyHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetHealthCheckType() const
{
    return m_healthCheckType;
}

void CreateAutoScalingGroupRequest::SetHealthCheckType(const string& _healthCheckType)
{
    m_healthCheckType = _healthCheckType;
    m_healthCheckTypeHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::HealthCheckTypeHasBeenSet() const
{
    return m_healthCheckTypeHasBeenSet;
}

uint64_t CreateAutoScalingGroupRequest::GetLoadBalancerHealthCheckGracePeriod() const
{
    return m_loadBalancerHealthCheckGracePeriod;
}

void CreateAutoScalingGroupRequest::SetLoadBalancerHealthCheckGracePeriod(const uint64_t& _loadBalancerHealthCheckGracePeriod)
{
    m_loadBalancerHealthCheckGracePeriod = _loadBalancerHealthCheckGracePeriod;
    m_loadBalancerHealthCheckGracePeriodHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::LoadBalancerHealthCheckGracePeriodHasBeenSet() const
{
    return m_loadBalancerHealthCheckGracePeriodHasBeenSet;
}

string CreateAutoScalingGroupRequest::GetInstanceAllocationPolicy() const
{
    return m_instanceAllocationPolicy;
}

void CreateAutoScalingGroupRequest::SetInstanceAllocationPolicy(const string& _instanceAllocationPolicy)
{
    m_instanceAllocationPolicy = _instanceAllocationPolicy;
    m_instanceAllocationPolicyHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::InstanceAllocationPolicyHasBeenSet() const
{
    return m_instanceAllocationPolicyHasBeenSet;
}

SpotMixedAllocationPolicy CreateAutoScalingGroupRequest::GetSpotMixedAllocationPolicy() const
{
    return m_spotMixedAllocationPolicy;
}

void CreateAutoScalingGroupRequest::SetSpotMixedAllocationPolicy(const SpotMixedAllocationPolicy& _spotMixedAllocationPolicy)
{
    m_spotMixedAllocationPolicy = _spotMixedAllocationPolicy;
    m_spotMixedAllocationPolicyHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::SpotMixedAllocationPolicyHasBeenSet() const
{
    return m_spotMixedAllocationPolicyHasBeenSet;
}

bool CreateAutoScalingGroupRequest::GetCapacityRebalance() const
{
    return m_capacityRebalance;
}

void CreateAutoScalingGroupRequest::SetCapacityRebalance(const bool& _capacityRebalance)
{
    m_capacityRebalance = _capacityRebalance;
    m_capacityRebalanceHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::CapacityRebalanceHasBeenSet() const
{
    return m_capacityRebalanceHasBeenSet;
}

InstanceNameIndexSettings CreateAutoScalingGroupRequest::GetInstanceNameIndexSettings() const
{
    return m_instanceNameIndexSettings;
}

void CreateAutoScalingGroupRequest::SetInstanceNameIndexSettings(const InstanceNameIndexSettings& _instanceNameIndexSettings)
{
    m_instanceNameIndexSettings = _instanceNameIndexSettings;
    m_instanceNameIndexSettingsHasBeenSet = true;
}

bool CreateAutoScalingGroupRequest::InstanceNameIndexSettingsHasBeenSet() const
{
    return m_instanceNameIndexSettingsHasBeenSet;
}


