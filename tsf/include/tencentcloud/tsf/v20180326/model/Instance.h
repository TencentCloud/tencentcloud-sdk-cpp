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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCE_H_

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
                * 机器实例
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 机器实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 机器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取机器内网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LanIp 机器内网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置机器内网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lanIp 机器内网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取机器外网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WanIp 机器外网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置机器外网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wanIp 机器外网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取机器描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceDesc 机器描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置机器描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceDesc 机器描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取VM的状态 虚机：虚机的状态 容器：Pod所在虚机的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus VM的状态 虚机：虚机的状态 容器：Pod所在虚机的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置VM的状态 虚机：虚机的状态 容器：Pod所在虚机的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus VM的状态 虚机：虚机的状态 容器：Pod所在虚机的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取VM的可使用状态 虚机：虚机是否能够作为资源使用 容器：虚机是否能够作为资源部署POD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceAvailableStatus VM的可使用状态 虚机：虚机是否能够作为资源使用 容器：虚机是否能够作为资源部署POD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceAvailableStatus() const;

                    /**
                     * 设置VM的可使用状态 虚机：虚机是否能够作为资源使用 容器：虚机是否能够作为资源部署POD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceAvailableStatus VM的可使用状态 虚机：虚机是否能够作为资源使用 容器：虚机是否能够作为资源部署POD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceAvailableStatus(const std::string& _instanceAvailableStatus);

                    /**
                     * 判断参数 InstanceAvailableStatus 是否已赋值
                     * @return InstanceAvailableStatus 是否已赋值
                     * 
                     */
                    bool InstanceAvailableStatusHasBeenSet() const;

                    /**
                     * 获取服务下的服务实例的状态 虚机：应用是否可用 + Agent状态 容器：Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceInstanceStatus 服务下的服务实例的状态 虚机：应用是否可用 + Agent状态 容器：Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceInstanceStatus() const;

                    /**
                     * 设置服务下的服务实例的状态 虚机：应用是否可用 + Agent状态 容器：Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceInstanceStatus 服务下的服务实例的状态 虚机：应用是否可用 + Agent状态 容器：Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceInstanceStatus(const std::string& _serviceInstanceStatus);

                    /**
                     * 判断参数 ServiceInstanceStatus 是否已赋值
                     * @return ServiceInstanceStatus 是否已赋值
                     * 
                     */
                    bool ServiceInstanceStatusHasBeenSet() const;

                    /**
                     * 获取标识此instance是否已添加在tsf中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountInTsf 标识此instance是否已添加在tsf中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCountInTsf() const;

                    /**
                     * 设置标识此instance是否已添加在tsf中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countInTsf 标识此instance是否已添加在tsf中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountInTsf(const int64_t& _countInTsf);

                    /**
                     * 判断参数 CountInTsf 是否已赋值
                     * @return CountInTsf 是否已赋值
                     * 
                     */
                    bool CountInTsfHasBeenSet() const;

                    /**
                     * 获取机器所属部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 机器所属部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置机器所属部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 机器所属部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取机器所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 机器所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置机器所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 机器所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取机器所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationName 机器所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置机器所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationName 机器所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取机器实例在CVM的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCreatedTime 机器实例在CVM的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceCreatedTime() const;

                    /**
                     * 设置机器实例在CVM的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCreatedTime 机器实例在CVM的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCreatedTime(const std::string& _instanceCreatedTime);

                    /**
                     * 判断参数 InstanceCreatedTime 是否已赋值
                     * @return InstanceCreatedTime 是否已赋值
                     * 
                     */
                    bool InstanceCreatedTimeHasBeenSet() const;

                    /**
                     * 获取机器实例在CVM的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceExpiredTime 机器实例在CVM的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceExpiredTime() const;

                    /**
                     * 设置机器实例在CVM的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceExpiredTime 机器实例在CVM的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceExpiredTime(const std::string& _instanceExpiredTime);

                    /**
                     * 判断参数 InstanceExpiredTime 是否已赋值
                     * @return InstanceExpiredTime 是否已赋值
                     * 
                     */
                    bool InstanceExpiredTimeHasBeenSet() const;

                    /**
                     * 获取机器实例在CVM的计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceChargeType 机器实例在CVM的计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置机器实例在CVM的计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceChargeType 机器实例在CVM的计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取机器实例总CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTotalCpu 机器实例总CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInstanceTotalCpu() const;

                    /**
                     * 设置机器实例总CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTotalCpu 机器实例总CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTotalCpu(const double& _instanceTotalCpu);

                    /**
                     * 判断参数 InstanceTotalCpu 是否已赋值
                     * @return InstanceTotalCpu 是否已赋值
                     * 
                     */
                    bool InstanceTotalCpuHasBeenSet() const;

                    /**
                     * 获取机器实例总内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTotalMem 机器实例总内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInstanceTotalMem() const;

                    /**
                     * 设置机器实例总内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTotalMem 机器实例总内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTotalMem(const double& _instanceTotalMem);

                    /**
                     * 判断参数 InstanceTotalMem 是否已赋值
                     * @return InstanceTotalMem 是否已赋值
                     * 
                     */
                    bool InstanceTotalMemHasBeenSet() const;

                    /**
                     * 获取机器实例使用的CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceUsedCpu 机器实例使用的CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInstanceUsedCpu() const;

                    /**
                     * 设置机器实例使用的CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceUsedCpu 机器实例使用的CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceUsedCpu(const double& _instanceUsedCpu);

                    /**
                     * 判断参数 InstanceUsedCpu 是否已赋值
                     * @return InstanceUsedCpu 是否已赋值
                     * 
                     */
                    bool InstanceUsedCpuHasBeenSet() const;

                    /**
                     * 获取机器实例使用的内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceUsedMem 机器实例使用的内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInstanceUsedMem() const;

                    /**
                     * 设置机器实例使用的内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceUsedMem 机器实例使用的内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceUsedMem(const double& _instanceUsedMem);

                    /**
                     * 判断参数 InstanceUsedMem 是否已赋值
                     * @return InstanceUsedMem 是否已赋值
                     * 
                     */
                    bool InstanceUsedMemHasBeenSet() const;

                    /**
                     * 获取机器实例Limit CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLimitCpu 机器实例Limit CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInstanceLimitCpu() const;

                    /**
                     * 设置机器实例Limit CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLimitCpu 机器实例Limit CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLimitCpu(const double& _instanceLimitCpu);

                    /**
                     * 判断参数 InstanceLimitCpu 是否已赋值
                     * @return InstanceLimitCpu 是否已赋值
                     * 
                     */
                    bool InstanceLimitCpuHasBeenSet() const;

                    /**
                     * 获取机器实例Limit 内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceLimitMem 机器实例Limit 内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInstanceLimitMem() const;

                    /**
                     * 设置机器实例Limit 内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceLimitMem 机器实例Limit 内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceLimitMem(const double& _instanceLimitMem);

                    /**
                     * 判断参数 InstanceLimitMem 是否已赋值
                     * @return InstanceLimitMem 是否已赋值
                     * 
                     */
                    bool InstanceLimitMemHasBeenSet() const;

                    /**
                     * 获取包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstancePkgVersion 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstancePkgVersion() const;

                    /**
                     * 设置包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instancePkgVersion 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstancePkgVersion(const std::string& _instancePkgVersion);

                    /**
                     * 判断参数 InstancePkgVersion 是否已赋值
                     * @return InstancePkgVersion 是否已赋值
                     * 
                     */
                    bool InstancePkgVersionHasBeenSet() const;

                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取机器实例业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestrictState 机器实例业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置机器实例业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restrictState 机器实例业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationState 实例执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperationState() const;

                    /**
                     * 设置实例执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationState 实例执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationState(const int64_t& _operationState);

                    /**
                     * 判断参数 OperationState 是否已赋值
                     * @return OperationState 是否已赋值
                     * 
                     */
                    bool OperationStateHasBeenSet() const;

                    /**
                     * 获取NamespaceId Ns ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId NamespaceId Ns ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置NamespaceId Ns ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId NamespaceId Ns ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取InstanceZoneId 可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceZoneId InstanceZoneId 可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceZoneId() const;

                    /**
                     * 设置InstanceZoneId 可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceZoneId InstanceZoneId 可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceZoneId(const std::string& _instanceZoneId);

                    /**
                     * 判断参数 InstanceZoneId 是否已赋值
                     * @return InstanceZoneId 是否已赋值
                     * 
                     */
                    bool InstanceZoneIdHasBeenSet() const;

                    /**
                     * 获取InstanceImportMode 导入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceImportMode InstanceImportMode 导入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceImportMode() const;

                    /**
                     * 设置InstanceImportMode 导入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceImportMode InstanceImportMode 导入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceImportMode(const std::string& _instanceImportMode);

                    /**
                     * 判断参数 InstanceImportMode 是否已赋值
                     * @return InstanceImportMode 是否已赋值
                     * 
                     */
                    bool InstanceImportModeHasBeenSet() const;

                    /**
                     * 获取ApplicationType应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType ApplicationType应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置ApplicationType应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationType ApplicationType应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取ApplicationResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationResourceType ApplicationResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationResourceType() const;

                    /**
                     * 设置ApplicationResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationResourceType ApplicationResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationResourceType(const std::string& _applicationResourceType);

                    /**
                     * 判断参数 ApplicationResourceType 是否已赋值
                     * @return ApplicationResourceType 是否已赋值
                     * 
                     */
                    bool ApplicationResourceTypeHasBeenSet() const;

                    /**
                     * 获取sidecar状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceSidecarStatus sidecar状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceSidecarStatus() const;

                    /**
                     * 设置sidecar状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceSidecarStatus sidecar状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceSidecarStatus(const std::string& _serviceSidecarStatus);

                    /**
                     * 判断参数 ServiceSidecarStatus 是否已赋值
                     * @return ServiceSidecarStatus 是否已赋值
                     * 
                     */
                    bool ServiceSidecarStatusHasBeenSet() const;

                    /**
                     * 获取部署组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 部署组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 部署组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取NS名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName NS名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置NS名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceName NS名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取健康检查原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 健康检查原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置健康检查原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 健康检查原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取agent版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentVersion agent版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置agent版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentVersion agent版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取容器母机实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeInstanceId 容器母机实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeInstanceId() const;

                    /**
                     * 设置容器母机实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeInstanceId 容器母机实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeInstanceId(const std::string& _nodeInstanceId);

                    /**
                     * 判断参数 NodeInstanceId 是否已赋值
                     * @return NodeInstanceId 是否已赋值
                     * 
                     */
                    bool NodeInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 机器实例ID
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
                     * 机器内网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 机器外网地址IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 机器描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

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
                     * VM的状态 虚机：虚机的状态 容器：Pod所在虚机的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * VM的可使用状态 虚机：虚机是否能够作为资源使用 容器：虚机是否能够作为资源部署POD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceAvailableStatus;
                    bool m_instanceAvailableStatusHasBeenSet;

                    /**
                     * 服务下的服务实例的状态 虚机：应用是否可用 + Agent状态 容器：Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceInstanceStatus;
                    bool m_serviceInstanceStatusHasBeenSet;

                    /**
                     * 标识此instance是否已添加在tsf中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_countInTsf;
                    bool m_countInTsfHasBeenSet;

                    /**
                     * 机器所属部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 机器所属应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 机器所属应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 机器实例在CVM的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceCreatedTime;
                    bool m_instanceCreatedTimeHasBeenSet;

                    /**
                     * 机器实例在CVM的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceExpiredTime;
                    bool m_instanceExpiredTimeHasBeenSet;

                    /**
                     * 机器实例在CVM的计费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 机器实例总CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_instanceTotalCpu;
                    bool m_instanceTotalCpuHasBeenSet;

                    /**
                     * 机器实例总内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_instanceTotalMem;
                    bool m_instanceTotalMemHasBeenSet;

                    /**
                     * 机器实例使用的CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_instanceUsedCpu;
                    bool m_instanceUsedCpuHasBeenSet;

                    /**
                     * 机器实例使用的内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_instanceUsedMem;
                    bool m_instanceUsedMemHasBeenSet;

                    /**
                     * 机器实例Limit CPU信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_instanceLimitCpu;
                    bool m_instanceLimitCpuHasBeenSet;

                    /**
                     * 机器实例Limit 内存信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_instanceLimitMem;
                    bool m_instanceLimitMemHasBeenSet;

                    /**
                     * 包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instancePkgVersion;
                    bool m_instancePkgVersionHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 机器实例业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operationState;
                    bool m_operationStateHasBeenSet;

                    /**
                     * NamespaceId Ns ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * InstanceZoneId 可用区ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceZoneId;
                    bool m_instanceZoneIdHasBeenSet;

                    /**
                     * InstanceImportMode 导入模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceImportMode;
                    bool m_instanceImportModeHasBeenSet;

                    /**
                     * ApplicationType应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * ApplicationResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationResourceType;
                    bool m_applicationResourceTypeHasBeenSet;

                    /**
                     * sidecar状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceSidecarStatus;
                    bool m_serviceSidecarStatusHasBeenSet;

                    /**
                     * 部署组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * NS名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 健康检查原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * agent版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 容器母机实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeInstanceId;
                    bool m_nodeInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCE_H_
