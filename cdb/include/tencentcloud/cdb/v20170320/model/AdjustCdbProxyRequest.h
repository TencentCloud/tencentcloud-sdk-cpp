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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeCustom.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * AdjustCdbProxy请求参数结构体
                */
                class AdjustCdbProxyRequest : public AbstractModel
                {
                public:
                    AdjustCdbProxyRequest();
                    ~AdjustCdbProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取代理组ID
                     * @return ProxyGroupId 代理组ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组ID
                     * @param _proxyGroupId 代理组ID
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
                     * 获取节点规格配置
备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。
示例中参数说明：
NodeCount：节点个数
Region：节点地域
Zone：节点可用区
Cpu：单个代理节点核数（单位：核）
Mem：单个代理节点内存数（单位：MB）
                     * @return ProxyNodeCustom 节点规格配置
备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。
示例中参数说明：
NodeCount：节点个数
Region：节点地域
Zone：节点可用区
Cpu：单个代理节点核数（单位：核）
Mem：单个代理节点内存数（单位：MB）
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置节点规格配置
备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。
示例中参数说明：
NodeCount：节点个数
Region：节点地域
Zone：节点可用区
Cpu：单个代理节点核数（单位：核）
Mem：单个代理节点内存数（单位：MB）
                     * @param _proxyNodeCustom 节点规格配置
备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。
示例中参数说明：
NodeCount：节点个数
Region：节点地域
Zone：节点可用区
Cpu：单个代理节点核数（单位：核）
Mem：单个代理节点内存数（单位：MB）
                     * 
                     */
                    void SetProxyNodeCustom(const std::vector<ProxyNodeCustom>& _proxyNodeCustom);

                    /**
                     * 判断参数 ProxyNodeCustom 是否已赋值
                     * @return ProxyNodeCustom 是否已赋值
                     * 
                     */
                    bool ProxyNodeCustomHasBeenSet() const;

                    /**
                     * 获取重新负载均衡：auto(自动),manual(手动)
                     * @return ReloadBalance 重新负载均衡：auto(自动),manual(手动)
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置重新负载均衡：auto(自动),manual(手动)
                     * @param _reloadBalance 重新负载均衡：auto(自动),manual(手动)
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
                     * 获取升级切换时间：nowTime(升级完成时),timeWindow(维护时间内)
                     * @return UpgradeTime 升级切换时间：nowTime(升级完成时),timeWindow(维护时间内)
                     * 
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置升级切换时间：nowTime(升级完成时),timeWindow(维护时间内)
                     * @param _upgradeTime 升级切换时间：nowTime(升级完成时),timeWindow(维护时间内)
                     * 
                     */
                    void SetUpgradeTime(const std::string& _upgradeTime);

                    /**
                     * 判断参数 UpgradeTime 是否已赋值
                     * @return UpgradeTime 是否已赋值
                     * 
                     */
                    bool UpgradeTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 节点规格配置
备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。
示例中参数说明：
NodeCount：节点个数
Region：节点地域
Zone：节点可用区
Cpu：单个代理节点核数（单位：核）
Mem：单个代理节点内存数（单位：MB）
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * 重新负载均衡：auto(自动),manual(手动)
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * 升级切换时间：nowTime(升级完成时),timeWindow(维护时间内)
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_
