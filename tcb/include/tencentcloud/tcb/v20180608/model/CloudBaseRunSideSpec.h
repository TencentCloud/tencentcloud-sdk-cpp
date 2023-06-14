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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNSIDESPEC_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNSIDESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseSecurityContext.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVolumeMount.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CloudBaseRun 的 Side 描述定义
                */
                class CloudBaseRunSideSpec : public AbstractModel
                {
                public:
                    CloudBaseRunSideSpec();
                    ~CloudBaseRunSideSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerImage 容器镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerImage() const;

                    /**
                     * 设置容器镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerImage 容器镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerImage(const std::string& _containerImage);

                    /**
                     * 判断参数 ContainerImage 是否已赋值
                     * @return ContainerImage 是否已赋值
                     * 
                     */
                    bool ContainerImageHasBeenSet() const;

                    /**
                     * 获取容器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerPort 容器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetContainerPort() const;

                    /**
                     * 设置容器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerPort 容器端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerPort(const int64_t& _containerPort);

                    /**
                     * 判断参数 ContainerPort 是否已赋值
                     * @return ContainerPort 是否已赋值
                     * 
                     */
                    bool ContainerPortHasBeenSet() const;

                    /**
                     * 获取容器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName 容器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName 容器的名称
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

                    /**
                     * 获取kv的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvVar kv的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvVar() const;

                    /**
                     * 设置kv的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envVar kv的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvVar(const std::string& _envVar);

                    /**
                     * 判断参数 EnvVar 是否已赋值
                     * @return EnvVar 是否已赋值
                     * 
                     */
                    bool EnvVarHasBeenSet() const;

                    /**
                     * 获取InitialDelaySeconds 延迟多长时间启动健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitialDelaySeconds InitialDelaySeconds 延迟多长时间启动健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置InitialDelaySeconds 延迟多长时间启动健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initialDelaySeconds InitialDelaySeconds 延迟多长时间启动健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取CPU大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu CPU大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu CPU大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存大小（单位：M）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mem 内存大小（单位：M）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置内存大小（单位：M）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mem 内存大小（单位：M）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取安全特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Security 安全特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CloudBaseSecurityContext GetSecurity() const;

                    /**
                     * 设置安全特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _security 安全特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurity(const CloudBaseSecurityContext& _security);

                    /**
                     * 判断参数 Security 是否已赋值
                     * @return Security 是否已赋值
                     * 
                     */
                    bool SecurityHasBeenSet() const;

                    /**
                     * 获取挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VolumeMountInfos 挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudBaseRunVolumeMount> GetVolumeMountInfos() const;

                    /**
                     * 设置挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _volumeMountInfos 挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVolumeMountInfos(const std::vector<CloudBaseRunVolumeMount>& _volumeMountInfos);

                    /**
                     * 判断参数 VolumeMountInfos 是否已赋值
                     * @return VolumeMountInfos 是否已赋值
                     * 
                     */
                    bool VolumeMountInfosHasBeenSet() const;

                private:

                    /**
                     * 容器镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerImage;
                    bool m_containerImageHasBeenSet;

                    /**
                     * 容器端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_containerPort;
                    bool m_containerPortHasBeenSet;

                    /**
                     * 容器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * kv的json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envVar;
                    bool m_envVarHasBeenSet;

                    /**
                     * InitialDelaySeconds 延迟多长时间启动健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * CPU大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小（单位：M）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 安全特性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudBaseSecurityContext m_security;
                    bool m_securityHasBeenSet;

                    /**
                     * 挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseRunVolumeMount> m_volumeMountInfos;
                    bool m_volumeMountInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNSIDESPEC_H_
