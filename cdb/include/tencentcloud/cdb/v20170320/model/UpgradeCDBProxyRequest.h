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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpgradeCDBProxy请求参数结构体
                */
                class UpgradeCDBProxyRequest : public AbstractModel
                {
                public:
                    UpgradeCDBProxyRequest();
                    ~UpgradeCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库代理ID
                     * @return ProxyGroupId 数据库代理ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理ID
                     * @param ProxyGroupId 数据库代理ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取代理节点个数，实际规格支持数
                     * @return ProxyCount 代理节点个数，实际规格支持数
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 设置代理节点个数，实际规格支持数
                     * @param ProxyCount 代理节点个数，实际规格支持数
                     */
                    void SetProxyCount(const int64_t& _proxyCount);

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取代理节点核数，实际规格支持数
                     * @return Cpu 代理节点核数，实际规格支持数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置代理节点核数，实际规格支持数
                     * @param Cpu 代理节点核数，实际规格支持数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取代理节点内存大小
                     * @return Mem 代理节点内存大小
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置代理节点内存大小
                     * @param Mem 代理节点内存大小
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取重新负载均衡：auto（自动），manual（手动）
                     * @return ReloadBalance 重新负载均衡：auto（自动），manual（手动）
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置重新负载均衡：auto（自动），manual（手动）
                     * @param ReloadBalance 重新负载均衡：auto（自动），manual（手动）
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     */
                    bool ReloadBalanceHasBeenSet() const;

                    /**
                     * 获取升级时间 nowTime（升级完成时）timeWindow（实例维护时间）
                     * @return UpgradeTime 升级时间 nowTime（升级完成时）timeWindow（实例维护时间）
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置升级时间 nowTime（升级完成时）timeWindow（实例维护时间）
                     * @param UpgradeTime 升级时间 nowTime（升级完成时）timeWindow（实例维护时间）
                     */
                    void SetUpgradeTime(const std::string& _upgradeTime);

                    /**
                     * 判断参数 UpgradeTime 是否已赋值
                     * @return UpgradeTime 是否已赋值
                     */
                    bool UpgradeTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库代理ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 代理节点个数，实际规格支持数
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * 代理节点核数，实际规格支持数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 代理节点内存大小
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 重新负载均衡：auto（自动），manual（手动）
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * 升级时间 nowTime（升级完成时）timeWindow（实例维护时间）
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYREQUEST_H_
