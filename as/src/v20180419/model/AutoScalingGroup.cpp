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

#include <tencentcloud/as/v20180419/model/AutoScalingGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

AutoScalingGroup::AutoScalingGroup() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_autoScalingGroupStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultCooldownHasBeenSet(false),
    m_desiredCapacityHasBeenSet(false),
    m_enabledStatusHasBeenSet(false),
    m_forwardLoadBalancerSetHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_inServiceInstanceCountHasBeenSet(false),
    m_launchConfigurationIdHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_loadBalancerIdSetHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_subnetIdSetHasBeenSet(false),
    m_terminationPolicySetHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_zoneSetHasBeenSet(false),
    m_retryPolicyHasBeenSet(false),
    m_inActivityStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serviceSettingsHasBeenSet(false),
    m_ipv6AddressCountHasBeenSet(false),
    m_multiZoneSubnetPolicyHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AutoScalingGroupId") && !value["AutoScalingGroupId"].IsNull())
    {
        if (!value["AutoScalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.AutoScalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupId = string(value["AutoScalingGroupId"].GetString());
        m_autoScalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupName") && !value["AutoScalingGroupName"].IsNull())
    {
        if (!value["AutoScalingGroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.AutoScalingGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupName = string(value["AutoScalingGroupName"].GetString());
        m_autoScalingGroupNameHasBeenSet = true;
    }

    if (value.HasMember("AutoScalingGroupStatus") && !value["AutoScalingGroupStatus"].IsNull())
    {
        if (!value["AutoScalingGroupStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.AutoScalingGroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoScalingGroupStatus = string(value["AutoScalingGroupStatus"].GetString());
        m_autoScalingGroupStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("DefaultCooldown") && !value["DefaultCooldown"].IsNull())
    {
        if (!value["DefaultCooldown"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.DefaultCooldown` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCooldown = value["DefaultCooldown"].GetInt64();
        m_defaultCooldownHasBeenSet = true;
    }

    if (value.HasMember("DesiredCapacity") && !value["DesiredCapacity"].IsNull())
    {
        if (!value["DesiredCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.DesiredCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredCapacity = value["DesiredCapacity"].GetInt64();
        m_desiredCapacityHasBeenSet = true;
    }

    if (value.HasMember("EnabledStatus") && !value["EnabledStatus"].IsNull())
    {
        if (!value["EnabledStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.EnabledStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabledStatus = string(value["EnabledStatus"].GetString());
        m_enabledStatusHasBeenSet = true;
    }

    if (value.HasMember("ForwardLoadBalancerSet") && !value["ForwardLoadBalancerSet"].IsNull())
    {
        if (!value["ForwardLoadBalancerSet"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingGroup.ForwardLoadBalancerSet` is not array type"));

        const Value &tmpValue = value["ForwardLoadBalancerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ForwardLoadBalancer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_forwardLoadBalancerSet.push_back(item);
        }
        m_forwardLoadBalancerSetHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("InServiceInstanceCount") && !value["InServiceInstanceCount"].IsNull())
    {
        if (!value["InServiceInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.InServiceInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inServiceInstanceCount = value["InServiceInstanceCount"].GetInt64();
        m_inServiceInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationId") && !value["LaunchConfigurationId"].IsNull())
    {
        if (!value["LaunchConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.LaunchConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationId = string(value["LaunchConfigurationId"].GetString());
        m_launchConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("LaunchConfigurationName") && !value["LaunchConfigurationName"].IsNull())
    {
        if (!value["LaunchConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.LaunchConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchConfigurationName = string(value["LaunchConfigurationName"].GetString());
        m_launchConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerIdSet") && !value["LoadBalancerIdSet"].IsNull())
    {
        if (!value["LoadBalancerIdSet"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingGroup.LoadBalancerIdSet` is not array type"));

        const Value &tmpValue = value["LoadBalancerIdSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loadBalancerIdSet.push_back((*itr).GetString());
        }
        m_loadBalancerIdSetHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.MaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetInt64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.MinSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetInt64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIdSet") && !value["SubnetIdSet"].IsNull())
    {
        if (!value["SubnetIdSet"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingGroup.SubnetIdSet` is not array type"));

        const Value &tmpValue = value["SubnetIdSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIdSet.push_back((*itr).GetString());
        }
        m_subnetIdSetHasBeenSet = true;
    }

    if (value.HasMember("TerminationPolicySet") && !value["TerminationPolicySet"].IsNull())
    {
        if (!value["TerminationPolicySet"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingGroup.TerminationPolicySet` is not array type"));

        const Value &tmpValue = value["TerminationPolicySet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_terminationPolicySet.push_back((*itr).GetString());
        }
        m_terminationPolicySetHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneSet") && !value["ZoneSet"].IsNull())
    {
        if (!value["ZoneSet"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingGroup.ZoneSet` is not array type"));

        const Value &tmpValue = value["ZoneSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneSet.push_back((*itr).GetString());
        }
        m_zoneSetHasBeenSet = true;
    }

    if (value.HasMember("RetryPolicy") && !value["RetryPolicy"].IsNull())
    {
        if (!value["RetryPolicy"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.RetryPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retryPolicy = string(value["RetryPolicy"].GetString());
        m_retryPolicyHasBeenSet = true;
    }

    if (value.HasMember("InActivityStatus") && !value["InActivityStatus"].IsNull())
    {
        if (!value["InActivityStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.InActivityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inActivityStatus = string(value["InActivityStatus"].GetString());
        m_inActivityStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `AutoScalingGroup.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ServiceSettings") && !value["ServiceSettings"].IsNull())
    {
        if (!value["ServiceSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.ServiceSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceSettings.Deserialize(value["ServiceSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceSettingsHasBeenSet = true;
    }

    if (value.HasMember("Ipv6AddressCount") && !value["Ipv6AddressCount"].IsNull())
    {
        if (!value["Ipv6AddressCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.Ipv6AddressCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6AddressCount = value["Ipv6AddressCount"].GetInt64();
        m_ipv6AddressCountHasBeenSet = true;
    }

    if (value.HasMember("MultiZoneSubnetPolicy") && !value["MultiZoneSubnetPolicy"].IsNull())
    {
        if (!value["MultiZoneSubnetPolicy"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoScalingGroup.MultiZoneSubnetPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiZoneSubnetPolicy = string(value["MultiZoneSubnetPolicy"].GetString());
        m_multiZoneSubnetPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_autoScalingGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScalingGroupStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoScalingGroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_autoScalingGroupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCooldownHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefaultCooldown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultCooldown, allocator);
    }

    if (m_desiredCapacityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DesiredCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredCapacity, allocator);
    }

    if (m_enabledStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnabledStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_enabledStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardLoadBalancerSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardLoadBalancerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_forwardLoadBalancerSet.begin(); itr != m_forwardLoadBalancerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_inServiceInstanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InServiceInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inServiceInstanceCount, allocator);
    }

    if (m_launchConfigurationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIdSet.begin(); itr != m_loadBalancerIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_subnetIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_subnetIdSet.begin(); itr != m_subnetIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_terminationPolicySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TerminationPolicySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_terminationPolicySet.begin(); itr != m_terminationPolicySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_zoneSet.begin(); itr != m_zoneSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retryPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RetryPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_retryPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_inActivityStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InActivityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_inActivityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_serviceSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6AddressCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6AddressCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6AddressCount, allocator);
    }

    if (m_multiZoneSubnetPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MultiZoneSubnetPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_multiZoneSubnetPolicy.c_str(), allocator).Move(), allocator);
    }

}


string AutoScalingGroup::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void AutoScalingGroup::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool AutoScalingGroup::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

string AutoScalingGroup::GetAutoScalingGroupName() const
{
    return m_autoScalingGroupName;
}

void AutoScalingGroup::SetAutoScalingGroupName(const string& _autoScalingGroupName)
{
    m_autoScalingGroupName = _autoScalingGroupName;
    m_autoScalingGroupNameHasBeenSet = true;
}

bool AutoScalingGroup::AutoScalingGroupNameHasBeenSet() const
{
    return m_autoScalingGroupNameHasBeenSet;
}

string AutoScalingGroup::GetAutoScalingGroupStatus() const
{
    return m_autoScalingGroupStatus;
}

void AutoScalingGroup::SetAutoScalingGroupStatus(const string& _autoScalingGroupStatus)
{
    m_autoScalingGroupStatus = _autoScalingGroupStatus;
    m_autoScalingGroupStatusHasBeenSet = true;
}

bool AutoScalingGroup::AutoScalingGroupStatusHasBeenSet() const
{
    return m_autoScalingGroupStatusHasBeenSet;
}

string AutoScalingGroup::GetCreatedTime() const
{
    return m_createdTime;
}

void AutoScalingGroup::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AutoScalingGroup::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

int64_t AutoScalingGroup::GetDefaultCooldown() const
{
    return m_defaultCooldown;
}

void AutoScalingGroup::SetDefaultCooldown(const int64_t& _defaultCooldown)
{
    m_defaultCooldown = _defaultCooldown;
    m_defaultCooldownHasBeenSet = true;
}

bool AutoScalingGroup::DefaultCooldownHasBeenSet() const
{
    return m_defaultCooldownHasBeenSet;
}

int64_t AutoScalingGroup::GetDesiredCapacity() const
{
    return m_desiredCapacity;
}

void AutoScalingGroup::SetDesiredCapacity(const int64_t& _desiredCapacity)
{
    m_desiredCapacity = _desiredCapacity;
    m_desiredCapacityHasBeenSet = true;
}

bool AutoScalingGroup::DesiredCapacityHasBeenSet() const
{
    return m_desiredCapacityHasBeenSet;
}

string AutoScalingGroup::GetEnabledStatus() const
{
    return m_enabledStatus;
}

void AutoScalingGroup::SetEnabledStatus(const string& _enabledStatus)
{
    m_enabledStatus = _enabledStatus;
    m_enabledStatusHasBeenSet = true;
}

bool AutoScalingGroup::EnabledStatusHasBeenSet() const
{
    return m_enabledStatusHasBeenSet;
}

vector<ForwardLoadBalancer> AutoScalingGroup::GetForwardLoadBalancerSet() const
{
    return m_forwardLoadBalancerSet;
}

void AutoScalingGroup::SetForwardLoadBalancerSet(const vector<ForwardLoadBalancer>& _forwardLoadBalancerSet)
{
    m_forwardLoadBalancerSet = _forwardLoadBalancerSet;
    m_forwardLoadBalancerSetHasBeenSet = true;
}

bool AutoScalingGroup::ForwardLoadBalancerSetHasBeenSet() const
{
    return m_forwardLoadBalancerSetHasBeenSet;
}

int64_t AutoScalingGroup::GetInstanceCount() const
{
    return m_instanceCount;
}

void AutoScalingGroup::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool AutoScalingGroup::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t AutoScalingGroup::GetInServiceInstanceCount() const
{
    return m_inServiceInstanceCount;
}

void AutoScalingGroup::SetInServiceInstanceCount(const int64_t& _inServiceInstanceCount)
{
    m_inServiceInstanceCount = _inServiceInstanceCount;
    m_inServiceInstanceCountHasBeenSet = true;
}

bool AutoScalingGroup::InServiceInstanceCountHasBeenSet() const
{
    return m_inServiceInstanceCountHasBeenSet;
}

string AutoScalingGroup::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void AutoScalingGroup::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool AutoScalingGroup::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string AutoScalingGroup::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void AutoScalingGroup::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool AutoScalingGroup::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

vector<string> AutoScalingGroup::GetLoadBalancerIdSet() const
{
    return m_loadBalancerIdSet;
}

void AutoScalingGroup::SetLoadBalancerIdSet(const vector<string>& _loadBalancerIdSet)
{
    m_loadBalancerIdSet = _loadBalancerIdSet;
    m_loadBalancerIdSetHasBeenSet = true;
}

bool AutoScalingGroup::LoadBalancerIdSetHasBeenSet() const
{
    return m_loadBalancerIdSetHasBeenSet;
}

int64_t AutoScalingGroup::GetMaxSize() const
{
    return m_maxSize;
}

void AutoScalingGroup::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool AutoScalingGroup::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

int64_t AutoScalingGroup::GetMinSize() const
{
    return m_minSize;
}

void AutoScalingGroup::SetMinSize(const int64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool AutoScalingGroup::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

int64_t AutoScalingGroup::GetProjectId() const
{
    return m_projectId;
}

void AutoScalingGroup::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AutoScalingGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> AutoScalingGroup::GetSubnetIdSet() const
{
    return m_subnetIdSet;
}

void AutoScalingGroup::SetSubnetIdSet(const vector<string>& _subnetIdSet)
{
    m_subnetIdSet = _subnetIdSet;
    m_subnetIdSetHasBeenSet = true;
}

bool AutoScalingGroup::SubnetIdSetHasBeenSet() const
{
    return m_subnetIdSetHasBeenSet;
}

vector<string> AutoScalingGroup::GetTerminationPolicySet() const
{
    return m_terminationPolicySet;
}

void AutoScalingGroup::SetTerminationPolicySet(const vector<string>& _terminationPolicySet)
{
    m_terminationPolicySet = _terminationPolicySet;
    m_terminationPolicySetHasBeenSet = true;
}

bool AutoScalingGroup::TerminationPolicySetHasBeenSet() const
{
    return m_terminationPolicySetHasBeenSet;
}

string AutoScalingGroup::GetVpcId() const
{
    return m_vpcId;
}

void AutoScalingGroup::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AutoScalingGroup::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> AutoScalingGroup::GetZoneSet() const
{
    return m_zoneSet;
}

void AutoScalingGroup::SetZoneSet(const vector<string>& _zoneSet)
{
    m_zoneSet = _zoneSet;
    m_zoneSetHasBeenSet = true;
}

bool AutoScalingGroup::ZoneSetHasBeenSet() const
{
    return m_zoneSetHasBeenSet;
}

string AutoScalingGroup::GetRetryPolicy() const
{
    return m_retryPolicy;
}

void AutoScalingGroup::SetRetryPolicy(const string& _retryPolicy)
{
    m_retryPolicy = _retryPolicy;
    m_retryPolicyHasBeenSet = true;
}

bool AutoScalingGroup::RetryPolicyHasBeenSet() const
{
    return m_retryPolicyHasBeenSet;
}

string AutoScalingGroup::GetInActivityStatus() const
{
    return m_inActivityStatus;
}

void AutoScalingGroup::SetInActivityStatus(const string& _inActivityStatus)
{
    m_inActivityStatus = _inActivityStatus;
    m_inActivityStatusHasBeenSet = true;
}

bool AutoScalingGroup::InActivityStatusHasBeenSet() const
{
    return m_inActivityStatusHasBeenSet;
}

vector<Tag> AutoScalingGroup::GetTags() const
{
    return m_tags;
}

void AutoScalingGroup::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AutoScalingGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ServiceSettings AutoScalingGroup::GetServiceSettings() const
{
    return m_serviceSettings;
}

void AutoScalingGroup::SetServiceSettings(const ServiceSettings& _serviceSettings)
{
    m_serviceSettings = _serviceSettings;
    m_serviceSettingsHasBeenSet = true;
}

bool AutoScalingGroup::ServiceSettingsHasBeenSet() const
{
    return m_serviceSettingsHasBeenSet;
}

int64_t AutoScalingGroup::GetIpv6AddressCount() const
{
    return m_ipv6AddressCount;
}

void AutoScalingGroup::SetIpv6AddressCount(const int64_t& _ipv6AddressCount)
{
    m_ipv6AddressCount = _ipv6AddressCount;
    m_ipv6AddressCountHasBeenSet = true;
}

bool AutoScalingGroup::Ipv6AddressCountHasBeenSet() const
{
    return m_ipv6AddressCountHasBeenSet;
}

string AutoScalingGroup::GetMultiZoneSubnetPolicy() const
{
    return m_multiZoneSubnetPolicy;
}

void AutoScalingGroup::SetMultiZoneSubnetPolicy(const string& _multiZoneSubnetPolicy)
{
    m_multiZoneSubnetPolicy = _multiZoneSubnetPolicy;
    m_multiZoneSubnetPolicyHasBeenSet = true;
}

bool AutoScalingGroup::MultiZoneSubnetPolicyHasBeenSet() const
{
    return m_multiZoneSubnetPolicyHasBeenSet;
}

