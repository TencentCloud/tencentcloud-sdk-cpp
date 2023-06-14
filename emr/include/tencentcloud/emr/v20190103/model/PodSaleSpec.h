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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODSALESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODSALESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod资源售卖规格
                */
                class PodSaleSpec : public AbstractModel
                {
                public:
                    PodSaleSpec();
                    ~PodSaleSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可售卖的资源规格，仅为以下值:"TASK","CORE","MASTER","ROUTER"。
                     * @return NodeType 可售卖的资源规格，仅为以下值:"TASK","CORE","MASTER","ROUTER"。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置可售卖的资源规格，仅为以下值:"TASK","CORE","MASTER","ROUTER"。
                     * @param _nodeType 可售卖的资源规格，仅为以下值:"TASK","CORE","MASTER","ROUTER"。
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Cpu核数。
                     * @return Cpu Cpu核数。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Cpu核数。
                     * @param _cpu Cpu核数。
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
                     * 获取内存数量，单位为GB。
                     * @return Memory 内存数量，单位为GB。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存数量，单位为GB。
                     * @param _memory 内存数量，单位为GB。
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
                     * 获取该规格资源可申请的最大数量。
                     * @return Number 该规格资源可申请的最大数量。
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置该规格资源可申请的最大数量。
                     * @param _number 该规格资源可申请的最大数量。
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 可售卖的资源规格，仅为以下值:"TASK","CORE","MASTER","ROUTER"。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Cpu核数。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存数量，单位为GB。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 该规格资源可申请的最大数量。
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODSALESPEC_H_
