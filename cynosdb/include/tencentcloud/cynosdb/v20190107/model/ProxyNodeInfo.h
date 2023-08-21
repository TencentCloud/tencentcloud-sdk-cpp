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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 数据库代理组节点
                */
                class ProxyNodeInfo : public AbstractModel
                {
                public:
                    ProxyNodeInfo();
                    ~ProxyNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库代理节点ID
                     * @return ProxyNodeId 数据库代理节点ID
                     * 
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置数据库代理节点ID
                     * @param _proxyNodeId 数据库代理节点ID
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
                     * 获取节点当前连接数, DescribeProxyNodes接口此字段值不返回
                     * @return ProxyNodeConnections 节点当前连接数, DescribeProxyNodes接口此字段值不返回
                     * 
                     */
                    int64_t GetProxyNodeConnections() const;

                    /**
                     * 设置节点当前连接数, DescribeProxyNodes接口此字段值不返回
                     * @param _proxyNodeConnections 节点当前连接数, DescribeProxyNodes接口此字段值不返回
                     * 
                     */
                    void SetProxyNodeConnections(const int64_t& _proxyNodeConnections);

                    /**
                     * 判断参数 ProxyNodeConnections 是否已赋值
                     * @return ProxyNodeConnections 是否已赋值
                     * 
                     */
                    bool ProxyNodeConnectionsHasBeenSet() const;

                    /**
                     * 获取数据库代理节点cpu
                     * @return Cpu 数据库代理节点cpu
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置数据库代理节点cpu
                     * @param _cpu 数据库代理节点cpu
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
                     * 获取数据库代理节点内存
                     * @return Mem 数据库代理节点内存
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置数据库代理节点内存
                     * @param _mem 数据库代理节点内存
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
                     * 获取数据库代理节点状态
                     * @return Status 数据库代理节点状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数据库代理节点状态
                     * @param _status 数据库代理节点状态
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
                     * 获取数据库代理组ID
                     * @return ProxyGroupId 数据库代理组ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理组ID
                     * @param _proxyGroupId 数据库代理组ID
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取用户AppID
                     * @return AppId 用户AppID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppID
                     * @param _appId 用户AppID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取数据库代理节点名字
                     * @return OssProxyNodeName 数据库代理节点名字
                     * 
                     */
                    std::string GetOssProxyNodeName() const;

                    /**
                     * 设置数据库代理节点名字
                     * @param _ossProxyNodeName 数据库代理节点名字
                     * 
                     */
                    void SetOssProxyNodeName(const std::string& _ossProxyNodeName);

                    /**
                     * 判断参数 OssProxyNodeName 是否已赋值
                     * @return OssProxyNodeName 是否已赋值
                     * 
                     */
                    bool OssProxyNodeNameHasBeenSet() const;

                private:

                    /**
                     * 数据库代理节点ID
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * 节点当前连接数, DescribeProxyNodes接口此字段值不返回
                     */
                    int64_t m_proxyNodeConnections;
                    bool m_proxyNodeConnectionsHasBeenSet;

                    /**
                     * 数据库代理节点cpu
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 数据库代理节点内存
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 数据库代理节点状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据库代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 用户AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 数据库代理节点名字
                     */
                    std::string m_ossProxyNodeName;
                    bool m_ossProxyNodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_
