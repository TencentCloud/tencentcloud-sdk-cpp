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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILRESPONSE_H_

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
                * DescribeRabbitMQServerlessExchangeDetail返回参数结构体
                */
                class DescribeRabbitMQServerlessExchangeDetailResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessExchangeDetailResponse();
                    ~DescribeRabbitMQServerlessExchangeDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取exchange 名
                     * @return ExchangeName exchange 名
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取备注说明
                     * @return Remark 备注说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否为持久化 exchange, 当集群重启时, 将会清除所有该字段为 "false" 的 exchange
                     * @return Durable 是否为持久化 exchange, 当集群重启时, 将会清除所有该字段为 "false" 的 exchange
                     * 
                     */
                    bool GetDurable() const;

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
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取替代 exchange, 如果消息没有匹配当前 exchange 绑定的所有 queue 或 exchange, 就会发送到该替代 exchange
                     * @return AlternateExchange 替代 exchange, 如果消息没有匹配当前 exchange 绑定的所有 queue 或 exchange, 就会发送到该替代 exchange
                     * 
                     */
                    std::string GetAlternateExchange() const;

                    /**
                     * 判断参数 AlternateExchange 是否已赋值
                     * @return AlternateExchange 是否已赋值
                     * 
                     */
                    bool AlternateExchangeHasBeenSet() const;

                    /**
                     * 获取exchange 类型, 支持 "fanout","direct","topic","headers"
                     * @return ExchangeType exchange 类型, 支持 "fanout","direct","topic","headers"
                     * 
                     */
                    std::string GetExchangeType() const;

                    /**
                     * 判断参数 ExchangeType 是否已赋值
                     * @return ExchangeType 是否已赋值
                     * 
                     */
                    bool ExchangeTypeHasBeenSet() const;

                    /**
                     * 获取VHost参数
                     * @return VirtualHost VHost参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取exchange 创建者, "system":"系统创建", "user":"用户创建"
                     * @return ExchangeCreator exchange 创建者, "system":"系统创建", "user":"用户创建"
                     * 
                     */
                    std::string GetExchangeCreator() const;

                    /**
                     * 判断参数 ExchangeCreator 是否已赋值
                     * @return ExchangeCreator 是否已赋值
                     * 
                     */
                    bool ExchangeCreatorHasBeenSet() const;

                    /**
                     * 获取扩展参数 key-value 字符串
                     * @return Arguments 扩展参数 key-value 字符串
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * exchange 名
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * 备注说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否为持久化 exchange, 当集群重启时, 将会清除所有该字段为 "false" 的 exchange
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
                     * 替代 exchange, 如果消息没有匹配当前 exchange 绑定的所有 queue 或 exchange, 就会发送到该替代 exchange
                     */
                    std::string m_alternateExchange;
                    bool m_alternateExchangeHasBeenSet;

                    /**
                     * exchange 类型, 支持 "fanout","direct","topic","headers"
                     */
                    std::string m_exchangeType;
                    bool m_exchangeTypeHasBeenSet;

                    /**
                     * VHost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * exchange 创建者, "system":"系统创建", "user":"用户创建"
                     */
                    std::string m_exchangeCreator;
                    bool m_exchangeCreatorHasBeenSet;

                    /**
                     * 扩展参数 key-value 字符串
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSEXCHANGEDETAILRESPONSE_H_
