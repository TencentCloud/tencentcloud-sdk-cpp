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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESREQUEST_H_

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
                * SendMessages请求参数结构体
                */
                class SendMessagesRequest : public AbstractModel
                {
                public:
                    SendMessagesRequest();
                    ~SendMessagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取消息要发送的topic的名字, 这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * @return Topic 消息要发送的topic的名字, 这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置消息要发送的topic的名字, 这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * @param _topic 消息要发送的topic的名字, 这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
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
                     * 获取要发送的消息的内容
                     * @return Payload 要发送的消息的内容
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置要发送的消息的内容
                     * @param _payload 要发送的消息的内容
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取Token 是用来做鉴权使用的，可以不填，系统会自动获取
                     * @return StringToken Token 是用来做鉴权使用的，可以不填，系统会自动获取
                     * 
                     */
                    std::string GetStringToken() const;

                    /**
                     * 设置Token 是用来做鉴权使用的，可以不填，系统会自动获取
                     * @param _stringToken Token 是用来做鉴权使用的，可以不填，系统会自动获取
                     * 
                     */
                    void SetStringToken(const std::string& _stringToken);

                    /**
                     * 判断参数 StringToken 是否已赋值
                     * @return StringToken 是否已赋值
                     * 
                     */
                    bool StringTokenHasBeenSet() const;

                    /**
                     * 获取设置 producer 的名字，要求全局唯一。该参数建议用户无需手动配置，此时系统会随机生成，如果手动设置有可能会造成创建 Producer 失败进而导致消息发送失败。
该参数主要用于某些特定场景下，只允许特定的 Producer 生产消息时设置，用户的大部分场景使用不到该特性。
                     * @return ProducerName 设置 producer 的名字，要求全局唯一。该参数建议用户无需手动配置，此时系统会随机生成，如果手动设置有可能会造成创建 Producer 失败进而导致消息发送失败。
该参数主要用于某些特定场景下，只允许特定的 Producer 生产消息时设置，用户的大部分场景使用不到该特性。
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置设置 producer 的名字，要求全局唯一。该参数建议用户无需手动配置，此时系统会随机生成，如果手动设置有可能会造成创建 Producer 失败进而导致消息发送失败。
该参数主要用于某些特定场景下，只允许特定的 Producer 生产消息时设置，用户的大部分场景使用不到该特性。
                     * @param _producerName 设置 producer 的名字，要求全局唯一。该参数建议用户无需手动配置，此时系统会随机生成，如果手动设置有可能会造成创建 Producer 失败进而导致消息发送失败。
该参数主要用于某些特定场景下，只允许特定的 Producer 生产消息时设置，用户的大部分场景使用不到该特性。
                     * 
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取设置消息发送的超时时间，默认为30s
                     * @return SendTimeout 设置消息发送的超时时间，默认为30s
                     * 
                     */
                    int64_t GetSendTimeout() const;

                    /**
                     * 设置设置消息发送的超时时间，默认为30s
                     * @param _sendTimeout 设置消息发送的超时时间，默认为30s
                     * 
                     */
                    void SetSendTimeout(const int64_t& _sendTimeout);

                    /**
                     * 判断参数 SendTimeout 是否已赋值
                     * @return SendTimeout 是否已赋值
                     * 
                     */
                    bool SendTimeoutHasBeenSet() const;

                    /**
                     * 获取内存中缓存的最大的生产消息的数量，默认为1000条
                     * @return MaxPendingMessages 内存中缓存的最大的生产消息的数量，默认为1000条
                     * 
                     */
                    int64_t GetMaxPendingMessages() const;

                    /**
                     * 设置内存中缓存的最大的生产消息的数量，默认为1000条
                     * @param _maxPendingMessages 内存中缓存的最大的生产消息的数量，默认为1000条
                     * 
                     */
                    void SetMaxPendingMessages(const int64_t& _maxPendingMessages);

                    /**
                     * 判断参数 MaxPendingMessages 是否已赋值
                     * @return MaxPendingMessages 是否已赋值
                     * 
                     */
                    bool MaxPendingMessagesHasBeenSet() const;

                private:

                    /**
                     * 消息要发送的topic的名字, 这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 要发送的消息的内容
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * Token 是用来做鉴权使用的，可以不填，系统会自动获取
                     */
                    std::string m_stringToken;
                    bool m_stringTokenHasBeenSet;

                    /**
                     * 设置 producer 的名字，要求全局唯一。该参数建议用户无需手动配置，此时系统会随机生成，如果手动设置有可能会造成创建 Producer 失败进而导致消息发送失败。
该参数主要用于某些特定场景下，只允许特定的 Producer 生产消息时设置，用户的大部分场景使用不到该特性。
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * 设置消息发送的超时时间，默认为30s
                     */
                    int64_t m_sendTimeout;
                    bool m_sendTimeoutHasBeenSet;

                    /**
                     * 内存中缓存的最大的生产消息的数量，默认为1000条
                     */
                    int64_t m_maxPendingMessages;
                    bool m_maxPendingMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDMESSAGESREQUEST_H_
