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
                     * 获取接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，即：tenant/namespace/topic。默认使用的是：public/default
                     * @return Topic 接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，即：tenant/namespace/topic。默认使用的是：public/default
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，即：tenant/namespace/topic。默认使用的是：public/default
                     * @param _topic 接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，即：tenant/namespace/topic。默认使用的是：public/default
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取订阅者的名字
                     * @return SubscriptionName 订阅者的名字
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置订阅者的名字
                     * @param _subscriptionName 订阅者的名字
                     * 
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     * 
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     * @return ReceiverQueueSize 默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     * 
                     */
                    int64_t GetReceiverQueueSize() const;

                    /**
                     * 设置默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     * @param _receiverQueueSize 默认值为1000，consumer接收的消息会首先存储到receiverQueueSize这个队列中，用作调优接收消息的速率
                     * 
                     */
                    void SetReceiverQueueSize(const int64_t& _receiverQueueSize);

                    /**
                     * 判断参数 ReceiverQueueSize 是否已赋值
                     * @return ReceiverQueueSize 是否已赋值
                     * 
                     */
                    bool ReceiverQueueSizeHasBeenSet() const;

                    /**
                     * 获取默认值为：Earliest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     * @return SubInitialPosition 默认值为：Earliest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     * 
                     */
                    std::string GetSubInitialPosition() const;

                    /**
                     * 设置默认值为：Earliest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     * @param _subInitialPosition 默认值为：Earliest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     * 
                     */
                    void SetSubInitialPosition(const std::string& _subInitialPosition);

                    /**
                     * 判断参数 SubInitialPosition 是否已赋值
                     * @return SubInitialPosition 是否已赋值
                     * 
                     */
                    bool SubInitialPositionHasBeenSet() const;

                    /**
                     * 获取用于设置BatchReceivePolicy，指在一次batch中最多接收多少条消息，默认是 0。即不开启BatchReceivePolicy
                     * @return MaxNumMessages 用于设置BatchReceivePolicy，指在一次batch中最多接收多少条消息，默认是 0。即不开启BatchReceivePolicy
                     * 
                     */
                    int64_t GetMaxNumMessages() const;

                    /**
                     * 设置用于设置BatchReceivePolicy，指在一次batch中最多接收多少条消息，默认是 0。即不开启BatchReceivePolicy
                     * @param _maxNumMessages 用于设置BatchReceivePolicy，指在一次batch中最多接收多少条消息，默认是 0。即不开启BatchReceivePolicy
                     * 
                     */
                    void SetMaxNumMessages(const int64_t& _maxNumMessages);

                    /**
                     * 判断参数 MaxNumMessages 是否已赋值
                     * @return MaxNumMessages 是否已赋值
                     * 
                     */
                    bool MaxNumMessagesHasBeenSet() const;

                    /**
                     * 获取用于设置BatchReceivePolicy，指在一次batch中最多接收的消息体有多大，单位是 bytes。默认是 0，即不开启BatchReceivePolicy
                     * @return MaxNumBytes 用于设置BatchReceivePolicy，指在一次batch中最多接收的消息体有多大，单位是 bytes。默认是 0，即不开启BatchReceivePolicy
                     * 
                     */
                    int64_t GetMaxNumBytes() const;

                    /**
                     * 设置用于设置BatchReceivePolicy，指在一次batch中最多接收的消息体有多大，单位是 bytes。默认是 0，即不开启BatchReceivePolicy
                     * @param _maxNumBytes 用于设置BatchReceivePolicy，指在一次batch中最多接收的消息体有多大，单位是 bytes。默认是 0，即不开启BatchReceivePolicy
                     * 
                     */
                    void SetMaxNumBytes(const int64_t& _maxNumBytes);

                    /**
                     * 判断参数 MaxNumBytes 是否已赋值
                     * @return MaxNumBytes 是否已赋值
                     * 
                     */
                    bool MaxNumBytesHasBeenSet() const;

                    /**
                     * 获取用于设置BatchReceivePolicy，指在一次batch消息的接收z中最多等待的超时时间，单位是毫秒。默认是 0，即不开启BatchReceivePolicy
                     * @return Timeout 用于设置BatchReceivePolicy，指在一次batch消息的接收z中最多等待的超时时间，单位是毫秒。默认是 0，即不开启BatchReceivePolicy
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置用于设置BatchReceivePolicy，指在一次batch消息的接收z中最多等待的超时时间，单位是毫秒。默认是 0，即不开启BatchReceivePolicy
                     * @param _timeout 用于设置BatchReceivePolicy，指在一次batch消息的接收z中最多等待的超时时间，单位是毫秒。默认是 0，即不开启BatchReceivePolicy
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * 接收消息的topic的名字, 这里尽量需要使用topic的全路径，如果不指定，即：tenant/namespace/topic。默认使用的是：public/default
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
                     * 默认值为：Earliest。用作判定consumer初始接收消息的位置，可选参数为：Earliest, Latest
                     */
                    std::string m_subInitialPosition;
                    bool m_subInitialPositionHasBeenSet;

                    /**
                     * 用于设置BatchReceivePolicy，指在一次batch中最多接收多少条消息，默认是 0。即不开启BatchReceivePolicy
                     */
                    int64_t m_maxNumMessages;
                    bool m_maxNumMessagesHasBeenSet;

                    /**
                     * 用于设置BatchReceivePolicy，指在一次batch中最多接收的消息体有多大，单位是 bytes。默认是 0，即不开启BatchReceivePolicy
                     */
                    int64_t m_maxNumBytes;
                    bool m_maxNumBytesHasBeenSet;

                    /**
                     * 用于设置BatchReceivePolicy，指在一次batch消息的接收z中最多等待的超时时间，单位是毫秒。默认是 0，即不开启BatchReceivePolicy
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGEREQUEST_H_
