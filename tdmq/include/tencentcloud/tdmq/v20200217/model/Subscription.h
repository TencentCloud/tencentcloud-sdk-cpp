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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SUBSCRIPTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Consumer.h>
#include <tencentcloud/tdmq/v20200217/model/ConsumersSchedule.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 订阅者
                */
                class Subscription : public AbstractModel
                {
                public:
                    Subscription();
                    ~Subscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称。
                     * @return TopicName 主题名称。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称。
                     * @param _topicName 主题名称。
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
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
                     * @param _environmentId 环境（命名空间）名称。
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
                     * 获取消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectedSince 消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectedSince() const;

                    /**
                     * 设置消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectedSince 消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectedSince(const std::string& _connectedSince);

                    /**
                     * 判断参数 ConnectedSince 是否已赋值
                     * @return ConnectedSince 是否已赋值
                     * 
                     */
                    bool ConnectedSinceHasBeenSet() const;

                    /**
                     * 获取消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerAddr 消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerAddr() const;

                    /**
                     * 设置消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerAddr 消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerAddr(const std::string& _consumerAddr);

                    /**
                     * 判断参数 ConsumerAddr 是否已赋值
                     * @return ConsumerAddr 是否已赋值
                     * 
                     */
                    bool ConsumerAddrHasBeenSet() const;

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
                     * 获取消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerName 消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerName 消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     * 
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取堆积的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgBacklog 堆积的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgBacklog() const;

                    /**
                     * 设置堆积的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgBacklog 堆积的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgBacklog(const std::string& _msgBacklog);

                    /**
                     * 判断参数 MsgBacklog 是否已赋值
                     * @return MsgBacklog 是否已赋值
                     * 
                     */
                    bool MsgBacklogHasBeenSet() const;

                    /**
                     * 获取于TTL，此订阅下没有被发送而是被丢弃的比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateExpired 于TTL，此订阅下没有被发送而是被丢弃的比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgRateExpired() const;

                    /**
                     * 设置于TTL，此订阅下没有被发送而是被丢弃的比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgRateExpired 于TTL，此订阅下没有被发送而是被丢弃的比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgRateExpired(const std::string& _msgRateExpired);

                    /**
                     * 判断参数 MsgRateExpired 是否已赋值
                     * @return MsgRateExpired 是否已赋值
                     * 
                     */
                    bool MsgRateExpiredHasBeenSet() const;

                    /**
                     * 获取消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateOut 消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgRateOut 消费者每秒分发消息的数量之和。
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
                     * 获取消费者每秒消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgThroughputOut 消费者每秒消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置消费者每秒消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgThroughputOut 消费者每秒消息的byte。
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
                     * 获取订阅名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscriptionName 订阅名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置订阅名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscriptionName 订阅名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取消费者集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerSets 消费者集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Consumer> GetConsumerSets() const;

                    /**
                     * 设置消费者集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerSets 消费者集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerSets(const std::vector<Consumer>& _consumerSets);

                    /**
                     * 判断参数 ConsumerSets 是否已赋值
                     * @return ConsumerSets 是否已赋值
                     * 
                     */
                    bool ConsumerSetsHasBeenSet() const;

                    /**
                     * 获取是否在线。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOnline 是否在线。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsOnline() const;

                    /**
                     * 设置是否在线。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOnline 是否在线。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsOnline(const bool& _isOnline);

                    /**
                     * 判断参数 IsOnline 是否已赋值
                     * @return IsOnline 是否已赋值
                     * 
                     */
                    bool IsOnlineHasBeenSet() const;

                    /**
                     * 获取消费进度集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumersScheduleSets 消费进度集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsumersSchedule> GetConsumersScheduleSets() const;

                    /**
                     * 设置消费进度集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumersScheduleSets 消费进度集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumersScheduleSets(const std::vector<ConsumersSchedule>& _consumersScheduleSets);

                    /**
                     * 判断参数 ConsumersScheduleSets 是否已赋值
                     * @return ConsumersScheduleSets 是否已赋值
                     * 
                     */
                    bool ConsumersScheduleSetsHasBeenSet() const;

                    /**
                     * 获取备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注。
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
                     * 获取订阅类型，Exclusive，Shared，Failover， Key_Shared，空或NULL表示未知，
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubType 订阅类型，Exclusive，Shared，Failover， Key_Shared，空或NULL表示未知，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置订阅类型，Exclusive，Shared，Failover， Key_Shared，空或NULL表示未知，
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subType 订阅类型，Exclusive，Shared，Failover， Key_Shared，空或NULL表示未知，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取是否由于未 ack 数到达上限而被 block
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockedSubscriptionOnUnackedMsgs 是否由于未 ack 数到达上限而被 block
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBlockedSubscriptionOnUnackedMsgs() const;

                    /**
                     * 设置是否由于未 ack 数到达上限而被 block
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockedSubscriptionOnUnackedMsgs 是否由于未 ack 数到达上限而被 block
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockedSubscriptionOnUnackedMsgs(const bool& _blockedSubscriptionOnUnackedMsgs);

                    /**
                     * 判断参数 BlockedSubscriptionOnUnackedMsgs 是否已赋值
                     * @return BlockedSubscriptionOnUnackedMsgs 是否已赋值
                     * 
                     */
                    bool BlockedSubscriptionOnUnackedMsgsHasBeenSet() const;

                    /**
                     * 获取未 ack 消息数上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxUnackedMsgNum 未 ack 消息数上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxUnackedMsgNum() const;

                    /**
                     * 设置未 ack 消息数上限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxUnackedMsgNum 未 ack 消息数上限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxUnackedMsgNum(const int64_t& _maxUnackedMsgNum);

                    /**
                     * 判断参数 MaxUnackedMsgNum 是否已赋值
                     * @return MaxUnackedMsgNum 是否已赋值
                     * 
                     */
                    bool MaxUnackedMsgNumHasBeenSet() const;

                private:

                    /**
                     * 主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 消费者开始连接的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectedSince;
                    bool m_connectedSinceHasBeenSet;

                    /**
                     * 消费者地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerAddr;
                    bool m_consumerAddrHasBeenSet;

                    /**
                     * 消费者数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerCount;
                    bool m_consumerCountHasBeenSet;

                    /**
                     * 消费者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * 堆积的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgBacklog;
                    bool m_msgBacklogHasBeenSet;

                    /**
                     * 于TTL，此订阅下没有被发送而是被丢弃的比例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgRateExpired;
                    bool m_msgRateExpiredHasBeenSet;

                    /**
                     * 消费者每秒分发消息的数量之和。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * 消费者每秒消息的byte。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * 订阅名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * 消费者集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Consumer> m_consumerSets;
                    bool m_consumerSetsHasBeenSet;

                    /**
                     * 是否在线。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isOnline;
                    bool m_isOnlineHasBeenSet;

                    /**
                     * 消费进度集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsumersSchedule> m_consumersScheduleSets;
                    bool m_consumersScheduleSetsHasBeenSet;

                    /**
                     * 备注。
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
                     * 订阅类型，Exclusive，Shared，Failover， Key_Shared，空或NULL表示未知，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 是否由于未 ack 数到达上限而被 block
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_blockedSubscriptionOnUnackedMsgs;
                    bool m_blockedSubscriptionOnUnackedMsgsHasBeenSet;

                    /**
                     * 未 ack 消息数上限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxUnackedMsgNum;
                    bool m_maxUnackedMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SUBSCRIPTION_H_
