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
                     * 获取<p>角色，eg：PS、WORKER、DRIVER、EXECUTOR</p>
                     * @return Role <p>角色，eg：PS、WORKER、DRIVER、EXECUTOR</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>角色，eg：PS、WORKER、DRIVER、EXECUTOR</p>
                     * @param _role <p>角色，eg：PS、WORKER、DRIVER、EXECUTOR</p>
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
                     * 获取<p>cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核</p>
                     * @return Cpu <p>cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核</p>
                     * @param _cpu <p>cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核</p>
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
                     * 获取<p>内存，使用资源组时需配置。单位为MB</p>
                     * @return Memory <p>内存，使用资源组时需配置。单位为MB</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存，使用资源组时需配置。单位为MB</p>
                     * @param _memory <p>内存，使用资源组时需配置。单位为MB</p>
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
                     * 获取<p>gpu卡类型，使用资源组时需配置</p>
                     * @return GpuType <p>gpu卡类型，使用资源组时需配置</p>
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>gpu卡类型，使用资源组时需配置</p>
                     * @param _gpuType <p>gpu卡类型，使用资源组时需配置</p>
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
                     * 获取<p>gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡</p>
                     * @return Gpu <p>gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡</p>
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置<p>gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡</p>
                     * @param _gpu <p>gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡</p>
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
                     * 获取<p>算力规格ID<br>计算规格 (for后付费)，可选值如下：<br>TI.S.LARGE.POST: 4C8G<br>TI.S.2XLARGE16.POST:  8C16G<br>TI.S.2XLARGE32.POST:  8C32G<br>TI.S.4XLARGE32.POST:  16C32G<br>TI.S.4XLARGE64.POST:  16C64G<br>TI.S.6XLARGE48.POST:  24C48G<br>TI.S.6XLARGE96.POST:  24C96G<br>TI.S.8XLARGE64.POST:  32C64G<br>TI.S.8XLARGE128.POST : 32C128G<br>TI.GN10.2XLARGE40.POST: 8C40G V100<em>1<br>TI.GN10.5XLARGE80.POST:  18C80G V100</em>2<br>TI.GN10.10XLARGE160.POST :  32C160G V100<em>4<br>TI.GN10.20XLARGE320.POST :  72C320G V100</em>8<br>TI.GN7.8XLARGE128.POST: 32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST: 40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST: 80C32</p>
                     * @return InstanceType <p>算力规格ID<br>计算规格 (for后付费)，可选值如下：<br>TI.S.LARGE.POST: 4C8G<br>TI.S.2XLARGE16.POST:  8C16G<br>TI.S.2XLARGE32.POST:  8C32G<br>TI.S.4XLARGE32.POST:  16C32G<br>TI.S.4XLARGE64.POST:  16C64G<br>TI.S.6XLARGE48.POST:  24C48G<br>TI.S.6XLARGE96.POST:  24C96G<br>TI.S.8XLARGE64.POST:  32C64G<br>TI.S.8XLARGE128.POST : 32C128G<br>TI.GN10.2XLARGE40.POST: 8C40G V100<em>1<br>TI.GN10.5XLARGE80.POST:  18C80G V100</em>2<br>TI.GN10.10XLARGE160.POST :  32C160G V100<em>4<br>TI.GN10.20XLARGE320.POST :  72C320G V100</em>8<br>TI.GN7.8XLARGE128.POST: 32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST: 40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST: 80C32</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>算力规格ID<br>计算规格 (for后付费)，可选值如下：<br>TI.S.LARGE.POST: 4C8G<br>TI.S.2XLARGE16.POST:  8C16G<br>TI.S.2XLARGE32.POST:  8C32G<br>TI.S.4XLARGE32.POST:  16C32G<br>TI.S.4XLARGE64.POST:  16C64G<br>TI.S.6XLARGE48.POST:  24C48G<br>TI.S.6XLARGE96.POST:  24C96G<br>TI.S.8XLARGE64.POST:  32C64G<br>TI.S.8XLARGE128.POST : 32C128G<br>TI.GN10.2XLARGE40.POST: 8C40G V100<em>1<br>TI.GN10.5XLARGE80.POST:  18C80G V100</em>2<br>TI.GN10.10XLARGE160.POST :  32C160G V100<em>4<br>TI.GN10.20XLARGE320.POST :  72C320G V100</em>8<br>TI.GN7.8XLARGE128.POST: 32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST: 40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST: 80C32</p>
                     * @param _instanceType <p>算力规格ID<br>计算规格 (for后付费)，可选值如下：<br>TI.S.LARGE.POST: 4C8G<br>TI.S.2XLARGE16.POST:  8C16G<br>TI.S.2XLARGE32.POST:  8C32G<br>TI.S.4XLARGE32.POST:  16C32G<br>TI.S.4XLARGE64.POST:  16C64G<br>TI.S.6XLARGE48.POST:  24C48G<br>TI.S.6XLARGE96.POST:  24C96G<br>TI.S.8XLARGE64.POST:  32C64G<br>TI.S.8XLARGE128.POST : 32C128G<br>TI.GN10.2XLARGE40.POST: 8C40G V100<em>1<br>TI.GN10.5XLARGE80.POST:  18C80G V100</em>2<br>TI.GN10.10XLARGE160.POST :  32C160G V100<em>4<br>TI.GN10.20XLARGE320.POST :  72C320G V100</em>8<br>TI.GN7.8XLARGE128.POST: 32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST: 40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST: 80C32</p>
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
                     * 获取<p>计算节点数</p>
                     * @return InstanceNum <p>计算节点数</p>
                     * 
                     */
                    uint64_t GetInstanceNum() const;

                    /**
                     * 设置<p>计算节点数</p>
                     * @param _instanceNum <p>计算节点数</p>
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
                     * 获取<p>算力规格名称<br>计算规格 (for后付费)，可选值如下：<br>4C8G<br>8C16G<br>8C32G<br>16C32G<br>6C64G<br>24C48G<br>24C96G<br>32C64G<br>32C128G<br>8C40G V100<em>1<br>8C80G V100</em>2<br>32C160G V100<em>4<br>72C320G V100</em>8<br>32C128G T4<em>1<br>40C160G T4</em>2<br>80C32</p>
                     * @return InstanceTypeAlias <p>算力规格名称<br>计算规格 (for后付费)，可选值如下：<br>4C8G<br>8C16G<br>8C32G<br>16C32G<br>6C64G<br>24C48G<br>24C96G<br>32C64G<br>32C128G<br>8C40G V100<em>1<br>8C80G V100</em>2<br>32C160G V100<em>4<br>72C320G V100</em>8<br>32C128G T4<em>1<br>40C160G T4</em>2<br>80C32</p>
                     * 
                     */
                    std::string GetInstanceTypeAlias() const;

                    /**
                     * 设置<p>算力规格名称<br>计算规格 (for后付费)，可选值如下：<br>4C8G<br>8C16G<br>8C32G<br>16C32G<br>6C64G<br>24C48G<br>24C96G<br>32C64G<br>32C128G<br>8C40G V100<em>1<br>8C80G V100</em>2<br>32C160G V100<em>4<br>72C320G V100</em>8<br>32C128G T4<em>1<br>40C160G T4</em>2<br>80C32</p>
                     * @param _instanceTypeAlias <p>算力规格名称<br>计算规格 (for后付费)，可选值如下：<br>4C8G<br>8C16G<br>8C32G<br>16C32G<br>6C64G<br>24C48G<br>24C96G<br>32C64G<br>32C128G<br>8C40G V100<em>1<br>8C80G V100</em>2<br>32C160G V100<em>4<br>72C320G V100</em>8<br>32C128G T4<em>1<br>40C160G T4</em>2<br>80C32</p>
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
                     * 获取<p>RDMA配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RDMAConfig <p>RDMA配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RDMAConfig GetRDMAConfig() const;

                    /**
                     * 设置<p>RDMA配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rDMAConfig <p>RDMA配置</p>
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
                     * <p>角色，eg：PS、WORKER、DRIVER、EXECUTOR</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>cpu核数，使用资源组时需配置。单位：1/1000，即1000=1核</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存，使用资源组时需配置。单位为MB</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>gpu卡类型，使用资源组时需配置</p>
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>gpu卡数，使用资源组时需配置。单位：1/100，即100=1卡</p>
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * <p>算力规格ID<br>计算规格 (for后付费)，可选值如下：<br>TI.S.LARGE.POST: 4C8G<br>TI.S.2XLARGE16.POST:  8C16G<br>TI.S.2XLARGE32.POST:  8C32G<br>TI.S.4XLARGE32.POST:  16C32G<br>TI.S.4XLARGE64.POST:  16C64G<br>TI.S.6XLARGE48.POST:  24C48G<br>TI.S.6XLARGE96.POST:  24C96G<br>TI.S.8XLARGE64.POST:  32C64G<br>TI.S.8XLARGE128.POST : 32C128G<br>TI.GN10.2XLARGE40.POST: 8C40G V100<em>1<br>TI.GN10.5XLARGE80.POST:  18C80G V100</em>2<br>TI.GN10.10XLARGE160.POST :  32C160G V100<em>4<br>TI.GN10.20XLARGE320.POST :  72C320G V100</em>8<br>TI.GN7.8XLARGE128.POST: 32C128G T4<em>1<br>TI.GN7.10XLARGE160.POST: 40C160G T4</em>2<br>TI.GN7.20XLARGE320.POST: 80C32</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>计算节点数</p>
                     */
                    uint64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <p>算力规格名称<br>计算规格 (for后付费)，可选值如下：<br>4C8G<br>8C16G<br>8C32G<br>16C32G<br>6C64G<br>24C48G<br>24C96G<br>32C64G<br>32C128G<br>8C40G V100<em>1<br>8C80G V100</em>2<br>32C160G V100<em>4<br>72C320G V100</em>8<br>32C128G T4<em>1<br>40C160G T4</em>2<br>80C32</p>
                     */
                    std::string m_instanceTypeAlias;
                    bool m_instanceTypeAliasHasBeenSet;

                    /**
                     * <p>RDMA配置</p>
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
