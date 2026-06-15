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
                     * 获取<p>可观测配置</p>
                     * @return ObservabilityConfig <p>可观测配置</p>
                     * 
                     */
                    ContainerGroupObservabilityConfig GetObservabilityConfig() const;

                    /**
                     * 设置<p>可观测配置</p>
                     * @param _observabilityConfig <p>可观测配置</p>
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
                     * 获取<p>部署组ID，分组唯一标识</p>
                     * @return GroupId <p>部署组ID，分组唯一标识</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>部署组ID，分组唯一标识</p>
                     * @param _groupId <p>部署组ID，分组唯一标识</p>
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
                     * 获取<p>业务容器的环境变量参数</p>
                     * @return Envs <p>业务容器的环境变量参数</p>
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置<p>业务容器的环境变量参数</p>
                     * @param _envs <p>业务容器的环境变量参数</p>
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
                     * 获取<p>业务容器的挂载信息</p>
                     * @return VolumeMountInfoList <p>业务容器的挂载信息</p>
                     * 
                     */
                    std::vector<VolumeMountInfo> GetVolumeMountInfoList() const;

                    /**
                     * 设置<p>业务容器的挂载信息</p>
                     * @param _volumeMountInfoList <p>业务容器的挂载信息</p>
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
                     * 获取<p>业务主容器生命周期钩子列表</p>
                     * @return LifeCycleHookList <p>业务主容器生命周期钩子列表</p>
                     * 
                     */
                    std::vector<LifeCycleHook> GetLifeCycleHookList() const;

                    /**
                     * 设置<p>业务主容器生命周期钩子列表</p>
                     * @param _lifeCycleHookList <p>业务主容器生命周期钩子列表</p>
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
                     * 获取<p>附属容器列表</p>
                     * @return AdditionalContainerList <p>附属容器列表</p>
                     * 
                     */
                    std::vector<ContainerInfo> GetAdditionalContainerList() const;

                    /**
                     * 设置<p>附属容器列表</p>
                     * @param _additionalContainerList <p>附属容器列表</p>
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
                     * 获取<p>容器卷信息</p>
                     * @return VolumeInfoList <p>容器卷信息</p>
                     * 
                     */
                    std::vector<VolumeInfo> GetVolumeInfoList() const;

                    /**
                     * 设置<p>容器卷信息</p>
                     * @param _volumeInfoList <p>容器卷信息</p>
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
                     * 获取<p>Service访问配置列表</p>
                     * @return ServiceSettingList <p>Service访问配置列表</p>
                     * 
                     */
                    std::vector<ServiceSetting> GetServiceSettingList() const;

                    /**
                     * 设置<p>Service访问配置列表</p>
                     * @param _serviceSettingList <p>Service访问配置列表</p>
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
                     * 获取<p>备注</p>
                     * @return Alias <p>备注</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _alias <p>备注</p>
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
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>容器类型</p>
                     * @return ContainerKind <p>容器类型</p>
                     * 
                     */
                    std::string GetContainerKind() const;

                    /**
                     * 设置<p>容器类型</p>
                     * @param _containerKind <p>容器类型</p>
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
                     * 获取<p>业务容器的 镜像Server ccr.ccs.tencentyun.com</p>
                     * @return Server <p>业务容器的 镜像Server ccr.ccs.tencentyun.com</p>
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置<p>业务容器的 镜像Server ccr.ccs.tencentyun.com</p>
                     * @param _server <p>业务容器的 镜像Server ccr.ccs.tencentyun.com</p>
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
                     * 获取<p>业务容器的镜像名</p>
                     * @return RepoName <p>业务容器的镜像名</p>
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>业务容器的镜像名</p>
                     * @param _repoName <p>业务容器的镜像名</p>
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
                     * 获取<p>仓库类型</p>
                     * @return RepoType <p>仓库类型</p>
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置<p>仓库类型</p>
                     * @param _repoType <p>仓库类型</p>
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
                     * 获取<p>TCR仓库信息</p>
                     * @return TcrRepoInfo <p>TCR仓库信息</p>
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置<p>TCR仓库信息</p>
                     * @param _tcrRepoInfo <p>TCR仓库信息</p>
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
                     * 获取<p>容器访问凭证名称</p>
                     * @return SecretName <p>容器访问凭证名称</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>容器访问凭证名称</p>
                     * @param _secretName <p>容器访问凭证名称</p>
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
                     * 获取<p>业务容器的镜像版本号</p>
                     * @return TagName <p>业务容器的镜像版本号</p>
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置<p>业务容器的镜像版本号</p>
                     * @param _tagName <p>业务容器的镜像版本号</p>
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
                     * 获取<p>健康检查</p>
                     * @return HealthCheckSettings <p>健康检查</p>
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置<p>健康检查</p>
                     * @param _healthCheckSettings <p>健康检查</p>
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
                     * 获取<p>业务容器的 cpu  request</p>
                     * @return CpuRequest <p>业务容器的 cpu  request</p>
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置<p>业务容器的 cpu  request</p>
                     * @param _cpuRequest <p>业务容器的 cpu  request</p>
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
                     * 获取<p>业务容器的 cpu limit</p>
                     * @return CpuLimit <p>业务容器的 cpu limit</p>
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置<p>业务容器的 cpu limit</p>
                     * @param _cpuLimit <p>业务容器的 cpu limit</p>
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
                     * 获取<p>业务容器的 mem request</p>
                     * @return MemRequest <p>业务容器的 mem request</p>
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置<p>业务容器的 mem request</p>
                     * @param _memRequest <p>业务容器的 mem request</p>
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
                     * 获取<p>业务容器的 mem limit</p>
                     * @return MemLimit <p>业务容器的 mem limit</p>
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置<p>业务容器的 mem limit</p>
                     * @param _memLimit <p>业务容器的 mem limit</p>
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
                     * 获取<p>业务容器的 jvm 参数</p>
                     * @return JvmOpts <p>业务容器的 jvm 参数</p>
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置<p>业务容器的 jvm 参数</p>
                     * @param _jvmOpts <p>业务容器的 jvm 参数</p>
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
                     * 获取<p>是否为初始化容器 业务主容器不能为初始化容</p>
                     * @return InitContainerEnable <p>是否为初始化容器 业务主容器不能为初始化容</p>
                     * 
                     */
                    bool GetInitContainerEnable() const;

                    /**
                     * 设置<p>是否为初始化容器 业务主容器不能为初始化容</p>
                     * @param _initContainerEnable <p>是否为初始化容器 业务主容器不能为初始化容</p>
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
                     * 获取<p>业务主容器是否为特权容器</p>
                     * @return PrivilegeContainerEnable <p>业务主容器是否为特权容器</p>
                     * 
                     */
                    bool GetPrivilegeContainerEnable() const;

                    /**
                     * 设置<p>业务主容器是否为特权容器</p>
                     * @param _privilegeContainerEnable <p>业务主容器是否为特权容器</p>
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
                     * 获取<p>业务主容器运行命令(转base64)</p>
                     * @return RunCommand <p>业务主容器运行命令(转base64)</p>
                     * 
                     */
                    std::string GetRunCommand() const;

                    /**
                     * 设置<p>业务主容器运行命令(转base64)</p>
                     * @param _runCommand <p>业务主容器运行命令(转base64)</p>
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
                     * 获取<p>业务主容器运行参数(转base64)</p>
                     * @return RunArg <p>业务主容器运行参数(转base64)</p>
                     * 
                     */
                    std::string GetRunArg() const;

                    /**
                     * 设置<p>业务主容器运行参数(转base64)</p>
                     * @param _runArg <p>业务主容器运行参数(转base64)</p>
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
                     * 获取<p>实例数量</p>
                     * @return InstanceNum <p>实例数量</p>
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置<p>实例数量</p>
                     * @param _instanceNum <p>实例数量</p>
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
                     * 获取<p>调度策略</p>
                     * @return SchedulingStrategy <p>调度策略</p>
                     * 
                     */
                    SchedulingStrategy GetSchedulingStrategy() const;

                    /**
                     * 设置<p>调度策略</p>
                     * @param _schedulingStrategy <p>调度策略</p>
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
                     * 获取<p>重启策略</p>
                     * @return RestartPolicy <p>重启策略</p>
                     * 
                     */
                    std::string GetRestartPolicy() const;

                    /**
                     * 设置<p>重启策略</p>
                     * @param _restartPolicy <p>重启策略</p>
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
                     * 获取<p>服务治理配置</p>
                     * @return ServiceSpecEncode <p>服务治理配置</p>
                     * 
                     */
                    std::string GetServiceSpecEncode() const;

                    /**
                     * 设置<p>服务治理配置</p>
                     * @param _serviceSpecEncode <p>服务治理配置</p>
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
                     * 获取<p>istio容器的 mem Request</p>
                     * @return IstioMemRequest <p>istio容器的 mem Request</p>
                     * 
                     */
                    std::string GetIstioMemRequest() const;

                    /**
                     * 设置<p>istio容器的 mem Request</p>
                     * @param _istioMemRequest <p>istio容器的 mem Request</p>
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
                     * 获取<p>istio容器的 cpu Request</p>
                     * @return IstioCpuRequest <p>istio容器的 cpu Request</p>
                     * 
                     */
                    std::string GetIstioCpuRequest() const;

                    /**
                     * 设置<p>istio容器的 cpu Request</p>
                     * @param _istioCpuRequest <p>istio容器的 cpu Request</p>
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
                     * 获取<p>istio容器的 mem Limit</p>
                     * @return IstioMemLimit <p>istio容器的 mem Limit</p>
                     * 
                     */
                    std::string GetIstioMemLimit() const;

                    /**
                     * 设置<p>istio容器的 mem Limit</p>
                     * @param _istioMemLimit <p>istio容器的 mem Limit</p>
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
                     * 获取<p>istio容器的 cpu Limit</p>
                     * @return IstioCpuLimit <p>istio容器的 cpu Limit</p>
                     * 
                     */
                    std::string GetIstioCpuLimit() const;

                    /**
                     * 设置<p>istio容器的 cpu Limit</p>
                     * @param _istioCpuLimit <p>istio容器的 cpu Limit</p>
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
                     * 获取<p>服务治理配置</p>
                     * @return ServiceGovernanceConfig <p>服务治理配置</p>
                     * 
                     */
                    ContainerGroupServiceGovernanceConfig GetServiceGovernanceConfig() const;

                    /**
                     * 设置<p>服务治理配置</p>
                     * @param _serviceGovernanceConfig <p>服务治理配置</p>
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
                     * 获取<p>agent容器的 mem Request</p>
                     * @return AgentMemRequest <p>agent容器的 mem Request</p>
                     * 
                     */
                    std::string GetAgentMemRequest() const;

                    /**
                     * 设置<p>agent容器的 mem Request</p>
                     * @param _agentMemRequest <p>agent容器的 mem Request</p>
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
                     * 获取<p>agent容器的 cpu Request</p>
                     * @return AgentCpuRequest <p>agent容器的 cpu Request</p>
                     * 
                     */
                    std::string GetAgentCpuRequest() const;

                    /**
                     * 设置<p>agent容器的 cpu Request</p>
                     * @param _agentCpuRequest <p>agent容器的 cpu Request</p>
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
                     * 获取<p>agent容器的 mem Limit</p>
                     * @return AgentMemLimit <p>agent容器的 mem Limit</p>
                     * 
                     */
                    std::string GetAgentMemLimit() const;

                    /**
                     * 设置<p>agent容器的 mem Limit</p>
                     * @param _agentMemLimit <p>agent容器的 mem Limit</p>
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
                     * 获取<p>agent容器的 cpu Limit</p>
                     * @return AgentCpuLimit <p>agent容器的 cpu Limit</p>
                     * 
                     */
                    std::string GetAgentCpuLimit() const;

                    /**
                     * 设置<p>agent容器的 cpu Limit</p>
                     * @param _agentCpuLimit <p>agent容器的 cpu Limit</p>
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
                     * 获取<p>发布策略(0表示快速更新，1表示滚动更新。默认值为0)</p>
                     * @return UpdateType <p>发布策略(0表示快速更新，1表示滚动更新。默认值为0)</p>
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置<p>发布策略(0表示快速更新，1表示滚动更新。默认值为0)</p>
                     * @param _updateType <p>发布策略(0表示快速更新，1表示滚动更新。默认值为0)</p>
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
                     * 获取<p>更新间隔,单位秒</p>
                     * @return UpdateIvl <p>更新间隔,单位秒</p>
                     * 
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置<p>更新间隔,单位秒</p>
                     * @param _updateIvl <p>更新间隔,单位秒</p>
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
                     * 获取<p>对应更新策略和策略配置参数</p>
                     * @return MaxSurge <p>对应更新策略和策略配置参数</p>
                     * 
                     */
                    std::string GetMaxSurge() const;

                    /**
                     * 设置<p>对应更新策略和策略配置参数</p>
                     * @param _maxSurge <p>对应更新策略和策略配置参数</p>
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
                     * 获取<p>对应更新策略和策略配置参数</p>
                     * @return MaxUnavailable <p>对应更新策略和策略配置参数</p>
                     * 
                     */
                    std::string GetMaxUnavailable() const;

                    /**
                     * 设置<p>对应更新策略和策略配置参数</p>
                     * @param _maxUnavailable <p>对应更新策略和策略配置参数</p>
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
                     * 获取<p>预热参数配置</p>
                     * @return WarmupSetting <p>预热参数配置</p>
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置<p>预热参数配置</p>
                     * @param _warmupSetting <p>预热参数配置</p>
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
                     * 获取<p>配置模版ID</p>
                     * @return ConfigTemplateId <p>配置模版ID</p>
                     * 
                     */
                    std::string GetConfigTemplateId() const;

                    /**
                     * 设置<p>配置模版ID</p>
                     * @param _configTemplateId <p>配置模版ID</p>
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
                     * 获取<p>配置模版Version</p>
                     * @return ConfigTemplateVersion <p>配置模版Version</p>
                     * 
                     */
                    int64_t GetConfigTemplateVersion() const;

                    /**
                     * 设置<p>配置模版Version</p>
                     * @param _configTemplateVersion <p>配置模版Version</p>
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
                     * 获取<p>是否清除数据卷信息</p>
                     * @return VolumeClean <p>是否清除数据卷信息</p>
                     * 
                     */
                    bool GetVolumeClean() const;

                    /**
                     * 设置<p>是否清除数据卷信息</p>
                     * @param _volumeClean <p>是否清除数据卷信息</p>
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
                     * 获取<p>命名空间Id</p>
                     * @return NamespaceId <p>命名空间Id</p>
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置<p>命名空间Id</p>
                     * @param _namespaceId <p>命名空间Id</p>
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
                     * 获取<p>是否部署agent容器</p>
                     * @return DeployAgent <p>是否部署agent容器</p>
                     * 
                     */
                    bool GetDeployAgent() const;

                    /**
                     * 设置<p>是否部署agent容器</p>
                     * @param _deployAgent <p>是否部署agent容器</p>
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
                     * 获取<p>javaagent信息: SERVICE_AGENT/OT_AGENT</p>
                     * @return AgentProfileList <p>javaagent信息: SERVICE_AGENT/OT_AGENT</p>
                     * 
                     */
                    std::vector<AgentProfile> GetAgentProfileList() const;

                    /**
                     * 设置<p>javaagent信息: SERVICE_AGENT/OT_AGENT</p>
                     * @param _agentProfileList <p>javaagent信息: SERVICE_AGENT/OT_AGENT</p>
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
                     * 获取<p>是否清除Service信息</p>
                     * @return ServiceClean <p>是否清除Service信息</p>
                     * 
                     */
                    bool GetServiceClean() const;

                    /**
                     * 设置<p>是否清除Service信息</p>
                     * @param _serviceClean <p>是否清除Service信息</p>
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
                     * 获取<p>是否清除Env信息</p>
                     * @return EnvClean <p>是否清除Env信息</p>
                     * 
                     */
                    bool GetEnvClean() const;

                    /**
                     * 设置<p>是否清除Env信息</p>
                     * @param _envClean <p>是否清除Env信息</p>
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
                     * 获取<p>本次部署的描述信息</p>
                     * @return DeployDesc <p>本次部署的描述信息</p>
                     * 
                     */
                    std::string GetDeployDesc() const;

                    /**
                     * 设置<p>本次部署的描述信息</p>
                     * @param _deployDesc <p>本次部署的描述信息</p>
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
                     * 获取<p>k8s命名空间名称</p>
                     * @return K8sNamespaceName <p>k8s命名空间名称</p>
                     * 
                     */
                    std::string GetK8sNamespaceName() const;

                    /**
                     * 设置<p>k8s命名空间名称</p>
                     * @param _k8sNamespaceName <p>k8s命名空间名称</p>
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
                     * 获取<p>是否启用静态IP</p>
                     * @return StaticIpEnabled <p>是否启用静态IP</p>
                     * 
                     */
                    bool GetStaticIpEnabled() const;

                    /**
                     * 设置<p>是否启用静态IP</p>
                     * @param _staticIpEnabled <p>是否启用静态IP</p>
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
                     * 获取<p>启动策略[OrderedReady/Parallel]</p>
                     * @return PodManagementPolicyType <p>启动策略[OrderedReady/Parallel]</p>
                     * 
                     */
                    std::string GetPodManagementPolicyType() const;

                    /**
                     * 设置<p>启动策略[OrderedReady/Parallel]</p>
                     * @param _podManagementPolicyType <p>启动策略[OrderedReady/Parallel]</p>
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
                     * 获取<p>滚动更新分区序号</p>
                     * @return Partition <p>滚动更新分区序号</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>滚动更新分区序号</p>
                     * @param _partition <p>滚动更新分区序号</p>
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
                     * 获取<p>是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数</p>
                     * @return IncrementalDeployment <p>是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数</p>
                     * 
                     */
                    bool GetIncrementalDeployment() const;

                    /**
                     * 设置<p>是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数</p>
                     * @param _incrementalDeployment <p>是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数</p>
                     * 
                     */
                    void SetIncrementalDeployment(const bool& _incrementalDeployment);

                    /**
                     * 判断参数 IncrementalDeployment 是否已赋值
                     * @return IncrementalDeployment 是否已赋值
                     * 
                     */
                    bool IncrementalDeploymentHasBeenSet() const;

                    /**
                     * 获取<p>是否不立即启动</p>
                     * @return DoNotStart <p>是否不立即启动</p>
                     * 
                     */
                    bool GetDoNotStart() const;

                    /**
                     * 设置<p>是否不立即启动</p>
                     * @param _doNotStart <p>是否不立即启动</p>
                     * 
                     */
                    void SetDoNotStart(const bool& _doNotStart);

                    /**
                     * 判断参数 DoNotStart 是否已赋值
                     * @return DoNotStart 是否已赋值
                     * 
                     */
                    bool DoNotStartHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>可观测配置</p>
                     */
                    ContainerGroupObservabilityConfig m_observabilityConfig;
                    bool m_observabilityConfigHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>部署组ID，分组唯一标识</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>业务容器的环境变量参数</p>
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>业务容器的挂载信息</p>
                     */
                    std::vector<VolumeMountInfo> m_volumeMountInfoList;
                    bool m_volumeMountInfoListHasBeenSet;

                    /**
                     * <p>业务主容器生命周期钩子列表</p>
                     */
                    std::vector<LifeCycleHook> m_lifeCycleHookList;
                    bool m_lifeCycleHookListHasBeenSet;

                    /**
                     * <p>附属容器列表</p>
                     */
                    std::vector<ContainerInfo> m_additionalContainerList;
                    bool m_additionalContainerListHasBeenSet;

                    /**
                     * <p>容器卷信息</p>
                     */
                    std::vector<VolumeInfo> m_volumeInfoList;
                    bool m_volumeInfoListHasBeenSet;

                    /**
                     * <p>Service访问配置列表</p>
                     */
                    std::vector<ServiceSetting> m_serviceSettingList;
                    bool m_serviceSettingListHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>部署组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>容器类型</p>
                     */
                    std::string m_containerKind;
                    bool m_containerKindHasBeenSet;

                    /**
                     * <p>业务容器的 镜像Server ccr.ccs.tencentyun.com</p>
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * <p>业务容器的镜像名</p>
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>仓库类型</p>
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * <p>TCR仓库信息</p>
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * <p>容器访问凭证名称</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>业务容器的镜像版本号</p>
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * <p>健康检查</p>
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * <p>业务容器的 cpu  request</p>
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * <p>业务容器的 cpu limit</p>
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * <p>业务容器的 mem request</p>
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * <p>业务容器的 mem limit</p>
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * <p>业务容器的 jvm 参数</p>
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * <p>是否为初始化容器 业务主容器不能为初始化容</p>
                     */
                    bool m_initContainerEnable;
                    bool m_initContainerEnableHasBeenSet;

                    /**
                     * <p>业务主容器是否为特权容器</p>
                     */
                    bool m_privilegeContainerEnable;
                    bool m_privilegeContainerEnableHasBeenSet;

                    /**
                     * <p>业务主容器运行命令(转base64)</p>
                     */
                    std::string m_runCommand;
                    bool m_runCommandHasBeenSet;

                    /**
                     * <p>业务主容器运行参数(转base64)</p>
                     */
                    std::string m_runArg;
                    bool m_runArgHasBeenSet;

                    /**
                     * <p>实例数量</p>
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <p>调度策略</p>
                     */
                    SchedulingStrategy m_schedulingStrategy;
                    bool m_schedulingStrategyHasBeenSet;

                    /**
                     * <p>重启策略</p>
                     */
                    std::string m_restartPolicy;
                    bool m_restartPolicyHasBeenSet;

                    /**
                     * <p>服务治理配置</p>
                     */
                    std::string m_serviceSpecEncode;
                    bool m_serviceSpecEncodeHasBeenSet;

                    /**
                     * <p>istio容器的 mem Request</p>
                     */
                    std::string m_istioMemRequest;
                    bool m_istioMemRequestHasBeenSet;

                    /**
                     * <p>istio容器的 cpu Request</p>
                     */
                    std::string m_istioCpuRequest;
                    bool m_istioCpuRequestHasBeenSet;

                    /**
                     * <p>istio容器的 mem Limit</p>
                     */
                    std::string m_istioMemLimit;
                    bool m_istioMemLimitHasBeenSet;

                    /**
                     * <p>istio容器的 cpu Limit</p>
                     */
                    std::string m_istioCpuLimit;
                    bool m_istioCpuLimitHasBeenSet;

                    /**
                     * <p>服务治理配置</p>
                     */
                    ContainerGroupServiceGovernanceConfig m_serviceGovernanceConfig;
                    bool m_serviceGovernanceConfigHasBeenSet;

                    /**
                     * <p>agent容器的 mem Request</p>
                     */
                    std::string m_agentMemRequest;
                    bool m_agentMemRequestHasBeenSet;

                    /**
                     * <p>agent容器的 cpu Request</p>
                     */
                    std::string m_agentCpuRequest;
                    bool m_agentCpuRequestHasBeenSet;

                    /**
                     * <p>agent容器的 mem Limit</p>
                     */
                    std::string m_agentMemLimit;
                    bool m_agentMemLimitHasBeenSet;

                    /**
                     * <p>agent容器的 cpu Limit</p>
                     */
                    std::string m_agentCpuLimit;
                    bool m_agentCpuLimitHasBeenSet;

                    /**
                     * <p>发布策略(0表示快速更新，1表示滚动更新。默认值为0)</p>
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * <p>更新间隔,单位秒</p>
                     */
                    int64_t m_updateIvl;
                    bool m_updateIvlHasBeenSet;

                    /**
                     * <p>对应更新策略和策略配置参数</p>
                     */
                    std::string m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                    /**
                     * <p>对应更新策略和策略配置参数</p>
                     */
                    std::string m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                    /**
                     * <p>预热参数配置</p>
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                    /**
                     * <p>配置模版ID</p>
                     */
                    std::string m_configTemplateId;
                    bool m_configTemplateIdHasBeenSet;

                    /**
                     * <p>配置模版Version</p>
                     */
                    int64_t m_configTemplateVersion;
                    bool m_configTemplateVersionHasBeenSet;

                    /**
                     * <p>是否清除数据卷信息</p>
                     */
                    bool m_volumeClean;
                    bool m_volumeCleanHasBeenSet;

                    /**
                     * <p>命名空间Id</p>
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>是否部署agent容器</p>
                     */
                    bool m_deployAgent;
                    bool m_deployAgentHasBeenSet;

                    /**
                     * <p>javaagent信息: SERVICE_AGENT/OT_AGENT</p>
                     */
                    std::vector<AgentProfile> m_agentProfileList;
                    bool m_agentProfileListHasBeenSet;

                    /**
                     * <p>是否清除Service信息</p>
                     */
                    bool m_serviceClean;
                    bool m_serviceCleanHasBeenSet;

                    /**
                     * <p>是否清除Env信息</p>
                     */
                    bool m_envClean;
                    bool m_envCleanHasBeenSet;

                    /**
                     * <p>本次部署的描述信息</p>
                     */
                    std::string m_deployDesc;
                    bool m_deployDescHasBeenSet;

                    /**
                     * <p>k8s命名空间名称</p>
                     */
                    std::string m_k8sNamespaceName;
                    bool m_k8sNamespaceNameHasBeenSet;

                    /**
                     * <p>是否启用静态IP</p>
                     */
                    bool m_staticIpEnabled;
                    bool m_staticIpEnabledHasBeenSet;

                    /**
                     * <p>启动策略[OrderedReady/Parallel]</p>
                     */
                    std::string m_podManagementPolicyType;
                    bool m_podManagementPolicyTypeHasBeenSet;

                    /**
                     * <p>滚动更新分区序号</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>是否是增量部署，增量部署只运行增量覆盖一级参数，不支持对一级参数中的子参数进行增量更新，例如更新VolumeMountInfoList时必须传入VolumeMountInfoList更新后的全量参数</p>
                     */
                    bool m_incrementalDeployment;
                    bool m_incrementalDeploymentHasBeenSet;

                    /**
                     * <p>是否不立即启动</p>
                     */
                    bool m_doNotStart;
                    bool m_doNotStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERAPPLICATIONREQUEST_H_
