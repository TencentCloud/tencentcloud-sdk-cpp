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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERLAGREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeConsumerLag请求参数结构体
                */
                class DescribeConsumerLagRequest : public AbstractModel
                {
                public:
                    DescribeConsumerLagRequest();
                    ~DescribeConsumerLagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取消费组名称
                     * @return ConsumerGroup 消费组名称
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组名称
                     * @param _consumerGroup 消费组名称
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取命名空间，4.x集群必填
                     * @return Namespace 命名空间，4.x集群必填
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，4.x集群必填
                     * @param _namespace 命名空间，4.x集群必填
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取订阅主题，不为空则查询订阅了该主题的消费组的堆积
                     * @return SubscribeTopic 订阅主题，不为空则查询订阅了该主题的消费组的堆积
                     * 
                     */
                    std::string GetSubscribeTopic() const;

                    /**
                     * 设置订阅主题，不为空则查询订阅了该主题的消费组的堆积
                     * @param _subscribeTopic 订阅主题，不为空则查询订阅了该主题的消费组的堆积
                     * 
                     */
                    void SetSubscribeTopic(const std::string& _subscribeTopic);

                    /**
                     * 判断参数 SubscribeTopic 是否已赋值
                     * @return SubscribeTopic 是否已赋值
                     * 
                     */
                    bool SubscribeTopicHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 命名空间，4.x集群必填
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 订阅主题，不为空则查询订阅了该主题的消费组的堆积
                     */
                    std::string m_subscribeTopic;
                    bool m_subscribeTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERLAGREQUEST_H_
