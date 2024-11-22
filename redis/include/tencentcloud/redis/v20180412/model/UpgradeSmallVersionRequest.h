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
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
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
                     * 获取当前 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     * @return CurrentRedisVersion 当前 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     * 
                     */
                    std::string GetCurrentRedisVersion() const;

                    /**
                     * 设置当前 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     * @param _currentRedisVersion 当前 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
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
                     * 获取升级后的 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     * @return UpgradeRedisVersion 升级后的 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     * 
                     */
                    std::string GetUpgradeRedisVersion() const;

                    /**
                     * 设置升级后的 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     * @param _upgradeRedisVersion 升级后的 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
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
                     * 获取指定是否立即升级。
- 1：立即升级。
- 0：维护时间窗口升级。
                     * @return InstanceTypeUpgradeNow 指定是否立即升级。
- 1：立即升级。
- 0：维护时间窗口升级。
                     * 
                     */
                    int64_t GetInstanceTypeUpgradeNow() const;

                    /**
                     * 设置指定是否立即升级。
- 1：立即升级。
- 0：维护时间窗口升级。
                     * @param _instanceTypeUpgradeNow 指定是否立即升级。
- 1：立即升级。
- 0：维护时间窗口升级。
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
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 当前 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     */
                    std::string m_currentRedisVersion;
                    bool m_currentRedisVersionHasBeenSet;

                    /**
                     * 升级后的 Redis 小版本。小版本信息，请参见[升级实例版本](https://cloud.tencent.com/document/product/239/46457)。
                     */
                    std::string m_upgradeRedisVersion;
                    bool m_upgradeRedisVersionHasBeenSet;

                    /**
                     * 指定是否立即升级。
- 1：立即升级。
- 0：维护时间窗口升级。
                     */
                    int64_t m_instanceTypeUpgradeNow;
                    bool m_instanceTypeUpgradeNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADESMALLVERSIONREQUEST_H_
