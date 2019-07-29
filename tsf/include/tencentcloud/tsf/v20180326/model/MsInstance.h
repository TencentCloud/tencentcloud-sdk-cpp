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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MSINSTANCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MSINSTANCE_H_

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
                * 微服务实例信息
                */
                class MsInstance : public AbstractModel
                {
                public:
                    MsInstance();
                    ~MsInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器实例ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 机器实例ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置机器实例ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 机器实例ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取机器实例名称信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 机器实例名称信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置机器实例名称信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceName 机器实例名称信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取服务运行的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 服务运行的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPort() const;

                    /**
                     * 设置服务运行的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 服务运行的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取机器实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LanIp 机器实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置机器实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LanIp 机器实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取机器实例外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp 机器实例外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置机器实例外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WanIp 机器实例外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取机器可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAvailableStatus 机器可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceAvailableStatus() const;

                    /**
                     * 设置机器可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceAvailableStatus 机器可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceAvailableStatus(const std::string& _instanceAvailableStatus);

                    /**
                     * 判断参数 InstanceAvailableStatus 是否已赋值
                     * @return InstanceAvailableStatus 是否已赋值
                     */
                    bool InstanceAvailableStatusHasBeenSet() const;

                    /**
                     * 获取服务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceInstanceStatus 服务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceInstanceStatus() const;

                    /**
                     * 设置服务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceInstanceStatus 服务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceInstanceStatus(const std::string& _serviceInstanceStatus);

                    /**
                     * 判断参数 ServiceInstanceStatus 是否已赋值
                     * @return ServiceInstanceStatus 是否已赋值
                     */
                    bool ServiceInstanceStatusHasBeenSet() const;

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
                     * 获取部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 部署组ID
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

                    /**
                     * 获取机器TSF可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 机器TSF可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置机器TSF可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceStatus 机器TSF可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取健康检查URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckUrl 健康检查URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHealthCheckUrl() const;

                    /**
                     * 设置健康检查URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthCheckUrl 健康检查URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthCheckUrl(const std::string& _healthCheckUrl);

                    /**
                     * 判断参数 HealthCheckUrl 是否已赋值
                     * @return HealthCheckUrl 是否已赋值
                     */
                    bool HealthCheckUrlHasBeenSet() const;

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
                     * 获取应用程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationPackageVersion 应用程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApplicationPackageVersion() const;

                    /**
                     * 设置应用程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationPackageVersion 应用程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationPackageVersion(const std::string& _applicationPackageVersion);

                    /**
                     * 判断参数 ApplicationPackageVersion 是否已赋值
                     * @return ApplicationPackageVersion 是否已赋值
                     */
                    bool ApplicationPackageVersionHasBeenSet() const;

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

                private:

                    /**
                     * 机器实例ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 机器实例名称信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 服务运行的端口号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 机器实例内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 机器实例外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 机器可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceAvailableStatus;
                    bool m_instanceAvailableStatusHasBeenSet;

                    /**
                     * 服务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceInstanceStatus;
                    bool m_serviceInstanceStatusHasBeenSet;

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
                     * 部署组ID
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

                    /**
                     * 机器TSF可用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 健康检查URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthCheckUrl;
                    bool m_healthCheckUrlHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 应用程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationPackageVersion;
                    bool m_applicationPackageVersionHasBeenSet;

                    /**
                     * 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MSINSTANCE_H_
