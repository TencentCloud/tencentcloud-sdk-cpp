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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYSUBSCRIPTIONSTATUSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYSUBSCRIPTIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifySubscriptionStatus请求参数结构体
                */
                class ModifySubscriptionStatusRequest : public AbstractModel
                {
                public:
                    ModifySubscriptionStatusRequest();
                    ~ModifySubscriptionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取订阅状态 1：关闭订阅 2：开启订阅
                     * @return Status 订阅状态 1：关闭订阅 2：开启订阅
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置订阅状态 1：关闭订阅 2：开启订阅
                     * @param _status 订阅状态 1：关闭订阅 2：开启订阅
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取订阅类型 Alarm:告警订阅 Catalog:目录订阅 MobilePosition:移动位置订阅
                     * @return SubscriptionItem 订阅类型 Alarm:告警订阅 Catalog:目录订阅 MobilePosition:移动位置订阅
                     * 
                     */
                    std::string GetSubscriptionItem() const;

                    /**
                     * 设置订阅类型 Alarm:告警订阅 Catalog:目录订阅 MobilePosition:移动位置订阅
                     * @param _subscriptionItem 订阅类型 Alarm:告警订阅 Catalog:目录订阅 MobilePosition:移动位置订阅
                     * 
                     */
                    void SetSubscriptionItem(const std::string& _subscriptionItem);

                    /**
                     * 判断参数 SubscriptionItem 是否已赋值
                     * @return SubscriptionItem 是否已赋值
                     * 
                     */
                    bool SubscriptionItemHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 订阅状态 1：关闭订阅 2：开启订阅
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订阅类型 Alarm:告警订阅 Catalog:目录订阅 MobilePosition:移动位置订阅
                     */
                    std::string m_subscriptionItem;
                    bool m_subscriptionItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYSUBSCRIPTIONSTATUSREQUEST_H_
