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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateRabbitMQServerlessExchange请求参数结构体
                */
                class CreateRabbitMQServerlessExchangeRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessExchangeRequest();
                    ~CreateRabbitMQServerlessExchangeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取VHost参数
                     * @return VirtualHost VHost参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VHost参数
                     * @param _virtualHost VHost参数
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
                     * 获取exchange 名称
                     * @return ExchangeName exchange 名称
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置exchange 名称
                     * @param _exchangeName exchange 名称
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取exchange 类型, 支持 "fanout","direct","topic","headers"
                     * @return ExchangeType exchange 类型, 支持 "fanout","direct","topic","headers"
                     * 
                     */
                    std::string GetExchangeType() const;

                    /**
                     * 设置exchange 类型, 支持 "fanout","direct","topic","headers"
                     * @param _exchangeType exchange 类型, 支持 "fanout","direct","topic","headers"
                     * 
                     */
                    void SetExchangeType(const std::string& _exchangeType);

                    /**
                     * 判断参数 ExchangeType 是否已赋值
                     * @return ExchangeType 是否已赋值
                     * 
                     */
                    bool ExchangeTypeHasBeenSet() const;

                    /**
                     * 获取exchange 备注
                     * @return Remark exchange 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置exchange 备注
                     * @param _remark exchange 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否为持久化 exchange, 当集群重启时,将会清除所有该字段为"false"的 exchange
                     * @return Durable 是否为持久化 exchange, 当集群重启时,将会清除所有该字段为"false"的 exchange
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置是否为持久化 exchange, 当集群重启时,将会清除所有该字段为"false"的 exchange
                     * @param _durable 是否为持久化 exchange, 当集群重启时,将会清除所有该字段为"false"的 exchange
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取是否自动删除该 exchange, 如果为 "true", 当解绑所有当前 exchange 上的路由关系时, 该 exchange 将会被自动删除
                     * @return AutoDelete 是否自动删除该 exchange, 如果为 "true", 当解绑所有当前 exchange 上的路由关系时, 该 exchange 将会被自动删除
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置是否自动删除该 exchange, 如果为 "true", 当解绑所有当前 exchange 上的路由关系时, 该 exchange 将会被自动删除
                     * @param _autoDelete 是否自动删除该 exchange, 如果为 "true", 当解绑所有当前 exchange 上的路由关系时, 该 exchange 将会被自动删除
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取是否为内部 exchange, 如果为 "true", 则无法直接投递消息到该 exchange, 需要在路由设置中通过其他 exchange 进行转发
                     * @return Internal 是否为内部 exchange, 如果为 "true", 则无法直接投递消息到该 exchange, 需要在路由设置中通过其他 exchange 进行转发
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置是否为内部 exchange, 如果为 "true", 则无法直接投递消息到该 exchange, 需要在路由设置中通过其他 exchange 进行转发
                     * @param _internal 是否为内部 exchange, 如果为 "true", 则无法直接投递消息到该 exchange, 需要在路由设置中通过其他 exchange 进行转发
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取替代 exchange, 如果消息无法发送到当前 exchange, 就会发送到该替代 exchange
                     * @return AlternateExchange 替代 exchange, 如果消息无法发送到当前 exchange, 就会发送到该替代 exchange
                     * 
                     */
                    std::string GetAlternateExchange() const;

                    /**
                     * 设置替代 exchange, 如果消息无法发送到当前 exchange, 就会发送到该替代 exchange
                     * @param _alternateExchange 替代 exchange, 如果消息无法发送到当前 exchange, 就会发送到该替代 exchange
                     * 
                     */
                    void SetAlternateExchange(const std::string& _alternateExchange);

                    /**
                     * 判断参数 AlternateExchange 是否已赋值
                     * @return AlternateExchange 是否已赋值
                     * 
                     */
                    bool AlternateExchangeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VHost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange 名称
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * exchange 类型, 支持 "fanout","direct","topic","headers"
                     */
                    std::string m_exchangeType;
                    bool m_exchangeTypeHasBeenSet;

                    /**
                     * exchange 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否为持久化 exchange, 当集群重启时,将会清除所有该字段为"false"的 exchange
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * 是否自动删除该 exchange, 如果为 "true", 当解绑所有当前 exchange 上的路由关系时, 该 exchange 将会被自动删除
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 是否为内部 exchange, 如果为 "true", 则无法直接投递消息到该 exchange, 需要在路由设置中通过其他 exchange 进行转发
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                    /**
                     * 替代 exchange, 如果消息无法发送到当前 exchange, 就会发送到该替代 exchange
                     */
                    std::string m_alternateExchange;
                    bool m_alternateExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSEXCHANGEREQUEST_H_
