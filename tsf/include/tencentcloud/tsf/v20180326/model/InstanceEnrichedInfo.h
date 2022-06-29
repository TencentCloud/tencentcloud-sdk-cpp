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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCEENRICHEDINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCEENRICHEDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 包含虚拟机所在TSF中的位置信息
                */
                class InstanceEnrichedInfo : public AbstractModel
                {
                public:
                    InstanceEnrichedInfo();
                    ~InstanceEnrichedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 机器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置机器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 机器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceName 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取机器内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LanIp 机器内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置机器内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LanIp 机器内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取机器外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp 机器外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置机器外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanIp 机器外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取机器所在VPC
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 机器所在VPC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置机器所在VPC
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 机器所在VPC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取机器运行状态 Pending Running Stopped Rebooting Starting Stopping Abnormal Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 机器运行状态 Pending Running Stopped Rebooting Starting Stopping Abnormal Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置机器运行状态 Pending Running Stopped Rebooting Starting Stopping Abnormal Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceStatus 机器运行状态 Pending Running Stopped Rebooting Starting Stopping Abnormal Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取机器可用状态（表示机器上的Agent在线）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAvailableStatus 机器可用状态（表示机器上的Agent在线）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceAvailableStatus() const;

                    /**
                     * 设置机器可用状态（表示机器上的Agent在线）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceAvailableStatus 机器可用状态（表示机器上的Agent在线）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceAvailableStatus(const std::string& _instanceAvailableStatus);

                    /**
                     * 判断参数 InstanceAvailableStatus 是否已赋值
                     * @return InstanceAvailableStatus 是否已赋值
                     */
                    bool InstanceAvailableStatusHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationType 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取机器所在部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 机器所在部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置机器所在部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 机器所在部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 机器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 机器内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 机器外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 机器所在VPC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 机器运行状态 Pending Running Stopped Rebooting Starting Stopping Abnormal Unknown
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 机器可用状态（表示机器上的Agent在线）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceAvailableStatus;
                    bool m_instanceAvailableStatusHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 机器所在部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCEENRICHEDINFO_H_
