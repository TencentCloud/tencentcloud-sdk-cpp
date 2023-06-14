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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CONTAINER_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/VolumeMount.h>
#include <tencentcloud/iecp/v20210914/model/KeyValueObj.h>
#include <tencentcloud/iecp/v20210914/model/Env.h>
#include <tencentcloud/iecp/v20210914/model/SecurityContext.h>
#include <tencentcloud/iecp/v20210914/model/Probe.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 容器配置信息
                */
                class Container : public AbstractModel
                {
                public:
                    Container();
                    ~Container() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取镜像名
                     * @return ImageName 镜像名
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名
                     * @param _imageName 镜像名
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像版本
                     * @return ImageVersion 镜像版本
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像版本
                     * @param _imageVersion 镜像版本
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取镜像拉取策略(Always|Never|IfNotPresent)
                     * @return ImagePullPolicy 镜像拉取策略(Always|Never|IfNotPresent)
                     * 
                     */
                    std::string GetImagePullPolicy() const;

                    /**
                     * 设置镜像拉取策略(Always|Never|IfNotPresent)
                     * @param _imagePullPolicy 镜像拉取策略(Always|Never|IfNotPresent)
                     * 
                     */
                    void SetImagePullPolicy(const std::string& _imagePullPolicy);

                    /**
                     * 判断参数 ImagePullPolicy 是否已赋值
                     * @return ImagePullPolicy 是否已赋值
                     * 
                     */
                    bool ImagePullPolicyHasBeenSet() const;

                    /**
                     * 获取卷挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMounts 卷挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置卷挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMounts 卷挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取cpu最低配置
                     * @return CpuRequest cpu最低配置
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置cpu最低配置
                     * @param _cpuRequest cpu最低配置
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
                     * 获取cpu最高限制
                     * @return CpuLimit cpu最高限制
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置cpu最高限制
                     * @param _cpuLimit cpu最高限制
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
                     * 获取内存最低要求
                     * @return MemoryRequest 内存最低要求
                     * 
                     */
                    std::string GetMemoryRequest() const;

                    /**
                     * 设置内存最低要求
                     * @param _memoryRequest 内存最低要求
                     * 
                     */
                    void SetMemoryRequest(const std::string& _memoryRequest);

                    /**
                     * 判断参数 MemoryRequest 是否已赋值
                     * @return MemoryRequest 是否已赋值
                     * 
                     */
                    bool MemoryRequestHasBeenSet() const;

                    /**
                     * 获取内存最高要求
                     * @return MemoryLimit 内存最高要求
                     * 
                     */
                    std::string GetMemoryLimit() const;

                    /**
                     * 设置内存最高要求
                     * @param _memoryLimit 内存最高要求
                     * 
                     */
                    void SetMemoryLimit(const std::string& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取内存单位
                     * @return MemoryUnit 内存单位
                     * 
                     */
                    std::string GetMemoryUnit() const;

                    /**
                     * 设置内存单位
                     * @param _memoryUnit 内存单位
                     * 
                     */
                    void SetMemoryUnit(const std::string& _memoryUnit);

                    /**
                     * 判断参数 MemoryUnit 是否已赋值
                     * @return MemoryUnit 是否已赋值
                     * 
                     */
                    bool MemoryUnitHasBeenSet() const;

                    /**
                     * 获取gpu最高限制
                     * @return GpuLimit gpu最高限制
                     * 
                     */
                    std::string GetGpuLimit() const;

                    /**
                     * 设置gpu最高限制
                     * @param _gpuLimit gpu最高限制
                     * 
                     */
                    void SetGpuLimit(const std::string& _gpuLimit);

                    /**
                     * 判断参数 GpuLimit 是否已赋值
                     * @return GpuLimit 是否已赋值
                     * 
                     */
                    bool GpuLimitHasBeenSet() const;

                    /**
                     * 获取资源配置
                     * @return ResourceMapCloud 资源配置
                     * 
                     */
                    std::vector<KeyValueObj> GetResourceMapCloud() const;

                    /**
                     * 设置资源配置
                     * @param _resourceMapCloud 资源配置
                     * 
                     */
                    void SetResourceMapCloud(const std::vector<KeyValueObj>& _resourceMapCloud);

                    /**
                     * 判断参数 ResourceMapCloud 是否已赋值
                     * @return ResourceMapCloud 是否已赋值
                     * 
                     */
                    bool ResourceMapCloudHasBeenSet() const;

                    /**
                     * 获取环境配置
                     * @return Envs 环境配置
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境配置
                     * @param _envs 环境配置
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
                     * 获取工作目录
                     * @return WorkingDir 工作目录
                     * 
                     */
                    std::string GetWorkingDir() const;

                    /**
                     * 设置工作目录
                     * @param _workingDir 工作目录
                     * 
                     */
                    void SetWorkingDir(const std::string& _workingDir);

                    /**
                     * 判断参数 WorkingDir 是否已赋值
                     * @return WorkingDir 是否已赋值
                     * 
                     */
                    bool WorkingDirHasBeenSet() const;

                    /**
                     * 获取命令
                     * @return Commands 命令
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置命令
                     * @param _commands 命令
                     * 
                     */
                    void SetCommands(const std::vector<std::string>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                    /**
                     * 获取参数
                     * @return Args 参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置参数
                     * @param _args 参数
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取安全配置
                     * @return SecurityContext 安全配置
                     * 
                     */
                    SecurityContext GetSecurityContext() const;

                    /**
                     * 设置安全配置
                     * @param _securityContext 安全配置
                     * 
                     */
                    void SetSecurityContext(const SecurityContext& _securityContext);

                    /**
                     * 判断参数 SecurityContext 是否已赋值
                     * @return SecurityContext 是否已赋值
                     * 
                     */
                    bool SecurityContextHasBeenSet() const;

                    /**
                     * 获取就绪探针配置
                     * @return ReadinessProbe 就绪探针配置
                     * 
                     */
                    Probe GetReadinessProbe() const;

                    /**
                     * 设置就绪探针配置
                     * @param _readinessProbe 就绪探针配置
                     * 
                     */
                    void SetReadinessProbe(const Probe& _readinessProbe);

                    /**
                     * 判断参数 ReadinessProbe 是否已赋值
                     * @return ReadinessProbe 是否已赋值
                     * 
                     */
                    bool ReadinessProbeHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 镜像名
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 镜像拉取策略(Always|Never|IfNotPresent)
                     */
                    std::string m_imagePullPolicy;
                    bool m_imagePullPolicyHasBeenSet;

                    /**
                     * 卷挂载配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * cpu最低配置
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * cpu最高限制
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * 内存最低要求
                     */
                    std::string m_memoryRequest;
                    bool m_memoryRequestHasBeenSet;

                    /**
                     * 内存最高要求
                     */
                    std::string m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * 内存单位
                     */
                    std::string m_memoryUnit;
                    bool m_memoryUnitHasBeenSet;

                    /**
                     * gpu最高限制
                     */
                    std::string m_gpuLimit;
                    bool m_gpuLimitHasBeenSet;

                    /**
                     * 资源配置
                     */
                    std::vector<KeyValueObj> m_resourceMapCloud;
                    bool m_resourceMapCloudHasBeenSet;

                    /**
                     * 环境配置
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * 工作目录
                     */
                    std::string m_workingDir;
                    bool m_workingDirHasBeenSet;

                    /**
                     * 命令
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * 参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 安全配置
                     */
                    SecurityContext m_securityContext;
                    bool m_securityContextHasBeenSet;

                    /**
                     * 就绪探针配置
                     */
                    Probe m_readinessProbe;
                    bool m_readinessProbeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CONTAINER_H_
