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

#include <tencentcloud/tsf/v20180326/model/MsInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MsInstance::MsInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_instanceAvailableStatusHasBeenSet(false),
    m_serviceInstanceStatusHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_healthCheckUrlHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_applicationPackageVersionHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_serviceStatusHasBeenSet(false),
    m_registrationTimeHasBeenSet(false),
    m_lastHeartbeatTimeHasBeenSet(false),
    m_registrationIdHasBeenSet(false),
    m_hiddenStatusHasBeenSet(false),
    m_metaJsonHasBeenSet(false)
{
}

CoreInternalOutcome MsInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceAvailableStatus") && !value["InstanceAvailableStatus"].IsNull())
    {
        if (!value["InstanceAvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.InstanceAvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAvailableStatus = string(value["InstanceAvailableStatus"].GetString());
        m_instanceAvailableStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceInstanceStatus") && !value["ServiceInstanceStatus"].IsNull())
    {
        if (!value["ServiceInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ServiceInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceInstanceStatus = string(value["ServiceInstanceStatus"].GetString());
        m_serviceInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckUrl") && !value["HealthCheckUrl"].IsNull())
    {
        if (!value["HealthCheckUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.HealthCheckUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckUrl = string(value["HealthCheckUrl"].GetString());
        m_healthCheckUrlHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationPackageVersion") && !value["ApplicationPackageVersion"].IsNull())
    {
        if (!value["ApplicationPackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ApplicationPackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationPackageVersion = string(value["ApplicationPackageVersion"].GetString());
        m_applicationPackageVersionHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceStatus") && !value["ServiceStatus"].IsNull())
    {
        if (!value["ServiceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.ServiceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceStatus = string(value["ServiceStatus"].GetString());
        m_serviceStatusHasBeenSet = true;
    }

    if (value.HasMember("RegistrationTime") && !value["RegistrationTime"].IsNull())
    {
        if (!value["RegistrationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.RegistrationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registrationTime = value["RegistrationTime"].GetInt64();
        m_registrationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastHeartbeatTime") && !value["LastHeartbeatTime"].IsNull())
    {
        if (!value["LastHeartbeatTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.LastHeartbeatTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastHeartbeatTime = value["LastHeartbeatTime"].GetInt64();
        m_lastHeartbeatTimeHasBeenSet = true;
    }

    if (value.HasMember("RegistrationId") && !value["RegistrationId"].IsNull())
    {
        if (!value["RegistrationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.RegistrationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrationId = string(value["RegistrationId"].GetString());
        m_registrationIdHasBeenSet = true;
    }

    if (value.HasMember("HiddenStatus") && !value["HiddenStatus"].IsNull())
    {
        if (!value["HiddenStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.HiddenStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiddenStatus = string(value["HiddenStatus"].GetString());
        m_hiddenStatusHasBeenSet = true;
    }

    if (value.HasMember("MetaJson") && !value["MetaJson"].IsNull())
    {
        if (!value["MetaJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsInstance.MetaJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaJson = string(value["MetaJson"].GetString());
        m_metaJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAvailableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAvailableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceAvailableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationPackageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationPackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationPackageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_registrationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registrationTime, allocator);
    }

    if (m_lastHeartbeatTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastHeartbeatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastHeartbeatTime, allocator);
    }

    if (m_registrationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrationId.c_str(), allocator).Move(), allocator);
    }

    if (m_hiddenStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiddenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiddenStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_metaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaJson.c_str(), allocator).Move(), allocator);
    }

}


string MsInstance::GetInstanceId() const
{
    return m_instanceId;
}

void MsInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MsInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MsInstance::GetInstanceName() const
{
    return m_instanceName;
}

void MsInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MsInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string MsInstance::GetPort() const
{
    return m_port;
}

void MsInstance::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool MsInstance::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string MsInstance::GetLanIp() const
{
    return m_lanIp;
}

void MsInstance::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool MsInstance::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string MsInstance::GetWanIp() const
{
    return m_wanIp;
}

void MsInstance::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool MsInstance::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string MsInstance::GetInstanceAvailableStatus() const
{
    return m_instanceAvailableStatus;
}

void MsInstance::SetInstanceAvailableStatus(const string& _instanceAvailableStatus)
{
    m_instanceAvailableStatus = _instanceAvailableStatus;
    m_instanceAvailableStatusHasBeenSet = true;
}

bool MsInstance::InstanceAvailableStatusHasBeenSet() const
{
    return m_instanceAvailableStatusHasBeenSet;
}

string MsInstance::GetServiceInstanceStatus() const
{
    return m_serviceInstanceStatus;
}

void MsInstance::SetServiceInstanceStatus(const string& _serviceInstanceStatus)
{
    m_serviceInstanceStatus = _serviceInstanceStatus;
    m_serviceInstanceStatusHasBeenSet = true;
}

bool MsInstance::ServiceInstanceStatusHasBeenSet() const
{
    return m_serviceInstanceStatusHasBeenSet;
}

string MsInstance::GetApplicationId() const
{
    return m_applicationId;
}

void MsInstance::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool MsInstance::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string MsInstance::GetApplicationName() const
{
    return m_applicationName;
}

void MsInstance::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool MsInstance::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string MsInstance::GetClusterId() const
{
    return m_clusterId;
}

void MsInstance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool MsInstance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string MsInstance::GetClusterName() const
{
    return m_clusterName;
}

void MsInstance::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool MsInstance::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string MsInstance::GetNamespaceId() const
{
    return m_namespaceId;
}

void MsInstance::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool MsInstance::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string MsInstance::GetNamespaceName() const
{
    return m_namespaceName;
}

void MsInstance::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool MsInstance::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string MsInstance::GetGroupId() const
{
    return m_groupId;
}

void MsInstance::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool MsInstance::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string MsInstance::GetGroupName() const
{
    return m_groupName;
}

void MsInstance::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool MsInstance::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string MsInstance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void MsInstance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool MsInstance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string MsInstance::GetHealthCheckUrl() const
{
    return m_healthCheckUrl;
}

void MsInstance::SetHealthCheckUrl(const string& _healthCheckUrl)
{
    m_healthCheckUrl = _healthCheckUrl;
    m_healthCheckUrlHasBeenSet = true;
}

bool MsInstance::HealthCheckUrlHasBeenSet() const
{
    return m_healthCheckUrlHasBeenSet;
}

string MsInstance::GetClusterType() const
{
    return m_clusterType;
}

void MsInstance::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool MsInstance::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string MsInstance::GetApplicationPackageVersion() const
{
    return m_applicationPackageVersion;
}

void MsInstance::SetApplicationPackageVersion(const string& _applicationPackageVersion)
{
    m_applicationPackageVersion = _applicationPackageVersion;
    m_applicationPackageVersionHasBeenSet = true;
}

bool MsInstance::ApplicationPackageVersionHasBeenSet() const
{
    return m_applicationPackageVersionHasBeenSet;
}

string MsInstance::GetApplicationType() const
{
    return m_applicationType;
}

void MsInstance::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool MsInstance::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string MsInstance::GetServiceStatus() const
{
    return m_serviceStatus;
}

void MsInstance::SetServiceStatus(const string& _serviceStatus)
{
    m_serviceStatus = _serviceStatus;
    m_serviceStatusHasBeenSet = true;
}

bool MsInstance::ServiceStatusHasBeenSet() const
{
    return m_serviceStatusHasBeenSet;
}

int64_t MsInstance::GetRegistrationTime() const
{
    return m_registrationTime;
}

void MsInstance::SetRegistrationTime(const int64_t& _registrationTime)
{
    m_registrationTime = _registrationTime;
    m_registrationTimeHasBeenSet = true;
}

bool MsInstance::RegistrationTimeHasBeenSet() const
{
    return m_registrationTimeHasBeenSet;
}

int64_t MsInstance::GetLastHeartbeatTime() const
{
    return m_lastHeartbeatTime;
}

void MsInstance::SetLastHeartbeatTime(const int64_t& _lastHeartbeatTime)
{
    m_lastHeartbeatTime = _lastHeartbeatTime;
    m_lastHeartbeatTimeHasBeenSet = true;
}

bool MsInstance::LastHeartbeatTimeHasBeenSet() const
{
    return m_lastHeartbeatTimeHasBeenSet;
}

string MsInstance::GetRegistrationId() const
{
    return m_registrationId;
}

void MsInstance::SetRegistrationId(const string& _registrationId)
{
    m_registrationId = _registrationId;
    m_registrationIdHasBeenSet = true;
}

bool MsInstance::RegistrationIdHasBeenSet() const
{
    return m_registrationIdHasBeenSet;
}

string MsInstance::GetHiddenStatus() const
{
    return m_hiddenStatus;
}

void MsInstance::SetHiddenStatus(const string& _hiddenStatus)
{
    m_hiddenStatus = _hiddenStatus;
    m_hiddenStatusHasBeenSet = true;
}

bool MsInstance::HiddenStatusHasBeenSet() const
{
    return m_hiddenStatusHasBeenSet;
}

string MsInstance::GetMetaJson() const
{
    return m_metaJson;
}

void MsInstance::SetMetaJson(const string& _metaJson)
{
    m_metaJson = _metaJson;
    m_metaJsonHasBeenSet = true;
}

bool MsInstance::MetaJsonHasBeenSet() const
{
    return m_metaJsonHasBeenSet;
}

