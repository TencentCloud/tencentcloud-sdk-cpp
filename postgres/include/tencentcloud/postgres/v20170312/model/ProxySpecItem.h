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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYSPECITEM_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYSPECITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Proxy可售规格信息
                */
                class ProxySpecItem : public AbstractModel
                {
                public:
                    ProxySpecItem();
                    ~ProxySpecItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CPU 核数</p><p>单位：核</p>
                     * @return Cpu <p>CPU 核数</p><p>单位：核</p>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>CPU 核数</p><p>单位：核</p>
                     * @param _cpu <p>CPU 核数</p><p>单位：核</p>
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
                     * 获取<p>内存大小</p><p>单位：MB</p>
                     * @return Memory <p>内存大小</p><p>单位：MB</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小</p><p>单位：MB</p>
                     * @param _memory <p>内存大小</p><p>单位：MB</p>
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
                     * 获取<p>最小节点数</p>
                     * @return MinNodeNum <p>最小节点数</p>
                     * 
                     */
                    uint64_t GetMinNodeNum() const;

                    /**
                     * 设置<p>最小节点数</p>
                     * @param _minNodeNum <p>最小节点数</p>
                     * 
                     */
                    void SetMinNodeNum(const uint64_t& _minNodeNum);

                    /**
                     * 判断参数 MinNodeNum 是否已赋值
                     * @return MinNodeNum 是否已赋值
                     * 
                     */
                    bool MinNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>最大节点数</p>
                     * @return MaxNodeNum <p>最大节点数</p>
                     * 
                     */
                    uint64_t GetMaxNodeNum() const;

                    /**
                     * 设置<p>最大节点数</p>
                     * @param _maxNodeNum <p>最大节点数</p>
                     * 
                     */
                    void SetMaxNodeNum(const uint64_t& _maxNodeNum);

                    /**
                     * 判断参数 MaxNodeNum 是否已赋值
                     * @return MaxNodeNum 是否已赋值
                     * 
                     */
                    bool MaxNodeNumHasBeenSet() const;

                private:

                    /**
                     * <p>CPU 核数</p><p>单位：核</p>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存大小</p><p>单位：MB</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>最小节点数</p>
                     */
                    uint64_t m_minNodeNum;
                    bool m_minNodeNumHasBeenSet;

                    /**
                     * <p>最大节点数</p>
                     */
                    uint64_t m_maxNodeNum;
                    bool m_maxNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYSPECITEM_H_
