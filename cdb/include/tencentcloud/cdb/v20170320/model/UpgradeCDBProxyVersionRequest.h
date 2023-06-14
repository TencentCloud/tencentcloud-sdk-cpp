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
                     * 获取数据库代理ID
                     * @return ProxyGroupId 数据库代理ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理ID
                     * @param _proxyGroupId 数据库代理ID
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
                     * 获取数据库代理当前版本
                     * @return SrcProxyVersion 数据库代理当前版本
                     * 
                     */
                    std::string GetSrcProxyVersion() const;

                    /**
                     * 设置数据库代理当前版本
                     * @param _srcProxyVersion 数据库代理当前版本
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
                     * 获取数据库代理升级版本
                     * @return DstProxyVersion 数据库代理升级版本
                     * 
                     */
                    std::string GetDstProxyVersion() const;

                    /**
                     * 设置数据库代理升级版本
                     * @param _dstProxyVersion 数据库代理升级版本
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
                     * 获取升级时间 ：nowTime（升级完成时）timeWindow（实例维护时间）
                     * @return UpgradeTime 升级时间 ：nowTime（升级完成时）timeWindow（实例维护时间）
                     * 
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置升级时间 ：nowTime（升级完成时）timeWindow（实例维护时间）
                     * @param _upgradeTime 升级时间 ：nowTime（升级完成时）timeWindow（实例维护时间）
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
                     * 数据库代理ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 数据库代理当前版本
                     */
                    std::string m_srcProxyVersion;
                    bool m_srcProxyVersionHasBeenSet;

                    /**
                     * 数据库代理升级版本
                     */
                    std::string m_dstProxyVersion;
                    bool m_dstProxyVersionHasBeenSet;

                    /**
                     * 升级时间 ：nowTime（升级完成时）timeWindow（实例维护时间）
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_
