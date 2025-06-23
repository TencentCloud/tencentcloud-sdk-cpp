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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSREQUEST_H_

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
                * DescribeRabbitMQBindings请求参数结构体
                */
                class DescribeRabbitMQBindingsRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQBindingsRequest();
                    ~DescribeRabbitMQBindingsRequest() = default;
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
                     * 获取分页 offset，默认 0
                     * @return Offset 分页 offset，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页 offset，默认 0
                     * @param _offset 分页 offset，默认 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页 limit，默认 20
                     * @return Limit 分页 limit，默认 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页 limit，默认 20
                     * @param _limit 分页 limit，默认 20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * @return SearchWord 搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * @param _searchWord 搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取根据源Exchange精准搜索过滤
                     * @return SourceExchange 根据源Exchange精准搜索过滤
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置根据源Exchange精准搜索过滤
                     * @param _sourceExchange 根据源Exchange精准搜索过滤
                     * 
                     */
                    void SetSourceExchange(const std::string& _sourceExchange);

                    /**
                     * 判断参数 SourceExchange 是否已赋值
                     * @return SourceExchange 是否已赋值
                     * 
                     */
                    bool SourceExchangeHasBeenSet() const;

                    /**
                     * 获取根据目标队列名精准搜索过滤，和 DestinationExchange 过滤不可同时设置
                     * @return QueueName 根据目标队列名精准搜索过滤，和 DestinationExchange 过滤不可同时设置
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置根据目标队列名精准搜索过滤，和 DestinationExchange 过滤不可同时设置
                     * @param _queueName 根据目标队列名精准搜索过滤，和 DestinationExchange 过滤不可同时设置
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * @return DestinationExchange 根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * 
                     */
                    std::string GetDestinationExchange() const;

                    /**
                     * 设置根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * @param _destinationExchange 根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     * 
                     */
                    void SetDestinationExchange(const std::string& _destinationExchange);

                    /**
                     * 判断参数 DestinationExchange 是否已赋值
                     * @return DestinationExchange 是否已赋值
                     * 
                     */
                    bool DestinationExchangeHasBeenSet() const;

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
                     * 分页 offset，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页 limit，默认 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键词，根据源exchange名称/目标资源名称/绑定key进行模糊搜索
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 根据源Exchange精准搜索过滤
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * 根据目标队列名精准搜索过滤，和 DestinationExchange 过滤不可同时设置
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 根据目标Exchange精准搜索过滤，和QueueName过滤不可同时设置
                     */
                    std::string m_destinationExchange;
                    bool m_destinationExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSREQUEST_H_
