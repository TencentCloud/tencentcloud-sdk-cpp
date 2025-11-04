/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 队列消费者列表信息
                */
                class RabbitMQConsumersListInfo : public AbstractModel
                {
                public:
                    RabbitMQConsumersListInfo();
                    ~RabbitMQConsumersListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端Ip
                     * @return ClientIp 客户端Ip
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端Ip
                     * @param _clientIp 客户端Ip
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取消费者Tag
                     * @return ConsumerTag 消费者Tag
                     * 
                     */
                    std::string GetConsumerTag() const;

                    /**
                     * 设置消费者Tag
                     * @param _consumerTag 消费者Tag
                     * 
                     */
                    void SetConsumerTag(const std::string& _consumerTag);

                    /**
                     * 判断参数 ConsumerTag 是否已赋值
                     * @return ConsumerTag 是否已赋值
                     * 
                     */
                    bool ConsumerTagHasBeenSet() const;

                    /**
                     * 获取消费目标队列
                     * @return QueueName 消费目标队列
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置消费目标队列
                     * @param _queueName 消费目标队列
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
                     * 获取是否需要消费者手动 ack
                     * @return AckRequired 是否需要消费者手动 ack
                     * 
                     */
                    bool GetAckRequired() const;

                    /**
                     * 设置是否需要消费者手动 ack
                     * @param _ackRequired 是否需要消费者手动 ack
                     * 
                     */
                    void SetAckRequired(const bool& _ackRequired);

                    /**
                     * 判断参数 AckRequired 是否已赋值
                     * @return AckRequired 是否已赋值
                     * 
                     */
                    bool AckRequiredHasBeenSet() const;

                    /**
                     * 获取消费者 qos 值
                     * @return PrefetchCount 消费者 qos 值
                     * 
                     */
                    uint64_t GetPrefetchCount() const;

                    /**
                     * 设置消费者 qos 值
                     * @param _prefetchCount 消费者 qos 值
                     * 
                     */
                    void SetPrefetchCount(const uint64_t& _prefetchCount);

                    /**
                     * 判断参数 PrefetchCount 是否已赋值
                     * @return PrefetchCount 是否已赋值
                     * 
                     */
                    bool PrefetchCountHasBeenSet() const;

                    /**
                     * 获取消费者状态
                     * @return Active 消费者状态
                     * 
                     */
                    std::string GetActive() const;

                    /**
                     * 设置消费者状态
                     * @param _active 消费者状态
                     * 
                     */
                    void SetActive(const std::string& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取最后一次投递消息时间
                     * @return LastDeliveredTime 最后一次投递消息时间
                     * 
                     */
                    std::string GetLastDeliveredTime() const;

                    /**
                     * 设置最后一次投递消息时间
                     * @param _lastDeliveredTime 最后一次投递消息时间
                     * 
                     */
                    void SetLastDeliveredTime(const std::string& _lastDeliveredTime);

                    /**
                     * 判断参数 LastDeliveredTime 是否已赋值
                     * @return LastDeliveredTime 是否已赋值
                     * 
                     */
                    bool LastDeliveredTimeHasBeenSet() const;

                    /**
                     * 获取消费者未确认消息数
                     * @return UnAckMsgCount 消费者未确认消息数
                     * 
                     */
                    int64_t GetUnAckMsgCount() const;

                    /**
                     * 设置消费者未确认消息数
                     * @param _unAckMsgCount 消费者未确认消息数
                     * 
                     */
                    void SetUnAckMsgCount(const int64_t& _unAckMsgCount);

                    /**
                     * 判断参数 UnAckMsgCount 是否已赋值
                     * @return UnAckMsgCount 是否已赋值
                     * 
                     */
                    bool UnAckMsgCountHasBeenSet() const;

                    /**
                     * 获取consumer 所属的 channel 
                     * @return ChannelName consumer 所属的 channel 
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置consumer 所属的 channel 
                     * @param _channelName consumer 所属的 channel 
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * 客户端Ip
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 消费者Tag
                     */
                    std::string m_consumerTag;
                    bool m_consumerTagHasBeenSet;

                    /**
                     * 消费目标队列
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 是否需要消费者手动 ack
                     */
                    bool m_ackRequired;
                    bool m_ackRequiredHasBeenSet;

                    /**
                     * 消费者 qos 值
                     */
                    uint64_t m_prefetchCount;
                    bool m_prefetchCountHasBeenSet;

                    /**
                     * 消费者状态
                     */
                    std::string m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 最后一次投递消息时间
                     */
                    std::string m_lastDeliveredTime;
                    bool m_lastDeliveredTimeHasBeenSet;

                    /**
                     * 消费者未确认消息数
                     */
                    int64_t m_unAckMsgCount;
                    bool m_unAckMsgCountHasBeenSet;

                    /**
                     * consumer 所属的 channel 
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCONSUMERSLISTINFO_H_
