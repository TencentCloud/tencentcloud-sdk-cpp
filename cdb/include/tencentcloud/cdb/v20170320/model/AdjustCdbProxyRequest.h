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
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
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
                     * 获取<p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * @return ProxyGroupId <p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * @param _proxyGroupId <p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
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
                     * 获取<p>节点规格配置<br>备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。<br>示例中参数说明：<br>NodeCount：节点个数<br>Region：节点地域<br>Zone：节点可用区<br>Cpu：单个代理节点核数（单位：核）<br>Mem：单个代理节点内存数（单位：MB）</p>
                     * @return ProxyNodeCustom <p>节点规格配置<br>备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。<br>示例中参数说明：<br>NodeCount：节点个数<br>Region：节点地域<br>Zone：节点可用区<br>Cpu：单个代理节点核数（单位：核）<br>Mem：单个代理节点内存数（单位：MB）</p>
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置<p>节点规格配置<br>备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。<br>示例中参数说明：<br>NodeCount：节点个数<br>Region：节点地域<br>Zone：节点可用区<br>Cpu：单个代理节点核数（单位：核）<br>Mem：单个代理节点内存数（单位：MB）</p>
                     * @param _proxyNodeCustom <p>节点规格配置<br>备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。<br>示例中参数说明：<br>NodeCount：节点个数<br>Region：节点地域<br>Zone：节点可用区<br>Cpu：单个代理节点核数（单位：核）<br>Mem：单个代理节点内存数（单位：MB）</p>
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
                     * 获取<p>重新负载均衡：auto(自动),manual(手动)</p>
                     * @return ReloadBalance <p>重新负载均衡：auto(自动),manual(手动)</p>
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置<p>重新负载均衡：auto(自动),manual(手动)</p>
                     * @param _reloadBalance <p>重新负载均衡：auto(自动),manual(手动)</p>
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
                     * 获取<p>升级切换时间。</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 维护时间内</li><li>rollUpgrade： 滚动升级</li></ul>
                     * @return UpgradeTime <p>升级切换时间。</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 维护时间内</li><li>rollUpgrade： 滚动升级</li></ul>
                     * 
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置<p>升级切换时间。</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 维护时间内</li><li>rollUpgrade： 滚动升级</li></ul>
                     * @param _upgradeTime <p>升级切换时间。</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 维护时间内</li><li>rollUpgrade： 滚动升级</li></ul>
                     * 
                     */
                    void SetUpgradeTime(const std::string& _upgradeTime);

                    /**
                     * 判断参数 UpgradeTime 是否已赋值
                     * @return UpgradeTime 是否已赋值
                     * 
                     */
                    bool UpgradeTimeHasBeenSet() const;

                    /**
                     * 获取<p>滚动升级或平滑变配等待时间</p><p>取值范围：[0, 3600]</p><p>单位：秒</p>
                     * @return RollUpgradeWaitingTime <p>滚动升级或平滑变配等待时间</p><p>取值范围：[0, 3600]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetRollUpgradeWaitingTime() const;

                    /**
                     * 设置<p>滚动升级或平滑变配等待时间</p><p>取值范围：[0, 3600]</p><p>单位：秒</p>
                     * @param _rollUpgradeWaitingTime <p>滚动升级或平滑变配等待时间</p><p>取值范围：[0, 3600]</p><p>单位：秒</p>
                     * 
                     */
                    void SetRollUpgradeWaitingTime(const int64_t& _rollUpgradeWaitingTime);

                    /**
                     * 判断参数 RollUpgradeWaitingTime 是否已赋值
                     * @return RollUpgradeWaitingTime 是否已赋值
                     * 
                     */
                    bool RollUpgradeWaitingTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>代理组 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>节点规格配置<br>备注：数据库代理支持的节点规格为：2C4000MB、4C8000MB、8C16000MB。<br>示例中参数说明：<br>NodeCount：节点个数<br>Region：节点地域<br>Zone：节点可用区<br>Cpu：单个代理节点核数（单位：核）<br>Mem：单个代理节点内存数（单位：MB）</p>
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * <p>重新负载均衡：auto(自动),manual(手动)</p>
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * <p>升级切换时间。</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 维护时间内</li><li>rollUpgrade： 滚动升级</li></ul>
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                    /**
                     * <p>滚动升级或平滑变配等待时间</p><p>取值范围：[0, 3600]</p><p>单位：秒</p>
                     */
                    int64_t m_rollUpgradeWaitingTime;
                    bool m_rollUpgradeWaitingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_
