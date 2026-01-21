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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_

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
                * UpgradeVersionToMultiAvailabilityZones请求参数结构体
                */
                class UpgradeVersionToMultiAvailabilityZonesRequest : public AbstractModel
                {
                public:
                    UpgradeVersionToMultiAvailabilityZonesRequest();
                    ~UpgradeVersionToMultiAvailabilityZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID，请登录 <a href="https://console.cloud.tencent.com/redis/instance/list">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例ID，请登录 <a href="https://console.cloud.tencent.com/redis/instance/list">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，请登录 <a href="https://console.cloud.tencent.com/redis/instance/list">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例ID，请登录 <a href="https://console.cloud.tencent.com/redis/instance/list">Redis 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>升级多可用区之后是否支持就近访问功能。- true：支持就近访问功能。升级过程，需同时升级 Proxy 版本和 Redis 内核小版本，涉及数据搬迁，可能会长达数小时。- false：无需支持就近访问功能。升级多可用区仅涉及管理元数据迁移，对服务没有影响，升级过程通常在3分钟内完成。默认为 false。</p>
                     * @return UpgradeProxyAndRedisServer <p>升级多可用区之后是否支持就近访问功能。- true：支持就近访问功能。升级过程，需同时升级 Proxy 版本和 Redis 内核小版本，涉及数据搬迁，可能会长达数小时。- false：无需支持就近访问功能。升级多可用区仅涉及管理元数据迁移，对服务没有影响，升级过程通常在3分钟内完成。默认为 false。</p>
                     * 
                     */
                    bool GetUpgradeProxyAndRedisServer() const;

                    /**
                     * 设置<p>升级多可用区之后是否支持就近访问功能。- true：支持就近访问功能。升级过程，需同时升级 Proxy 版本和 Redis 内核小版本，涉及数据搬迁，可能会长达数小时。- false：无需支持就近访问功能。升级多可用区仅涉及管理元数据迁移，对服务没有影响，升级过程通常在3分钟内完成。默认为 false。</p>
                     * @param _upgradeProxyAndRedisServer <p>升级多可用区之后是否支持就近访问功能。- true：支持就近访问功能。升级过程，需同时升级 Proxy 版本和 Redis 内核小版本，涉及数据搬迁，可能会长达数小时。- false：无需支持就近访问功能。升级多可用区仅涉及管理元数据迁移，对服务没有影响，升级过程通常在3分钟内完成。默认为 false。</p>
                     * 
                     */
                    void SetUpgradeProxyAndRedisServer(const bool& _upgradeProxyAndRedisServer);

                    /**
                     * 判断参数 UpgradeProxyAndRedisServer 是否已赋值
                     * @return UpgradeProxyAndRedisServer 是否已赋值
                     * 
                     */
                    bool UpgradeProxyAndRedisServerHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID，请登录 <a href="https://console.cloud.tencent.com/redis/instance/list">Redis 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>升级多可用区之后是否支持就近访问功能。- true：支持就近访问功能。升级过程，需同时升级 Proxy 版本和 Redis 内核小版本，涉及数据搬迁，可能会长达数小时。- false：无需支持就近访问功能。升级多可用区仅涉及管理元数据迁移，对服务没有影响，升级过程通常在3分钟内完成。默认为 false。</p>
                     */
                    bool m_upgradeProxyAndRedisServer;
                    bool m_upgradeProxyAndRedisServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
