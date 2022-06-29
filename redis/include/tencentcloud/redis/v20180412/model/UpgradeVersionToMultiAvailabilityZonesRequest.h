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
                     * 获取是否升级proxy和redis内核版本，升级后可支持就近接入
                     * @return UpgradeProxyAndRedisServer 是否升级proxy和redis内核版本，升级后可支持就近接入
                     */
                    bool GetUpgradeProxyAndRedisServer() const;

                    /**
                     * 设置是否升级proxy和redis内核版本，升级后可支持就近接入
                     * @param UpgradeProxyAndRedisServer 是否升级proxy和redis内核版本，升级后可支持就近接入
                     */
                    void SetUpgradeProxyAndRedisServer(const bool& _upgradeProxyAndRedisServer);

                    /**
                     * 判断参数 UpgradeProxyAndRedisServer 是否已赋值
                     * @return UpgradeProxyAndRedisServer 是否已赋值
                     */
                    bool UpgradeProxyAndRedisServerHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否升级proxy和redis内核版本，升级后可支持就近接入
                     */
                    bool m_upgradeProxyAndRedisServer;
                    bool m_upgradeProxyAndRedisServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEVERSIONTOMULTIAVAILABILITYZONESREQUEST_H_
