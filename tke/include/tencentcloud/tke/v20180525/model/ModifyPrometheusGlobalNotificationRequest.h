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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYPROMETHEUSGLOBALNOTIFICATIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYPROMETHEUSGLOBALNOTIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusNotificationItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyPrometheusGlobalNotification请求参数结构体
                */
                class ModifyPrometheusGlobalNotificationRequest : public AbstractModel
                {
                public:
                    ModifyPrometheusGlobalNotificationRequest();
                    ~ModifyPrometheusGlobalNotificationRequest() = default;
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
                     * 获取告警通知渠道
                     * @return Notification 告警通知渠道
                     */
                    PrometheusNotificationItem GetNotification() const;

                    /**
                     * 设置告警通知渠道
                     * @param Notification 告警通知渠道
                     */
                    void SetNotification(const PrometheusNotificationItem& _notification);

                    /**
                     * 判断参数 Notification 是否已赋值
                     * @return Notification 是否已赋值
                     */
                    bool NotificationHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 告警通知渠道
                     */
                    PrometheusNotificationItem m_notification;
                    bool m_notificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYPROMETHEUSGLOBALNOTIFICATIONREQUEST_H_
