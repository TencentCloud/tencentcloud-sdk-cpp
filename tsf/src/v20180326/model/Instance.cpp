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

#include <tencentcloud/tsf/v20180326/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_lanIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_instanceDescHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceAvailableStatusHasBeenSet(false),
    m_serviceInstanceStatusHasBeenSet(false),
    m_countInTsfHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_instanceCreatedTimeHasBeenSet(false),
    m_instanceExpiredTimeHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceTotalCpuHasBeenSet(false),
    m_instanceTotalMemHasBeenSet(false),
    m_instanceUsedCpuHasBeenSet(false),
    m_instanceUsedMemHasBeenSet(false),
    m_instanceLimitCpuHasBeenSet(false),
    m_instanceLimitMemHasBeenSet(false),
    m_instancePkgVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_restrictStateHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operationStateHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_instanceZoneIdHasBeenSet(false),
    m_instanceImportModeHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationResourceTypeHasBeenSet(false),
    m_serviceSidecarStatusHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_nodeInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("InstanceDesc") && !value["InstanceDesc"].IsNull())
    {
        if (!value["InstanceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDesc = string(value["InstanceDesc"].GetString());
        m_instanceDescHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceAvailableStatus") && !value["InstanceAvailableStatus"].IsNull())
    {
        if (!value["InstanceAvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceAvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceAvailableStatus = string(value["InstanceAvailableStatus"].GetString());
        m_instanceAvailableStatusHasBeenSet = true;
    }

    if (value.HasMember("ServiceInstanceStatus") && !value["ServiceInstanceStatus"].IsNull())
    {
        if (!value["ServiceInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ServiceInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceInstanceStatus = string(value["ServiceInstanceStatus"].GetString());
        m_serviceInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("CountInTsf") && !value["CountInTsf"].IsNull())
    {
        if (!value["CountInTsf"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CountInTsf` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_countInTsf = value["CountInTsf"].GetInt64();
        m_countInTsfHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreatedTime") && !value["InstanceCreatedTime"].IsNull())
    {
        if (!value["InstanceCreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceCreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreatedTime = string(value["InstanceCreatedTime"].GetString());
        m_instanceCreatedTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceExpiredTime") && !value["InstanceExpiredTime"].IsNull())
    {
        if (!value["InstanceExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceExpiredTime = string(value["InstanceExpiredTime"].GetString());
        m_instanceExpiredTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalCpu") && !value["InstanceTotalCpu"].IsNull())
    {
        if (!value["InstanceTotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceTotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTotalCpu = value["InstanceTotalCpu"].GetDouble();
        m_instanceTotalCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalMem") && !value["InstanceTotalMem"].IsNull())
    {
        if (!value["InstanceTotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceTotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTotalMem = value["InstanceTotalMem"].GetDouble();
        m_instanceTotalMemHasBeenSet = true;
    }

    if (value.HasMember("InstanceUsedCpu") && !value["InstanceUsedCpu"].IsNull())
    {
        if (!value["InstanceUsedCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceUsedCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUsedCpu = value["InstanceUsedCpu"].GetDouble();
        m_instanceUsedCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceUsedMem") && !value["InstanceUsedMem"].IsNull())
    {
        if (!value["InstanceUsedMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceUsedMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUsedMem = value["InstanceUsedMem"].GetDouble();
        m_instanceUsedMemHasBeenSet = true;
    }

    if (value.HasMember("InstanceLimitCpu") && !value["InstanceLimitCpu"].IsNull())
    {
        if (!value["InstanceLimitCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceLimitCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLimitCpu = value["InstanceLimitCpu"].GetDouble();
        m_instanceLimitCpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceLimitMem") && !value["InstanceLimitMem"].IsNull())
    {
        if (!value["InstanceLimitMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceLimitMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLimitMem = value["InstanceLimitMem"].GetDouble();
        m_instanceLimitMemHasBeenSet = true;
    }

    if (value.HasMember("InstancePkgVersion") && !value["InstancePkgVersion"].IsNull())
    {
        if (!value["InstancePkgVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstancePkgVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instancePkgVersion = string(value["InstancePkgVersion"].GetString());
        m_instancePkgVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("RestrictState") && !value["RestrictState"].IsNull())
    {
        if (!value["RestrictState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.RestrictState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restrictState = string(value["RestrictState"].GetString());
        m_restrictStateHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperationState") && !value["OperationState"].IsNull())
    {
        if (!value["OperationState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.OperationState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operationState = value["OperationState"].GetInt64();
        m_operationStateHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceZoneId") && !value["InstanceZoneId"].IsNull())
    {
        if (!value["InstanceZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceZoneId = string(value["InstanceZoneId"].GetString());
        m_instanceZoneIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceImportMode") && !value["InstanceImportMode"].IsNull())
    {
        if (!value["InstanceImportMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceImportMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceImportMode = string(value["InstanceImportMode"].GetString());
        m_instanceImportModeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationResourceType") && !value["ApplicationResourceType"].IsNull())
    {
        if (!value["ApplicationResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ApplicationResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationResourceType = string(value["ApplicationResourceType"].GetString());
        m_applicationResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceSidecarStatus") && !value["ServiceSidecarStatus"].IsNull())
    {
        if (!value["ServiceSidecarStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ServiceSidecarStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceSidecarStatus = string(value["ServiceSidecarStatus"].GetString());
        m_serviceSidecarStatusHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("NodeInstanceId") && !value["NodeInstanceId"].IsNull())
    {
        if (!value["NodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.NodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInstanceId = string(value["NodeInstanceId"].GetString());
        m_nodeInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDesc.c_str(), allocator).Move(), allocator);
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

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
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

    if (m_countInTsfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountInTsf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countInTsf, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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

    if (m_instanceCreatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceCreatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceExpiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTotalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceTotalCpu, allocator);
    }

    if (m_instanceTotalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceTotalMem, allocator);
    }

    if (m_instanceUsedCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUsedCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceUsedCpu, allocator);
    }

    if (m_instanceUsedMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUsedMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceUsedMem, allocator);
    }

    if (m_instanceLimitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceLimitCpu, allocator);
    }

    if (m_instanceLimitMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLimitMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceLimitMem, allocator);
    }

    if (m_instancePkgVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePkgVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instancePkgVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_restrictStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestrictState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restrictState.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operationStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationState, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceImportModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceImportMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceImportMode.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSidecarStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSidecarStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceSidecarStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetLanIp() const
{
    return m_lanIp;
}

void Instance::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool Instance::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

string Instance::GetWanIp() const
{
    return m_wanIp;
}

void Instance::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool Instance::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string Instance::GetInstanceDesc() const
{
    return m_instanceDesc;
}

void Instance::SetInstanceDesc(const string& _instanceDesc)
{
    m_instanceDesc = _instanceDesc;
    m_instanceDescHasBeenSet = true;
}

bool Instance::InstanceDescHasBeenSet() const
{
    return m_instanceDescHasBeenSet;
}

string Instance::GetClusterId() const
{
    return m_clusterId;
}

void Instance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Instance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Instance::GetClusterName() const
{
    return m_clusterName;
}

void Instance::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Instance::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Instance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void Instance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool Instance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string Instance::GetInstanceAvailableStatus() const
{
    return m_instanceAvailableStatus;
}

void Instance::SetInstanceAvailableStatus(const string& _instanceAvailableStatus)
{
    m_instanceAvailableStatus = _instanceAvailableStatus;
    m_instanceAvailableStatusHasBeenSet = true;
}

bool Instance::InstanceAvailableStatusHasBeenSet() const
{
    return m_instanceAvailableStatusHasBeenSet;
}

string Instance::GetServiceInstanceStatus() const
{
    return m_serviceInstanceStatus;
}

void Instance::SetServiceInstanceStatus(const string& _serviceInstanceStatus)
{
    m_serviceInstanceStatus = _serviceInstanceStatus;
    m_serviceInstanceStatusHasBeenSet = true;
}

bool Instance::ServiceInstanceStatusHasBeenSet() const
{
    return m_serviceInstanceStatusHasBeenSet;
}

int64_t Instance::GetCountInTsf() const
{
    return m_countInTsf;
}

void Instance::SetCountInTsf(const int64_t& _countInTsf)
{
    m_countInTsf = _countInTsf;
    m_countInTsfHasBeenSet = true;
}

bool Instance::CountInTsfHasBeenSet() const
{
    return m_countInTsfHasBeenSet;
}

string Instance::GetGroupId() const
{
    return m_groupId;
}

void Instance::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Instance::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Instance::GetApplicationId() const
{
    return m_applicationId;
}

void Instance::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Instance::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Instance::GetApplicationName() const
{
    return m_applicationName;
}

void Instance::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool Instance::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string Instance::GetInstanceCreatedTime() const
{
    return m_instanceCreatedTime;
}

void Instance::SetInstanceCreatedTime(const string& _instanceCreatedTime)
{
    m_instanceCreatedTime = _instanceCreatedTime;
    m_instanceCreatedTimeHasBeenSet = true;
}

bool Instance::InstanceCreatedTimeHasBeenSet() const
{
    return m_instanceCreatedTimeHasBeenSet;
}

string Instance::GetInstanceExpiredTime() const
{
    return m_instanceExpiredTime;
}

void Instance::SetInstanceExpiredTime(const string& _instanceExpiredTime)
{
    m_instanceExpiredTime = _instanceExpiredTime;
    m_instanceExpiredTimeHasBeenSet = true;
}

bool Instance::InstanceExpiredTimeHasBeenSet() const
{
    return m_instanceExpiredTimeHasBeenSet;
}

string Instance::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void Instance::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool Instance::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

double Instance::GetInstanceTotalCpu() const
{
    return m_instanceTotalCpu;
}

void Instance::SetInstanceTotalCpu(const double& _instanceTotalCpu)
{
    m_instanceTotalCpu = _instanceTotalCpu;
    m_instanceTotalCpuHasBeenSet = true;
}

bool Instance::InstanceTotalCpuHasBeenSet() const
{
    return m_instanceTotalCpuHasBeenSet;
}

double Instance::GetInstanceTotalMem() const
{
    return m_instanceTotalMem;
}

void Instance::SetInstanceTotalMem(const double& _instanceTotalMem)
{
    m_instanceTotalMem = _instanceTotalMem;
    m_instanceTotalMemHasBeenSet = true;
}

bool Instance::InstanceTotalMemHasBeenSet() const
{
    return m_instanceTotalMemHasBeenSet;
}

double Instance::GetInstanceUsedCpu() const
{
    return m_instanceUsedCpu;
}

void Instance::SetInstanceUsedCpu(const double& _instanceUsedCpu)
{
    m_instanceUsedCpu = _instanceUsedCpu;
    m_instanceUsedCpuHasBeenSet = true;
}

bool Instance::InstanceUsedCpuHasBeenSet() const
{
    return m_instanceUsedCpuHasBeenSet;
}

double Instance::GetInstanceUsedMem() const
{
    return m_instanceUsedMem;
}

void Instance::SetInstanceUsedMem(const double& _instanceUsedMem)
{
    m_instanceUsedMem = _instanceUsedMem;
    m_instanceUsedMemHasBeenSet = true;
}

bool Instance::InstanceUsedMemHasBeenSet() const
{
    return m_instanceUsedMemHasBeenSet;
}

double Instance::GetInstanceLimitCpu() const
{
    return m_instanceLimitCpu;
}

void Instance::SetInstanceLimitCpu(const double& _instanceLimitCpu)
{
    m_instanceLimitCpu = _instanceLimitCpu;
    m_instanceLimitCpuHasBeenSet = true;
}

bool Instance::InstanceLimitCpuHasBeenSet() const
{
    return m_instanceLimitCpuHasBeenSet;
}

double Instance::GetInstanceLimitMem() const
{
    return m_instanceLimitMem;
}

void Instance::SetInstanceLimitMem(const double& _instanceLimitMem)
{
    m_instanceLimitMem = _instanceLimitMem;
    m_instanceLimitMemHasBeenSet = true;
}

bool Instance::InstanceLimitMemHasBeenSet() const
{
    return m_instanceLimitMemHasBeenSet;
}

string Instance::GetInstancePkgVersion() const
{
    return m_instancePkgVersion;
}

void Instance::SetInstancePkgVersion(const string& _instancePkgVersion)
{
    m_instancePkgVersion = _instancePkgVersion;
    m_instancePkgVersionHasBeenSet = true;
}

bool Instance::InstancePkgVersionHasBeenSet() const
{
    return m_instancePkgVersionHasBeenSet;
}

string Instance::GetClusterType() const
{
    return m_clusterType;
}

void Instance::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Instance::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string Instance::GetRestrictState() const
{
    return m_restrictState;
}

void Instance::SetRestrictState(const string& _restrictState)
{
    m_restrictState = _restrictState;
    m_restrictStateHasBeenSet = true;
}

bool Instance::RestrictStateHasBeenSet() const
{
    return m_restrictStateHasBeenSet;
}

string Instance::GetUpdateTime() const
{
    return m_updateTime;
}

void Instance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Instance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t Instance::GetOperationState() const
{
    return m_operationState;
}

void Instance::SetOperationState(const int64_t& _operationState)
{
    m_operationState = _operationState;
    m_operationStateHasBeenSet = true;
}

bool Instance::OperationStateHasBeenSet() const
{
    return m_operationStateHasBeenSet;
}

string Instance::GetNamespaceId() const
{
    return m_namespaceId;
}

void Instance::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool Instance::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string Instance::GetInstanceZoneId() const
{
    return m_instanceZoneId;
}

void Instance::SetInstanceZoneId(const string& _instanceZoneId)
{
    m_instanceZoneId = _instanceZoneId;
    m_instanceZoneIdHasBeenSet = true;
}

bool Instance::InstanceZoneIdHasBeenSet() const
{
    return m_instanceZoneIdHasBeenSet;
}

string Instance::GetInstanceImportMode() const
{
    return m_instanceImportMode;
}

void Instance::SetInstanceImportMode(const string& _instanceImportMode)
{
    m_instanceImportMode = _instanceImportMode;
    m_instanceImportModeHasBeenSet = true;
}

bool Instance::InstanceImportModeHasBeenSet() const
{
    return m_instanceImportModeHasBeenSet;
}

string Instance::GetApplicationType() const
{
    return m_applicationType;
}

void Instance::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool Instance::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string Instance::GetApplicationResourceType() const
{
    return m_applicationResourceType;
}

void Instance::SetApplicationResourceType(const string& _applicationResourceType)
{
    m_applicationResourceType = _applicationResourceType;
    m_applicationResourceTypeHasBeenSet = true;
}

bool Instance::ApplicationResourceTypeHasBeenSet() const
{
    return m_applicationResourceTypeHasBeenSet;
}

string Instance::GetServiceSidecarStatus() const
{
    return m_serviceSidecarStatus;
}

void Instance::SetServiceSidecarStatus(const string& _serviceSidecarStatus)
{
    m_serviceSidecarStatus = _serviceSidecarStatus;
    m_serviceSidecarStatusHasBeenSet = true;
}

bool Instance::ServiceSidecarStatusHasBeenSet() const
{
    return m_serviceSidecarStatusHasBeenSet;
}

string Instance::GetGroupName() const
{
    return m_groupName;
}

void Instance::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool Instance::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string Instance::GetNamespaceName() const
{
    return m_namespaceName;
}

void Instance::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool Instance::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string Instance::GetReason() const
{
    return m_reason;
}

void Instance::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool Instance::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string Instance::GetAgentVersion() const
{
    return m_agentVersion;
}

void Instance::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool Instance::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string Instance::GetNodeInstanceId() const
{
    return m_nodeInstanceId;
}

void Instance::SetNodeInstanceId(const string& _nodeInstanceId)
{
    m_nodeInstanceId = _nodeInstanceId;
    m_nodeInstanceIdHasBeenSet = true;
}

bool Instance::NodeInstanceIdHasBeenSet() const
{
    return m_nodeInstanceIdHasBeenSet;
}

