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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CONTAINER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ContainerState.h>
#include <tencentcloud/tke/v20180525/model/EnvironmentVariable.h>
#include <tencentcloud/tke/v20180525/model/LivenessOrReadinessProbe.h>
#include <tencentcloud/tke/v20180525/model/SecurityContext.h>
#include <tencentcloud/tke/v20180525/model/VolumeMount.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EKS Instance Container容器
                */
                class Container : public AbstractModel
                {
                public:
                    Container();
                    ~Container() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像
                     * @return Image 镜像
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像
                     * @param _image 镜像
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
                     * 获取容器名
                     * @return Name 容器名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置容器名
                     * @param _name 容器名
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
                     * 获取容器启动参数
                     * @return Args 容器启动参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置容器启动参数
                     * @param _args 容器启动参数
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
                     * 获取容器启动命令
                     * @return Commands 容器启动命令
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置容器启动命令
                     * @param _commands 容器启动命令
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
                     * 获取CPU，制改容器最多可使用的核数，该值不可超过容器实例的总核数。单位：核。
                     * @return Cpu CPU，制改容器最多可使用的核数，该值不可超过容器实例的总核数。单位：核。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU，制改容器最多可使用的核数，该值不可超过容器实例的总核数。单位：核。
                     * @param _cpu CPU，制改容器最多可使用的核数，该值不可超过容器实例的总核数。单位：核。
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取当前状态
                     * @return CurrentState 当前状态
                     * 
                     */
                    ContainerState GetCurrentState() const;

                    /**
                     * 设置当前状态
                     * @param _currentState 当前状态
                     * 
                     */
                    void SetCurrentState(const ContainerState& _currentState);

                    /**
                     * 判断参数 CurrentState 是否已赋值
                     * @return CurrentState 是否已赋值
                     * 
                     */
                    bool CurrentStateHasBeenSet() const;

                    /**
                     * 获取容器内操作系统的环境变量
                     * @return EnvironmentVars 容器内操作系统的环境变量
                     * 
                     */
                    std::vector<EnvironmentVariable> GetEnvironmentVars() const;

                    /**
                     * 设置容器内操作系统的环境变量
                     * @param _environmentVars 容器内操作系统的环境变量
                     * 
                     */
                    void SetEnvironmentVars(const std::vector<EnvironmentVariable>& _environmentVars);

                    /**
                     * 判断参数 EnvironmentVars 是否已赋值
                     * @return EnvironmentVars 是否已赋值
                     * 
                     */
                    bool EnvironmentVarsHasBeenSet() const;

                    /**
                     * 获取Gpu限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuLimit Gpu限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpuLimit() const;

                    /**
                     * 设置Gpu限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuLimit Gpu限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuLimit(const uint64_t& _gpuLimit);

                    /**
                     * 判断参数 GpuLimit 是否已赋值
                     * @return GpuLimit 是否已赋值
                     * 
                     */
                    bool GpuLimitHasBeenSet() const;

                    /**
                     * 获取存活探针
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessProbe 存活探针
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LivenessOrReadinessProbe GetLivenessProbe() const;

                    /**
                     * 设置存活探针
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livenessProbe 存活探针
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivenessProbe(const LivenessOrReadinessProbe& _livenessProbe);

                    /**
                     * 判断参数 LivenessProbe 是否已赋值
                     * @return LivenessProbe 是否已赋值
                     * 
                     */
                    bool LivenessProbeHasBeenSet() const;

                    /**
                     * 获取内存，限制该容器最多可使用的内存值，该值不可超过容器实例的总内存值。单位：GiB
                     * @return Memory 内存，限制该容器最多可使用的内存值，该值不可超过容器实例的总内存值。单位：GiB
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存，限制该容器最多可使用的内存值，该值不可超过容器实例的总内存值。单位：GiB
                     * @param _memory 内存，限制该容器最多可使用的内存值，该值不可超过容器实例的总内存值。单位：GiB
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取就绪探针
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadinessProbe 就绪探针
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LivenessOrReadinessProbe GetReadinessProbe() const;

                    /**
                     * 设置就绪探针
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readinessProbe 就绪探针
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadinessProbe(const LivenessOrReadinessProbe& _readinessProbe);

                    /**
                     * 判断参数 ReadinessProbe 是否已赋值
                     * @return ReadinessProbe 是否已赋值
                     * 
                     */
                    bool ReadinessProbeHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestartCount(const uint64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取容器的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityContext 容器的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SecurityContext GetSecurityContext() const;

                    /**
                     * 设置容器的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityContext 容器的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数据卷挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMounts 数据卷挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置数据卷挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMounts 数据卷挂载信息
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
                     * 获取容器工作目录
                     * @return WorkingDir 容器工作目录
                     * 
                     */
                    std::string GetWorkingDir() const;

                    /**
                     * 设置容器工作目录
                     * @param _workingDir 容器工作目录
                     * 
                     */
                    void SetWorkingDir(const std::string& _workingDir);

                    /**
                     * 判断参数 WorkingDir 是否已赋值
                     * @return WorkingDir 是否已赋值
                     * 
                     */
                    bool WorkingDirHasBeenSet() const;

                private:

                    /**
                     * 镜像
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 容器启动参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 容器启动命令
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                    /**
                     * CPU，制改容器最多可使用的核数，该值不可超过容器实例的总核数。单位：核。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 当前状态
                     */
                    ContainerState m_currentState;
                    bool m_currentStateHasBeenSet;

                    /**
                     * 容器内操作系统的环境变量
                     */
                    std::vector<EnvironmentVariable> m_environmentVars;
                    bool m_environmentVarsHasBeenSet;

                    /**
                     * Gpu限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpuLimit;
                    bool m_gpuLimitHasBeenSet;

                    /**
                     * 存活探针
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LivenessOrReadinessProbe m_livenessProbe;
                    bool m_livenessProbeHasBeenSet;

                    /**
                     * 内存，限制该容器最多可使用的内存值，该值不可超过容器实例的总内存值。单位：GiB
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 就绪探针
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LivenessOrReadinessProbe m_readinessProbe;
                    bool m_readinessProbeHasBeenSet;

                    /**
                     * 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 容器的安全上下文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SecurityContext m_securityContext;
                    bool m_securityContextHasBeenSet;

                    /**
                     * 数据卷挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * 容器工作目录
                     */
                    std::string m_workingDir;
                    bool m_workingDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CONTAINER_H_
