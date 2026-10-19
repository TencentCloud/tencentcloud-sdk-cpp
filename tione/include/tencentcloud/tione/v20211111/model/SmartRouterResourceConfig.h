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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERRESOURCECONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERRESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>
#include <tencentcloud/tione/v20211111/model/SidecarSpec.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Gateway（Envoy）与 Scheduler（EPP）资源配置（字段完全一致，合并为统一类型）
                */
                class SmartRouterResourceConfig : public AbstractModel
                {
                public:
                    SmartRouterResourceConfig();
                    ~SmartRouterResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>副本数，最小 1，建议 &gt;=2 以确保高可用；Scheduler（EPP）默认 2（保障 EPP 高可用与 Gossip 同步）</p>
                     * @return Replicas <p>副本数，最小 1，建议 &gt;=2 以确保高可用；Scheduler（EPP）默认 2（保障 EPP 高可用与 Gossip 同步）</p>
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 设置<p>副本数，最小 1，建议 &gt;=2 以确保高可用；Scheduler（EPP）默认 2（保障 EPP 高可用与 Gossip 同步）</p>
                     * @param _replicas <p>副本数，最小 1，建议 &gt;=2 以确保高可用；Scheduler（EPP）默认 2（保障 EPP 高可用与 Gossip 同步）</p>
                     * 
                     */
                    void SetReplicas(const uint64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取<p>处理器资源，单位为 1/1000 核（milliCPU），与 EMS 一致</p>
                     * @return Cpu <p>处理器资源，单位为 1/1000 核（milliCPU），与 EMS 一致</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>处理器资源，单位为 1/1000 核（milliCPU），与 EMS 一致</p>
                     * @param _cpu <p>处理器资源，单位为 1/1000 核（milliCPU），与 EMS 一致</p>
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存资源，单位为 1MB，与 EMS 一致</p>
                     * @return Memory <p>内存资源，单位为 1MB，与 EMS 一致</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存资源，单位为 1MB，与 EMS 一致</p>
                     * @param _memory <p>内存资源，单位为 1MB，与 EMS 一致</p>
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>自定义环境变量，用于覆盖 Deployment 内置默认环境变量。Gateway 典型用途：覆盖 BACKEND_SERVICE_HOST 等；Scheduler 典型用途：覆盖 LRU_CAPACITY、BLOCK_SIZE_TOKENS 等</p>
                     * @return Env <p>自定义环境变量，用于覆盖 Deployment 内置默认环境变量。Gateway 典型用途：覆盖 BACKEND_SERVICE_HOST 等；Scheduler 典型用途：覆盖 LRU_CAPACITY、BLOCK_SIZE_TOKENS 等</p>
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置<p>自定义环境变量，用于覆盖 Deployment 内置默认环境变量。Gateway 典型用途：覆盖 BACKEND_SERVICE_HOST 等；Scheduler 典型用途：覆盖 LRU_CAPACITY、BLOCK_SIZE_TOKENS 等</p>
                     * @param _env <p>自定义环境变量，用于覆盖 Deployment 内置默认环境变量。Gateway 典型用途：覆盖 BACKEND_SERVICE_HOST 等；Scheduler 典型用途：覆盖 LRU_CAPACITY、BLOCK_SIZE_TOKENS 等</p>
                     * 
                     */
                    void SetEnv(const std::vector<EnvVar>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>实例类型/规格，用于指定组件运行的机器规格</p>
                     * @return InstanceType <p>实例类型/规格，用于指定组件运行的机器规格</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型/规格，用于指定组件运行的机器规格</p>
                     * @param _instanceType <p>实例类型/规格，用于指定组件运行的机器规格</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>sidecar 容器配置，复用推理服务同款 SidecarSpec；未设置或 ImageInfo.ImageUrl 为空时不创建 sidecar 容器。sidecar 容器环境变量与组件主容器保持一致，不单独下发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sidecar <p>sidecar 容器配置，复用推理服务同款 SidecarSpec；未设置或 ImageInfo.ImageUrl 为空时不创建 sidecar 容器。sidecar 容器环境变量与组件主容器保持一致，不单独下发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SidecarSpec GetSidecar() const;

                    /**
                     * 设置<p>sidecar 容器配置，复用推理服务同款 SidecarSpec；未设置或 ImageInfo.ImageUrl 为空时不创建 sidecar 容器。sidecar 容器环境变量与组件主容器保持一致，不单独下发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sidecar <p>sidecar 容器配置，复用推理服务同款 SidecarSpec；未设置或 ImageInfo.ImageUrl 为空时不创建 sidecar 容器。sidecar 容器环境变量与组件主容器保持一致，不单独下发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSidecar(const SidecarSpec& _sidecar);

                    /**
                     * 判断参数 Sidecar 是否已赋值
                     * @return Sidecar 是否已赋值
                     * 
                     */
                    bool SidecarHasBeenSet() const;

                private:

                    /**
                     * <p>副本数，最小 1，建议 &gt;=2 以确保高可用；Scheduler（EPP）默认 2（保障 EPP 高可用与 Gossip 同步）</p>
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>处理器资源，单位为 1/1000 核（milliCPU），与 EMS 一致</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存资源，单位为 1MB，与 EMS 一致</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>自定义环境变量，用于覆盖 Deployment 内置默认环境变量。Gateway 典型用途：覆盖 BACKEND_SERVICE_HOST 等；Scheduler 典型用途：覆盖 LRU_CAPACITY、BLOCK_SIZE_TOKENS 等</p>
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>实例类型/规格，用于指定组件运行的机器规格</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>sidecar 容器配置，复用推理服务同款 SidecarSpec；未设置或 ImageInfo.ImageUrl 为空时不创建 sidecar 容器。sidecar 容器环境变量与组件主容器保持一致，不单独下发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SidecarSpec m_sidecar;
                    bool m_sidecarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SMARTROUTERRESOURCECONFIG_H_
