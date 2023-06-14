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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_GROUPRESOURCE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_GROUPRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/GpuDetail.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 资源信息
                */
                class GroupResource : public AbstractModel
                {
                public:
                    GroupResource();
                    ~GroupResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU核数; 单位为1/1000核，比如100表示0.1核
                     * @return Cpu CPU核数; 单位为1/1000核，比如100表示0.1核
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU核数; 单位为1/1000核，比如100表示0.1核
                     * @param _cpu CPU核数; 单位为1/1000核，比如100表示0.1核
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
                     * 获取内存；单位为MB
                     * @return Memory 内存；单位为MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存；单位为MB
                     * @param _memory 内存；单位为MB
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
                     * 获取总卡数；GPUDetail 显卡数之和；单位为1/100卡，比如100代表1卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu 总卡数；GPUDetail 显卡数之和；单位为1/100卡，比如100代表1卡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置总卡数；GPUDetail 显卡数之和；单位为1/100卡，比如100代表1卡
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu 总卡数；GPUDetail 显卡数之和；单位为1/100卡，比如100代表1卡
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
                     * 获取Gpu详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuDetailSet Gpu详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GpuDetail> GetGpuDetailSet() const;

                    /**
                     * 设置Gpu详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuDetailSet Gpu详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuDetailSet(const std::vector<GpuDetail>& _gpuDetailSet);

                    /**
                     * 判断参数 GpuDetailSet 是否已赋值
                     * @return GpuDetailSet 是否已赋值
                     * 
                     */
                    bool GpuDetailSetHasBeenSet() const;

                private:

                    /**
                     * CPU核数; 单位为1/1000核，比如100表示0.1核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存；单位为MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 总卡数；GPUDetail 显卡数之和；单位为1/100卡，比如100代表1卡
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * Gpu详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GpuDetail> m_gpuDetailSet;
                    bool m_gpuDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_GROUPRESOURCE_H_
