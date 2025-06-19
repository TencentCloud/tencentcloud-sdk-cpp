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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUEDETAILRESPONSE_H_

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
                * DescribeRabbitMQQueueDetail返回参数结构体
                */
                class DescribeRabbitMQQueueDetailResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQQueueDetailResponse();
                    ~DescribeRabbitMQQueueDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称
                     * @return InstanceId 实例名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Vhost参数
                     * @return VirtualHost Vhost参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取队列名称
                     * @return QueueName 队列名称
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取队列类型,取值classic或quorum
                     * @return QueueType 队列类型,取值classic或quorum
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取在线消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Consumers 在线消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConsumers() const;

                    /**
                     * 判断参数 Consumers 是否已赋值
                     * @return Consumers 是否已赋值
                     * 
                     */
                    bool ConsumersHasBeenSet() const;

                    /**
                     * 获取持久标记
                     * @return Durable 持久标记
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取自动清除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoDelete 自动清除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取MessageTTL参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageTTL MessageTTL参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMessageTTL() const;

                    /**
                     * 判断参数 MessageTTL 是否已赋值
                     * @return MessageTTL 是否已赋值
                     * 
                     */
                    bool MessageTTLHasBeenSet() const;

                    /**
                     * 获取AutoExpire参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoExpire AutoExpire参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAutoExpire() const;

                    /**
                     * 判断参数 AutoExpire 是否已赋值
                     * @return AutoExpire 是否已赋值
                     * 
                     */
                    bool AutoExpireHasBeenSet() const;

                    /**
                     * 获取MaxLength参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxLength MaxLength参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取MaxLengthBytes参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxLengthBytes MaxLengthBytes参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxLengthBytes() const;

                    /**
                     * 判断参数 MaxLengthBytes 是否已赋值
                     * @return MaxLengthBytes 是否已赋值
                     * 
                     */
                    bool MaxLengthBytesHasBeenSet() const;

                    /**
                     * 获取DeliveryLimit参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliveryLimit DeliveryLimit参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeliveryLimit() const;

                    /**
                     * 判断参数 DeliveryLimit 是否已赋值
                     * @return DeliveryLimit 是否已赋值
                     * 
                     */
                    bool DeliveryLimitHasBeenSet() const;

                    /**
                     * 获取OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OverflowBehaviour OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOverflowBehaviour() const;

                    /**
                     * 判断参数 OverflowBehaviour 是否已赋值
                     * @return OverflowBehaviour 是否已赋值
                     * 
                     */
                    bool OverflowBehaviourHasBeenSet() const;

                    /**
                     * 获取DeadLetterExchange参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterExchange DeadLetterExchange参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     * 
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取DeadLetterRoutingKey参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterRoutingKey DeadLetterRoutingKey参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     * 
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                    /**
                     * 获取SingleActiveConsumer参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SingleActiveConsumer SingleActiveConsumer参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSingleActiveConsumer() const;

                    /**
                     * 判断参数 SingleActiveConsumer 是否已赋值
                     * @return SingleActiveConsumer 是否已赋值
                     * 
                     */
                    bool SingleActiveConsumerHasBeenSet() const;

                    /**
                     * 获取MaximumPriority参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaximumPriority MaximumPriority参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaximumPriority() const;

                    /**
                     * 判断参数 MaximumPriority 是否已赋值
                     * @return MaximumPriority 是否已赋值
                     * 
                     */
                    bool MaximumPriorityHasBeenSet() const;

                    /**
                     * 获取LazyMode参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LazyMode LazyMode参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetLazyMode() const;

                    /**
                     * 判断参数 LazyMode 是否已赋值
                     * @return LazyMode 是否已赋值
                     * 
                     */
                    bool LazyModeHasBeenSet() const;

                    /**
                     * 获取MasterLocator参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterLocator MasterLocator参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMasterLocator() const;

                    /**
                     * 判断参数 MasterLocator 是否已赋值
                     * @return MasterLocator 是否已赋值
                     * 
                     */
                    bool MasterLocatorHasBeenSet() const;

                    /**
                     * 获取MaxInMemoryLength参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxInMemoryLength MaxInMemoryLength参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxInMemoryLength() const;

                    /**
                     * 判断参数 MaxInMemoryLength 是否已赋值
                     * @return MaxInMemoryLength 是否已赋值
                     * 
                     */
                    bool MaxInMemoryLengthHasBeenSet() const;

                    /**
                     * 获取MaxInMemoryBytes参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxInMemoryBytes MaxInMemoryBytes参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxInMemoryBytes() const;

                    /**
                     * 判断参数 MaxInMemoryBytes 是否已赋值
                     * @return MaxInMemoryBytes 是否已赋值
                     * 
                     */
                    bool MaxInMemoryBytesHasBeenSet() const;

                    /**
                     * 获取创建时间戳,单位秒
                     * @return CreateTime 创建时间戳,单位秒
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Node 节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取仲裁队列死信一致性策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterStrategy 仲裁队列死信一致性策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadLetterStrategy() const;

                    /**
                     * 判断参数 DeadLetterStrategy 是否已赋值
                     * @return DeadLetterStrategy 是否已赋值
                     * 
                     */
                    bool DeadLetterStrategyHasBeenSet() const;

                    /**
                     * 获取仲裁队列的领导者选举策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueLeaderLocator 仲裁队列的领导者选举策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueLeaderLocator() const;

                    /**
                     * 判断参数 QueueLeaderLocator 是否已赋值
                     * @return QueueLeaderLocator 是否已赋值
                     * 
                     */
                    bool QueueLeaderLocatorHasBeenSet() const;

                    /**
                     * 获取仲裁队列的初始副本组大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuorumInitialGroupSize 仲裁队列的初始副本组大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQuorumInitialGroupSize() const;

                    /**
                     * 判断参数 QuorumInitialGroupSize 是否已赋值
                     * @return QuorumInitialGroupSize 是否已赋值
                     * 
                     */
                    bool QuorumInitialGroupSizeHasBeenSet() const;

                    /**
                     * 获取是否为独占队列
                     * @return Exclusive 是否为独占队列
                     * 
                     */
                    bool GetExclusive() const;

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取生效的策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Policy 生效的策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取扩展参数 key-value
                     * @return Arguments 扩展参数 key-value
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取创建时间时间戳
                     * @return CreateTs 创建时间时间戳
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取修改时间时间戳
                     * @return ModifyTs 修改时间时间戳
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 队列名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 队列类型,取值classic或quorum
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 在线消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_consumers;
                    bool m_consumersHasBeenSet;

                    /**
                     * 持久标记
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * 自动清除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * MessageTTL参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * AutoExpire参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoExpire;
                    bool m_autoExpireHasBeenSet;

                    /**
                     * MaxLength参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * MaxLengthBytes参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxLengthBytes;
                    bool m_maxLengthBytesHasBeenSet;

                    /**
                     * DeliveryLimit参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deliveryLimit;
                    bool m_deliveryLimitHasBeenSet;

                    /**
                     * OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_overflowBehaviour;
                    bool m_overflowBehaviourHasBeenSet;

                    /**
                     * DeadLetterExchange参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * DeadLetterRoutingKey参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                    /**
                     * SingleActiveConsumer参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_singleActiveConsumer;
                    bool m_singleActiveConsumerHasBeenSet;

                    /**
                     * MaximumPriority参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maximumPriority;
                    bool m_maximumPriorityHasBeenSet;

                    /**
                     * LazyMode参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_lazyMode;
                    bool m_lazyModeHasBeenSet;

                    /**
                     * MasterLocator参数,classic类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_masterLocator;
                    bool m_masterLocatorHasBeenSet;

                    /**
                     * MaxInMemoryLength参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxInMemoryLength;
                    bool m_maxInMemoryLengthHasBeenSet;

                    /**
                     * MaxInMemoryBytes参数,quorum类型专用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxInMemoryBytes;
                    bool m_maxInMemoryBytesHasBeenSet;

                    /**
                     * 创建时间戳,单位秒
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * 仲裁队列死信一致性策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterStrategy;
                    bool m_deadLetterStrategyHasBeenSet;

                    /**
                     * 仲裁队列的领导者选举策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueLeaderLocator;
                    bool m_queueLeaderLocatorHasBeenSet;

                    /**
                     * 仲裁队列的初始副本组大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_quorumInitialGroupSize;
                    bool m_quorumInitialGroupSizeHasBeenSet;

                    /**
                     * 是否为独占队列
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 生效的策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 扩展参数 key-value
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * 创建时间时间戳
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * 修改时间时间戳
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUEDETAILRESPONSE_H_
