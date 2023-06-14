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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADESMALLVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADESMALLVERSIONREQUEST_H_

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
                * UpgradeSmallVersion请求参数结构体
                */
                class UpgradeSmallVersionRequest : public AbstractModel
                {
                public:
                    UpgradeSmallVersionRequest();
                    ~UpgradeSmallVersionRequest() = default;
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
                     * 获取当前redis版本
                     * @return CurrentRedisVersion 当前redis版本
                     * 
                     */
                    std::string GetCurrentRedisVersion() const;

                    /**
                     * 设置当前redis版本
                     * @param _currentRedisVersion 当前redis版本
                     * 
                     */
                    void SetCurrentRedisVersion(const std::string& _currentRedisVersion);

                    /**
                     * 判断参数 CurrentRedisVersion 是否已赋值
                     * @return CurrentRedisVersion 是否已赋值
                     * 
                     */
                    bool CurrentRedisVersionHasBeenSet() const;

                    /**
                     * 获取可升级的redis版本
                     * @return UpgradeRedisVersion 可升级的redis版本
                     * 
                     */
                    std::string GetUpgradeRedisVersion() const;

                    /**
                     * 设置可升级的redis版本
                     * @param _upgradeRedisVersion 可升级的redis版本
                     * 
                     */
                    void SetUpgradeRedisVersion(const std::string& _upgradeRedisVersion);

                    /**
                     * 判断参数 UpgradeRedisVersion 是否已赋值
                     * @return UpgradeRedisVersion 是否已赋值
                     * 
                     */
                    bool UpgradeRedisVersionHasBeenSet() const;

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
                     * 当前redis版本
                     */
                    std::string m_currentRedisVersion;
                    bool m_currentRedisVersionHasBeenSet;

                    /**
                     * 可升级的redis版本
                     */
                    std::string m_upgradeRedisVersion;
                    bool m_upgradeRedisVersionHasBeenSet;

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

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADESMALLVERSIONREQUEST_H_
