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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSTATS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 消费详情
                */
                class ConsumerStats : public AbstractModel
                {
                public:
                    ConsumerStats();
                    ~ConsumerStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 主题名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName 主题名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取所属Broker
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerName 所属Broker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerName() const;

                    /**
                     * 设置所属Broker
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerName 所属Broker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerName(const std::string& _brokerName);

                    /**
                     * 判断参数 BrokerName 是否已赋值
                     * @return BrokerName 是否已赋值
                     * 
                     */
                    bool BrokerNameHasBeenSet() const;

                    /**
                     * 获取队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueId 队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQueueId() const;

                    /**
                     * 设置队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueId 队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueId(const int64_t& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerClientId 消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerClientId() const;

                    /**
                     * 设置消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerClientId 消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerClientId(const std::string& _consumerClientId);

                    /**
                     * 判断参数 ConsumerClientId 是否已赋值
                     * @return ConsumerClientId 是否已赋值
                     * 
                     */
                    bool ConsumerClientIdHasBeenSet() const;

                    /**
                     * 获取消费位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerOffset 消费位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsumerOffset() const;

                    /**
                     * 设置消费位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerOffset 消费位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerOffset(const int64_t& _consumerOffset);

                    /**
                     * 判断参数 ConsumerOffset 是否已赋值
                     * @return ConsumerOffset 是否已赋值
                     * 
                     */
                    bool ConsumerOffsetHasBeenSet() const;

                    /**
                     * 获取服务端位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerOffset 服务端位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBrokerOffset() const;

                    /**
                     * 设置服务端位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerOffset 服务端位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerOffset(const int64_t& _brokerOffset);

                    /**
                     * 判断参数 BrokerOffset 是否已赋值
                     * @return BrokerOffset 是否已赋值
                     * 
                     */
                    bool BrokerOffsetHasBeenSet() const;

                    /**
                     * 获取消息堆积条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiffTotal 消息堆积条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiffTotal() const;

                    /**
                     * 设置消息堆积条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diffTotal 消息堆积条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiffTotal(const int64_t& _diffTotal);

                    /**
                     * 判断参数 DiffTotal 是否已赋值
                     * @return DiffTotal 是否已赋值
                     * 
                     */
                    bool DiffTotalHasBeenSet() const;

                    /**
                     * 获取最近消费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTimestamp 最近消费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastTimestamp() const;

                    /**
                     * 设置最近消费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTimestamp 最近消费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTimestamp(const int64_t& _lastTimestamp);

                    /**
                     * 判断参数 LastTimestamp 是否已赋值
                     * @return LastTimestamp 是否已赋值
                     * 
                     */
                    bool LastTimestampHasBeenSet() const;

                private:

                    /**
                     * 主题名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 所属Broker
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerName;
                    bool m_brokerNameHasBeenSet;

                    /**
                     * 队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * 消费者ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerClientId;
                    bool m_consumerClientIdHasBeenSet;

                    /**
                     * 消费位点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consumerOffset;
                    bool m_consumerOffsetHasBeenSet;

                    /**
                     * 服务端位点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_brokerOffset;
                    bool m_brokerOffsetHasBeenSet;

                    /**
                     * 消息堆积条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diffTotal;
                    bool m_diffTotalHasBeenSet;

                    /**
                     * 最近消费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastTimestamp;
                    bool m_lastTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSTATS_H_
