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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATSCVMINFO_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATSCVMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/SetatsDisk.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * setats 机器规格
                */
                class SetatsCvmInfo : public AbstractModel
                {
                public:
                    SetatsCvmInfo();
                    ~SetatsCvmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取setats机器cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu setats机器cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置setats机器cpu
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu setats机器cpu
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取setats机器内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mem setats机器内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置setats机器内存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mem setats机器内存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取setats worker 并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultParallelism setats worker 并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultParallelism() const;

                    /**
                     * 设置setats worker 并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultParallelism setats worker 并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultParallelism(const int64_t& _defaultParallelism);

                    /**
                     * 判断参数 DefaultParallelism 是否已赋值
                     * @return DefaultParallelism 是否已赋值
                     * 
                     */
                    bool DefaultParallelismHasBeenSet() const;

                    /**
                     * 获取setats 机器磁盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disk setats 机器磁盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetatsDisk GetDisk() const;

                    /**
                     * 设置setats 机器磁盘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disk setats 机器磁盘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisk(const SetatsDisk& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                private:

                    /**
                     * setats机器cpu
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * setats机器内存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * setats worker 并行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultParallelism;
                    bool m_defaultParallelismHasBeenSet;

                    /**
                     * setats 机器磁盘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetatsDisk m_disk;
                    bool m_diskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SETATSCVMINFO_H_
