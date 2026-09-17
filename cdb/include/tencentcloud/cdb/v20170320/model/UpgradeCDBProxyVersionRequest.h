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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_

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
                * UpgradeCDBProxyVersion请求参数结构体
                */
                class UpgradeCDBProxyVersionRequest : public AbstractModel
                {
                public:
                    UpgradeCDBProxyVersionRequest();
                    ~UpgradeCDBProxyVersionRequest() = default;
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
                     * 获取<p>数据库代理 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * @return ProxyGroupId <p>数据库代理 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置<p>数据库代理 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     * @param _proxyGroupId <p>数据库代理 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
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
                     * 获取<p>数据库代理当前版本</p>
                     * @return SrcProxyVersion <p>数据库代理当前版本</p>
                     * 
                     */
                    std::string GetSrcProxyVersion() const;

                    /**
                     * 设置<p>数据库代理当前版本</p>
                     * @param _srcProxyVersion <p>数据库代理当前版本</p>
                     * 
                     */
                    void SetSrcProxyVersion(const std::string& _srcProxyVersion);

                    /**
                     * 判断参数 SrcProxyVersion 是否已赋值
                     * @return SrcProxyVersion 是否已赋值
                     * 
                     */
                    bool SrcProxyVersionHasBeenSet() const;

                    /**
                     * 获取<p>数据库代理升级版本</p>
                     * @return DstProxyVersion <p>数据库代理升级版本</p>
                     * 
                     */
                    std::string GetDstProxyVersion() const;

                    /**
                     * 设置<p>数据库代理升级版本</p>
                     * @param _dstProxyVersion <p>数据库代理升级版本</p>
                     * 
                     */
                    void SetDstProxyVersion(const std::string& _dstProxyVersion);

                    /**
                     * 判断参数 DstProxyVersion 是否已赋值
                     * @return DstProxyVersion 是否已赋值
                     * 
                     */
                    bool DstProxyVersionHasBeenSet() const;

                    /**
                     * 获取<p>升级切换时间</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 实例维护时间</li><li>rollUpgrade： 滚动升级</li></ul>
                     * @return UpgradeTime <p>升级切换时间</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 实例维护时间</li><li>rollUpgrade： 滚动升级</li></ul>
                     * 
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置<p>升级切换时间</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 实例维护时间</li><li>rollUpgrade： 滚动升级</li></ul>
                     * @param _upgradeTime <p>升级切换时间</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 实例维护时间</li><li>rollUpgrade： 滚动升级</li></ul>
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
                     * 获取<p>滚动升级等待时间</p><p>取值范围：[10, 3600]</p><p>单位：秒</p>
                     * @return RollUpgradeWaitingTime <p>滚动升级等待时间</p><p>取值范围：[10, 3600]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetRollUpgradeWaitingTime() const;

                    /**
                     * 设置<p>滚动升级等待时间</p><p>取值范围：[10, 3600]</p><p>单位：秒</p>
                     * @param _rollUpgradeWaitingTime <p>滚动升级等待时间</p><p>取值范围：[10, 3600]</p><p>单位：秒</p>
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
                     * <p>数据库代理 ID。可通过 <a href="https://cloud.tencent.com/document/api/236/90585">DescribeCdbProxyInfo</a> 接口获取。</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * <p>数据库代理当前版本</p>
                     */
                    std::string m_srcProxyVersion;
                    bool m_srcProxyVersionHasBeenSet;

                    /**
                     * <p>数据库代理升级版本</p>
                     */
                    std::string m_dstProxyVersion;
                    bool m_dstProxyVersionHasBeenSet;

                    /**
                     * <p>升级切换时间</p><p>枚举值：</p><ul><li>nowTime： 升级完成时</li><li>timeWindow： 实例维护时间</li><li>rollUpgrade： 滚动升级</li></ul>
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                    /**
                     * <p>滚动升级等待时间</p><p>取值范围：[10, 3600]</p><p>单位：秒</p>
                     */
                    int64_t m_rollUpgradeWaitingTime;
                    bool m_rollUpgradeWaitingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_
