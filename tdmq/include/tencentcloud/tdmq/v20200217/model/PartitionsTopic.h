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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PARTITIONSTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PARTITIONSTOPIC_H_

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
                * 分区topic
                */
                class PartitionsTopic : public AbstractModel
                {
                public:
                    PartitionsTopic();
                    ~PartitionsTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最后一次间隔内发布消息的平均byte大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AverageMsgSize 最后一次间隔内发布消息的平均byte大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAverageMsgSize() const;

                    /**
                     * 设置最后一次间隔内发布消息的平均byte大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _averageMsgSize 最后一次间隔内发布消息的平均byte大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAverageMsgSize(const std::string& _averageMsgSize);

                    /**
                     * 判断参数 AverageMsgSize 是否已赋值
                     * @return AverageMsgSize 是否已赋值
                     * 
                     */
                    bool AverageMsgSizeHasBeenSet() const;

                    /**
                     * 获取消费者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerCount 消费者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerCount() const;

                    /**
                     * 设置消费者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerCount 消费者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerCount(const std::string& _consumerCount);

                    /**
                     * 判断参数 ConsumerCount 是否已赋值
                     * @return ConsumerCount 是否已赋值
                     * 
                     */
                    bool ConsumerCountHasBeenSet() const;

                    /**
                     * 获取被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastConfirmedEntry 被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastConfirmedEntry() const;

                    /**
                     * 设置被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastConfirmedEntry 被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastConfirmedEntry(const std::string& _lastConfirmedEntry);

                    /**
                     * 判断参数 LastConfirmedEntry 是否已赋值
                     * @return LastConfirmedEntry 是否已赋值
                     * 
                     */
                    bool LastConfirmedEntryHasBeenSet() const;

                    /**
                     * 获取最后一个ledger创建的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLedgerCreatedTimestamp 最后一个ledger创建的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLedgerCreatedTimestamp() const;

                    /**
                     * 设置最后一个ledger创建的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLedgerCreatedTimestamp 最后一个ledger创建的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastLedgerCreatedTimestamp(const std::string& _lastLedgerCreatedTimestamp);

                    /**
                     * 判断参数 LastLedgerCreatedTimestamp 是否已赋值
                     * @return LastLedgerCreatedTimestamp 是否已赋值
                     * 
                     */
                    bool LastLedgerCreatedTimestampHasBeenSet() const;

                    /**
                     * 获取本地和复制的发布者每秒发布消息的速率。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateIn 本地和复制的发布者每秒发布消息的速率。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgRateIn() const;

                    /**
                     * 设置本地和复制的发布者每秒发布消息的速率。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgRateIn 本地和复制的发布者每秒发布消息的速率。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgRateIn(const std::string& _msgRateIn);

                    /**
                     * 判断参数 MsgRateIn 是否已赋值
                     * @return MsgRateIn 是否已赋值
                     * 
                     */
                    bool MsgRateInHasBeenSet() const;

                    /**
                     * 获取本地和复制的消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateOut 本地和复制的消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置本地和复制的消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgRateOut 本地和复制的消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     * 
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取本地和复制的发布者每秒发布消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgThroughputIn 本地和复制的发布者每秒发布消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgThroughputIn() const;

                    /**
                     * 设置本地和复制的发布者每秒发布消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgThroughputIn 本地和复制的发布者每秒发布消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgThroughputIn(const std::string& _msgThroughputIn);

                    /**
                     * 判断参数 MsgThroughputIn 是否已赋值
                     * @return MsgThroughputIn 是否已赋值
                     * 
                     */
                    bool MsgThroughputInHasBeenSet() const;

                    /**
                     * 获取本地和复制的消费者每秒分发消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgThroughputOut 本地和复制的消费者每秒分发消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置本地和复制的消费者每秒分发消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgThroughputOut 本地和复制的消费者每秒分发消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     * 
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumberOfEntries 被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNumberOfEntries() const;

                    /**
                     * 设置被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numberOfEntries 被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumberOfEntries(const std::string& _numberOfEntries);

                    /**
                     * 判断参数 NumberOfEntries 是否已赋值
                     * @return NumberOfEntries 是否已赋值
                     * 
                     */
                    bool NumberOfEntriesHasBeenSet() const;

                    /**
                     * 获取子分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 子分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置子分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 子分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const int64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取生产者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerCount 生产者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProducerCount() const;

                    /**
                     * 设置生产者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _producerCount 生产者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProducerCount(const std::string& _producerCount);

                    /**
                     * 判断参数 ProducerCount 是否已赋值
                     * @return ProducerCount 是否已赋值
                     * 
                     */
                    bool ProducerCountHasBeenSet() const;

                    /**
                     * 获取以byte计算的所有消息存储总量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalSize 以byte计算的所有消息存储总量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalSize() const;

                    /**
                     * 设置以byte计算的所有消息存储总量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalSize 以byte计算的所有消息存储总量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalSize(const std::string& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取topic类型描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicType topic类型描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置topic类型描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicType topic类型描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicType(const uint64_t& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                private:

                    /**
                     * 最后一次间隔内发布消息的平均byte大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_averageMsgSize;
                    bool m_averageMsgSizeHasBeenSet;

                    /**
                     * 消费者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerCount;
                    bool m_consumerCountHasBeenSet;

                    /**
                     * 被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastConfirmedEntry;
                    bool m_lastConfirmedEntryHasBeenSet;

                    /**
                     * 最后一个ledger创建的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLedgerCreatedTimestamp;
                    bool m_lastLedgerCreatedTimestampHasBeenSet;

                    /**
                     * 本地和复制的发布者每秒发布消息的速率。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgRateIn;
                    bool m_msgRateInHasBeenSet;

                    /**
                     * 本地和复制的消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * 本地和复制的发布者每秒发布消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgThroughputIn;
                    bool m_msgThroughputInHasBeenSet;

                    /**
                     * 本地和复制的消费者每秒分发消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * 被记录下来的消息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_numberOfEntries;
                    bool m_numberOfEntriesHasBeenSet;

                    /**
                     * 子分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 生产者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_producerCount;
                    bool m_producerCountHasBeenSet;

                    /**
                     * 以byte计算的所有消息存储总量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * topic类型描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PARTITIONSTOPIC_H_
