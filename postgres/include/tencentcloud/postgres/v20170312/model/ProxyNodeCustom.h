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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYNODECUSTOM_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYNODECUSTOM_H_

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
                * Proxy 节点自定义规格信息，每个 Zone 对应一组节点配置。
                */
                class ProxyNodeCustom : public AbstractModel
                {
                public:
                    ProxyNodeCustom();
                    ~ProxyNodeCustom() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该可用区下的 Proxy 节点数量</p><p>取值范围：[1, 16]</p>
                     * @return NodeCount <p>该可用区下的 Proxy 节点数量</p><p>取值范围：[1, 16]</p>
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置<p>该可用区下的 Proxy 节点数量</p><p>取值范围：[1, 16]</p>
                     * @param _nodeCount <p>该可用区下的 Proxy 节点数量</p><p>取值范围：[1, 16]</p>
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 节点所在可用区</p>
                     * @return Zone <p>Proxy 节点所在可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Proxy 节点所在可用区</p>
                     * @param _zone <p>Proxy 节点所在可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 节点 CPU 核数（核）</p>
                     * @return Cpu <p>Proxy 节点 CPU 核数（核）</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Proxy 节点 CPU 核数（核）</p>
                     * @param _cpu <p>Proxy 节点 CPU 核数（核）</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Proxy 节点内存大小（MB）</p><p>单位：MB</p>
                     * @return Mem <p>Proxy 节点内存大小（MB）</p><p>单位：MB</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>Proxy 节点内存大小（MB）</p><p>单位：MB</p>
                     * @param _mem <p>Proxy 节点内存大小（MB）</p><p>单位：MB</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                private:

                    /**
                     * <p>该可用区下的 Proxy 节点数量</p><p>取值范围：[1, 16]</p>
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Proxy 节点所在可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Proxy 节点 CPU 核数（核）</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Proxy 节点内存大小（MB）</p><p>单位：MB</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYNODECUSTOM_H_
