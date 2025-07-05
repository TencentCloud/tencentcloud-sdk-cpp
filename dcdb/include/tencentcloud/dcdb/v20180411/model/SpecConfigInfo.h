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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SPECCONFIGINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SPECCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 实例可售卖规格详细信息，创建实例和扩容实例时 NodeCount、Memory 确定售卖规格，硬盘大小可用区间为[MinStorage,MaxStorage]
                */
                class SpecConfigInfo : public AbstractModel
                {
                public:
                    SpecConfigInfo();
                    ~SpecConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点个数，2 表示一主一从，3 表示一主二从
                     * @return NodeCount 节点个数，2 表示一主一从，3 表示一主二从
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点个数，2 表示一主一从，3 表示一主二从
                     * @param _nodeCount 节点个数，2 表示一主一从，3 表示一主二从
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取内存大小，单位 GB
                     * @return Memory 内存大小，单位 GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位 GB
                     * @param _memory 内存大小，单位 GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取数据盘规格最小值，单位 GB
                     * @return MinStorage 数据盘规格最小值，单位 GB
                     * 
                     */
                    int64_t GetMinStorage() const;

                    /**
                     * 设置数据盘规格最小值，单位 GB
                     * @param _minStorage 数据盘规格最小值，单位 GB
                     * 
                     */
                    void SetMinStorage(const int64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取数据盘规格最大值，单位 GB
                     * @return MaxStorage 数据盘规格最大值，单位 GB
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置数据盘规格最大值，单位 GB
                     * @param _maxStorage 数据盘规格最大值，单位 GB
                     * 
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取推荐的使用场景
                     * @return SuitInfo 推荐的使用场景
                     * 
                     */
                    std::string GetSuitInfo() const;

                    /**
                     * 设置推荐的使用场景
                     * @param _suitInfo 推荐的使用场景
                     * 
                     */
                    void SetSuitInfo(const std::string& _suitInfo);

                    /**
                     * 判断参数 SuitInfo 是否已赋值
                     * @return SuitInfo 是否已赋值
                     * 
                     */
                    bool SuitInfoHasBeenSet() const;

                    /**
                     * 获取产品类型 Id
                     * @return Pid 产品类型 Id
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置产品类型 Id
                     * @param _pid 产品类型 Id
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取最大 Qps 值
                     * @return Qps 最大 Qps 值
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置最大 Qps 值
                     * @param _qps 最大 Qps 值
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                private:

                    /**
                     * 节点个数，2 表示一主一从，3 表示一主二从
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 内存大小，单位 GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 数据盘规格最小值，单位 GB
                     */
                    int64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * 数据盘规格最大值，单位 GB
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 推荐的使用场景
                     */
                    std::string m_suitInfo;
                    bool m_suitInfoHasBeenSet;

                    /**
                     * 产品类型 Id
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 最大 Qps 值
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * CPU核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SPECCONFIGINFO_H_
