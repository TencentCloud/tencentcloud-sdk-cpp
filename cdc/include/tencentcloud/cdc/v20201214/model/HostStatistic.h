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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC集群内宿主机的统计信息
                */
                class HostStatistic : public AbstractModel
                {
                public:
                    HostStatistic();
                    ~HostStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取宿主机规格
                     * @return HostType 宿主机规格
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置宿主机规格
                     * @param HostType 宿主机规格
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取宿主机机型系列
                     * @return HostFamily 宿主机机型系列
                     */
                    std::string GetHostFamily() const;

                    /**
                     * 设置宿主机机型系列
                     * @param HostFamily 宿主机机型系列
                     */
                    void SetHostFamily(const std::string& _hostFamily);

                    /**
                     * 判断参数 HostFamily 是否已赋值
                     * @return HostFamily 是否已赋值
                     */
                    bool HostFamilyHasBeenSet() const;

                    /**
                     * 获取宿主机的CPU核数，单位：核
                     * @return Cpu 宿主机的CPU核数，单位：核
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置宿主机的CPU核数，单位：核
                     * @param Cpu 宿主机的CPU核数，单位：核
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取宿主机内存大小，单位：GB
                     * @return Memory 宿主机内存大小，单位：GB
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置宿主机内存大小，单位：GB
                     * @param Memory 宿主机内存大小，单位：GB
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取该规格宿主机的数量
                     * @return Count 该规格宿主机的数量
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置该规格宿主机的数量
                     * @param Count 该规格宿主机的数量
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 宿主机规格
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * 宿主机机型系列
                     */
                    std::string m_hostFamily;
                    bool m_hostFamilyHasBeenSet;

                    /**
                     * 宿主机的CPU核数，单位：核
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 宿主机内存大小，单位：GB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 该规格宿主机的数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTSTATISTIC_H_
