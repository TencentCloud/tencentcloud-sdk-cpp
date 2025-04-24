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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETERABBITMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETERABBITMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteRabbitMQVipInstance请求参数结构体
                */
                class DeleteRabbitMQVipInstanceRequest : public AbstractModel
                {
                public:
                    DeleteRabbitMQVipInstanceRequest();
                    ~DeleteRabbitMQVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @return InstanceId 实例 ID，形如amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @param _instanceId 实例 ID，形如amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
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
                     * 获取是否国际站请求，默认 false
                     * @return IsIntl 是否国际站请求，默认 false
                     * 
                     */
                    bool GetIsIntl() const;

                    /**
                     * 设置是否国际站请求，默认 false
                     * @param _isIntl 是否国际站请求，默认 false
                     * 
                     */
                    void SetIsIntl(const bool& _isIntl);

                    /**
                     * 判断参数 IsIntl 是否已赋值
                     * @return IsIntl 是否已赋值
                     * 
                     */
                    bool IsIntlHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否国际站请求，默认 false
                     */
                    bool m_isIntl;
                    bool m_isIntlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETERABBITMQVIPINSTANCEREQUEST_H_
