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
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
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
                     * 获取部署组名称
                     * @return GroupName 部署组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组名称
                     * @param _groupName 部署组名称
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
                     * 获取部署组状态
                     * @return GroupStatus 部署组状态
                     * 
                     */
                    std::string GetGroupStatus() const;

                    /**
                     * 设置部署组状态
                     * @param _groupStatus 部署组状态
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
                     * 获取程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageId 程序包ID
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
                     * 获取程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName 程序包名称
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
                     * 获取程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageVersion 程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageVersion 程序包版本号
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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
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
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
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
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
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
                     * 获取应用ID
                     * @return ApplicationId 应用ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID
                     * @param _applicationId 应用ID
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
                     * 获取应用名称
                     * @return ApplicationName 应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名称
                     * @param _applicationName 应用名称
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
                     * 获取部署组机器数目
                     * @return InstanceCount 部署组机器数目
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置部署组机器数目
                     * @param _instanceCount 部署组机器数目
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
                     * 获取部署组运行中机器数目
                     * @return RunInstanceCount 部署组运行中机器数目
                     * 
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置部署组运行中机器数目
                     * @param _runInstanceCount 部署组运行中机器数目
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
                     * 获取部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupParameters 部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartupParameters() const;

                    /**
                     * 设置部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupParameters 部署组启动参数信息
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
                     * 获取部署组创建时间
                     * @return CreateTime 部署组创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署组创建时间
                     * @param _createTime 部署组创建时间
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
                     * 获取部署组更新时间
                     * @return UpdateTime 部署组更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置部署组更新时间
                     * @param _updateTime 部署组更新时间
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
                     * 获取部署组停止机器数目
                     * @return OffInstanceCount 部署组停止机器数目
                     * 
                     */
                    int64_t GetOffInstanceCount() const;

                    /**
                     * 设置部署组停止机器数目
                     * @param _offInstanceCount 部署组停止机器数目
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
                     * 获取部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupDesc 部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupDesc() const;

                    /**
                     * 设置部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupDesc 部署组描述信息
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
                     * 获取微服务类型
                     * @return MicroserviceType 微服务类型
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
                     * @param _microserviceType 微服务类型
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
                     * 获取应用类型
                     * @return ApplicationType 应用类型
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型
                     * @param _applicationType 应用类型
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
                     * 获取部署组资源类型
                     * @return GroupResourceType 部署组资源类型
                     * 
                     */
                    std::string GetGroupResourceType() const;

                    /**
                     * 设置部署组资源类型
                     * @param _groupResourceType 部署组资源类型
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
                     * 获取部署组更新时间戳
                     * @return UpdatedTime 部署组更新时间戳
                     * 
                     */
                    int64_t GetUpdatedTime() const;

                    /**
                     * 设置部署组更新时间戳
                     * @param _updatedTime 部署组更新时间戳
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
                     * 获取部署应用描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployDesc 部署应用描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置部署应用描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployDesc 部署应用描述信息
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
                     * 获取滚动发布的更新方式
                     * @return UpdateType 滚动发布的更新方式
                     * 
                     */
                    uint64_t GetUpdateType() const;

                    /**
                     * 设置滚动发布的更新方式
                     * @param _updateType 滚动发布的更新方式
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
                     * 获取发布是否启用beta批次
                     * @return DeployBetaEnable 发布是否启用beta批次
                     * 
                     */
                    bool GetDeployBetaEnable() const;

                    /**
                     * 设置发布是否启用beta批次
                     * @param _deployBetaEnable 发布是否启用beta批次
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
                     * 获取滚动发布的批次比例列表
                     * @return DeployBatch 滚动发布的批次比例列表
                     * 
                     */
                    std::vector<double> GetDeployBatch() const;

                    /**
                     * 设置滚动发布的批次比例列表
                     * @param _deployBatch 滚动发布的批次比例列表
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
                     * 获取滚动发布的批次执行方式
                     * @return DeployExeMode 滚动发布的批次执行方式
                     * 
                     */
                    std::string GetDeployExeMode() const;

                    /**
                     * 设置滚动发布的批次执行方式
                     * @param _deployExeMode 滚动发布的批次执行方式
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
                     * 获取滚动发布的每个批次的等待时间
                     * @return DeployWaitTime 滚动发布的每个批次的等待时间
                     * 
                     */
                    uint64_t GetDeployWaitTime() const;

                    /**
                     * 设置滚动发布的每个批次的等待时间
                     * @param _deployWaitTime 滚动发布的每个批次的等待时间
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
                     * 获取是否开启了健康检查
                     * @return EnableHealthCheck 是否开启了健康检查
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否开启了健康检查
                     * @param _enableHealthCheck 是否开启了健康检查
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
                     * 获取健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings 健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings 健康检查配置
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
                     * 获取程序包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 程序包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置程序包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageType 程序包类型
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
                     * 获取启动脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartScript 启动脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartScript() const;

                    /**
                     * 设置启动脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startScript 启动脚本 base64编码
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
                     * 获取停止脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StopScript 停止脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStopScript() const;

                    /**
                     * 设置停止脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stopScript 停止脚本 base64编码
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
                     * 获取部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 部署组备注
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
                     * 获取javaagent信息
                     * @return AgentProfileList javaagent信息
                     * 
                     */
                    std::vector<AgentProfile> GetAgentProfileList() const;

                    /**
                     * 设置javaagent信息
                     * @param _agentProfileList javaagent信息
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
                     * 获取预热属性配置
                     * @return WarmupSetting 预热属性配置
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置预热属性配置
                     * @param _warmupSetting 预热属性配置
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
                     * 获取Envoy网关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayConfig Envoy网关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GatewayConfig GetGatewayConfig() const;

                    /**
                     * 设置Envoy网关配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayConfig Envoy网关配置
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
                     * 获取批次是否开启健康检查
                     * @return EnableBatchHealthCheck 批次是否开启健康检查
                     * 
                     */
                    bool GetEnableBatchHealthCheck() const;

                    /**
                     * 设置批次是否开启健康检查
                     * @param _enableBatchHealthCheck 批次是否开启健康检查
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
                     * 获取是否开启cgroup控制内存cpu
                     * @return FilebeatCgroupEnable 是否开启cgroup控制内存cpu
                     * 
                     */
                    bool GetFilebeatCgroupEnable() const;

                    /**
                     * 设置是否开启cgroup控制内存cpu
                     * @param _filebeatCgroupEnable 是否开启cgroup控制内存cpu
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
                     * 获取filebeat使用cpu上限
                     * @return FilebeatMaxCpu filebeat使用cpu上限
                     * 
                     */
                    double GetFilebeatMaxCpu() const;

                    /**
                     * 设置filebeat使用cpu上限
                     * @param _filebeatMaxCpu filebeat使用cpu上限
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
                     * 获取filebeat使用内存上限
                     * @return FilebeatMaxMem filebeat使用内存上限
                     * 
                     */
                    int64_t GetFilebeatMaxMem() const;

                    /**
                     * 设置filebeat使用内存上限
                     * @param _filebeatMaxMem filebeat使用内存上限
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
                     * 获取仓库ID
                     * @return RepositoryId 仓库ID
                     * 
                     */
                    std::string GetRepositoryId() const;

                    /**
                     * 设置仓库ID
                     * @param _repositoryId 仓库ID
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
                     * 获取仓库名称
                     * @return RepositoryName 仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置仓库名称
                     * @param _repositoryName 仓库名称
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
                     * 获取仓库类型
                     * @return RepositoryType 仓库类型
                     * 
                     */
                    std::string GetRepositoryType() const;

                    /**
                     * 设置仓库类型
                     * @param _repositoryType 仓库类型
                     * 
                     */
                    void SetRepositoryType(const std::string& _repositoryType);

                    /**
                     * 判断参数 RepositoryType 是否已赋值
                     * @return RepositoryType 是否已赋值
                     * 
                     */
                    bool RepositoryTypeHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 部署组状态
                     */
                    std::string m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 程序包版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 部署组机器数目
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 部署组运行中机器数目
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * 部署组启动参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startupParameters;
                    bool m_startupParametersHasBeenSet;

                    /**
                     * 部署组创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 部署组更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 部署组停止机器数目
                     */
                    int64_t m_offInstanceCount;
                    bool m_offInstanceCountHasBeenSet;

                    /**
                     * 部署组描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupDesc;
                    bool m_groupDescHasBeenSet;

                    /**
                     * 微服务类型
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * 应用类型
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 部署组资源类型
                     */
                    std::string m_groupResourceType;
                    bool m_groupResourceTypeHasBeenSet;

                    /**
                     * 部署组更新时间戳
                     */
                    int64_t m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 部署应用描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployDesc;
                    bool m_deployDescHasBeenSet;

                    /**
                     * 滚动发布的更新方式
                     */
                    uint64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 发布是否启用beta批次
                     */
                    bool m_deployBetaEnable;
                    bool m_deployBetaEnableHasBeenSet;

                    /**
                     * 滚动发布的批次比例列表
                     */
                    std::vector<double> m_deployBatch;
                    bool m_deployBatchHasBeenSet;

                    /**
                     * 滚动发布的批次执行方式
                     */
                    std::string m_deployExeMode;
                    bool m_deployExeModeHasBeenSet;

                    /**
                     * 滚动发布的每个批次的等待时间
                     */
                    uint64_t m_deployWaitTime;
                    bool m_deployWaitTimeHasBeenSet;

                    /**
                     * 是否开启了健康检查
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * 健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 程序包类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 启动脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startScript;
                    bool m_startScriptHasBeenSet;

                    /**
                     * 停止脚本 base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stopScript;
                    bool m_stopScriptHasBeenSet;

                    /**
                     * 部署组备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * javaagent信息
                     */
                    std::vector<AgentProfile> m_agentProfileList;
                    bool m_agentProfileListHasBeenSet;

                    /**
                     * 预热属性配置
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                    /**
                     * Envoy网关配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GatewayConfig m_gatewayConfig;
                    bool m_gatewayConfigHasBeenSet;

                    /**
                     * 批次是否开启健康检查
                     */
                    bool m_enableBatchHealthCheck;
                    bool m_enableBatchHealthCheckHasBeenSet;

                    /**
                     * 是否开启cgroup控制内存cpu
                     */
                    bool m_filebeatCgroupEnable;
                    bool m_filebeatCgroupEnableHasBeenSet;

                    /**
                     * filebeat使用cpu上限
                     */
                    double m_filebeatMaxCpu;
                    bool m_filebeatMaxCpuHasBeenSet;

                    /**
                     * filebeat使用内存上限
                     */
                    int64_t m_filebeatMaxMem;
                    bool m_filebeatMaxMemHasBeenSet;

                    /**
                     * 仓库ID
                     */
                    std::string m_repositoryId;
                    bool m_repositoryIdHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_repositoryType;
                    bool m_repositoryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUP_H_
