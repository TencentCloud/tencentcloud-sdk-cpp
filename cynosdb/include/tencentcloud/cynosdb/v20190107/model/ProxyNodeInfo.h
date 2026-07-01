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
                     * 获取<p>数据库代理节点ID</p>
                     * @return ProxyNodeId <p>数据库代理节点ID</p>
                     * 
                     */
                    std::string GetProxyNodeId() const;

                    /**
                     * 设置<p>数据库代理节点ID</p>
                     * @param _proxyNodeId <p>数据库代理节点ID</p>
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
                     * 获取<p>节点当前连接数, DescribeProxyNodes接口此字段值不返回</p>
                     * @return ProxyNodeConnections <p>节点当前连接数, DescribeProxyNodes接口此字段值不返回</p>
                     * 
                     */
                    int64_t GetProxyNodeConnections() const;

                    /**
                     * 设置<p>节点当前连接数, DescribeProxyNodes接口此字段值不返回</p>
                     * @param _proxyNodeConnections <p>节点当前连接数, DescribeProxyNodes接口此字段值不返回</p>
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
                     * 获取<p>数据库代理节点cpu</p>
                     * @return Cpu <p>数据库代理节点cpu</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>数据库代理节点cpu</p>
                     * @param _cpu <p>数据库代理节点cpu</p>
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
                     * 获取<p>数据库代理节点内存</p>
                     * @return Mem <p>数据库代理节点内存</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>数据库代理节点内存</p>
                     * @param _mem <p>数据库代理节点内存</p>
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
                     * 获取<p>数据库代理节点状态</p>
                     * @return Status <p>数据库代理节点状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>数据库代理节点状态</p>
                     * @param _status <p>数据库代理节点状态</p>
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
                     * 获取<p>数据库代理组ID</p>
                     * @return ProxyGroupId <p>数据库代理组ID</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>数据库代理组ID</p>
                     * @param _proxyGroupId <p>数据库代理组ID</p>
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
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>用户AppID</p>
                     * @return AppId <p>用户AppID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>用户AppID</p>
                     * @param _appId <p>用户AppID</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>数据库代理节点名字</p>
                     * @return OssProxyNodeName <p>数据库代理节点名字</p>
                     * 
                     */
                    std::string GetOssProxyNodeName() const;

                    /**
                     * 设置<p>数据库代理节点名字</p>
                     * @param _ossProxyNodeName <p>数据库代理节点名字</p>
                     * 
                     */
                    void SetOssProxyNodeName(const std::string& _ossProxyNodeName);

                    /**
                     * 判断参数 OssProxyNodeName 是否已赋值
                     * @return OssProxyNodeName 是否已赋值
                     * 
                     */
                    bool OssProxyNodeNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>数据库代理节点ID</p>
                     */
                    std::string m_proxyNodeId;
                    bool m_proxyNodeIdHasBeenSet;

                    /**
                     * <p>节点当前连接数, DescribeProxyNodes接口此字段值不返回</p>
                     */
                    int64_t m_proxyNodeConnections;
                    bool m_proxyNodeConnectionsHasBeenSet;

                    /**
                     * <p>数据库代理节点cpu</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>数据库代理节点内存</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>数据库代理节点状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据库代理组ID</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>用户AppID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>数据库代理节点名字</p>
                     */
                    std::string m_ossProxyNodeName;
                    bool m_ossProxyNodeNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYNODEINFO_H_
