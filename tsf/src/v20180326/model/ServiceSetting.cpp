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

#include <tencentcloud/tsf/v20180326/model/ServiceSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ServiceSetting::ServiceSetting() :
    m_accessTypeHasBeenSet(false),
    m_protocolPortsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_disableServiceHasBeenSet(false),
    m_headlessServiceHasBeenSet(false),
    m_allowDeleteServiceHasBeenSet(false),
    m_openSessionAffinityHasBeenSet(false),
    m_sessionAffinityTimeoutSecondsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_externalTrafficStrategyHasBeenSet(false),
    m_externalTrafficPolicyHasBeenSet(false),
    m_loadBalancerProvisionerHasBeenSet(false),
    m_loadBalancingTypeHasBeenSet(false),
    m_clusterIpHasBeenSet(false),
    m_disableServiceIntHasBeenSet(false),
    m_openSessionAffinityIntHasBeenSet(false),
    m_headlessServiceIntHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_loadBalancingIpHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_existingLoadBalancerIdHasBeenSet(false)
{
}

CoreInternalOutcome ServiceSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPorts") && !value["ProtocolPorts"].IsNull())
    {
        if (!value["ProtocolPorts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.ProtocolPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtocolPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtocolPort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocolPorts.push_back(item);
        }
        m_protocolPortsHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DisableService") && !value["DisableService"].IsNull())
    {
        if (!value["DisableService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.DisableService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableService = value["DisableService"].GetBool();
        m_disableServiceHasBeenSet = true;
    }

    if (value.HasMember("HeadlessService") && !value["HeadlessService"].IsNull())
    {
        if (!value["HeadlessService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.HeadlessService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headlessService = value["HeadlessService"].GetBool();
        m_headlessServiceHasBeenSet = true;
    }

    if (value.HasMember("AllowDeleteService") && !value["AllowDeleteService"].IsNull())
    {
        if (!value["AllowDeleteService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.AllowDeleteService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowDeleteService = value["AllowDeleteService"].GetBool();
        m_allowDeleteServiceHasBeenSet = true;
    }

    if (value.HasMember("OpenSessionAffinity") && !value["OpenSessionAffinity"].IsNull())
    {
        if (!value["OpenSessionAffinity"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.OpenSessionAffinity` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openSessionAffinity = value["OpenSessionAffinity"].GetBool();
        m_openSessionAffinityHasBeenSet = true;
    }

    if (value.HasMember("SessionAffinityTimeoutSeconds") && !value["SessionAffinityTimeoutSeconds"].IsNull())
    {
        if (!value["SessionAffinityTimeoutSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.SessionAffinityTimeoutSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionAffinityTimeoutSeconds = value["SessionAffinityTimeoutSeconds"].GetInt64();
        m_sessionAffinityTimeoutSecondsHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ExternalTrafficStrategy") && !value["ExternalTrafficStrategy"].IsNull())
    {
        if (!value["ExternalTrafficStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.ExternalTrafficStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalTrafficStrategy = string(value["ExternalTrafficStrategy"].GetString());
        m_externalTrafficStrategyHasBeenSet = true;
    }

    if (value.HasMember("ExternalTrafficPolicy") && !value["ExternalTrafficPolicy"].IsNull())
    {
        if (!value["ExternalTrafficPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.ExternalTrafficPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalTrafficPolicy = string(value["ExternalTrafficPolicy"].GetString());
        m_externalTrafficPolicyHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerProvisioner") && !value["LoadBalancerProvisioner"].IsNull())
    {
        if (!value["LoadBalancerProvisioner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.LoadBalancerProvisioner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerProvisioner = string(value["LoadBalancerProvisioner"].GetString());
        m_loadBalancerProvisionerHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancingType") && !value["LoadBalancingType"].IsNull())
    {
        if (!value["LoadBalancingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.LoadBalancingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingType = string(value["LoadBalancingType"].GetString());
        m_loadBalancingTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterIp") && !value["ClusterIp"].IsNull())
    {
        if (!value["ClusterIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.ClusterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterIp = string(value["ClusterIp"].GetString());
        m_clusterIpHasBeenSet = true;
    }

    if (value.HasMember("DisableServiceInt") && !value["DisableServiceInt"].IsNull())
    {
        if (!value["DisableServiceInt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.DisableServiceInt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableServiceInt = value["DisableServiceInt"].GetUint64();
        m_disableServiceIntHasBeenSet = true;
    }

    if (value.HasMember("OpenSessionAffinityInt") && !value["OpenSessionAffinityInt"].IsNull())
    {
        if (!value["OpenSessionAffinityInt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.OpenSessionAffinityInt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openSessionAffinityInt = value["OpenSessionAffinityInt"].GetUint64();
        m_openSessionAffinityIntHasBeenSet = true;
    }

    if (value.HasMember("HeadlessServiceInt") && !value["HeadlessServiceInt"].IsNull())
    {
        if (!value["HeadlessServiceInt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.HeadlessServiceInt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_headlessServiceInt = value["HeadlessServiceInt"].GetUint64();
        m_headlessServiceIntHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancingIp") && !value["LoadBalancingIp"].IsNull())
    {
        if (!value["LoadBalancingIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.LoadBalancingIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancingIp = string(value["LoadBalancingIp"].GetString());
        m_loadBalancingIpHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("ExistingLoadBalancerId") && !value["ExistingLoadBalancerId"].IsNull())
    {
        if (!value["ExistingLoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceSetting.ExistingLoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_existingLoadBalancerId = string(value["ExistingLoadBalancerId"].GetString());
        m_existingLoadBalancerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_protocolPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPorts.begin(); itr != m_protocolPorts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_disableServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableService, allocator);
    }

    if (m_headlessServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadlessService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headlessService, allocator);
    }

    if (m_allowDeleteServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDeleteService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowDeleteService, allocator);
    }

    if (m_openSessionAffinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSessionAffinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openSessionAffinity, allocator);
    }

    if (m_sessionAffinityTimeoutSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionAffinityTimeoutSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionAffinityTimeoutSeconds, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_externalTrafficStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTrafficStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalTrafficStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_externalTrafficPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTrafficPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalTrafficPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerProvisionerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerProvisioner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerProvisioner.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancingType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_disableServiceIntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableServiceInt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableServiceInt, allocator);
    }

    if (m_openSessionAffinityIntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSessionAffinityInt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openSessionAffinityInt, allocator);
    }

    if (m_headlessServiceIntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadlessServiceInt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headlessServiceInt, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancingIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancingIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancingIp.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_existingLoadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExistingLoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_existingLoadBalancerId.c_str(), allocator).Move(), allocator);
    }

}


int64_t ServiceSetting::GetAccessType() const
{
    return m_accessType;
}

void ServiceSetting::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ServiceSetting::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<ProtocolPort> ServiceSetting::GetProtocolPorts() const
{
    return m_protocolPorts;
}

void ServiceSetting::SetProtocolPorts(const vector<ProtocolPort>& _protocolPorts)
{
    m_protocolPorts = _protocolPorts;
    m_protocolPortsHasBeenSet = true;
}

bool ServiceSetting::ProtocolPortsHasBeenSet() const
{
    return m_protocolPortsHasBeenSet;
}

string ServiceSetting::GetSubnetId() const
{
    return m_subnetId;
}

void ServiceSetting::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ServiceSetting::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool ServiceSetting::GetDisableService() const
{
    return m_disableService;
}

void ServiceSetting::SetDisableService(const bool& _disableService)
{
    m_disableService = _disableService;
    m_disableServiceHasBeenSet = true;
}

bool ServiceSetting::DisableServiceHasBeenSet() const
{
    return m_disableServiceHasBeenSet;
}

bool ServiceSetting::GetHeadlessService() const
{
    return m_headlessService;
}

void ServiceSetting::SetHeadlessService(const bool& _headlessService)
{
    m_headlessService = _headlessService;
    m_headlessServiceHasBeenSet = true;
}

bool ServiceSetting::HeadlessServiceHasBeenSet() const
{
    return m_headlessServiceHasBeenSet;
}

bool ServiceSetting::GetAllowDeleteService() const
{
    return m_allowDeleteService;
}

void ServiceSetting::SetAllowDeleteService(const bool& _allowDeleteService)
{
    m_allowDeleteService = _allowDeleteService;
    m_allowDeleteServiceHasBeenSet = true;
}

bool ServiceSetting::AllowDeleteServiceHasBeenSet() const
{
    return m_allowDeleteServiceHasBeenSet;
}

bool ServiceSetting::GetOpenSessionAffinity() const
{
    return m_openSessionAffinity;
}

void ServiceSetting::SetOpenSessionAffinity(const bool& _openSessionAffinity)
{
    m_openSessionAffinity = _openSessionAffinity;
    m_openSessionAffinityHasBeenSet = true;
}

bool ServiceSetting::OpenSessionAffinityHasBeenSet() const
{
    return m_openSessionAffinityHasBeenSet;
}

int64_t ServiceSetting::GetSessionAffinityTimeoutSeconds() const
{
    return m_sessionAffinityTimeoutSeconds;
}

void ServiceSetting::SetSessionAffinityTimeoutSeconds(const int64_t& _sessionAffinityTimeoutSeconds)
{
    m_sessionAffinityTimeoutSeconds = _sessionAffinityTimeoutSeconds;
    m_sessionAffinityTimeoutSecondsHasBeenSet = true;
}

bool ServiceSetting::SessionAffinityTimeoutSecondsHasBeenSet() const
{
    return m_sessionAffinityTimeoutSecondsHasBeenSet;
}

string ServiceSetting::GetServiceName() const
{
    return m_serviceName;
}

void ServiceSetting::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceSetting::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ServiceSetting::GetExternalTrafficStrategy() const
{
    return m_externalTrafficStrategy;
}

void ServiceSetting::SetExternalTrafficStrategy(const string& _externalTrafficStrategy)
{
    m_externalTrafficStrategy = _externalTrafficStrategy;
    m_externalTrafficStrategyHasBeenSet = true;
}

bool ServiceSetting::ExternalTrafficStrategyHasBeenSet() const
{
    return m_externalTrafficStrategyHasBeenSet;
}

string ServiceSetting::GetExternalTrafficPolicy() const
{
    return m_externalTrafficPolicy;
}

void ServiceSetting::SetExternalTrafficPolicy(const string& _externalTrafficPolicy)
{
    m_externalTrafficPolicy = _externalTrafficPolicy;
    m_externalTrafficPolicyHasBeenSet = true;
}

bool ServiceSetting::ExternalTrafficPolicyHasBeenSet() const
{
    return m_externalTrafficPolicyHasBeenSet;
}

string ServiceSetting::GetLoadBalancerProvisioner() const
{
    return m_loadBalancerProvisioner;
}

void ServiceSetting::SetLoadBalancerProvisioner(const string& _loadBalancerProvisioner)
{
    m_loadBalancerProvisioner = _loadBalancerProvisioner;
    m_loadBalancerProvisionerHasBeenSet = true;
}

bool ServiceSetting::LoadBalancerProvisionerHasBeenSet() const
{
    return m_loadBalancerProvisionerHasBeenSet;
}

string ServiceSetting::GetLoadBalancingType() const
{
    return m_loadBalancingType;
}

void ServiceSetting::SetLoadBalancingType(const string& _loadBalancingType)
{
    m_loadBalancingType = _loadBalancingType;
    m_loadBalancingTypeHasBeenSet = true;
}

bool ServiceSetting::LoadBalancingTypeHasBeenSet() const
{
    return m_loadBalancingTypeHasBeenSet;
}

string ServiceSetting::GetClusterIp() const
{
    return m_clusterIp;
}

void ServiceSetting::SetClusterIp(const string& _clusterIp)
{
    m_clusterIp = _clusterIp;
    m_clusterIpHasBeenSet = true;
}

bool ServiceSetting::ClusterIpHasBeenSet() const
{
    return m_clusterIpHasBeenSet;
}

uint64_t ServiceSetting::GetDisableServiceInt() const
{
    return m_disableServiceInt;
}

void ServiceSetting::SetDisableServiceInt(const uint64_t& _disableServiceInt)
{
    m_disableServiceInt = _disableServiceInt;
    m_disableServiceIntHasBeenSet = true;
}

bool ServiceSetting::DisableServiceIntHasBeenSet() const
{
    return m_disableServiceIntHasBeenSet;
}

uint64_t ServiceSetting::GetOpenSessionAffinityInt() const
{
    return m_openSessionAffinityInt;
}

void ServiceSetting::SetOpenSessionAffinityInt(const uint64_t& _openSessionAffinityInt)
{
    m_openSessionAffinityInt = _openSessionAffinityInt;
    m_openSessionAffinityIntHasBeenSet = true;
}

bool ServiceSetting::OpenSessionAffinityIntHasBeenSet() const
{
    return m_openSessionAffinityIntHasBeenSet;
}

uint64_t ServiceSetting::GetHeadlessServiceInt() const
{
    return m_headlessServiceInt;
}

void ServiceSetting::SetHeadlessServiceInt(const uint64_t& _headlessServiceInt)
{
    m_headlessServiceInt = _headlessServiceInt;
    m_headlessServiceIntHasBeenSet = true;
}

bool ServiceSetting::HeadlessServiceIntHasBeenSet() const
{
    return m_headlessServiceIntHasBeenSet;
}

string ServiceSetting::GetName() const
{
    return m_name;
}

void ServiceSetting::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceSetting::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ServiceSetting::GetVpcId() const
{
    return m_vpcId;
}

void ServiceSetting::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ServiceSetting::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ServiceSetting::GetLoadBalancingIp() const
{
    return m_loadBalancingIp;
}

void ServiceSetting::SetLoadBalancingIp(const string& _loadBalancingIp)
{
    m_loadBalancingIp = _loadBalancingIp;
    m_loadBalancingIpHasBeenSet = true;
}

bool ServiceSetting::LoadBalancingIpHasBeenSet() const
{
    return m_loadBalancingIpHasBeenSet;
}

string ServiceSetting::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ServiceSetting::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ServiceSetting::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ServiceSetting::GetExistingLoadBalancerId() const
{
    return m_existingLoadBalancerId;
}

void ServiceSetting::SetExistingLoadBalancerId(const string& _existingLoadBalancerId)
{
    m_existingLoadBalancerId = _existingLoadBalancerId;
    m_existingLoadBalancerIdHasBeenSet = true;
}

bool ServiceSetting::ExistingLoadBalancerIdHasBeenSet() const
{
    return m_existingLoadBalancerIdHasBeenSet;
}

