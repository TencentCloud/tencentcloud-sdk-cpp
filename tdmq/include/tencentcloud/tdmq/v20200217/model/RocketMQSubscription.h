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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSUBSCRIPTION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/ClientSubscriptionInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ消费组订阅信息
                */
                class RocketMQSubscription : public AbstractModel
                {
                public:
                    RocketMQSubscription();
                    ~RocketMQSubscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
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
                     * 获取主题类型：
Normal 普通,
GlobalOrder 全局顺序,
PartitionedOrder 局部顺序,
Transaction 事务消息,
DelayScheduled 延时消息,
Retry 重试,
DeadLetter 死信
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 主题类型：
Normal 普通,
GlobalOrder 全局顺序,
PartitionedOrder 局部顺序,
Transaction 事务消息,
DelayScheduled 延时消息,
Retry 重试,
DeadLetter 死信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置主题类型：
Normal 普通,
GlobalOrder 全局顺序,
PartitionedOrder 局部顺序,
Transaction 事务消息,
DelayScheduled 延时消息,
Retry 重试,
DeadLetter 死信
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 主题类型：
Normal 普通,
GlobalOrder 全局顺序,
PartitionedOrder 局部顺序,
Transaction 事务消息,
DelayScheduled 延时消息,
Retry 重试,
DeadLetter 死信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionNum 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionNum 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取过滤模式，TAG，SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpressionType 过滤模式，TAG，SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置过滤模式，TAG，SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expressionType 过滤模式，TAG，SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpressionType(const std::string& _expressionType);

                    /**
                     * 判断参数 ExpressionType 是否已赋值
                     * @return ExpressionType 是否已赋值
                     * 
                     */
                    bool ExpressionTypeHasBeenSet() const;

                    /**
                     * 获取过滤表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubString 过滤表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置过滤表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subString 过滤表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubString(const std::string& _subString);

                    /**
                     * 判断参数 SubString 是否已赋值
                     * @return SubString 是否已赋值
                     * 
                     */
                    bool SubStringHasBeenSet() const;

                    /**
                     * 获取订阅状态：
0，订阅关系一致
1，订阅关系不一致
2，未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 订阅状态：
0，订阅关系一致
1，订阅关系不一致
2，未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置订阅状态：
0，订阅关系一致
1，订阅关系不一致
2，未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 订阅状态：
0，订阅关系一致
1，订阅关系不一致
2，未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取消费堆积数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerLag 消费堆积数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置消费堆积数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerLag 消费堆积数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerLag(const int64_t& _consumerLag);

                    /**
                     * 判断参数 ConsumerLag 是否已赋值
                     * @return ConsumerLag 是否已赋值
                     * 
                     */
                    bool ConsumerLagHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerGroup 消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerGroup 消费组名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否在线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOnline 是否在线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsOnline() const;

                    /**
                     * 设置是否在线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOnline 是否在线
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
                     * 获取消费类型
0: 广播消费
1: 集群消费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumeType 消费类型
0: 广播消费
1: 集群消费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsumeType() const;

                    /**
                     * 设置消费类型
0: 广播消费
1: 集群消费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumeType 消费类型
0: 广播消费
1: 集群消费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumeType(const int64_t& _consumeType);

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取订阅一致性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Consistency 订阅一致性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsistency() const;

                    /**
                     * 设置订阅一致性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consistency 订阅一致性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsistency(const int64_t& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                    /**
                     * 获取最后消费进度更新时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后消费进度更新时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置最后消费进度更新时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 最后消费进度更新时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取最大重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryTimes 最大重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置最大重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryTimes 最大重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientProtocol 协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientProtocol() const;

                    /**
                     * 设置协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientProtocol 协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientProtocol(const std::string& _clientProtocol);

                    /**
                     * 判断参数 ClientProtocol 是否已赋值
                     * @return ClientProtocol 是否已赋值
                     * 
                     */
                    bool ClientProtocolHasBeenSet() const;

                    /**
                     * 获取客户端订阅详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientSubscriptionInfos 客户端订阅详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClientSubscriptionInfo> GetClientSubscriptionInfos() const;

                    /**
                     * 设置客户端订阅详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientSubscriptionInfos 客户端订阅详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientSubscriptionInfos(const std::vector<ClientSubscriptionInfo>& _clientSubscriptionInfos);

                    /**
                     * 判断参数 ClientSubscriptionInfos 是否已赋值
                     * @return ClientSubscriptionInfos 是否已赋值
                     * 
                     */
                    bool ClientSubscriptionInfosHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 主题类型：
Normal 普通,
GlobalOrder 全局顺序,
PartitionedOrder 局部顺序,
Transaction 事务消息,
DelayScheduled 延时消息,
Retry 重试,
DeadLetter 死信
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 过滤模式，TAG，SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                    /**
                     * 过滤表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * 订阅状态：
0，订阅关系一致
1，订阅关系不一致
2，未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 消费堆积数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 是否在线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isOnline;
                    bool m_isOnlineHasBeenSet;

                    /**
                     * 消费类型
0: 广播消费
1: 集群消费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * 订阅一致性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * 最后消费进度更新时间，秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 最大重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * 协议类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientProtocol;
                    bool m_clientProtocolHasBeenSet;

                    /**
                     * 客户端订阅详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClientSubscriptionInfo> m_clientSubscriptionInfos;
                    bool m_clientSubscriptionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQSUBSCRIPTION_H_
