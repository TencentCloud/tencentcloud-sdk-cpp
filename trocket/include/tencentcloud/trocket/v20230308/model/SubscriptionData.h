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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_SUBSCRIPTIONDATA_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_SUBSCRIPTIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/ClientSubscriptionInfo.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 主题与消费组的订阅关系数据
                */
                class SubscriptionData : public AbstractModel
                {
                public:
                    SubscriptionData();
                    ~SubscriptionData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic 主题名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主题类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicType 主题类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置主题类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicType 主题类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取单个节点上主题队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicQueueNum 单个节点上主题队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicQueueNum() const;

                    /**
                     * 设置单个节点上主题队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicQueueNum 单个节点上主题队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicQueueNum(const int64_t& _topicQueueNum);

                    /**
                     * 判断参数 TopicQueueNum 是否已赋值
                     * @return TopicQueueNum 是否已赋值
                     * 
                     */
                    bool TopicQueueNumHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumeType 消费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumeType() const;

                    /**
                     * 设置消费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumeType 消费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumeType(const std::string& _consumeType);

                    /**
                     * 判断参数 ConsumeType 是否已赋值
                     * @return ConsumeType 是否已赋值
                     * 
                     */
                    bool ConsumeTypeHasBeenSet() const;

                    /**
                     * 获取订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubString 订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubString() const;

                    /**
                     * 设置订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subString 订阅规则
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
                     * 获取过滤类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpressionType 过滤类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置过滤类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expressionType 过滤类型
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
                     * 获取消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerLag 消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsumerLag() const;

                    /**
                     * 设置消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerLag 消费堆积
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
                     * 获取是否顺序消费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumeMessageOrderly 是否顺序消费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置是否顺序消费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumeMessageOrderly 是否顺序消费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取消费模式: 
BROADCASTING 广播模式;
CLUSTERING 集群模式;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageModel 消费模式: 
BROADCASTING 广播模式;
CLUSTERING 集群模式;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessageModel() const;

                    /**
                     * 设置消费模式: 
BROADCASTING 广播模式;
CLUSTERING 集群模式;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageModel 消费模式: 
BROADCASTING 广播模式;
CLUSTERING 集群模式;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageModel(const std::string& _messageModel);

                    /**
                     * 判断参数 MessageModel 是否已赋值
                     * @return MessageModel 是否已赋值
                     * 
                     */
                    bool MessageModelHasBeenSet() const;

                    /**
                     * 获取订阅不一致的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientSubscriptionInfos 订阅不一致的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClientSubscriptionInfo> GetClientSubscriptionInfos() const;

                    /**
                     * 设置订阅不一致的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientSubscriptionInfos 订阅不一致的客户端列表
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
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 主题类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 单个节点上主题队列数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicQueueNum;
                    bool m_topicQueueNumHasBeenSet;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumeType;
                    bool m_consumeTypeHasBeenSet;

                    /**
                     * 订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subString;
                    bool m_subStringHasBeenSet;

                    /**
                     * 过滤类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                    /**
                     * 订阅一致性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * 消费堆积
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consumerLag;
                    bool m_consumerLagHasBeenSet;

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
                     * 是否顺序消费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * 消费模式: 
BROADCASTING 广播模式;
CLUSTERING 集群模式;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_messageModel;
                    bool m_messageModelHasBeenSet;

                    /**
                     * 订阅不一致的客户端列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClientSubscriptionInfo> m_clientSubscriptionInfos;
                    bool m_clientSubscriptionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_SUBSCRIPTIONDATA_H_
