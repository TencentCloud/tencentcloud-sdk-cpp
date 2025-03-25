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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPCONTAINERINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPCONTAINERINFO_H_

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


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 部署组容器信息
                */
                class GroupContainerInfo : public AbstractModel
                {
                public:
                    GroupContainerInfo();
                    ~GroupContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像版本名称
                     * @return TagName 镜像版本名称
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置镜像版本名称
                     * @param _tagName 镜像版本名称
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
                     * 获取容器名字
                     * @return ContainerName 容器名字
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名字
                     * @param _containerName 容器名字
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取镜像名
                     * @return RepoName 镜像名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置镜像名
                     * @param _repoName 镜像名
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
                     * 获取仓库类型,tcr，address，personal，默认personal
                     * @return RepoType 仓库类型,tcr，address，personal，默认personal
                     * 
                     */
                    std::string GetRepoType() const;

                    /**
                     * 设置仓库类型,tcr，address，personal，默认personal
                     * @param _repoType 仓库类型,tcr，address，personal，默认personal
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
                     * 获取tcr仓库信息
                     * @return TcrRepoInfo tcr仓库信息
                     * 
                     */
                    TcrRepoInfo GetTcrRepoInfo() const;

                    /**
                     * 设置tcr仓库信息
                     * @param _tcrRepoInfo tcr仓库信息
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
                     * 获取凭证名字
                     * @return SecretName 凭证名字
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置凭证名字
                     * @param _secretName 凭证名字
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
                     * 获取jvm 参数
                     * @return JvmOpts jvm 参数
                     * 
                     */
                    std::string GetJvmOpts() const;

                    /**
                     * 设置jvm 参数
                     * @param _jvmOpts jvm 参数
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
                     * 获取容器最大的 CPU 核数，对应 K8S 的 limit
                     * @return CpuLimit 容器最大的 CPU 核数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置容器最大的 CPU 核数，对应 K8S 的 limit
                     * @param _cpuLimit 容器最大的 CPU 核数，对应 K8S 的 limit
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
                     * 获取容器分配的 CPU 核数，对应 K8S 的 request
                     * @return CpuRequest 容器分配的 CPU 核数，对应 K8S 的 request
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置容器分配的 CPU 核数，对应 K8S 的 request
                     * @param _cpuRequest 容器分配的 CPU 核数，对应 K8S 的 request
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
                     * 获取容器分配的内存 MiB 数，对应 K8S 的 request
                     * @return MemRequest 容器分配的内存 MiB 数，对应 K8S 的 request
                     * 
                     */
                    std::string GetMemRequest() const;

                    /**
                     * 设置容器分配的内存 MiB 数，对应 K8S 的 request
                     * @param _memRequest 容器分配的内存 MiB 数，对应 K8S 的 request
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
                     * 获取容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @return MemLimit 容器最大的内存 MiB 数，对应 K8S 的 limit
                     * 
                     */
                    std::string GetMemLimit() const;

                    /**
                     * 设置容器最大的内存 MiB 数，对应 K8S 的 limit
                     * @param _memLimit 容器最大的内存 MiB 数，对应 K8S 的 limit
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
                     * 获取健康检查配置信息
                     * @return HealthCheckSettings 健康检查配置信息
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查配置信息
                     * @param _healthCheckSettings 健康检查配置信息
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
                     * 获取环境变量
                     * @return Envs 环境变量
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境变量
                     * @param _envs 环境变量
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
                     * 获取环境变量,作为入参时不用填
                     * @return UserEnvs 环境变量,作为入参时不用填
                     * 
                     */
                    std::vector<Env> GetUserEnvs() const;

                    /**
                     * 设置环境变量,作为入参时不用填
                     * @param _userEnvs 环境变量,作为入参时不用填
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
                     * 获取数据卷挂载点信息
                     * @return VolumeMountInfoList 数据卷挂载点信息
                     * 
                     */
                    std::vector<VolumeMountInfo> GetVolumeMountInfoList() const;

                    /**
                     * 设置数据卷挂载点信息
                     * @param _volumeMountInfoList 数据卷挂载点信息
                     * 
                     */
                    void SetVolumeMountInfoList(const std::vector<VolumeMountInfo>& _volumeMountInfoList);

                    /**
                     * 判断参数 VolumeMountInfoList 是否已赋值
                     * @return VolumeMountInfoList 是否已赋值
                     * 
                     */
                    bool VolumeMountInfoListHasBeenSet() const;

                private:

                    /**
                     * 镜像版本名称
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 容器名字
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 镜像名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 仓库类型,tcr，address，personal，默认personal
                     */
                    std::string m_repoType;
                    bool m_repoTypeHasBeenSet;

                    /**
                     * tcr仓库信息
                     */
                    TcrRepoInfo m_tcrRepoInfo;
                    bool m_tcrRepoInfoHasBeenSet;

                    /**
                     * 镜像server
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 凭证名字
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * jvm 参数
                     */
                    std::string m_jvmOpts;
                    bool m_jvmOptsHasBeenSet;

                    /**
                     * 容器最大的 CPU 核数，对应 K8S 的 limit
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 容器分配的 CPU 核数，对应 K8S 的 request
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * 容器分配的内存 MiB 数，对应 K8S 的 request
                     */
                    std::string m_memRequest;
                    bool m_memRequestHasBeenSet;

                    /**
                     * 容器最大的内存 MiB 数，对应 K8S 的 limit
                     */
                    std::string m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * 健康检查配置信息
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 环境变量,作为入参时不用填
                     */
                    std::vector<Env> m_userEnvs;
                    bool m_userEnvsHasBeenSet;

                    /**
                     * 数据卷挂载点信息
                     */
                    std::vector<VolumeMountInfo> m_volumeMountInfoList;
                    bool m_volumeMountInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPCONTAINERINFO_H_
