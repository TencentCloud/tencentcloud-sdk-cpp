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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETERABBITMQBINDINGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETERABBITMQBINDINGREQUEST_H_

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
                * DeleteRabbitMQBinding请求参数结构体
                */
                class DeleteRabbitMQBindingRequest : public AbstractModel
                {
                public:
                    DeleteRabbitMQBindingRequest();
                    ~DeleteRabbitMQBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @return InstanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @param _instanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
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
                     * 获取VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * @return VirtualHost VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * @param _virtualHost VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取路由关系Id
                     * @return BindingId 路由关系Id
                     * 
                     */
                    int64_t GetBindingId() const;

                    /**
                     * 设置路由关系Id
                     * @param _bindingId 路由关系Id
                     * 
                     */
                    void SetBindingId(const int64_t& _bindingId);

                    /**
                     * 判断参数 BindingId 是否已赋值
                     * @return BindingId 是否已赋值
                     * 
                     */
                    bool BindingIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VirtualHost 名称，形如 testvhost。有效的 VirtualHost 名称可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询，在左侧导航栏点击 Vhost，并在 Vhost 列表中找到Vhost名称。
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 路由关系Id
                     */
                    int64_t m_bindingId;
                    bool m_bindingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETERABBITMQBINDINGREQUEST_H_
