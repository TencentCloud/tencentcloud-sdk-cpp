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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONF_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Notebook资源参数
                */
                class ResourceConf : public AbstractModel
                {
                public:
                    ResourceConf();
                    ~ResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu 处理器资源, 单位为1/1000核 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu cpu 处理器资源, 单位为1/1000核 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置cpu 处理器资源, 单位为1/1000核 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu cpu 处理器资源, 单位为1/1000核 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取memory 内存资源, 单位为1M (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory memory 内存资源, 单位为1M (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置memory 内存资源, 单位为1M (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory memory 内存资源, 单位为1M (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取gpu Gpu卡资源，单位为1/100卡，例如GpuType=T4时，1 Gpu = 1/100 T4卡 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu gpu Gpu卡资源，单位为1/100卡，例如GpuType=T4时，1 Gpu = 1/100 T4卡 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置gpu Gpu卡资源，单位为1/100卡，例如GpuType=T4时，1 Gpu = 1/100 T4卡 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu gpu Gpu卡资源，单位为1/100卡，例如GpuType=T4时，1 Gpu = 1/100 T4卡 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取GpuType 卡类型，参考资源组上对应的卡类型。eg: H800,A800,A100,T4,P4,V100等 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType GpuType 卡类型，参考资源组上对应的卡类型。eg: H800,A800,A100,T4,P4,V100等 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置GpuType 卡类型，参考资源组上对应的卡类型。eg: H800,A800,A100,T4,P4,V100等 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType GpuType 卡类型，参考资源组上对应的卡类型。eg: H800,A800,A100,T4,P4,V100等 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取计算规格 (for后付费)，可选值如下：
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
TI.GN7.20XLARGE320.POST: 80C320G T4*4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 计算规格 (for后付费)，可选值如下：
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
TI.GN7.20XLARGE320.POST: 80C320G T4*4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置计算规格 (for后付费)，可选值如下：
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
TI.GN7.20XLARGE320.POST: 80C320G T4*4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceType 计算规格 (for后付费)，可选值如下：
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
TI.GN7.20XLARGE320.POST: 80C320G T4*4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * cpu 处理器资源, 单位为1/1000核 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * memory 内存资源, 单位为1M (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * gpu Gpu卡资源，单位为1/100卡，例如GpuType=T4时，1 Gpu = 1/100 T4卡 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * GpuType 卡类型，参考资源组上对应的卡类型。eg: H800,A800,A100,T4,P4,V100等 (for预付费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * 计算规格 (for后付费)，可选值如下：
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
TI.GN7.20XLARGE320.POST: 80C320G T4*4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCECONF_H_
