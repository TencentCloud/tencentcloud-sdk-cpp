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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEPROXYVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEPROXYVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeProxyVersion请求参数结构体
                */
                class UpgradeProxyVersionRequest : public AbstractModel
                {
                public:
                    UpgradeProxyVersionRequest();
                    ~UpgradeProxyVersionRequest() = default;
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
                     * 获取当前proxy版本
                     * @return CurrentProxyVersion 当前proxy版本
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置当前proxy版本
                     * @param _currentProxyVersion 当前proxy版本
                     * 
                     */
                    void SetCurrentProxyVersion(const std::string& _currentProxyVersion);

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     * 
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取可升级的redis版本
                     * @return UpgradeProxyVersion 可升级的redis版本
                     * 
                     */
                    std::string GetUpgradeProxyVersion() const;

                    /**
                     * 设置可升级的redis版本
                     * @param _upgradeProxyVersion 可升级的redis版本
                     * 
                     */
                    void SetUpgradeProxyVersion(const std::string& _upgradeProxyVersion);

                    /**
                     * 判断参数 UpgradeProxyVersion 是否已赋值
                     * @return UpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool UpgradeProxyVersionHasBeenSet() const;

                    /**
                     * 获取1-立即升级   0-维护时间窗口升级
                     * @return InstanceTypeUpgradeNow 1-立即升级   0-维护时间窗口升级
                     * 
                     */
                    int64_t GetInstanceTypeUpgradeNow() const;

                    /**
                     * 设置1-立即升级   0-维护时间窗口升级
                     * @param _instanceTypeUpgradeNow 1-立即升级   0-维护时间窗口升级
                     * 
                     */
                    void SetInstanceTypeUpgradeNow(const int64_t& _instanceTypeUpgradeNow);

                    /**
                     * 判断参数 InstanceTypeUpgradeNow 是否已赋值
                     * @return InstanceTypeUpgradeNow 是否已赋值
                     * 
                     */
                    bool InstanceTypeUpgradeNowHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 当前proxy版本
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * 可升级的redis版本
                     */
                    std::string m_upgradeProxyVersion;
                    bool m_upgradeProxyVersionHasBeenSet;

                    /**
                     * 1-立即升级   0-维护时间窗口升级
                     */
                    int64_t m_instanceTypeUpgradeNow;
                    bool m_instanceTypeUpgradeNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEPROXYVERSIONREQUEST_H_
