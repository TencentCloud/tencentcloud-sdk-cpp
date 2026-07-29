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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_METARESOURCE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_METARESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 资源信息。
                */
                class MetaResource : public AbstractModel
                {
                public:
                    MetaResource();
                    ~MetaResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CPU核心</p><p>单位：核</p>
                     * @return Cpu <p>CPU核心</p><p>单位：核</p>
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置<p>CPU核心</p><p>单位：核</p>
                     * @param _cpu <p>CPU核心</p><p>单位：核</p>
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
                     * 获取<p>内存</p><p>单位：GiB</p>
                     * @return Memory <p>内存</p><p>单位：GiB</p>
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置<p>内存</p><p>单位：GiB</p>
                     * @param _memory <p>内存</p><p>单位：GiB</p>
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>POD数量</p><p>单位：个</p>
                     * @return Pods <p>POD数量</p><p>单位：个</p>
                     * 
                     */
                    uint64_t GetPods() const;

                    /**
                     * 设置<p>POD数量</p><p>单位：个</p>
                     * @param _pods <p>POD数量</p><p>单位：个</p>
                     * 
                     */
                    void SetPods(const uint64_t& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * 
                     */
                    bool PodsHasBeenSet() const;

                private:

                    /**
                     * <p>CPU核心</p><p>单位：核</p>
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存</p><p>单位：GiB</p>
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>POD数量</p><p>单位：个</p>
                     */
                    uint64_t m_pods;
                    bool m_podsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_METARESOURCE_H_
