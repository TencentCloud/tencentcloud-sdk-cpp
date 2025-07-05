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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TcrRepoInfo.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>
#include <tencentcloud/tsf/v20180326/model/Env.h>
#include <tencentcloud/tsf/v20180326/model/VolumeMountInfo.h>
#include <tencentcloud/tsf/v20180326/model/LifeCycleHook.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器详细信息
                */
                class ContainerInfo : public AbstractModel
                {
                public:
                    ContainerInfo();
                    ~ContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerId 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerId 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取容器的Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 容器的Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置容器的Reason
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 容器的Reason
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
                     * 获取镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取是否为业务主容器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBusinessMainContainer 是否为业务主容器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsBusinessMainContainer() const;

                    /**
                     * 设置是否为业务主容器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBusinessMainContainer 是否为业务主容器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsBusinessMainContainer(const bool& _isBusinessMainContainer);

                    /**
                     * 判断参数 IsBusinessMainContainer 是否已赋值
                     * @return IsBusinessMainContainer 是否已赋值
                     * 
                     */
                    bool IsBusinessMainContainerHasBeenSet() const;

                    /**
                     * 获取镜像Server
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 镜像Server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置镜像Server
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _server 镜像Server
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoName 镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoName 镜像名
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepoType 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repoType 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取TCR 仓库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcrRepoInfo TCR 仓库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置TCR 仓库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcrRepoInfo TCR 仓库信息
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretName 容器访问凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置容器访问凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretName 容器访问凭证名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取镜像版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 镜像版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagName 镜像版本号
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings 健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings 健康检查
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
                     * 获取容器Cpu request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest 容器Cpu request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置容器Cpu request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuRequest 容器Cpu request
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取容器Cpu limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit 容器Cpu limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置容器Cpu limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuLimit 容器Cpu limit
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取容器Mem request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemRequest 容器Mem request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置容器Mem request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memRequest 容器Mem request
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取容器Mem Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemLimit 容器Mem Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置容器Mem Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memLimit 容器Mem Limit
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envs 环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envs 环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserEnvs 环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Env> GetUserEnvs() const;

                    /**
                     * 设置环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userEnvs 环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserEnvs(const std::vector<Env>& _userEnvs);

                    /**
                     * 判断参数 UserEnvs 是否已赋值
                     * @return UserEnvs 是否已赋值
                     * 
                     */
                    bool UserEnvsHasBeenSet() const;

                    /**
                     * 获取JVM参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JvmOpts JVM参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置JVM参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jvmOpts JVM参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMountInfoList 挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeMountInfo> GetVolumeMountInfoList() const;

                    /**
                     * 设置挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMountInfoList 挂载信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否为初始化容器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitContainerEnable 是否为初始化容器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInitContainerEnable() const;

                    /**
                     * 设置是否为初始化容器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initContainerEnable 是否为初始化容器
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取生命周期钩子
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeCycleHookList 生命周期钩子
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LifeCycleHook> GetLifeCycleHookList() const;

                    /**
                     * 设置生命周期钩子
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeCycleHookList 生命周期钩子
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否为特权容器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivilegeContainerEnable 是否为特权容器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPrivilegeContainerEnable() const;

                    /**
                     * 设置是否为特权容器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privilegeContainerEnable 是否为特权容器
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunCommand 运行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunCommand() const;

                    /**
                     * 设置运行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runCommand 运行命令
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunArg 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunArg() const;

                    /**
                     * 设置运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runArg 运行参数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                private:

                    /**
                     * 容器名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 容器的Reason
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 是否为业务主容器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isBusinessMainContainer;
                    bool m_isBusinessMainContainerHasBeenSet;

                    /**
                     * 镜像Server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 镜像名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * TCR 仓库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * 容器访问凭证名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 镜像版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 容器Cpu request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 容器Cpu limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 容器Mem request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 容器Mem Limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 环境变量参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Env> m_userEnvs;
                    bool m_userEnvsHasBeenSet;

                    /**
                     * JVM参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeMountInfo> m_volumeMountInfoList;
                    bool m_volumeMountInfoListHasBeenSet;

                    /**
                     * 是否为初始化容器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_initContainerEnable;
                    bool m_initContainerEnableHasBeenSet;

                    /**
                     * 生命周期钩子
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LifeCycleHook> m_lifeCycleHookList;
                    bool m_lifeCycleHookListHasBeenSet;

                    /**
                     * 是否为特权容器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_privilegeContainerEnable;
                    bool m_privilegeContainerEnableHasBeenSet;

                    /**
                     * 运行命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runCommand;
                    bool m_runCommandHasBeenSet;

                    /**
                     * 运行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runArg;
                    bool m_runArgHasBeenSet;

                    /**
                     * 容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERINFO_H_
