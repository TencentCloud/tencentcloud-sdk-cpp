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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCECOUNT_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 实例资源池容量
                */
                class ResourceCount : public AbstractModel
                {
                public:
                    ResourceCount();
                    ~ResourceCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vCPU核数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu vCPU核数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置vCPU核数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu vCPU核数。
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
                     * 获取内存大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存大小，单位：GB。
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
                     * 获取GPU数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu GPU数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGpu() const;

                    /**
                     * 设置GPU数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu GPU数量。
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
                     * 获取本地盘大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disk 本地盘大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDisk() const;

                    /**
                     * 设置本地盘大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disk 本地盘大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisk(const uint64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                private:

                    /**
                     * vCPU核数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * GPU数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 本地盘大小，单位：GB。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_disk;
                    bool m_diskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCECOUNT_H_
