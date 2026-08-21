/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>
#include <tencentcloud/tsf/v20180326/model/AgentProfile.h>
#include <tencentcloud/tsf/v20180326/model/WarmupSetting.h>
#include <tencentcloud/tsf/v20180326/model/GatewayConfig.h>
#include <tencentcloud/tsf/v20180326/model/ExclusiveInstance.h>
#include <tencentcloud/tsf/v20180326/model/ServiceConfig.h>
#include <tencentcloud/tsf/v20180326/model/ServiceGovernanceConfig.h>
#include <tencentcloud/tsf/v20180326/model/Tag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 虚拟机部署组信息
                */
                class VmGroup : public AbstractModel
                {
                public:
                    VmGroup();
                    ~VmGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>部署组ID</p>
                     * @return GroupId <p>部署组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>部署组ID</p>
                     * @param _groupId <p>部署组ID</p>
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
                     * 获取<p>部署组名称</p>
                     * @return GroupName <p>部署组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>部署组名称</p>
                     * @param _groupName <p>部署组名称</p>
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
                     * 获取<p>部署组状态</p>
                     * @return GroupStatus <p>部署组状态</p>
                     * 
                     */
                    std::string GetGroupStatus() const;

                    /**
                     * 设置<p>部署组状态</p>
                     * @param _groupStatus <p>部署组状态</p>
                     * 
                     */
                    void SetGroupStatus(const std::string& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取<p>程序包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId <p>程序包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>程序包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageId <p>程序包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取<p>程序包名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName <p>程序包名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>程序包名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName <p>程序包名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取<p>程序包版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageVersion <p>程序包版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置<p>程序包版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageVersion <p>程序包版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>命名空间ID</p>
                     * @return NamespaceId <p>命名空间ID</p>
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置<p>命名空间ID</p>
                     * @param _namespaceId <p>命名空间ID</p>
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
                     * 获取<p>命名空间名称</p>
                     * @return NamespaceName <p>命名空间名称</p>
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>命名空间名称</p>
                     * @param _namespaceName <p>命名空间名称</p>
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
                     * 获取<p>应用ID</p>
                     * @return ApplicationId <p>应用ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _applicationId <p>应用ID</p>
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
                     * 获取<p>应用名称</p>
                     * @return ApplicationName <p>应用名称</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _applicationName <p>应用名称</p>
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
                     * 获取<p>部署组机器数目</p>
                     * @return InstanceCount <p>部署组机器数目</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>部署组机器数目</p>
                     * @param _instanceCount <p>部署组机器数目</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>部署组运行中机器数目</p>
                     * @return RunInstanceCount <p>部署组运行中机器数目</p>
                     * 
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置<p>部署组运行中机器数目</p>
                     * @param _runInstanceCount <p>部署组运行中机器数目</p>
                     * 
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     * 
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>部署组启动参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupParameters <p>部署组启动参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置<p>部署组启动参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupParameters <p>部署组启动参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartupParameters(const std::string& _startupParameters);

                    /**
                     * 判断参数 StartupParameters 是否已赋值
                     * @return StartupParameters 是否已赋值
                     * 
                     */
                    bool StartupParametersHasBeenSet() const;

                    /**
                     * 获取<p>部署组创建时间</p>
                     * @return CreateTime <p>部署组创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>部署组创建时间</p>
                     * @param _createTime <p>部署组创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>部署组更新时间</p>
                     * @return UpdateTime <p>部署组更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>部署组更新时间</p>
                     * @param _updateTime <p>部署组更新时间</p>
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
                     * 获取<p>部署组停止机器数目</p>
                     * @return OffInstanceCount <p>部署组停止机器数目</p>
                     * 
                     */
                    int64_t GetOffInstanceCount() const;

                    /**
                     * 设置<p>部署组停止机器数目</p>
                     * @param _offInstanceCount <p>部署组停止机器数目</p>
                     * 
                     */
                    void SetOffInstanceCount(const int64_t& _offInstanceCount);

                    /**
                     * 判断参数 OffInstanceCount 是否已赋值
                     * @return OffInstanceCount 是否已赋值
                     * 
                     */
                    bool OffInstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>部署组描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupDesc <p>部署组描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置<p>部署组描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupDesc <p>部署组描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupDesc(const std::string& _groupDesc);

                    /**
                     * 判断参数 GroupDesc 是否已赋值
                     * @return GroupDesc 是否已赋值
                     * 
                     */
                    bool GroupDescHasBeenSet() const;

                    /**
                     * 获取<p>微服务类型</p>
                     * @return MicroserviceType <p>微服务类型</p>
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置<p>微服务类型</p>
                     * @param _microserviceType <p>微服务类型</p>
                     * 
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>应用类型</p>
                     * @return ApplicationType <p>应用类型</p>
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置<p>应用类型</p>
                     * @param _applicationType <p>应用类型</p>
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
                     * 获取<p>部署组资源类型</p><p>枚举值：</p><ul><li>GW： 网关</li><li>DEF： 普通业务部署组</li><li>SVL： Serverless</li></ul>
                     * @return GroupResourceType <p>部署组资源类型</p><p>枚举值：</p><ul><li>GW： 网关</li><li>DEF： 普通业务部署组</li><li>SVL： Serverless</li></ul>
                     * 
                     */
                    std::string GetGroupResourceType() const;

                    /**
                     * 设置<p>部署组资源类型</p><p>枚举值：</p><ul><li>GW： 网关</li><li>DEF： 普通业务部署组</li><li>SVL： Serverless</li></ul>
                     * @param _groupResourceType <p>部署组资源类型</p><p>枚举值：</p><ul><li>GW： 网关</li><li>DEF： 普通业务部署组</li><li>SVL： Serverless</li></ul>
                     * 
                     */
                    void SetGroupResourceType(const std::string& _groupResourceType);

                    /**
                     * 判断参数 GroupResourceType 是否已赋值
                     * @return GroupResourceType 是否已赋值
                     * 
                     */
                    bool GroupResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>部署组更新时间戳</p>
                     * @return UpdatedTime <p>部署组更新时间戳</p>
                     * 
                     */
                    int64_t GetUpdatedTime() const;

                    /**
                     * 设置<p>部署组更新时间戳</p>
                     * @param _updatedTime <p>部署组更新时间戳</p>
                     * 
                     */
                    void SetUpdatedTime(const int64_t& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>部署应用描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployDesc <p>部署应用描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置<p>部署应用描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployDesc <p>部署应用描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployDesc(const std::string& _deployDesc);

                    /**
                     * 判断参数 DeployDesc 是否已赋值
                     * @return DeployDesc 是否已赋值
                     * 
                     */
                    bool DeployDescHasBeenSet() const;

                    /**
                     * 获取<p>滚动发布的更新方式</p>
                     * @return UpdateType <p>滚动发布的更新方式</p>
                     * 
                     */
                    uint64_t GetUpdateType() const;

                    /**
                     * 设置<p>滚动发布的更新方式</p>
                     * @param _updateType <p>滚动发布的更新方式</p>
                     * 
                     */
                    void SetUpdateType(const uint64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取<p>发布是否启用beta批次</p>
                     * @return DeployBetaEnable <p>发布是否启用beta批次</p>
                     * 
                     */
                    bool GetDeployBetaEnable() const;

                    /**
                     * 设置<p>发布是否启用beta批次</p>
                     * @param _deployBetaEnable <p>发布是否启用beta批次</p>
                     * 
                     */
                    void SetDeployBetaEnable(const bool& _deployBetaEnable);

                    /**
                     * 判断参数 DeployBetaEnable 是否已赋值
                     * @return DeployBetaEnable 是否已赋值
                     * 
                     */
                    bool DeployBetaEnableHasBeenSet() const;

                    /**
                     * 获取<p>滚动发布的批次比例列表</p>
                     * @return DeployBatch <p>滚动发布的批次比例列表</p>
                     * 
                     */
                    std::vector<double> GetDeployBatch() const;

                    /**
                     * 设置<p>滚动发布的批次比例列表</p>
                     * @param _deployBatch <p>滚动发布的批次比例列表</p>
                     * 
                     */
                    void SetDeployBatch(const std::vector<double>& _deployBatch);

                    /**
                     * 判断参数 DeployBatch 是否已赋值
                     * @return DeployBatch 是否已赋值
                     * 
                     */
                    bool DeployBatchHasBeenSet() const;

                    /**
                     * 获取<p>滚动发布的批次执行方式</p>
                     * @return DeployExeMode <p>滚动发布的批次执行方式</p>
                     * 
                     */
                    std::string GetDeployExeMode() const;

                    /**
                     * 设置<p>滚动发布的批次执行方式</p>
                     * @param _deployExeMode <p>滚动发布的批次执行方式</p>
                     * 
                     */
                    void SetDeployExeMode(const std::string& _deployExeMode);

                    /**
                     * 判断参数 DeployExeMode 是否已赋值
                     * @return DeployExeMode 是否已赋值
                     * 
                     */
                    bool DeployExeModeHasBeenSet() const;

                    /**
                     * 获取<p>滚动发布的每个批次的等待时间</p>
                     * @return DeployWaitTime <p>滚动发布的每个批次的等待时间</p>
                     * 
                     */
                    uint64_t GetDeployWaitTime() const;

                    /**
                     * 设置<p>滚动发布的每个批次的等待时间</p>
                     * @param _deployWaitTime <p>滚动发布的每个批次的等待时间</p>
                     * 
                     */
                    void SetDeployWaitTime(const uint64_t& _deployWaitTime);

                    /**
                     * 判断参数 DeployWaitTime 是否已赋值
                     * @return DeployWaitTime 是否已赋值
                     * 
                     */
                    bool DeployWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启了健康检查</p>
                     * @return EnableHealthCheck <p>是否开启了健康检查</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否开启了健康检查</p>
                     * @param _enableHealthCheck <p>是否开启了健康检查</p>
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings <p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置<p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings <p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings);

                    /**
                     * 判断参数 HealthCheckSettings 是否已赋值
                     * @return HealthCheckSettings 是否已赋值
                     * 
                     */
                    bool HealthCheckSettingsHasBeenSet() const;

                    /**
                     * 获取<p>程序包类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType <p>程序包类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>程序包类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageType <p>程序包类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>启动脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartScript <p>启动脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartScript() const;

                    /**
                     * 设置<p>启动脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startScript <p>启动脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartScript(const std::string& _startScript);

                    /**
                     * 判断参数 StartScript 是否已赋值
                     * @return StartScript 是否已赋值
                     * 
                     */
                    bool StartScriptHasBeenSet() const;

                    /**
                     * 获取<p>停止脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopScript <p>停止脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopScript() const;

                    /**
                     * 设置<p>停止脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopScript <p>停止脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStopScript(const std::string& _stopScript);

                    /**
                     * 判断参数 StopScript 是否已赋值
                     * @return StopScript 是否已赋值
                     * 
                     */
                    bool StopScriptHasBeenSet() const;

                    /**
                     * 获取<p>部署组备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias <p>部署组备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>部署组备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias <p>部署组备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>javaagent信息</p>
                     * @return AgentProfileList <p>javaagent信息</p>
                     * 
                     */
                    std::vector<AgentProfile> GetAgentProfileList() const;

                    /**
                     * 设置<p>javaagent信息</p>
                     * @param _agentProfileList <p>javaagent信息</p>
                     * 
                     */
                    void SetAgentProfileList(const std::vector<AgentProfile>& _agentProfileList);

                    /**
                     * 判断参数 AgentProfileList 是否已赋值
                     * @return AgentProfileList 是否已赋值
                     * 
                     */
                    bool AgentProfileListHasBeenSet() const;

                    /**
                     * 获取<p>预热属性配置</p>
                     * @return WarmupSetting <p>预热属性配置</p>
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置<p>预热属性配置</p>
                     * @param _warmupSetting <p>预热属性配置</p>
                     * 
                     */
                    void SetWarmupSetting(const WarmupSetting& _warmupSetting);

                    /**
                     * 判断参数 WarmupSetting 是否已赋值
                     * @return WarmupSetting 是否已赋值
                     * 
                     */
                    bool WarmupSettingHasBeenSet() const;

                    /**
                     * 获取<p>Envoy网关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayConfig <p>Envoy网关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GatewayConfig GetGatewayConfig() const;

                    /**
                     * 设置<p>Envoy网关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayConfig <p>Envoy网关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayConfig(const GatewayConfig& _gatewayConfig);

                    /**
                     * 判断参数 GatewayConfig 是否已赋值
                     * @return GatewayConfig 是否已赋值
                     * 
                     */
                    bool GatewayConfigHasBeenSet() const;

                    /**
                     * 获取<p>批次是否开启健康检查</p>
                     * @return EnableBatchHealthCheck <p>批次是否开启健康检查</p>
                     * 
                     */
                    bool GetEnableBatchHealthCheck() const;

                    /**
                     * 设置<p>批次是否开启健康检查</p>
                     * @param _enableBatchHealthCheck <p>批次是否开启健康检查</p>
                     * 
                     */
                    void SetEnableBatchHealthCheck(const bool& _enableBatchHealthCheck);

                    /**
                     * 判断参数 EnableBatchHealthCheck 是否已赋值
                     * @return EnableBatchHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableBatchHealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>是否开启cgroup控制内存cpu</p>
                     * @return FilebeatCgroupEnable <p>是否开启cgroup控制内存cpu</p>
                     * 
                     */
                    bool GetFilebeatCgroupEnable() const;

                    /**
                     * 设置<p>是否开启cgroup控制内存cpu</p>
                     * @param _filebeatCgroupEnable <p>是否开启cgroup控制内存cpu</p>
                     * 
                     */
                    void SetFilebeatCgroupEnable(const bool& _filebeatCgroupEnable);

                    /**
                     * 判断参数 FilebeatCgroupEnable 是否已赋值
                     * @return FilebeatCgroupEnable 是否已赋值
                     * 
                     */
                    bool FilebeatCgroupEnableHasBeenSet() const;

                    /**
                     * 获取<p>filebeat使用cpu上限</p>
                     * @return FilebeatMaxCpu <p>filebeat使用cpu上限</p>
                     * 
                     */
                    double GetFilebeatMaxCpu() const;

                    /**
                     * 设置<p>filebeat使用cpu上限</p>
                     * @param _filebeatMaxCpu <p>filebeat使用cpu上限</p>
                     * 
                     */
                    void SetFilebeatMaxCpu(const double& _filebeatMaxCpu);

                    /**
                     * 判断参数 FilebeatMaxCpu 是否已赋值
                     * @return FilebeatMaxCpu 是否已赋值
                     * 
                     */
                    bool FilebeatMaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>filebeat使用内存上限</p>
                     * @return FilebeatMaxMem <p>filebeat使用内存上限</p>
                     * 
                     */
                    int64_t GetFilebeatMaxMem() const;

                    /**
                     * 设置<p>filebeat使用内存上限</p>
                     * @param _filebeatMaxMem <p>filebeat使用内存上限</p>
                     * 
                     */
                    void SetFilebeatMaxMem(const int64_t& _filebeatMaxMem);

                    /**
                     * 判断参数 FilebeatMaxMem 是否已赋值
                     * @return FilebeatMaxMem 是否已赋值
                     * 
                     */
                    bool FilebeatMaxMemHasBeenSet() const;

                    /**
                     * 获取<p>仓库ID</p>
                     * @return RepositoryId <p>仓库ID</p>
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置<p>仓库ID</p>
                     * @param _repositoryId <p>仓库ID</p>
                     * 
                     */
                    void SetRepositoryId(const std::string& _repositoryId);

                    /**
                     * 判断参数 RepositoryId 是否已赋值
                     * @return RepositoryId 是否已赋值
                     * 
                     */
                    bool RepositoryIdHasBeenSet() const;

                    /**
                     * 获取<p>仓库名称</p>
                     * @return RepositoryName <p>仓库名称</p>
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置<p>仓库名称</p>
                     * @param _repositoryName <p>仓库名称</p>
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取<p>仓库类型</p>
                     * @return RepositoryType <p>仓库类型</p>
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置<p>仓库类型</p>
                     * @param _repositoryType <p>仓库类型</p>
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动重启</p>
                     * @return LivenessAutoRestart <p>是否自动重启</p>
                     * 
                     */
                    bool GetLivenessAutoRestart() const;

                    /**
                     * 设置<p>是否自动重启</p>
                     * @param _livenessAutoRestart <p>是否自动重启</p>
                     * 
                     */
                    void SetLivenessAutoRestart(const bool& _livenessAutoRestart);

                    /**
                     * 判断参数 LivenessAutoRestart 是否已赋值
                     * @return LivenessAutoRestart 是否已赋值
                     * 
                     */
                    bool LivenessAutoRestartHasBeenSet() const;

                    /**
                     * 获取<p>Mesh Sidecar 数据面版本通道</p><p>枚举值：</p><ul><li>stable： 稳定版</li><li>release： 最新版</li></ul>
                     * @return MeshSidecarVersion <p>Mesh Sidecar 数据面版本通道</p><p>枚举值：</p><ul><li>stable： 稳定版</li><li>release： 最新版</li></ul>
                     * 
                     */
                    std::string GetMeshSidecarVersion() const;

                    /**
                     * 设置<p>Mesh Sidecar 数据面版本通道</p><p>枚举值：</p><ul><li>stable： 稳定版</li><li>release： 最新版</li></ul>
                     * @param _meshSidecarVersion <p>Mesh Sidecar 数据面版本通道</p><p>枚举值：</p><ul><li>stable： 稳定版</li><li>release： 最新版</li></ul>
                     * 
                     */
                    void SetMeshSidecarVersion(const std::string& _meshSidecarVersion);

                    /**
                     * 判断参数 MeshSidecarVersion 是否已赋值
                     * @return MeshSidecarVersion 是否已赋值
                     * 
                     */
                    bool MeshSidecarVersionHasBeenSet() const;

                    /**
                     * 获取<p>业务日志配置 ID 列表</p>
                     * @return BusinessLogConfigIdList <p>业务日志配置 ID 列表</p>
                     * 
                     */
                    std::string GetBusinessLogConfigIdList() const;

                    /**
                     * 设置<p>业务日志配置 ID 列表</p>
                     * @param _businessLogConfigIdList <p>业务日志配置 ID 列表</p>
                     * 
                     */
                    void SetBusinessLogConfigIdList(const std::string& _businessLogConfigIdList);

                    /**
                     * 判断参数 BusinessLogConfigIdList 是否已赋值
                     * @return BusinessLogConfigIdList 是否已赋值
                     * 
                     */
                    bool BusinessLogConfigIdListHasBeenSet() const;

                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return BusinessLogDeliveryConfigIdList <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetBusinessLogDeliveryConfigIdList() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _businessLogDeliveryConfigIdList <p>业务系统 ID</p>
                     * 
                     */
                    void SetBusinessLogDeliveryConfigIdList(const std::string& _businessLogDeliveryConfigIdList);

                    /**
                     * 判断参数 BusinessLogDeliveryConfigIdList 是否已赋值
                     * @return BusinessLogDeliveryConfigIdList 是否已赋值
                     * 
                     */
                    bool BusinessLogDeliveryConfigIdListHasBeenSet() const;

                    /**
                     * 获取<p>String型普通说明场景</p>
                     * @return BusinessSystemId <p>String型普通说明场景</p>
                     * 
                     */
                    std::string GetBusinessSystemId() const;

                    /**
                     * 设置<p>String型普通说明场景</p>
                     * @param _businessSystemId <p>String型普通说明场景</p>
                     * 
                     */
                    void SetBusinessSystemId(const std::string& _businessSystemId);

                    /**
                     * 判断参数 BusinessSystemId 是否已赋值
                     * @return BusinessSystemId 是否已赋值
                     * 
                     */
                    bool BusinessSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>业务系统名称</p>
                     * @return BusinessSystemName <p>业务系统名称</p>
                     * 
                     */
                    std::string GetBusinessSystemName() const;

                    /**
                     * 设置<p>业务系统名称</p>
                     * @param _businessSystemName <p>业务系统名称</p>
                     * 
                     */
                    void SetBusinessSystemName(const std::string& _businessSystemName);

                    /**
                     * 判断参数 BusinessSystemName 是否已赋值
                     * @return BusinessSystemName 是否已赋值
                     * 
                     */
                    bool BusinessSystemNameHasBeenSet() const;

                    /**
                     * 获取<p>CLS 机器组 ID</p>
                     * @return ClsMachineGroupId <p>CLS 机器组 ID</p>
                     * 
                     */
                    std::string GetClsMachineGroupId() const;

                    /**
                     * 设置<p>CLS 机器组 ID</p>
                     * @param _clsMachineGroupId <p>CLS 机器组 ID</p>
                     * 
                     */
                    void SetClsMachineGroupId(const std::string& _clsMachineGroupId);

                    /**
                     * 判断参数 ClsMachineGroupId 是否已赋值
                     * @return ClsMachineGroupId 是否已赋值
                     * 
                     */
                    bool ClsMachineGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启服务治理</p>
                     * @return EnableGovernance <p>是否开启服务治理</p>
                     * 
                     */
                    bool GetEnableGovernance() const;

                    /**
                     * 设置<p>是否开启服务治理</p>
                     * @param _enableGovernance <p>是否开启服务治理</p>
                     * 
                     */
                    void SetEnableGovernance(const bool& _enableGovernance);

                    /**
                     * 判断参数 EnableGovernance 是否已赋值
                     * @return EnableGovernance 是否已赋值
                     * 
                     */
                    bool EnableGovernanceHasBeenSet() const;

                    /**
                     * 获取<p>是否开启可观测</p>
                     * @return EnableTelemetry <p>是否开启可观测</p>
                     * 
                     */
                    bool GetEnableTelemetry() const;

                    /**
                     * 设置<p>是否开启可观测</p>
                     * @param _enableTelemetry <p>是否开启可观测</p>
                     * 
                     */
                    void SetEnableTelemetry(const bool& _enableTelemetry);

                    /**
                     * 判断参数 EnableTelemetry 是否已赋值
                     * @return EnableTelemetry 是否已赋值
                     * 
                     */
                    bool EnableTelemetryHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 OT Agent</p>
                     * @return EnableTelemetryAgent <p>是否开启 OT Agent</p>
                     * 
                     */
                    bool GetEnableTelemetryAgent() const;

                    /**
                     * 设置<p>是否开启 OT Agent</p>
                     * @param _enableTelemetryAgent <p>是否开启 OT Agent</p>
                     * 
                     */
                    void SetEnableTelemetryAgent(const bool& _enableTelemetryAgent);

                    /**
                     * 判断参数 EnableTelemetryAgent 是否已赋值
                     * @return EnableTelemetryAgent 是否已赋值
                     * 
                     */
                    bool EnableTelemetryAgentHasBeenSet() const;

                    /**
                     * 获取<p>是否开启单元化</p>
                     * @return EnabledUnit <p>是否开启单元化</p>
                     * 
                     */
                    bool GetEnabledUnit() const;

                    /**
                     * 设置<p>是否开启单元化</p>
                     * @param _enabledUnit <p>是否开启单元化</p>
                     * 
                     */
                    void SetEnabledUnit(const bool& _enabledUnit);

                    /**
                     * 判断参数 EnabledUnit 是否已赋值
                     * @return EnabledUnit 是否已赋值
                     * 
                     */
                    bool EnabledUnitHasBeenSet() const;

                    /**
                     * 获取<p>独享注册中心/配置中心实例列表</p>
                     * @return ExclusiveInstances <p>独享注册中心/配置中心实例列表</p>
                     * 
                     */
                    std::vector<ExclusiveInstance> GetExclusiveInstances() const;

                    /**
                     * 设置<p>独享注册中心/配置中心实例列表</p>
                     * @param _exclusiveInstances <p>独享注册中心/配置中心实例列表</p>
                     * 
                     */
                    void SetExclusiveInstances(const std::vector<ExclusiveInstance>& _exclusiveInstances);

                    /**
                     * 判断参数 ExclusiveInstances 是否已赋值
                     * @return ExclusiveInstances 是否已赋值
                     * 
                     */
                    bool ExclusiveInstancesHasBeenSet() const;

                    /**
                     * 获取<p>框架接入类型</p>
                     * @return FrameworkType <p>框架接入类型</p>
                     * 
                     */
                    std::string GetFrameworkType() const;

                    /**
                     * 设置<p>框架接入类型</p>
                     * @param _frameworkType <p>框架接入类型</p>
                     * 
                     */
                    void SetFrameworkType(const std::string& _frameworkType);

                    /**
                     * 判断参数 FrameworkType 是否已赋值
                     * @return FrameworkType 是否已赋值
                     * 
                     */
                    bool FrameworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务治理实例模式</p>
                     * @return GovernanceType <p>服务治理实例模式</p>
                     * 
                     */
                    std::string GetGovernanceType() const;

                    /**
                     * 设置<p>服务治理实例模式</p>
                     * @param _governanceType <p>服务治理实例模式</p>
                     * 
                     */
                    void SetGovernanceType(const std::string& _governanceType);

                    /**
                     * 判断参数 GovernanceType 是否已赋值
                     * @return GovernanceType 是否已赋值
                     * 
                     */
                    bool GovernanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>部署组关联实例 ID 列表</p>
                     * @return InstanceIdList <p>部署组关联实例 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置<p>部署组关联实例 ID 列表</p>
                     * @param _instanceIdList <p>部署组关联实例 ID 列表</p>
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取<p>部署组是否处于停止状态</p>
                     * @return IsStop <p>部署组是否处于停止状态</p>
                     * 
                     */
                    std::string GetIsStop() const;

                    /**
                     * 设置<p>部署组是否处于停止状态</p>
                     * @param _isStop <p>部署组是否处于停止状态</p>
                     * 
                     */
                    void SetIsStop(const std::string& _isStop);

                    /**
                     * 判断参数 IsStop 是否已赋值
                     * @return IsStop 是否已赋值
                     * 
                     */
                    bool IsStopHasBeenSet() const;

                    /**
                     * 获取<p>K8s 命名空间名称</p>
                     * @return K8sNamespaceName <p>K8s 命名空间名称</p>
                     * 
                     */
                    std::string GetK8sNamespaceName() const;

                    /**
                     * 设置<p>K8s 命名空间名称</p>
                     * @param _k8sNamespaceName <p>K8s 命名空间名称</p>
                     * 
                     */
                    void SetK8sNamespaceName(const std::string& _k8sNamespaceName);

                    /**
                     * 判断参数 K8sNamespaceName 是否已赋值
                     * @return K8sNamespaceName 是否已赋值
                     * 
                     */
                    bool K8sNamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>请求语言</p>
                     * @return Language <p>请求语言</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>请求语言</p>
                     * @param _language <p>请求语言</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>微服务子类型</p>
                     * @return MicroserviceSubType <p>微服务子类型</p>
                     * 
                     */
                    std::string GetMicroserviceSubType() const;

                    /**
                     * 设置<p>微服务子类型</p>
                     * @param _microserviceSubType <p>微服务子类型</p>
                     * 
                     */
                    void SetMicroserviceSubType(const std::string& _microserviceSubType);

                    /**
                     * 判断参数 MicroserviceSubType 是否已赋值
                     * @return MicroserviceSubType 是否已赋值
                     * 
                     */
                    bool MicroserviceSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>非侵入接入子类型</p>
                     * @return NonInvasiveType <p>非侵入接入子类型</p>
                     * 
                     */
                    std::string GetNonInvasiveType() const;

                    /**
                     * 设置<p>非侵入接入子类型</p>
                     * @param _nonInvasiveType <p>非侵入接入子类型</p>
                     * 
                     */
                    void SetNonInvasiveType(const std::string& _nonInvasiveType);

                    /**
                     * 判断参数 NonInvasiveType 是否已赋值
                     * @return NonInvasiveType 是否已赋值
                     * 
                     */
                    bool NonInvasiveTypeHasBeenSet() const;

                    /**
                     * 获取<p>预停止脚本内容</p>
                     * @return PreStopScript <p>预停止脚本内容</p>
                     * 
                     */
                    std::string GetPreStopScript() const;

                    /**
                     * 设置<p>预停止脚本内容</p>
                     * @param _preStopScript <p>预停止脚本内容</p>
                     * 
                     */
                    void SetPreStopScript(const std::string& _preStopScript);

                    /**
                     * 判断参数 PreStopScript 是否已赋值
                     * @return PreStopScript 是否已赋值
                     * 
                     */
                    bool PreStopScriptHasBeenSet() const;

                    /**
                     * 获取<p>实际使用的 K8s 命名空间名称</p>
                     * @return RealNamespaceName <p>实际使用的 K8s 命名空间名称</p>
                     * 
                     */
                    std::string GetRealNamespaceName() const;

                    /**
                     * 设置<p>实际使用的 K8s 命名空间名称</p>
                     * @param _realNamespaceName <p>实际使用的 K8s 命名空间名称</p>
                     * 
                     */
                    void SetRealNamespaceName(const std::string& _realNamespaceName);

                    /**
                     * 判断参数 RealNamespaceName 是否已赋值
                     * @return RealNamespaceName 是否已赋值
                     * 
                     */
                    bool RealNamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>Mesh 服务端口与健康检查配置列表</p>
                     * @return ServiceConfigList <p>Mesh 服务端口与健康检查配置列表</p>
                     * 
                     */
                    std::vector<ServiceConfig> GetServiceConfigList() const;

                    /**
                     * 设置<p>Mesh 服务端口与健康检查配置列表</p>
                     * @param _serviceConfigList <p>Mesh 服务端口与健康检查配置列表</p>
                     * 
                     */
                    void SetServiceConfigList(const std::vector<ServiceConfig>& _serviceConfigList);

                    /**
                     * 判断参数 ServiceConfigList 是否已赋值
                     * @return ServiceConfigList 是否已赋值
                     * 
                     */
                    bool ServiceConfigListHasBeenSet() const;

                    /**
                     * 获取<p>服务治理配置聚合对象</p>
                     * @return ServiceGovernanceConfig <p>服务治理配置聚合对象</p>
                     * 
                     */
                    ServiceGovernanceConfig GetServiceGovernanceConfig() const;

                    /**
                     * 设置<p>服务治理配置聚合对象</p>
                     * @param _serviceGovernanceConfig <p>服务治理配置聚合对象</p>
                     * 
                     */
                    void SetServiceGovernanceConfig(const ServiceGovernanceConfig& _serviceGovernanceConfig);

                    /**
                     * 判断参数 ServiceGovernanceConfig 是否已赋值
                     * @return ServiceGovernanceConfig 是否已赋值
                     * 
                     */
                    bool ServiceGovernanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>部署组标签列表</p>
                     * @return Tags <p>部署组标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>部署组标签列表</p>
                     * @param _tags <p>部署组标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Tapm OT Agent 版本</p>
                     * @return TapmOtAgentVersion <p>Tapm OT Agent 版本</p>
                     * 
                     */
                    std::string GetTapmOtAgentVersion() const;

                    /**
                     * 设置<p>Tapm OT Agent 版本</p>
                     * @param _tapmOtAgentVersion <p>Tapm OT Agent 版本</p>
                     * 
                     */
                    void SetTapmOtAgentVersion(const std::string& _tapmOtAgentVersion);

                    /**
                     * 判断参数 TapmOtAgentVersion 是否已赋值
                     * @return TapmOtAgentVersion 是否已赋值
                     * 
                     */
                    bool TapmOtAgentVersionHasBeenSet() const;

                    /**
                     * 获取<p>单元环境类型</p>
                     * @return UnitEnvType <p>单元环境类型</p>
                     * 
                     */
                    std::string GetUnitEnvType() const;

                    /**
                     * 设置<p>单元环境类型</p>
                     * @param _unitEnvType <p>单元环境类型</p>
                     * 
                     */
                    void SetUnitEnvType(const std::string& _unitEnvType);

                    /**
                     * 判断参数 UnitEnvType 是否已赋值
                     * @return UnitEnvType 是否已赋值
                     * 
                     */
                    bool UnitEnvTypeHasBeenSet() const;

                    /**
                     * 获取<p>单元 ID</p>
                     * @return UnitId <p>单元 ID</p>
                     * 
                     */
                    std::string GetUnitId() const;

                    /**
                     * 设置<p>单元 ID</p>
                     * @param _unitId <p>单元 ID</p>
                     * 
                     */
                    void SetUnitId(const std::string& _unitId);

                    /**
                     * 判断参数 UnitId 是否已赋值
                     * @return UnitId 是否已赋值
                     * 
                     */
                    bool UnitIdHasBeenSet() const;

                    /**
                     * 获取<p>单元类型</p>
                     * @return UnitName <p>单元类型</p>
                     * 
                     */
                    std::string GetUnitName() const;

                    /**
                     * 设置<p>单元类型</p>
                     * @param _unitName <p>单元类型</p>
                     * 
                     */
                    void SetUnitName(const std::string& _unitName);

                    /**
                     * 判断参数 UnitName 是否已赋值
                     * @return UnitName 是否已赋值
                     * 
                     */
                    bool UnitNameHasBeenSet() const;

                    /**
                     * 获取<p>部署组资源类型</p>
                     * @return UnitType <p>部署组资源类型</p>
                     * 
                     */
                    std::string GetUnitType() const;

                    /**
                     * 设置<p>部署组资源类型</p>
                     * @param _unitType <p>部署组资源类型</p>
                     * 
                     */
                    void SetUnitType(const std::string& _unitType);

                    /**
                     * 判断参数 UnitType 是否已赋值
                     * @return UnitType 是否已赋值
                     * 
                     */
                    bool UnitTypeHasBeenSet() const;

                private:

                    /**
                     * <p>部署组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>部署组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>部署组状态</p>
                     */
                    std::string m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * <p>程序包ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>程序包名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>程序包版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>命名空间ID</p>
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>命名空间名称</p>
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>部署组机器数目</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>部署组运行中机器数目</p>
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * <p>部署组启动参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                    /**
                     * <p>部署组创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>部署组更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>部署组停止机器数目</p>
                     */
                    int64_t m_offInstanceCount;
                    bool m_offInstanceCountHasBeenSet;

                    /**
                     * <p>部署组描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * <p>微服务类型</p>
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * <p>应用类型</p>
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * <p>部署组资源类型</p><p>枚举值：</p><ul><li>GW： 网关</li><li>DEF： 普通业务部署组</li><li>SVL： Serverless</li></ul>
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * <p>部署组更新时间戳</p>
                     */
                    int64_t m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>部署应用描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployDesc;
                    bool m_deployDescHasBeenSet;

                    /**
                     * <p>滚动发布的更新方式</p>
                     */
                    uint64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * <p>发布是否启用beta批次</p>
                     */
                    bool m_deployBetaEnable;
                    bool m_deployBetaEnableHasBeenSet;

                    /**
                     * <p>滚动发布的批次比例列表</p>
                     */
                    std::vector<double> m_deployBatch;
                    bool m_deployBatchHasBeenSet;

                    /**
                     * <p>滚动发布的批次执行方式</p>
                     */
                    std::string m_deployExeMode;
                    bool m_deployExeModeHasBeenSet;

                    /**
                     * <p>滚动发布的每个批次的等待时间</p>
                     */
                    uint64_t m_deployWaitTime;
                    bool m_deployWaitTimeHasBeenSet;

                    /**
                     * <p>是否开启了健康检查</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>健康检查配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * <p>程序包类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>启动脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startScript;
                    bool m_startScriptHasBeenSet;

                    /**
                     * <p>停止脚本 base64编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopScript;
                    bool m_stopScriptHasBeenSet;

                    /**
                     * <p>部署组备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>javaagent信息</p>
                     */
                    std::vector<AgentProfile> m_agentProfileList;
                    bool m_agentProfileListHasBeenSet;

                    /**
                     * <p>预热属性配置</p>
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                    /**
                     * <p>Envoy网关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GatewayConfig m_gatewayConfig;
                    bool m_gatewayConfigHasBeenSet;

                    /**
                     * <p>批次是否开启健康检查</p>
                     */
                    bool m_enableBatchHealthCheck;
                    bool m_enableBatchHealthCheckHasBeenSet;

                    /**
                     * <p>是否开启cgroup控制内存cpu</p>
                     */
                    bool m_filebeatCgroupEnable;
                    bool m_filebeatCgroupEnableHasBeenSet;

                    /**
                     * <p>filebeat使用cpu上限</p>
                     */
                    double m_filebeatMaxCpu;
                    bool m_filebeatMaxCpuHasBeenSet;

                    /**
                     * <p>filebeat使用内存上限</p>
                     */
                    int64_t m_filebeatMaxMem;
                    bool m_filebeatMaxMemHasBeenSet;

                    /**
                     * <p>仓库ID</p>
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                    /**
                     * <p>仓库名称</p>
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * <p>仓库类型</p>
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                    /**
                     * <p>是否自动重启</p>
                     */
                    bool m_livenessAutoRestart;
                    bool m_livenessAutoRestartHasBeenSet;

                    /**
                     * <p>Mesh Sidecar 数据面版本通道</p><p>枚举值：</p><ul><li>stable： 稳定版</li><li>release： 最新版</li></ul>
                     */
                    std::string m_meshSidecarVersion;
                    bool m_meshSidecarVersionHasBeenSet;

                    /**
                     * <p>业务日志配置 ID 列表</p>
                     */
                    std::string m_businessLogConfigIdList;
                    bool m_businessLogConfigIdListHasBeenSet;

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_businessLogDeliveryConfigIdList;
                    bool m_businessLogDeliveryConfigIdListHasBeenSet;

                    /**
                     * <p>String型普通说明场景</p>
                     */
                    std::string m_businessSystemId;
                    bool m_businessSystemIdHasBeenSet;

                    /**
                     * <p>业务系统名称</p>
                     */
                    std::string m_businessSystemName;
                    bool m_businessSystemNameHasBeenSet;

                    /**
                     * <p>CLS 机器组 ID</p>
                     */
                    std::string m_clsMachineGroupId;
                    bool m_clsMachineGroupIdHasBeenSet;

                    /**
                     * <p>是否开启服务治理</p>
                     */
                    bool m_enableGovernance;
                    bool m_enableGovernanceHasBeenSet;

                    /**
                     * <p>是否开启可观测</p>
                     */
                    bool m_enableTelemetry;
                    bool m_enableTelemetryHasBeenSet;

                    /**
                     * <p>是否开启 OT Agent</p>
                     */
                    bool m_enableTelemetryAgent;
                    bool m_enableTelemetryAgentHasBeenSet;

                    /**
                     * <p>是否开启单元化</p>
                     */
                    bool m_enabledUnit;
                    bool m_enabledUnitHasBeenSet;

                    /**
                     * <p>独享注册中心/配置中心实例列表</p>
                     */
                    std::vector<ExclusiveInstance> m_exclusiveInstances;
                    bool m_exclusiveInstancesHasBeenSet;

                    /**
                     * <p>框架接入类型</p>
                     */
                    std::string m_frameworkType;
                    bool m_frameworkTypeHasBeenSet;

                    /**
                     * <p>服务治理实例模式</p>
                     */
                    std::string m_governanceType;
                    bool m_governanceTypeHasBeenSet;

                    /**
                     * <p>部署组关联实例 ID 列表</p>
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * <p>部署组是否处于停止状态</p>
                     */
                    std::string m_isStop;
                    bool m_isStopHasBeenSet;

                    /**
                     * <p>K8s 命名空间名称</p>
                     */
                    std::string m_k8sNamespaceName;
                    bool m_k8sNamespaceNameHasBeenSet;

                    /**
                     * <p>请求语言</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>微服务子类型</p>
                     */
                    std::string m_microserviceSubType;
                    bool m_microserviceSubTypeHasBeenSet;

                    /**
                     * <p>非侵入接入子类型</p>
                     */
                    std::string m_nonInvasiveType;
                    bool m_nonInvasiveTypeHasBeenSet;

                    /**
                     * <p>预停止脚本内容</p>
                     */
                    std::string m_preStopScript;
                    bool m_preStopScriptHasBeenSet;

                    /**
                     * <p>实际使用的 K8s 命名空间名称</p>
                     */
                    std::string m_realNamespaceName;
                    bool m_realNamespaceNameHasBeenSet;

                    /**
                     * <p>Mesh 服务端口与健康检查配置列表</p>
                     */
                    std::vector<ServiceConfig> m_serviceConfigList;
                    bool m_serviceConfigListHasBeenSet;

                    /**
                     * <p>服务治理配置聚合对象</p>
                     */
                    ServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * <p>部署组标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Tapm OT Agent 版本</p>
                     */
                    std::string m_tapmOtAgentVersion;
                    bool m_tapmOtAgentVersionHasBeenSet;

                    /**
                     * <p>单元环境类型</p>
                     */
                    std::string m_unitEnvType;
                    bool m_unitEnvTypeHasBeenSet;

                    /**
                     * <p>单元 ID</p>
                     */
                    std::string m_unitId;
                    bool m_unitIdHasBeenSet;

                    /**
                     * <p>单元类型</p>
                     */
                    std::string m_unitName;
                    bool m_unitNameHasBeenSet;

                    /**
                     * <p>部署组资源类型</p>
                     */
                    std::string m_unitType;
                    bool m_unitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_
