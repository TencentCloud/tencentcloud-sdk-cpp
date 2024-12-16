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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>
#include <tencentcloud/tsf/v20180326/model/Env.h>
#include <tencentcloud/tsf/v20180326/model/ServiceSetting.h>
#include <tencentcloud/tsf/v20180326/model/SchedulingStrategy.h>
#include <tencentcloud/tsf/v20180326/model/VolumeInfo.h>
#include <tencentcloud/tsf/v20180326/model/VolumeMountInfo.h>
#include <tencentcloud/tsf/v20180326/model/AgentProfile.h>
#include <tencentcloud/tsf/v20180326/model/WarmupSetting.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeployContainerGroup请求参数结构体
                */
                class DeployContainerGroupRequest : public AbstractModel
                {
                public:
                    DeployContainerGroupRequest();
                    ~DeployContainerGroupRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取镜像版本名称,如v1
                     * @return TagName 镜像版本名称,如v1
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本名称,如v1
                     * @param _tagName 镜像版本名称,如v1
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
                     * 获取镜像server
                     * @return Server 镜像server
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像server
                     * @param _server 镜像server
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
                     * 获取旧版镜像名，如/tsf/nginx
                     * @return Reponame 旧版镜像名，如/tsf/nginx
                     * @deprecated
                     */
                    std::string GetReponame() const;

                    /**
                     * 设置旧版镜像名，如/tsf/nginx
                     * @param _reponame 旧版镜像名，如/tsf/nginx
                     * @deprecated
                     */
                    void SetReponame(const std::string& _reponame);

                    /**
                     * 判断参数 Reponame 是否已赋值
                     * @return Reponame 是否已赋值
                     * @deprecated
                     */
                    bool ReponameHasBeenSet() const;

                    /**
                     * 获取业务容器最大的 CPU 核数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     * @return CpuLimit 业务容器最大的 CPU 核数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置业务容器最大的 CPU 核数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     * @param _cpuLimit 业务容器最大的 CPU 核数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
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
                     * 获取业务容器最大的内存 MiB 数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     * @return MemLimit 业务容器最大的内存 MiB 数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置业务容器最大的内存 MiB 数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     * @param _memLimit 业务容器最大的内存 MiB 数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
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
                     * 获取jvm参数
                     * @return JvmOpts jvm参数
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置jvm参数
                     * @param _jvmOpts jvm参数
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
                     * 获取业务容器分配的 CPU 核数，对应 K8S 的 request，默认0.25
                     * @return CpuRequest 业务容器分配的 CPU 核数，对应 K8S 的 request，默认0.25
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置业务容器分配的 CPU 核数，对应 K8S 的 request，默认0.25
                     * @param _cpuRequest 业务容器分配的 CPU 核数，对应 K8S 的 request，默认0.25
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
                     * 获取业务容器分配的内存 MiB 数，对应 K8S 的 request，默认640 MiB
                     * @return MemRequest 业务容器分配的内存 MiB 数，对应 K8S 的 request，默认640 MiB
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置业务容器分配的内存 MiB 数，对应 K8S 的 request，默认640 MiB
                     * @param _memRequest 业务容器分配的内存 MiB 数，对应 K8S 的 request，默认640 MiB
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
                     * 获取是否不立即启动
                     * @return DoNotStart 是否不立即启动
                     * 
                     */
                    bool GetDoNotStart() const;

                    /**
                     * 设置是否不立即启动
                     * @param _doNotStart 是否不立即启动
                     * 
                     */
                    void SetDoNotStart(const bool& _doNotStart);

                    /**
                     * 判断参数 DoNotStart 是否已赋值
                     * @return DoNotStart 是否已赋值
                     * 
                     */
                    bool DoNotStartHasBeenSet() const;

                    /**
                     * 获取（优先使用）新版镜像名，如/tsf/nginx
                     * @return RepoName （优先使用）新版镜像名，如/tsf/nginx
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置（优先使用）新版镜像名，如/tsf/nginx
                     * @param _repoName （优先使用）新版镜像名，如/tsf/nginx
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
                     * 获取更新方式：0:快速更新 1:滚动更新
                     * @return UpdateType 更新方式：0:快速更新 1:滚动更新
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置更新方式：0:快速更新 1:滚动更新
                     * @param _updateType 更新方式：0:快速更新 1:滚动更新
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
                     * 获取滚动更新必填，更新间隔
                     * @return UpdateIvl 滚动更新必填，更新间隔
                     * 
                     */
                    int64_t GetUpdateIvl() const;

                    /**
                     * 设置滚动更新必填，更新间隔
                     * @param _updateIvl 滚动更新必填，更新间隔
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
                     * 获取agent 容器分配的 CPU 核数，对应 K8S 的 request
                     * @return AgentCpuRequest agent 容器分配的 CPU 核数，对应 K8S 的 request
                     * 
                     */
                    std::string GetAgentCpuRequest() const;

                    /**
                     * 设置agent 容器分配的 CPU 核数，对应 K8S 的 request
                     * @param _agentCpuRequest agent 容器分配的 CPU 核数，对应 K8S 的 request
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
                     * 获取agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @return AgentCpuLimit agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetAgentCpuLimit() const;

                    /**
                     * 设置agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @param _agentCpuLimit agent 容器最大的 CPU 核数，对应 K8S 的 limit
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
                     * 获取agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @return AgentMemRequest agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     * 
                     */
                    std::string GetAgentMemRequest() const;

                    /**
                     * 设置agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @param _agentMemRequest agent 容器分配的内存 MiB 数，对应 K8S 的 request
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
                     * 获取agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @return AgentMemLimit agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetAgentMemLimit() const;

                    /**
                     * 设置agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @param _agentMemLimit agent 容器最大的内存 MiB 数，对应 K8S 的 limit
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
                     * 获取istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     * @return IstioCpuRequest istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     * 
                     */
                    std::string GetIstioCpuRequest() const;

                    /**
                     * 设置istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     * @param _istioCpuRequest istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
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
                     * 获取istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @return IstioCpuLimit istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetIstioCpuLimit() const;

                    /**
                     * 设置istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     * @param _istioCpuLimit istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
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
                     * 获取istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @return IstioMemRequest istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     * 
                     */
                    std::string GetIstioMemRequest() const;

                    /**
                     * 设置istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     * @param _istioMemRequest istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
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
                     * 获取istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @return IstioMemLimit istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetIstioMemLimit() const;

                    /**
                     * 设置istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @param _istioMemLimit istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
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
                     * 获取kubernetes滚动更新策略的MaxSurge参数
                     * @return MaxSurge kubernetes滚动更新策略的MaxSurge参数
                     * 
                     */
                    std::string GetMaxSurge() const;

                    /**
                     * 设置kubernetes滚动更新策略的MaxSurge参数
                     * @param _maxSurge kubernetes滚动更新策略的MaxSurge参数
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
                     * 获取kubernetes滚动更新策略的MaxUnavailable参数
                     * @return MaxUnavailable kubernetes滚动更新策略的MaxUnavailable参数
                     * 
                     */
                    std::string GetMaxUnavailable() const;

                    /**
                     * 设置kubernetes滚动更新策略的MaxUnavailable参数
                     * @param _maxUnavailable kubernetes滚动更新策略的MaxUnavailable参数
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
                     * 获取健康检查配置信息，若不指定该参数，则默认不设置健康检查。
                     * @return HealthCheckSettings 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查配置信息，若不指定该参数，则默认不设置健康检查。
                     * @param _healthCheckSettings 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
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
                     * 获取部署组应用运行的环境变量。若不指定该参数，则默认不设置额外的环境变量。
                     * @return Envs 部署组应用运行的环境变量。若不指定该参数，则默认不设置额外的环境变量。
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置部署组应用运行的环境变量。若不指定该参数，则默认不设置额外的环境变量。
                     * @param _envs 部署组应用运行的环境变量。若不指定该参数，则默认不设置额外的环境变量。
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
                     * 获取容器部署组的网络设置。
                     * @return ServiceSetting 容器部署组的网络设置。
                     * 
                     */
                    ServiceSetting GetServiceSetting() const;

                    /**
                     * 设置容器部署组的网络设置。
                     * @param _serviceSetting 容器部署组的网络设置。
                     * 
                     */
                    void SetServiceSetting(const ServiceSetting& _serviceSetting);

                    /**
                     * 判断参数 ServiceSetting 是否已赋值
                     * @return ServiceSetting 是否已赋值
                     * 
                     */
                    bool ServiceSettingHasBeenSet() const;

                    /**
                     * 获取是否部署 agent 容器。若不指定该参数，则默认不部署 agent 容器。
                     * @return DeployAgent 是否部署 agent 容器。若不指定该参数，则默认不部署 agent 容器。
                     * 
                     */
                    bool GetDeployAgent() const;

                    /**
                     * 设置是否部署 agent 容器。若不指定该参数，则默认不部署 agent 容器。
                     * @param _deployAgent 是否部署 agent 容器。若不指定该参数，则默认不部署 agent 容器。
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
                     * 获取节点调度策略。若不指定该参数，则默认不使用节点调度策略。
                     * @return SchedulingStrategy 节点调度策略。若不指定该参数，则默认不使用节点调度策略。
                     * 
                     */
                    SchedulingStrategy GetSchedulingStrategy() const;

                    /**
                     * 设置节点调度策略。若不指定该参数，则默认不使用节点调度策略。
                     * @param _schedulingStrategy 节点调度策略。若不指定该参数，则默认不使用节点调度策略。
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
                     * 获取是否进行增量部署，默认为false，全量更新
                     * @return IncrementalDeployment 是否进行增量部署，默认为false，全量更新
                     * 
                     */
                    bool GetIncrementalDeployment() const;

                    /**
                     * 设置是否进行增量部署，默认为false，全量更新
                     * @param _incrementalDeployment 是否进行增量部署，默认为false，全量更新
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
                     * 获取tcr或者不填
                     * @return RepoType tcr或者不填
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置tcr或者不填
                     * @param _repoType tcr或者不填
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
                     * 获取数据卷信息-废弃，请用VolumeInfoList参数
                     * @return VolumeInfos 数据卷信息-废弃，请用VolumeInfoList参数
                     * 
                     */
                    VolumeInfo GetVolumeInfos() const;

                    /**
                     * 设置数据卷信息-废弃，请用VolumeInfoList参数
                     * @param _volumeInfos 数据卷信息-废弃，请用VolumeInfoList参数
                     * 
                     */
                    void SetVolumeInfos(const VolumeInfo& _volumeInfos);

                    /**
                     * 判断参数 VolumeInfos 是否已赋值
                     * @return VolumeInfos 是否已赋值
                     * 
                     */
                    bool VolumeInfosHasBeenSet() const;

                    /**
                     * 获取数据卷挂载点信息-废弃，请用VolumeMountInfoList参数
                     * @return VolumeMountInfos 数据卷挂载点信息-废弃，请用VolumeMountInfoList参数
                     * 
                     */
                    VolumeMountInfo GetVolumeMountInfos() const;

                    /**
                     * 设置数据卷挂载点信息-废弃，请用VolumeMountInfoList参数
                     * @param _volumeMountInfos 数据卷挂载点信息-废弃，请用VolumeMountInfoList参数
                     * 
                     */
                    void SetVolumeMountInfos(const VolumeMountInfo& _volumeMountInfos);

                    /**
                     * 判断参数 VolumeMountInfos 是否已赋值
                     * @return VolumeMountInfos 是否已赋值
                     * 
                     */
                    bool VolumeMountInfosHasBeenSet() const;

                    /**
                     * 获取数据卷信息，list
                     * @return VolumeInfoList 数据卷信息，list
                     * 
                     */
                    std::vector<VolumeInfo> GetVolumeInfoList() const;

                    /**
                     * 设置数据卷信息，list
                     * @param _volumeInfoList 数据卷信息，list
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
                     * 获取数据卷挂载点信息，list
                     * @return VolumeMountInfoList 数据卷挂载点信息，list
                     * 
                     */
                    std::vector<VolumeMountInfo> GetVolumeMountInfoList() const;

                    /**
                     * 设置数据卷挂载点信息，list
                     * @param _volumeMountInfoList 数据卷挂载点信息，list
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
                     * 获取是否清除数据卷信息，默认false
                     * @return VolumeClean 是否清除数据卷信息，默认false
                     * 
                     */
                    bool GetVolumeClean() const;

                    /**
                     * 设置是否清除数据卷信息，默认false
                     * @param _volumeClean 是否清除数据卷信息，默认false
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
                     * 获取预热配置信息
                     * @return WarmupSetting 预热配置信息
                     * 
                     */
                    WarmupSetting GetWarmupSetting() const;

                    /**
                     * 设置预热配置信息
                     * @param _warmupSetting 预热配置信息
                     * 
                     */
                    void SetWarmupSetting(const WarmupSetting& _warmupSetting);

                    /**
                     * 判断参数 WarmupSetting 是否已赋值
                     * @return WarmupSetting 是否已赋值
                     * 
                     */
                    bool WarmupSettingHasBeenSet() const;

                private:

                    /**
                     * 部署组ID，分组唯一标识
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 镜像版本名称,如v1
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 镜像server
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 旧版镜像名，如/tsf/nginx
                     */
                    std::string m_reponame;
                    bool m_reponameHasBeenSet;

                    /**
                     * 业务容器最大的 CPU 核数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 业务容器最大的内存 MiB 数，对应 K8S 的 limit；不填时默认为 request 的 2 倍
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * jvm参数
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 业务容器分配的 CPU 核数，对应 K8S 的 request，默认0.25
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 业务容器分配的内存 MiB 数，对应 K8S 的 request，默认640 MiB
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 是否不立即启动
                     */
                    bool m_doNotStart;
                    bool m_doNotStartHasBeenSet;

                    /**
                     * （优先使用）新版镜像名，如/tsf/nginx
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 更新方式：0:快速更新 1:滚动更新
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 滚动更新必填，更新间隔
                     */
                    int64_t m_updateIvl;
                    bool m_updateIvlHasBeenSet;

                    /**
                     * agent 容器分配的 CPU 核数，对应 K8S 的 request
                     */
                    std::string m_agentCpuRequest;
                    bool m_agentCpuRequestHasBeenSet;

                    /**
                     * agent 容器最大的 CPU 核数，对应 K8S 的 limit
                     */
                    std::string m_agentCpuLimit;
                    bool m_agentCpuLimitHasBeenSet;

                    /**
                     * agent 容器分配的内存 MiB 数，对应 K8S 的 request
                     */
                    std::string m_agentMemRequest;
                    bool m_agentMemRequestHasBeenSet;

                    /**
                     * agent 容器最大的内存 MiB 数，对应 K8S 的 limit
                     */
                    std::string m_agentMemLimit;
                    bool m_agentMemLimitHasBeenSet;

                    /**
                     * istioproxy 容器分配的 CPU 核数，对应 K8S 的 request
                     */
                    std::string m_istioCpuRequest;
                    bool m_istioCpuRequestHasBeenSet;

                    /**
                     * istioproxy 容器最大的 CPU 核数，对应 K8S 的 limit
                     */
                    std::string m_istioCpuLimit;
                    bool m_istioCpuLimitHasBeenSet;

                    /**
                     * istioproxy 容器分配的内存 MiB 数，对应 K8S 的 request
                     */
                    std::string m_istioMemRequest;
                    bool m_istioMemRequestHasBeenSet;

                    /**
                     * istioproxy 容器最大的内存 MiB 数，对应 K8S 的 limit
                     */
                    std::string m_istioMemLimit;
                    bool m_istioMemLimitHasBeenSet;

                    /**
                     * kubernetes滚动更新策略的MaxSurge参数
                     */
                    std::string m_maxSurge;
                    bool m_maxSurgeHasBeenSet;

                    /**
                     * kubernetes滚动更新策略的MaxUnavailable参数
                     */
                    std::string m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                    /**
                     * 健康检查配置信息，若不指定该参数，则默认不设置健康检查。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 部署组应用运行的环境变量。若不指定该参数，则默认不设置额外的环境变量。
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 容器部署组的网络设置。
                     */
                    ServiceSetting m_serviceSetting;
                    bool m_serviceSettingHasBeenSet;

                    /**
                     * 是否部署 agent 容器。若不指定该参数，则默认不部署 agent 容器。
                     */
                    bool m_deployAgent;
                    bool m_deployAgentHasBeenSet;

                    /**
                     * 节点调度策略。若不指定该参数，则默认不使用节点调度策略。
                     */
                    SchedulingStrategy m_schedulingStrategy;
                    bool m_schedulingStrategyHasBeenSet;

                    /**
                     * 是否进行增量部署，默认为false，全量更新
                     */
                    bool m_incrementalDeployment;
                    bool m_incrementalDeploymentHasBeenSet;

                    /**
                     * tcr或者不填
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * 数据卷信息-废弃，请用VolumeInfoList参数
                     */
                    VolumeInfo m_volumeInfos;
                    bool m_volumeInfosHasBeenSet;

                    /**
                     * 数据卷挂载点信息-废弃，请用VolumeMountInfoList参数
                     */
                    VolumeMountInfo m_volumeMountInfos;
                    bool m_volumeMountInfosHasBeenSet;

                    /**
                     * 数据卷信息，list
                     */
                    std::vector<VolumeInfo> m_volumeInfoList;
                    bool m_volumeInfoListHasBeenSet;

                    /**
                     * 数据卷挂载点信息，list
                     */
                    std::vector<VolumeMountInfo> m_volumeMountInfoList;
                    bool m_volumeMountInfoListHasBeenSet;

                    /**
                     * 是否清除数据卷信息，默认false
                     */
                    bool m_volumeClean;
                    bool m_volumeCleanHasBeenSet;

                    /**
                     * javaagent信息: SERVICE_AGENT/OT_AGENT
                     */
                    std::vector<AgentProfile> m_agentProfileList;
                    bool m_agentProfileListHasBeenSet;

                    /**
                     * 预热配置信息
                     */
                    WarmupSetting m_warmupSetting;
                    bool m_warmupSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DEPLOYCONTAINERGROUPREQUEST_H_
