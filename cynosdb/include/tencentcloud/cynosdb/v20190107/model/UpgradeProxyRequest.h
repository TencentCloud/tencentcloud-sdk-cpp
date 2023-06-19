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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * UpgradeProxy请求参数结构体
                */
                class UpgradeProxyRequest : public AbstractModel
                {
                public:
                    UpgradeProxyRequest();
                    ~UpgradeProxyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取cpu核数
                     * @return Cpu cpu核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu核数
                     * @param _cpu cpu核数
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
                     * 获取内存
                     * @return Mem 内存
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置内存
                     * @param _mem 内存
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
                     * 获取数据库代理组节点个数
                     * @return ProxyCount 数据库代理组节点个数
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置数据库代理组节点个数
                     * @param _proxyCount 数据库代理组节点个数
                     * 
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取数据库代理组ID（已废弃）
                     * @return ProxyGroupId 数据库代理组ID（已废弃）
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理组ID（已废弃）
                     * @param _proxyGroupId 数据库代理组ID（已废弃）
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
                     * 获取重新负载均衡：auto（自动），manual（手动）
                     * @return ReloadBalance 重新负载均衡：auto（自动），manual（手动）
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置重新负载均衡：auto（自动），manual（手动）
                     * @param _reloadBalance 重新负载均衡：auto（自动），manual（手动）
                     * 
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     * 
                     */
                    bool ReloadBalanceHasBeenSet() const;

                    /**
                     * 获取升级时间 ：no（升级完成时）yes（实例维护时间）
                     * @return IsInMaintainPeriod 升级时间 ：no（升级完成时）yes（实例维护时间）
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置升级时间 ：no（升级完成时）yes（实例维护时间）
                     * @param _isInMaintainPeriod 升级时间 ：no（升级完成时）yes（实例维护时间）
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                    /**
                     * 获取数据库代理节点信息
                     * @return ProxyZones 数据库代理节点信息
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置数据库代理节点信息
                     * @param _proxyZones 数据库代理节点信息
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 数据库代理组节点个数
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * 数据库代理组ID（已废弃）
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 重新负载均衡：auto（自动），manual（手动）
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * 升级时间 ：no（升级完成时）yes（实例维护时间）
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                    /**
                     * 数据库代理节点信息
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEPROXYREQUEST_H_
