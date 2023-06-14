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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDBATCHMESSAGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDBATCHMESSAGESREQUEST_H_

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
                * SendBatchMessages请求参数结构体
                */
                class SendBatchMessagesRequest : public AbstractModel
                {
                public:
                    SendBatchMessagesRequest();
                    ~SendBatchMessagesRequest() = default;
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
                     * 获取需要发送消息的内容
                     * @return Payload 需要发送消息的内容
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置需要发送消息的内容
                     * @param _payload 需要发送消息的内容
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
                     * 获取String 类型的 token，可以不填，系统会自动获取
                     * @return StringToken String 类型的 token，可以不填，系统会自动获取
                     * 
                     */
                    std::string GetStringToken() const;

                    /**
                     * 设置String 类型的 token，可以不填，系统会自动获取
                     * @param _stringToken String 类型的 token，可以不填，系统会自动获取
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
                     * 获取producer 的名字，要求全局是唯一的，如果不设置，系统会自动生成
                     * @return ProducerName producer 的名字，要求全局是唯一的，如果不设置，系统会自动生成
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置producer 的名字，要求全局是唯一的，如果不设置，系统会自动生成
                     * @param _producerName producer 的名字，要求全局是唯一的，如果不设置，系统会自动生成
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
                     * 获取单位：s。消息发送的超时时间。默认值为：30s
                     * @return SendTimeout 单位：s。消息发送的超时时间。默认值为：30s
                     * 
                     */
                    int64_t GetSendTimeout() const;

                    /**
                     * 设置单位：s。消息发送的超时时间。默认值为：30s
                     * @param _sendTimeout 单位：s。消息发送的超时时间。默认值为：30s
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
                     * 获取内存中允许缓存的生产消息的最大数量，默认值：1000条
                     * @return MaxPendingMessages 内存中允许缓存的生产消息的最大数量，默认值：1000条
                     * 
                     */
                    int64_t GetMaxPendingMessages() const;

                    /**
                     * 设置内存中允许缓存的生产消息的最大数量，默认值：1000条
                     * @param _maxPendingMessages 内存中允许缓存的生产消息的最大数量，默认值：1000条
                     * 
                     */
                    void SetMaxPendingMessages(const int64_t& _maxPendingMessages);

                    /**
                     * 判断参数 MaxPendingMessages 是否已赋值
                     * @return MaxPendingMessages 是否已赋值
                     * 
                     */
                    bool MaxPendingMessagesHasBeenSet() const;

                    /**
                     * 获取每一个batch中消息的最大数量，默认值：1000条/batch
                     * @return BatchingMaxMessages 每一个batch中消息的最大数量，默认值：1000条/batch
                     * 
                     */
                    int64_t GetBatchingMaxMessages() const;

                    /**
                     * 设置每一个batch中消息的最大数量，默认值：1000条/batch
                     * @param _batchingMaxMessages 每一个batch中消息的最大数量，默认值：1000条/batch
                     * 
                     */
                    void SetBatchingMaxMessages(const int64_t& _batchingMaxMessages);

                    /**
                     * 判断参数 BatchingMaxMessages 是否已赋值
                     * @return BatchingMaxMessages 是否已赋值
                     * 
                     */
                    bool BatchingMaxMessagesHasBeenSet() const;

                    /**
                     * 获取每一个batch最大等待的时间，超过这个时间，不管是否达到指定的batch中消息的数量和大小，都会将该batch发送出去，默认：10ms
                     * @return BatchingMaxPublishDelay 每一个batch最大等待的时间，超过这个时间，不管是否达到指定的batch中消息的数量和大小，都会将该batch发送出去，默认：10ms
                     * 
                     */
                    int64_t GetBatchingMaxPublishDelay() const;

                    /**
                     * 设置每一个batch最大等待的时间，超过这个时间，不管是否达到指定的batch中消息的数量和大小，都会将该batch发送出去，默认：10ms
                     * @param _batchingMaxPublishDelay 每一个batch最大等待的时间，超过这个时间，不管是否达到指定的batch中消息的数量和大小，都会将该batch发送出去，默认：10ms
                     * 
                     */
                    void SetBatchingMaxPublishDelay(const int64_t& _batchingMaxPublishDelay);

                    /**
                     * 判断参数 BatchingMaxPublishDelay 是否已赋值
                     * @return BatchingMaxPublishDelay 是否已赋值
                     * 
                     */
                    bool BatchingMaxPublishDelayHasBeenSet() const;

                    /**
                     * 获取每一个batch中最大允许的消息的大小，默认：128KB
                     * @return BatchingMaxBytes 每一个batch中最大允许的消息的大小，默认：128KB
                     * 
                     */
                    int64_t GetBatchingMaxBytes() const;

                    /**
                     * 设置每一个batch中最大允许的消息的大小，默认：128KB
                     * @param _batchingMaxBytes 每一个batch中最大允许的消息的大小，默认：128KB
                     * 
                     */
                    void SetBatchingMaxBytes(const int64_t& _batchingMaxBytes);

                    /**
                     * 判断参数 BatchingMaxBytes 是否已赋值
                     * @return BatchingMaxBytes 是否已赋值
                     * 
                     */
                    bool BatchingMaxBytesHasBeenSet() const;

                private:

                    /**
                     * 消息要发送的topic的名字, 这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 需要发送消息的内容
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * String 类型的 token，可以不填，系统会自动获取
                     */
                    std::string m_stringToken;
                    bool m_stringTokenHasBeenSet;

                    /**
                     * producer 的名字，要求全局是唯一的，如果不设置，系统会自动生成
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * 单位：s。消息发送的超时时间。默认值为：30s
                     */
                    int64_t m_sendTimeout;
                    bool m_sendTimeoutHasBeenSet;

                    /**
                     * 内存中允许缓存的生产消息的最大数量，默认值：1000条
                     */
                    int64_t m_maxPendingMessages;
                    bool m_maxPendingMessagesHasBeenSet;

                    /**
                     * 每一个batch中消息的最大数量，默认值：1000条/batch
                     */
                    int64_t m_batchingMaxMessages;
                    bool m_batchingMaxMessagesHasBeenSet;

                    /**
                     * 每一个batch最大等待的时间，超过这个时间，不管是否达到指定的batch中消息的数量和大小，都会将该batch发送出去，默认：10ms
                     */
                    int64_t m_batchingMaxPublishDelay;
                    bool m_batchingMaxPublishDelayHasBeenSet;

                    /**
                     * 每一个batch中最大允许的消息的大小，默认：128KB
                     */
                    int64_t m_batchingMaxBytes;
                    bool m_batchingMaxBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDBATCHMESSAGESREQUEST_H_
