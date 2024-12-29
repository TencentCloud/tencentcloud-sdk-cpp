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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 代理节点
                */
                class ProxyNode : public AbstractModel
                {
                public:
                    ProxyNode();
                    ~ProxyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理节点ID
                     * @return ProxyId 代理节点ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置代理节点ID
                     * @param _proxyId 代理节点ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
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
                     * 获取内存大小
                     * @return Mem 内存大小
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存大小
                     * @param _mem 内存大小
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
                     * 获取节点状态
                     * @return Status 节点状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态
                     * @param _status 节点状态
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
                     * 获取代理节点可用区
                     * @return Zone 代理节点可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置代理节点可用区
                     * @param _zone 代理节点可用区
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
                     * 获取代理节点地域
                     * @return Region 代理节点地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置代理节点地域
                     * @param _region 代理节点地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取连接数
                     * @return Connection 连接数
                     * 
                     */
                    uint64_t GetConnection() const;

                    /**
                     * 设置连接数
                     * @param _connection 连接数
                     * 
                     */
                    void SetConnection(const uint64_t& _connection);

                    /**
                     * 判断参数 Connection 是否已赋值
                     * @return Connection 是否已赋值
                     * 
                     */
                    bool ConnectionHasBeenSet() const;

                private:

                    /**
                     * 代理节点ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * CPU核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 节点状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 代理节点可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 代理节点地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 连接数
                     */
                    uint64_t m_connection;
                    bool m_connectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYNODE_H_
