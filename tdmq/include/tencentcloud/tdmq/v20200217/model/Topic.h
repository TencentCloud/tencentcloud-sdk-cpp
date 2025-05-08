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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PartitionsTopic.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 主题实例
                */
                class Topic : public AbstractModel
                {
                public:
                    Topic();
                    ~Topic() = default;
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
                     * 获取分区数<=0：topic下无子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 分区数<=0：topic下无子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitions() const;

                    /**
                     * 设置分区数<=0：topic下无子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 分区数<=0：topic下无子分区。
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
                     * 获取分区topic里面的子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubTopicSets 分区topic里面的子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PartitionsTopic> GetSubTopicSets() const;

                    /**
                     * 设置分区topic里面的子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subTopicSets 分区topic里面的子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubTopicSets(const std::vector<PartitionsTopic>& _subTopicSets);

                    /**
                     * 判断参数 SubTopicSets 是否已赋值
                     * @return SubTopicSets 是否已赋值
                     * 
                     */
                    bool SubTopicSetsHasBeenSet() const;

                    /**
                     * 获取topic类型描述：
0：普通消息；
1：全局顺序消息；
2：局部顺序消息；
3：重试队列；
4：死信队列；
5：事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicType topic类型描述：
0：普通消息；
1：全局顺序消息；
2：局部顺序消息；
3：重试队列；
4：死信队列；
5：事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTopicType() const;

                    /**
                     * 设置topic类型描述：
0：普通消息；
1：全局顺序消息；
2：局部顺序消息；
3：重试队列；
4：死信队列；
5：事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicType topic类型描述：
0：普通消息；
1：全局顺序消息；
2：局部顺序消息；
3：重试队列；
4：死信队列；
5：事务消息。
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

                    /**
                     * 获取环境（命名空间）名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentId 环境（命名空间）名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentId 环境（命名空间）名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取主题名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 主题名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName 主题名称。
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
                     * 获取说明，128个字符以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明，128个字符以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，128个字符以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明，128个字符以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最近修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最近修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取生产者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerLimit 生产者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProducerLimit() const;

                    /**
                     * 设置生产者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _producerLimit 生产者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProducerLimit(const std::string& _producerLimit);

                    /**
                     * 判断参数 ProducerLimit 是否已赋值
                     * @return ProducerLimit 是否已赋值
                     * 
                     */
                    bool ProducerLimitHasBeenSet() const;

                    /**
                     * 获取消费者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerLimit 消费者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerLimit() const;

                    /**
                     * 设置消费者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerLimit 消费者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerLimit(const std::string& _consumerLimit);

                    /**
                     * 判断参数 ConsumerLimit 是否已赋值
                     * @return ConsumerLimit 是否已赋值
                     * 
                     */
                    bool ConsumerLimitHasBeenSet() const;

                    /**
                     * 获取0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PulsarTopicType 0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPulsarTopicType() const;

                    /**
                     * 设置0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pulsarTopicType 0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPulsarTopicType(const int64_t& _pulsarTopicType);

                    /**
                     * 判断参数 PulsarTopicType 是否已赋值
                     * @return PulsarTopicType 是否已赋值
                     * 
                     */
                    bool PulsarTopicTypeHasBeenSet() const;

                    /**
                     * 获取未消费消息过期时间，单位：秒

注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgTTL 未消费消息过期时间，单位：秒

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 设置未消费消息过期时间，单位：秒

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgTTL 未消费消息过期时间，单位：秒

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgTTL(const uint64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * @return Tenant 用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * 
                     */
                    std::string GetTenant() const;

                    /**
                     * 设置用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * @param _tenant 用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * 
                     */
                    void SetTenant(const std::string& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取是否开启异常消费者隔离
                     * @return IsolateConsumerEnable 是否开启异常消费者隔离
                     * 
                     */
                    bool GetIsolateConsumerEnable() const;

                    /**
                     * 设置是否开启异常消费者隔离
                     * @param _isolateConsumerEnable 是否开启异常消费者隔离
                     * 
                     */
                    void SetIsolateConsumerEnable(const bool& _isolateConsumerEnable);

                    /**
                     * 判断参数 IsolateConsumerEnable 是否已赋值
                     * @return IsolateConsumerEnable 是否已赋值
                     * 
                     */
                    bool IsolateConsumerEnableHasBeenSet() const;

                    /**
                     * 获取消费者 Ack 超时时间，单位：秒
                     * @return AckTimeOut 消费者 Ack 超时时间，单位：秒
                     * 
                     */
                    int64_t GetAckTimeOut() const;

                    /**
                     * 设置消费者 Ack 超时时间，单位：秒
                     * @param _ackTimeOut 消费者 Ack 超时时间，单位：秒
                     * 
                     */
                    void SetAckTimeOut(const int64_t& _ackTimeOut);

                    /**
                     * 判断参数 AckTimeOut 是否已赋值
                     * @return AckTimeOut 是否已赋值
                     * 
                     */
                    bool AckTimeOutHasBeenSet() const;

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
                     * 分区数<=0：topic下无子分区。
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
                     * 分区topic里面的子分区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PartitionsTopic> m_subTopicSets;
                    bool m_subTopicSetsHasBeenSet;

                    /**
                     * topic类型描述：
0：普通消息；
1：全局顺序消息；
2：局部顺序消息；
3：重试队列；
4：死信队列；
5：事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 环境（命名空间）名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 说明，128个字符以内。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 生产者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_producerLimit;
                    bool m_producerLimitHasBeenSet;

                    /**
                     * 消费者上限。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerLimit;
                    bool m_consumerLimitHasBeenSet;

                    /**
                     * 0: 非持久非分区
1: 非持久分区
2: 持久非分区
3: 持久分区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pulsarTopicType;
                    bool m_pulsarTopicTypeHasBeenSet;

                    /**
                     * 未消费消息过期时间，单位：秒

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 用户自定义的租户别名，如果没有，会复用专业集群 ID

                     */
                    std::string m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * 是否开启异常消费者隔离
                     */
                    bool m_isolateConsumerEnable;
                    bool m_isolateConsumerEnableHasBeenSet;

                    /**
                     * 消费者 Ack 超时时间，单位：秒
                     */
                    int64_t m_ackTimeOut;
                    bool m_ackTimeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPIC_H_
