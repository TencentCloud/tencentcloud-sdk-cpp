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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_

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
                * ReceiveMessage请求参数结构体
                */
                class ReceiveMessageRequest : public AbstractModel
                {
                public:
                    ReceiveMessageRequest();
                    ~ReceiveMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，默认使用的是：public/default
                     * @return Topic 接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，默认使用的是：public/default
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，默认使用的是：public/default
                     * @param Topic 接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，默认使用的是：public/default
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取订阅者的名字
                     * @return SubscriptionName 订阅者的名字
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置订阅者的名字
                     * @param SubscriptionName 订阅者的名字
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     * @return ReceiverQueueSize 默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     */
                    int64_t GetReceiverQueueSize() const;

                    /**
                     * 设置默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     * @param ReceiverQueueSize 默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     */
                    void SetReceiverQueueSize(const int64_t& _receiverQueueSize);

                    /**
                     * 判断参数 ReceiverQueueSize 是否已赋值
                     * @return ReceiverQueueSize 是否已赋值
                     */
                    bool ReceiverQueueSizeHasBeenSet() const;

                    /**
                     * 获取默认值为：Latest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     * @return SubInitialPosition 默认值为：Latest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     */
                    std::string GetSubInitialPosition() const;

                    /**
                     * 设置默认值为：Latest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     * @param SubInitialPosition 默认值为：Latest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     */
                    void SetSubInitialPosition(const std::string& _subInitialPosition);

                    /**
                     * 判断参数 SubInitialPosition 是否已赋值
                     * @return SubInitialPosition 是否已赋值
                     */
                    bool SubInitialPositionHasBeenSet() const;

                private:

                    /**
                     * 接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，默认使用的是：public/default
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 订阅者的名字
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * 默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     */
                    int64_t m_receiverQueueSize;
                    bool m_receiverQueueSizeHasBeenSet;

                    /**
                     * 默认值为：Latest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     */
                    std::string m_subInitialPosition;
                    bool m_subInitialPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_
