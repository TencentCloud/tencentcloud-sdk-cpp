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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ContainerGroupObservabilityConfig.h>
#include <tencentcloud/tsf/v20180326/model/Env.h>
#include <tencentcloud/tsf/v20180326/model/VolumeMountInfo.h>
#include <tencentcloud/tsf/v20180326/model/LifeCycleHook.h>
#include <tencentcloud/tsf/v20180326/model/ContainerInfo.h>
#include <tencentcloud/tsf/v20180326/model/VolumeInfo.h>
#include <tencentcloud/tsf/v20180326/model/ServiceSetting.h>
#include <tencentcloud/tsf/v20180326/model/Tag.h>
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>
#include <tencentcloud/tsf/v20180326/model/SchedulingStrategy.h>
#include <tencentcloud/tsf/v20180326/model/ContainerGroupServiceGovernanceConfig.h>
#include <tencentcloud/tsf/v20180326/model/WarmupSetting.h>
#include <tencentcloud/tsf/v20180326/model/AgentProfile.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeployContainerApplication请求参数结构体
                */
                class DeployContainerApplicationRequest : public AbstractModel
                {
                public:
                    DeployContainerApplicationRequest();
                    ~DeployContainerApplicationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取可观测配置
                     * @return ObservabilityConfig 可观测配置
                     * 
                     */
                    ContainerGroupObservabilityConfig GetObservabilityConfig() const;

                    /**
                     * 设置可观测配置
                     * @param _observabilityConfig 可观测配置
                     * 
                     */
                    void SetObservabilityConfig(const ContainerGroupObservabilityConfig& _observabilityConfig);

                    /**
                     * 判断参数 ObservabilityConfig 是否已赋值
                     * @return ObservabilityConfig 是否已赋值
                     * 
                     */
                    bool ObservabilityConfigHasBeenSet() const;

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
                     * 获取部署组ID，分组唯一标识
                     * @return GroupId 部署组ID，分组唯一标识
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，分组唯一标识
                     * @param _groupId 部署组ID，分组唯一标识
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
                     * 获取业务容器的环境变量参数
                     * @return Envs 业务容器的环境变量参数
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置业务容器的环境变量参数
                     * @param _envs 业务容器的环境变量参数
                     * 
                     */
                    void SetEnvs(const std::vector<Env>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取业务容器的挂载信息
                     * @return VolumeMountInfoList 业务容器的挂载信息
                     * 
                     */
                    std::vector<VolumeMountInfo> GetVolumeMountInfoList() const;

                    /**
                     * 设置业务容器的挂载信息
                     * @param _volumeMountInfoList 业务容器的挂载信息
                     * 
                     */
                    void SetVolumeMountInfoList(const std::vector<VolumeMountInfo>& _volumeMountInfoList);

                    /**
                     * 判断参数 VolumeMountInfoList 是否已赋值
                     * @return VolumeMountInfoList 是否已赋值
                     * 
                     */
                    bool VolumeMountInfoListHasBeenSet() const;

                    /**
                     * 获取业务主容器生命周期钩子列表
                     * @return LifeCycleHookList 业务主容器生命周期钩子列表
                     * 
                     */
                    std::vector<LifeCycleHook> GetLifeCycleHookList() const;

                    /**
                     * 设置业务主容器生命周期钩子列表
                     * @param _lifeCycleHookList 业务主容器生命周期钩子列表
                     * 
                     */
                    void SetLifeCycleHookList(const std::vector<LifeCycleHook>& _lifeCycleHookList);

                    /**
                     * 判断参数 LifeCycleHookList 是否已赋值
                     * @return LifeCycleHookList 是否已赋值
                     * 
                     */
                    bool LifeCycleHookListHasBeenSet() const;

                    /**
                     * 获取附属容器列表
                     * @return AdditionalContainerList 附属容器列表
                     * 
                     */
                    std::vector<ContainerInfo> GetAdditionalContainerList() const;

                    /**
                     * 设置附属容器列表
                     * @param _additionalContainerList 附属容器列表
                     * 
                     */
                    void SetAdditionalContainerList(const std::vector<ContainerInfo>& _additionalContainerList);

                    /**
                     * 判断参数 AdditionalContainerList 是否已赋值
                     * @return AdditionalContainerList 是否已赋值
                     * 
                     */
                    bool AdditionalContainerListHasBeenSet() const;

                    /**
                     * 获取容器卷信息
                     * @return VolumeInfoList 容器卷信息
                     * 
                     */
                    std::vector<VolumeInfo> GetVolumeInfoList() const;

                    /**
                     * 设置容器卷信息
                     * @param _volumeInfoList 容器卷信息
                     * 
                     */
                    void SetVolumeInfoList(const std::vector<VolumeInfo>& _volumeInfoList);

                    /**
                     * 判断参数 VolumeInfoList 是否已赋值
                     * @return VolumeInfoList 是否已赋值
                     * 
                     */
                    bool VolumeInfoListHasBeenSet() const;

                    /**
                     * 获取Service访问配置列表
                     * @return ServiceSettingList Service访问配置列表
                     * 
                     */
                    std::vector<ServiceSetting> GetServiceSettingList() const;

                    /**
                     * 设置Service访问配置列表
                     * @param _serviceSettingList Service访问配置列表
                     * 
                     */
                    void SetServiceSettingList(const std::vector<ServiceSetting>& _serviceSettingList);

                    /**
                     * 判断参数 ServiceSettingList 是否已赋值
                     * @return ServiceSettingList 是否已赋值
                     * 
                     */
                    bool ServiceSettingListHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Alias 备注
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置备注
                     * @param _alias 备注
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
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取容器类型
                     * @return ContainerKind 容器类型
                     * 
                     */
                    std::string GetContainerKind() const;

                    /**
                     * 设置容器类型
                     * @param _containerKind 容器类型
                     * 
                     */
                    void SetContainerKind(const std::string& _containerKind);

                    /**
                     * 判断参数 ContainerKind 是否已赋值
                     * @return ContainerKind 是否已赋值
                     * 
                     */
                    bool ContainerKindHasBeenSet() const;

                    /**
                     * 获取业务容器的 镜像Server ccr.ccs.tencentyun.com
                     * @return Server 业务容器的 镜像Server ccr.ccs.tencentyun.com
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置业务容器的 镜像Server ccr.ccs.tencentyun.com
                     * @param _server 业务容器的 镜像Server ccr.ccs.tencentyun.com
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取业务容器的镜像名
                     * @return RepoName 业务容器的镜像名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置业务容器的镜像名
                     * @param _repoName 业务容器的镜像名
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取仓库类型
                     * @return RepoType 仓库类型
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置仓库类型
                     * @param _repoType 仓库类型
                     * 
                     */
                    void SetRepoType(const std::string& _repoType);

                    /**
                     * 判断参数 RepoType 是否已赋值
                     * @return RepoType 是否已赋值
                     * 
                     */
                    bool RepoTypeHasBeenSet() const;

                    /**
                     * 获取TCR仓库信息
                     * @return TcrRepoInfo TCR仓库信息
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TCR仓库信息
                     * @param _tcrRepoInfo TCR仓库信息
                     * 
                     */
                    void SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo);

                    /**
                     * 判断参数 TcrRepoInfo 是否已赋值
                     * @return TcrRepoInfo 是否已赋值
                     * 
                     */
                    bool TcrRepoInfoHasBeenSet() const;

                    /**
                     * 获取容器访问凭证名称
                     * @return SecretName 容器访问凭证名称
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置容器访问凭证名称
                     * @param _secretName 容器访问凭证名称
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取业务容器的镜像版本号
                     * @return TagName 业务容器的镜像版本号
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置业务容器的镜像版本号
                     * @param _tagName 业务容器的镜像版本号
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取健康检查
                     * @return HealthCheckSettings 健康检查
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查
                     * @param _healthCheckSettings 健康检查
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
                     * 获取业务容器的 cpu  request
                     * @return CpuRequest 业务容器的 cpu  request
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置业务容器的 cpu  request
                     * @param _cpuRequest 业务容器的 cpu  request
                     * 
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取业务容器的 cpu limit
                     * @return CpuLimit 业务容器的 cpu limit
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置业务容器的 cpu limit
                     * @param _cpuLimit 业务容器的 cpu limit
                     * 
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取业务容器的 mem request
                     * @return MemRequest 业务容器的 mem request
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置业务容器的 mem request
                     * @param _memRequest 业务容器的 mem request
                     * 
                     */
                    void SetMemRequest(const std::string& _memRequest);

                    /**
                     * 判断参数 MemRequest 是否已赋值
                     * @return MemRequest 是否已赋值
                     * 
                     */
                    bool MemRequestHasBeenSet() const;

                    /**
                     * 获取业务容器的 mem limit
                     * @return MemLimit 业务容器的 mem limit
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置业务容器的 mem limit
                     * @param _memLimit 业务容器的 mem limit
                     * 
                     */
                    void SetMemLimit(const std::string& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取业务容器的 jvm 参数
                     * @return JvmOpts 业务容器的 jvm 参数
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置业务容器的 jvm 参数
                     * @param _jvmOpts 业务容器的 jvm 参数
                     * 
                     */
                    void SetJvmOpts(const std::string& _jvmOpts);

                    /**
                     * 判断参数 JvmOpts 是否已赋值
                     * @return JvmOpts 是否已赋值
                     * 
                     */
                    bool JvmOptsHasBeenSet() const;

                    /**
                     * 获取是否为初始化容器 业务主容器不能为初始化容
                     * @return InitContainerEnable 是否为初始化容器 业务主容器不能为初始化容
                     * 
                     */
                    bool GetInitContainerEnable() const;

                    /**
                     * 设置是否为初始化容器 业务主容器不能为初始化容
                     * @param _initContainerEnable 是否为初始化容器 业务主容器不能为初始化容
                     * 
                     */
                    void SetInitContainerEnable(const bool& _initContainerEnable);

                    /**
                     * 判断参数 InitContainerEnable 是否已赋值
                     * @return InitContainerEnable 是否已赋值
                     * 
                     */
                    bool InitContainerEnableHasBeenSet() const;

                    /**
                     * 获取业务主容器是否为特权容器
                     * @return PrivilegeContainerEnable 业务主容器是否为特权容器
                     * 
                     */
                    bool GetPrivilegeContainerEnable() const;

                    /**
                     * 设置业务主容器是否为特权容器
                     * @param _privilegeContainerEnable 业务主容器是否为特权容器
                     * 
                     */
                    void SetPrivilegeContainerEnable(const bool& _privilegeContainerEnable);

                    /**
                     * 判断参数 PrivilegeContainerEnable 是否已赋值
                     * @return PrivilegeContainerEnable 是否已赋值
                     * 
                     */
                    bool PrivilegeContainerEnableHasBeenSet() const;

                    /**
                     * 获取业务主容器运行命令(转base64)
                     * @return RunCommand 业务主容器运行命令(转base64)
                     * 
                     */
                    std::string GetRunCommand() const;

                    /**
                     * 设置业务主容器运行命令(转base64)
                     * @param _runCommand 业务主容器运行命令(转base64)
                     * 
                     */
                    void SetRunCommand(const std::string& _runCommand);

                    /**
                     * 判断参数 RunCommand 是否已赋值
                     * @return RunCommand 是否已赋值
                     * 
                     */
                    bool RunCommandHasBeenSet() const;

                    /**
                     * 获取业务主容器运行参数(转base64)
                     * @return RunArg 业务主容器运行参数(转base64)
                     * 
                     */
                    std::string GetRunArg() const;

                    /**
                     * 设置业务主容器运行参数(转base64)
                     * @param _runArg 业务主容器运行参数(转base64)
                     * 
                     */
                    void SetRunArg(const std::string& _runArg);

                    /**
                     * 判断参数 RunArg 是否已赋值
                     * @return RunArg 是否已赋值
                     * 
                     */
                    bool RunArgHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceNum 实例数量
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例数量
                     * @param _instanceNum 实例数量
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取调度策略
                     * @return SchedulingStrategy 调度策略
                     * 
                     */
                    SchedulingStrategy GetSchedulingStrategy() const;

                    /**
                     * 设置调度策略
                     * @param _schedulingStrategy 调度策略
                     * 
                     */
                    void SetSchedulingStrategy(const SchedulingStrategy& _schedulingStrategy);

                    /**
                     * 判断参数 SchedulingStrategy 是否已赋值
                     * @return SchedulingStrategy 是否已赋值
                     * 
                     */
                    bool SchedulingStrategyHasBeenSet() const;

                    /**
                     * 获取重启策略
                     * @return RestartPolicy 重启策略
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置重启策略
                     * @param _restartPolicy 重启策略
                     * 
                     */
                    void SetRestartPolicy(const std::string& _restartPolicy);

                    /**
                     * 判断参数 RestartPolicy 是否已赋值
                     * @return RestartPolicy 是否已赋值
                     * 
                     */
                    bool RestartPolicyHasBeenSet() const;

                    /**
                     * 获取服务治理配置
                     * @return ServiceSpecEncode 服务治理配置
                     * 
                     */
                    std::string GetServiceSpecEncode() const;

                    /**
                     * 设置服务治理配置
                     * @param _serviceSpecEncode 服务治理配置
                     * 
                     */
                    void SetServiceSpecEncode(const std::string& _serviceSpecEncode);

                    /**
                     * 判断参数 ServiceSpecEncode 是否已赋值
                     * @return ServiceSpecEncode 是否已赋值
                     * 
                     */
                    bool ServiceSpecEncodeHasBeenSet() const;

                    /**
                     * 获取istio容器的 mem Request
                     * @return IstioMemRequest istio容器的 mem Request
                     * 
                     */
                    std::string GetIstioMemRequest() const;

                    /**
                     * 设置istio容器的 mem Request
                     * @param _istioMemRequest istio容器的 mem Request
                     * 
                     */
                    void SetIstioMemRequest(const std::string& _istioMemRequest);

                    /**
                     * 判断参数 IstioMemRequest 是否已赋值
                     * @return IstioMemRequest 是否已赋值
                     * 
                     */
                    bool IstioMemRequestHasBeenSet() const;

                    /**
                     * 获取 istio容器的 cpu Request
                     * @return IstioCpuRequest  istio容器的 cpu Request
                     * 
                     */
                    std::string GetIstioCpuRequest() const;

                    /**
                     * 设置 istio容器的 cpu Request
                     * @param _istioCpuRequest  istio容器的 cpu Request
                     * 
                     */
                    void SetIstioCpuRequest(const std::string& _istioCpuRequest);

                    /**
                     * 判断参数 IstioCpuRequest 是否已赋值
                     * @return IstioCpuRequest 是否已赋值
                     * 
                     */
                    bool IstioCpuRequestHasBeenSet() const;

                    /**
                     * 获取istio容器的 mem Limit
                     * @return IstioMemLimit istio容器的 mem Limit
                     * 
                     */
                    std::string GetIstioMemLimit() const;

                    /**
                     * 设置istio容器的 mem Limit
                     * @param _istioMemLimit istio容器的 mem Limit
                     * 
                     */
                    void SetIstioMemLimit(const std::string& _istioMemLimit);

                    /**
                     * 判断参数 IstioMemLimit 是否已赋值
                     * @return IstioMemLimit 是否已赋值
                     * 
                     */
                    bool IstioMemLimitHasBeenSet() const;

                    /**
                     * 获取istio容器的 cpu Limit
                     * @return IstioCpuLimit istio容器的 cpu Limit
                     * 
                     */
                    std::string GetIstioCpuLimit() const;

                    /**
                     * 设置istio容器的 cpu Limit
                     * @param _istioCpuLimit istio容器的 cpu Limit
                     * 
                     */
                    void SetIstioCpuLimit(const std::string& _istioCpuLimit);

                    /**
                     * 判断参数 IstioCpuLimit 是否已赋值
                     * @return IstioCpuLimit 是否已赋值
                     * 
                     */
                    bool IstioCpuLimitHasBeenSet() const;

                    /**
                     * 获取服务治理配置
                     * @return ServiceGovernanceConfig 服务治理配置
                     * 
                     */
                    ContainerGroupServiceGovernanceConfig GetServiceGovernanceConfig() const;

                    /**
                     * 设置服务治理配置
                     * @param _serviceGovernanceConfig 服务治理配置
                     * 
                     */
                    void SetServiceGovernanceConfig(const ContainerGroupServiceGovernanceConfig& _serviceGovernanceConfig);

                    /**
                     * 判断参数 ServiceGovernanceConfig 是否已赋值
                     * @return ServiceGovernanceConfig 是否已赋值
                     * 
                     */
                    bool ServiceGovernanceConfigHasBeenSet() const;

                    /**
                     * 获取agent容器的 mem Request
                     * @return AgentMemRequest agent容器的 mem Request
                     * 
                     */
                    std::string GetAgentMemRequest() const;

                    /**
                     * 设置agent容器的 mem Request
                     * @param _agentMemRequest agent容器的 mem Request
                     * 
                     */
                    void SetAgentMemRequest(const std::string& _agentMemRequest);

                    /**
                     * 判断参数 AgentMemRequest 是否已赋值
                     * @return AgentMemRequest 是否已赋值
                     * 
                     */
                    bool AgentMemRequestHasBeenSet() const;

                    /**
                     * 获取agent容器的 cpu Request
                     * @return AgentCpuRequest agent容器的 cpu Request
                     * 
                     */
                    std::string GetAgentCpuRequest() const;

                    /**
                     * 设置agent容器的 cpu Request
                     * @param _agentCpuRequest agent容器的 cpu Request
                     * 
                     */
                    void SetAgentCpuRequest(const std::string& _agentCpuRequest);

                    /**
                     * 判断参数 AgentCpuRequest 是否已赋值
                     * @return AgentCpuRequest 是否已赋值
                     * 
                     */
                    bool AgentCpuRequestHasBeenSet() const;

                    /**
                     * 获取agent容器的 mem Limit
                     * @return AgentMemLimit agent容器的 mem Limit
                     * 
                     */
                    std::string GetAgentMemLimit() const;

                    /**
                     * 设置agent容器的 mem Limit
                     * @param _agentMemLimit agent容器的 mem Limit
                     * 
                     */
                    void SetAgentMemLimit(const std::string& _agentMemLimit);

                    /**
                     * 判断参数 AgentMemLimit 是否已赋值
                     * @return AgentMemLimit 是否已赋值
                     * 
                     */
                    bool AgentMemLimitHasBeenSet() const;

                    /**
                     * 获取agent容器的 cpu Limit
                     * @return AgentCpuLimit agent容器的 cpu Limit
                     * 
                     */
                    std::string GetAgentCpuLimit() const;

                    /**
                     * 设置agent容器的 cpu Limit
                     * @param _agentCpuLimit agent容器的 cpu Limit
                     * 
                     */
                    void SetAgentCpuLimit(const std::string& _agentCpuLimit);

                    /**
                     * 判断参数 AgentCpuLimit 是否已赋值
                     * @return AgentCpuLimit 是否已赋值
                     * 
                     */
                    bool AgentCpuLimitHasBeenSet() const;

                    /**
                     * 获取发布策略(0表示快速更新，1表示滚动更新。默认值为0)
                     * @return UpdateType 发布策略(0表示快速更新，1表示滚动更新。默认值为0)
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置发布策略(0表示快速更新，1表示滚动更新。默认值为0)
                     * @param _updateType 发布策略(0表示快速更新，1表示滚动更新。默认值为0)
                     * 
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取更新间隔,单位秒
                     * @return UpdateIvl 更新间隔,单位秒
                     * 
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置更新间隔,单位秒
                     * @param _updateIvl 更新间隔,单位秒
                     * 
                     */
                    void SetUpdateIvl(const int64_t& _updateIvl);

                    /**
                     * 判断参数 UpdateIvl 是否已赋值
                     * @return UpdateIvl 是否已赋值
                     * 
                     */
                    bool UpdateIvlHasBeenSet() const;

                    /**
                     * 获取对应更新策略和策略配置参数
                     * @return MaxSurge 对应更新策略和策略配置参数
                     * 
                     */
                    std::string GetMaxSurge() const;

                    /**
                     * 设置对应更新策略和策略配置参数
                     * @param _maxSurge 对应更新策略和策略配置参数
                     * 
                     */
                    void SetMaxSurge(const std::string& _maxSurge);

                    /**
                     * 判断参数 MaxSurge 是否已赋值
                     * @return MaxSurge 是否已赋值
                     * 
                     */
                    bool MaxSurgeHasBeenSet() const;

                    /**
                     * 获取对应更新策略和策略配置参数
                     * @return MaxUnavailable 对应更新策略和策略配置参数
                     * 
                     */
                    std::string GetMaxUnavailable() const;

                    /**
                     * 设置对应更新策略和策略配置参数
                     * @param _maxUnavailable 对应更新策略和策略配置参数
                     * 
                     */
                    void SetMaxUnavailable(const std::string& _maxUnavailable);

                    /**
                     * 判断参数 MaxUnavailable 是否已赋值
                     * @return MaxUnavailable 是否已赋值
                     * 
                     */
                    bool MaxUnavailableHasBeenSet() const;

                    /**
                     * 获取预热参数配置
                     * @return WarmupSetting 预热参数配置
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置预热参数配置
                     * @param _warmupSetting 预热参数配置
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
                     * 获取配置模版ID
                     * @return ConfigTemplateId 配置模版ID
                     * 
                     */
                    std::string GetConfigTemplateId() const;

                    /**
                     * 设置配置模版ID
                     * @param _configTemplateId 配置模版ID
                     * 
                     */
                    void SetConfigTemplateId(const std::string& _configTemplateId);

                    /**
                     * 判断参数 ConfigTemplateId 是否已赋值
                     * @return ConfigTemplateId 是否已赋值
                     * 
                     */
                    bool ConfigTemplateIdHasBeenSet() const;

                    /**
                     * 获取配置模版Version
                     * @return ConfigTemplateVersion 配置模版Version
                     * 
                     */
                    int64_t GetConfigTemplateVersion() const;

                    /**
                     * 设置配置模版Version
                     * @param _configTemplateVersion 配置模版Version
                     * 
                     */
                    void SetConfigTemplateVersion(const int64_t& _configTemplateVersion);

                    /**
                     * 判断参数 ConfigTemplateVersion 是否已赋值
                     * @return ConfigTemplateVersion 是否已赋值
                     * 
                     */
                    bool ConfigTemplateVersionHasBeenSet() const;

                    /**
                     * 获取是否清除数据卷信息
                     * @return VolumeClean 是否清除数据卷信息
                     * 
                     */
                    bool GetVolumeClean() const;

                    /**
                     * 设置是否清除数据卷信息
                     * @param _volumeClean 是否清除数据卷信息
                     * 
                     */
                    void SetVolumeClean(const bool& _volumeClean);

                    /**
                     * 判断参数 VolumeClean 是否已赋值
                     * @return VolumeClean 是否已赋值
                     * 
                     */
                    bool VolumeCleanHasBeenSet() const;

                    /**
                     * 获取命名空间Id
                     * @return NamespaceId 命名空间Id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间Id
                     * @param _namespaceId 命名空间Id
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
                     * 获取是否部署agent容器
                     * @return DeployAgent 是否部署agent容器
                     * 
                     */
                    bool GetDeployAgent() const;

                    /**
                     * 设置是否部署agent容器
                     * @param _deployAgent 是否部署agent容器
                     * 
                     */
                    void SetDeployAgent(const bool& _deployAgent);

                    /**
                     * 判断参数 DeployAgent 是否已赋值
                     * @return DeployAgent 是否已赋值
                     * 
                     */
                    bool DeployAgentHasBeenSet() const;

                    /**
                     * 获取javaagent信息: SERVICE_AGENT/OT_AGENT
                     * @return AgentProfileList javaagent信息: SERVICE_AGENT/OT_AGENT
                     * 
                     */
                    std::vector<AgentProfile> GetAgentProfileList() const;

                    /**
                     * 设置javaagent信息: SERVICE_AGENT/OT_AGENT
                     * @param _agentProfileList javaagent信息: SERVICE_AGENT/OT_AGENT
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
                     * 获取是否清除Service信息
                     * @return ServiceClean 是否清除Service信息
                     * 
                     */
                    bool GetServiceClean() const;

                    /**
                     * 设置是否清除Service信息
                     * @param _serviceClean 是否清除Service信息
                     * 
                     */
                    void SetServiceClean(const bool& _serviceClean);

                    /**
                     * 判断参数 ServiceClean 是否已赋值
                     * @return ServiceClean 是否已赋值
                     * 
                     */
                    bool ServiceCleanHasBeenSet() const;

                    /**
                     * 获取是否清除Env信息
                     * @return EnvClean 是否清除Env信息
                     * 
                     */
                    bool GetEnvClean() const;

                    /**
                     * 设置是否清除Env信息
                     * @param _envClean 是否清除Env信息
                     * 
                     */
                    void SetEnvClean(const bool& _envClean);

                    /**
                     * 判断参数 EnvClean 是否已赋值
                     * @return EnvClean 是否已赋值
                     * 
                     */
                    bool EnvCleanHasBeenSet() const;

                    /**
                     * 获取本次部署的描述信息
                     * @return DeployDesc 本次部署的描述信息
                     * 
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置本次部署的描述信息
                     * @param _deployDesc 本次部署的描述信息
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
                     * 获取k8s命名空间名称
                     * @return K8sNamespaceName k8s命名空间名称
                     * 
                     */
                    std::string GetK8sNamespaceName() const;

                    /**
                     * 设置k8s命名空间名称
                     * @param _k8sNamespaceName k8s命名空间名称
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
                     * 获取是否启用静态IP
                     * @return StaticIpEnabled 是否启用静态IP
                     * 
                     */
                    bool GetStaticIpEnabled() const;

                    /**
                     * 设置是否启用静态IP
                     * @param _staticIpEnabled 是否启用静态IP
                     * 
                     */
                    void SetStaticIpEnabled(const bool& _staticIpEnabled);

                    /**
                     * 判断参数 StaticIpEnabled 是否已赋值
                     * @return StaticIpEnabled 是否已赋值
                     * 
                     */
                    bool StaticIpEnabledHasBeenSet() const;

                    /**
                     * 获取启动策略[OrderedReady/Parallel]
                     * @return PodManagementPolicyType 启动策略[OrderedReady/Parallel]
                     * 
                     */
                    std::string GetPodManagementPolicyType() const;

                    /**
                     * 设置启动策略[OrderedReady/Parallel]
                     * @param _podManagementPolicyType 启动策略[OrderedReady/Parallel]
                     * 
                     */
                    void SetPodManagementPolicyType(const std::string& _podManagementPolicyType);

                    /**
                     * 判断参数 PodManagementPolicyType 是否已赋值
                     * @return PodManagementPolicyType 是否已赋值
                     * 
                     */
                    bool PodManagementPolicyTypeHasBeenSet() const;

                    /**
                     * 获取滚动更新分区序号
                     * @return Partition 滚动更新分区序号
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置滚动更新分区序号
                     * @param _partition 滚动更新分区序号
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数
                     * @return IncrementalDeployment 是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数
                     * 
                     */
                    bool GetIncrementalDeployment() const;

                    /**
                     * 设置是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数
                     * @param _incrementalDeployment 是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数
                     * 
                     */
                    void SetIncrementalDeployment(const bool& _incrementalDeployment);

                    /**
                     * 判断参数 IncrementalDeployment 是否已赋值
                     * @return IncrementalDeployment 是否已赋值
                     * 
                     */
                    bool IncrementalDeploymentHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 可观测配置
                     */
                    ContainerGroupObservabilityConfig m_observabilityConfig;
                    bool m_observabilityConfigHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 部署组ID，分组唯一标识
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 业务容器的环境变量参数
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 业务容器的挂载信息
                     */
                    std::vector<VolumeMountInfo> m_volumeMountInfoList;
                    bool m_volumeMountInfoListHasBeenSet;

                    /**
                     * 业务主容器生命周期钩子列表
                     */
                    std::vector<LifeCycleHook> m_lifeCycleHookList;
                    bool m_lifeCycleHookListHasBeenSet;

                    /**
                     * 附属容器列表
                     */
                    std::vector<ContainerInfo> m_additionalContainerList;
                    bool m_additionalContainerListHasBeenSet;

                    /**
                     * 容器卷信息
                     */
                    std::vector<VolumeInfo> m_volumeInfoList;
                    bool m_volumeInfoListHasBeenSet;

                    /**
                     * Service访问配置列表
                     */
                    std::vector<ServiceSetting> m_serviceSettingList;
                    bool m_serviceSettingListHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 部署组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 容器类型
                     */
                    std::string m_containerKind;
                    bool m_containerKindHasBeenSet;

                    /**
                     * 业务容器的 镜像Server ccr.ccs.tencentyun.com
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 业务容器的镜像名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * TCR仓库信息
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * 容器访问凭证名称
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 业务容器的镜像版本号
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 健康检查
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 业务容器的 cpu  request
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 业务容器的 cpu limit
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 业务容器的 mem request
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 业务容器的 mem limit
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 业务容器的 jvm 参数
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 是否为初始化容器 业务主容器不能为初始化容
                     */
                    bool m_initContainerEnable;
                    bool m_initContainerEnableHasBeenSet;

                    /**
                     * 业务主容器是否为特权容器
                     */
                    bool m_privilegeContainerEnable;
                    bool m_privilegeContainerEnableHasBeenSet;

                    /**
                     * 业务主容器运行命令(转base64)
                     */
                    std::string m_runCommand;
                    bool m_runCommandHasBeenSet;

                    /**
                     * 业务主容器运行参数(转base64)
                     */
                    std::string m_runArg;
                    bool m_runArgHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 调度策略
                     */
                    SchedulingStrategy m_schedulingStrategy;
                    bool m_schedulingStrategyHasBeenSet;

                    /**
                     * 重启策略
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * 服务治理配置
                     */
                    std::string m_serviceSpecEncode;
                    bool m_serviceSpecEncodeHasBeenSet;

                    /**
                     * istio容器的 mem Request
                     */
                    std::string m_istioMemRequest;
                    bool m_istioMemRequestHasBeenSet;

                    /**
                     *  istio容器的 cpu Request
                     */
                    std::string m_istioCpuRequest;
                    bool m_istioCpuRequestHasBeenSet;

                    /**
                     * istio容器的 mem Limit
                     */
                    std::string m_istioMemLimit;
                    bool m_istioMemLimitHasBeenSet;

                    /**
                     * istio容器的 cpu Limit
                     */
                    std::string m_istioCpuLimit;
                    bool m_istioCpuLimitHasBeenSet;

                    /**
                     * 服务治理配置
                     */
                    ContainerGroupServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * agent容器的 mem Request
                     */
                    std::string m_agentMemRequest;
                    bool m_agentMemRequestHasBeenSet;

                    /**
                     * agent容器的 cpu Request
                     */
                    std::string m_agentCpuRequest;
                    bool m_agentCpuRequestHasBeenSet;

                    /**
                     * agent容器的 mem Limit
                     */
                    std::string m_agentMemLimit;
                    bool m_agentMemLimitHasBeenSet;

                    /**
                     * agent容器的 cpu Limit
                     */
                    std::string m_agentCpuLimit;
                    bool m_agentCpuLimitHasBeenSet;

                    /**
                     * 发布策略(0表示快速更新，1表示滚动更新。默认值为0)
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 更新间隔,单位秒
                     */
                    int64_t m_updateIvl;
                    bool m_updateIvlHasBeenSet;

                    /**
                     * 对应更新策略和策略配置参数
                     */
                    std::string m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                    /**
                     * 对应更新策略和策略配置参数
                     */
                    std::string m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                    /**
                     * 预热参数配置
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                    /**
                     * 配置模版ID
                     */
                    std::string m_configTemplateId;
                    bool m_configTemplateIdHasBeenSet;

                    /**
                     * 配置模版Version
                     */
                    int64_t m_configTemplateVersion;
                    bool m_configTemplateVersionHasBeenSet;

                    /**
                     * 是否清除数据卷信息
                     */
                    bool m_volumeClean;
                    bool m_volumeCleanHasBeenSet;

                    /**
                     * 命名空间Id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 是否部署agent容器
                     */
                    bool m_deployAgent;
                    bool m_deployAgentHasBeenSet;

                    /**
                     * javaagent信息: SERVICE_AGENT/OT_AGENT
                     */
                    std::vector<AgentProfile> m_agentProfileList;
                    bool m_agentProfileListHasBeenSet;

                    /**
                     * 是否清除Service信息
                     */
                    bool m_serviceClean;
                    bool m_serviceCleanHasBeenSet;

                    /**
                     * 是否清除Env信息
                     */
                    bool m_envClean;
                    bool m_envCleanHasBeenSet;

                    /**
                     * 本次部署的描述信息
                     */
                    std::string m_deployDesc;
                    bool m_deployDescHasBeenSet;

                    /**
                     * k8s命名空间名称
                     */
                    std::string m_k8sNamespaceName;
                    bool m_k8sNamespaceNameHasBeenSet;

                    /**
                     * 是否启用静态IP
                     */
                    bool m_staticIpEnabled;
                    bool m_staticIpEnabledHasBeenSet;

                    /**
                     * 启动策略[OrderedReady/Parallel]
                     */
                    std::string m_podManagementPolicyType;
                    bool m_podManagementPolicyTypeHasBeenSet;

                    /**
                     * 滚动更新分区序号
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数
                     */
                    bool m_incrementalDeployment;
                    bool m_incrementalDeploymentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERAPPLICATIONREQUEST_H_
