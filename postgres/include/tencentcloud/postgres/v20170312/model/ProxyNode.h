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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYNODE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYNODE_H_

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
                * Proxy 节点信息。
                */
                class ProxyNode : public AbstractModel
                {
                public:
                    ProxyNode();
                    ~ProxyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Proxy 节点 ID</p>
                     * @return ProxyNodeId <p>Proxy 节点 ID</p>
                     * 
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置<p>Proxy 节点 ID</p>
                     * @param _proxyNodeId <p>Proxy 节点 ID</p>
                     * 
                     */
                    void SetProxyNodeId(const std::string& _proxyNodeId);

                    /**
                     * 判断参数 ProxyNodeId 是否已赋值
                     * @return ProxyNodeId 是否已赋值
                     * 
                     */
                    bool ProxyNodeIdHasBeenSet() const;

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
                     * 获取<p>节点 CPU 核数（核）</p>
                     * @return Cpu <p>节点 CPU 核数（核）</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>节点 CPU 核数（核）</p>
                     * @param _cpu <p>节点 CPU 核数（核）</p>
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
                     * 获取<p>节点内存大小（MB）</p><p>单位：MB</p>
                     * @return Mem <p>节点内存大小（MB）</p><p>单位：MB</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>节点内存大小（MB）</p><p>单位：MB</p>
                     * @param _mem <p>节点内存大小（MB）</p><p>单位：MB</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>节点状态：running/isolated/abnormal 等</p>
                     * @return Status <p>节点状态：running/isolated/abnormal 等</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>节点状态：running/isolated/abnormal 等</p>
                     * @param _status <p>节点状态：running/isolated/abnormal 等</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>节点当前连接数</p>
                     * @return Connection <p>节点当前连接数</p>
                     * 
                     */
                    int64_t GetConnection() const;

                    /**
                     * 设置<p>节点当前连接数</p>
                     * @param _connection <p>节点当前连接数</p>
                     * 
                     */
                    void SetConnection(const int64_t& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     * 
                     */
                    bool ConnectionHasBeenSet() const;

                private:

                    /**
                     * <p>Proxy 节点 ID</p>
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * <p>Proxy 节点所在可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>节点 CPU 核数（核）</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>节点内存大小（MB）</p><p>单位：MB</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>节点状态：running/isolated/abnormal 等</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>节点当前连接数</p>
                     */
                    int64_t m_connection;
                    bool m_connectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYNODE_H_
