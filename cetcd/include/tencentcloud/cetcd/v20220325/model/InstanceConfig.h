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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_INSTANCECONFIG_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_INSTANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 实例配置信息
                */
                class InstanceConfig : public AbstractModel
                {
                public:
                    InstanceConfig();
                    ~InstanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取核数
                     * @return Cpu 核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置核数
                     * @param _cpu 核数
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
                     * 获取内存大小Gi
                     * @return Mem 内存大小Gi
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存大小Gi
                     * @param _mem 内存大小Gi
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取集群规模
                     * @return Size 集群规模
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置集群规模
                     * @param _size 集群规模
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小Gi
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 集群规模
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_INSTANCECONFIG_H_
