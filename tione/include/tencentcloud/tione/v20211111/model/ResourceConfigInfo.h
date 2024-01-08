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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONFIGINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/RDMAConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 资源配置
                */
                class ResourceConfigInfo : public AbstractModel
                {
                public:
                    ResourceConfigInfo();
                    ~ResourceConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色，eg：PS、WORKER、DRIVER、EXECUTOR
                     * @return Role 角色，eg：PS、WORKER、DRIVER、EXECUTOR
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色，eg：PS、WORKER、DRIVER、EXECUTOR
                     * @param _role 角色，eg：PS、WORKER、DRIVER、EXECUTOR
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核
                     * @return Cpu cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核
                     * @param _cpu cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核
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
                     * 获取内存，使用资源组时需配置。单位为MB
                     * @return Memory 内存，使用资源组时需配置。单位为MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存，使用资源组时需配置。单位为MB
                     * @param _memory 内存，使用资源组时需配置。单位为MB
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
                     * 获取gpu卡类型，使用资源组时需配置
                     * @return GpuType gpu卡类型，使用资源组时需配置
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置gpu卡类型，使用资源组时需配置
                     * @param _gpuType gpu卡类型，使用资源组时需配置
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡
                     * @return Gpu gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡
                     * @param _gpu gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡
                     * 
                     */
                    void SetGpu(const uint64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取算力规格ID
计算规格 (for后付费)，可选值如下：
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     * @return InstanceType 算力规格ID
计算规格 (for后付费)，可选值如下：
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置算力规格ID
计算规格 (for后付费)，可选值如下：
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     * @param _instanceType 算力规格ID
计算规格 (for后付费)，可选值如下：
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
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
                     * 获取计算节点数
                     * @return InstanceNum 计算节点数
                     * 
                     */
                    uint64_t GetInstanceNum() const;

                    /**
                     * 设置计算节点数
                     * @param _instanceNum 计算节点数
                     * 
                     */
                    void SetInstanceNum(const uint64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取算力规格名称
计算规格 (for后付费)，可选值如下：
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * @return InstanceTypeAlias 算力规格名称
计算规格 (for后付费)，可选值如下：
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置算力规格名称
计算规格 (for后付费)，可选值如下：
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * @param _instanceTypeAlias 算力规格名称
计算规格 (for后付费)，可选值如下：
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     * 
                     */
                    void SetInstanceTypeAlias(const std::string& _instanceTypeAlias);

                    /**
                     * 判断参数 InstanceTypeAlias 是否已赋值
                     * @return InstanceTypeAlias 是否已赋值
                     * 
                     */
                    bool InstanceTypeAliasHasBeenSet() const;

                    /**
                     * 获取RDMA配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RDMAConfig RDMA配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RDMAConfig GetRDMAConfig() const;

                    /**
                     * 设置RDMA配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rDMAConfig RDMA配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRDMAConfig(const RDMAConfig& _rDMAConfig);

                    /**
                     * 判断参数 RDMAConfig 是否已赋值
                     * @return RDMAConfig 是否已赋值
                     * 
                     */
                    bool RDMAConfigHasBeenSet() const;

                private:

                    /**
                     * 角色，eg：PS、WORKER、DRIVER、EXECUTOR
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，使用资源组时需配置。单位为MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * gpu卡类型，使用资源组时需配置
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 算力规格ID
计算规格 (for后付费)，可选值如下：
TI.S.LARGE.POST: 4C8G 
TI.S.2XLARGE16.POST:  8C16G 
TI.S.2XLARGE32.POST:  8C32G 
TI.S.4XLARGE32.POST:  16C32G
TI.S.4XLARGE64.POST:  16C64G
TI.S.6XLARGE48.POST:  24C48G
TI.S.6XLARGE96.POST:  24C96G
TI.S.8XLARGE64.POST:  32C64G
TI.S.8XLARGE128.POST : 32C128G
TI.GN10.2XLARGE40.POST: 8C40G V100*1 
TI.GN10.5XLARGE80.POST:  18C80G V100*2 
TI.GN10.10XLARGE160.POST :  32C160G V100*4
TI.GN10.20XLARGE320.POST :  72C320G V100*8
TI.GN7.8XLARGE128.POST: 32C128G T4*1 
TI.GN7.10XLARGE160.POST: 40C160G T4*2 
TI.GN7.20XLARGE320.POST: 80C32
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 计算节点数
                     */
                    uint64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 算力规格名称
计算规格 (for后付费)，可选值如下：
4C8G 
8C16G 
8C32G 
16C32G
6C64G
24C48G
24C96G
32C64G
32C128G
8C40G V100*1 
8C80G V100*2 
32C160G V100*4
72C320G V100*8
32C128G T4*1 
40C160G T4*2 
80C32
                     */
                    std::string m_instanceTypeAlias;
                    bool m_instanceTypeAliasHasBeenSet;

                    /**
                     * RDMA配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RDMAConfig m_rDMAConfig;
                    bool m_rDMAConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONFIGINFO_H_
