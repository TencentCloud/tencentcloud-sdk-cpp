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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSQUEUEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRabbitMQServerlessQueue请求参数结构体
                */
                class CreateRabbitMQServerlessQueueRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessQueueRequest();
                    ~CreateRabbitMQServerlessQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取VHost参数
                     * @return VirtualHost VHost参数
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VHost参数
                     * @param _virtualHost VHost参数
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

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
                     * 设置队列名称
                     * @param _queueName 队列名称
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
                     * 获取只支持 classic
                     * @return QueueType 只支持 classic
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置只支持 classic
                     * @param _queueType 只支持 classic
                     * 
                     */
                    void SetQueueType(const std::string& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取持久标记,classic类型必传,quorum类型无需传入固定为true
                     * @return Durable 持久标记,classic类型必传,quorum类型无需传入固定为true
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置持久标记,classic类型必传,quorum类型无需传入固定为true
                     * @param _durable 持久标记,classic类型必传,quorum类型无需传入固定为true
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取自动清除,classic类型必传,quorum类型无需传入固定为false
                     * @return AutoDelete 自动清除,classic类型必传,quorum类型无需传入固定为false
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置自动清除,classic类型必传,quorum类型无需传入固定为false
                     * @param _autoDelete 自动清除,classic类型必传,quorum类型无需传入固定为false
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取MessageTTL参数,classic类型专用
                     * @return MessageTTL MessageTTL参数,classic类型专用
                     * 
                     */
                    int64_t GetMessageTTL() const;

                    /**
                     * 设置MessageTTL参数,classic类型专用
                     * @param _messageTTL MessageTTL参数,classic类型专用
                     * 
                     */
                    void SetMessageTTL(const int64_t& _messageTTL);

                    /**
                     * 判断参数 MessageTTL 是否已赋值
                     * @return MessageTTL 是否已赋值
                     * 
                     */
                    bool MessageTTLHasBeenSet() const;

                    /**
                     * 获取AutoExpire参数，单位为 ms，队列在指定时间内没有被使用，将会被删除
                     * @return AutoExpire AutoExpire参数，单位为 ms，队列在指定时间内没有被使用，将会被删除
                     * 
                     */
                    int64_t GetAutoExpire() const;

                    /**
                     * 设置AutoExpire参数，单位为 ms，队列在指定时间内没有被使用，将会被删除
                     * @param _autoExpire AutoExpire参数，单位为 ms，队列在指定时间内没有被使用，将会被删除
                     * 
                     */
                    void SetAutoExpire(const int64_t& _autoExpire);

                    /**
                     * 判断参数 AutoExpire 是否已赋值
                     * @return AutoExpire 是否已赋值
                     * 
                     */
                    bool AutoExpireHasBeenSet() const;

                    /**
                     * 获取MaxLength参数。队列可以容纳的最大条数。若超出上限，将根据 overview behavior 处理
                     * @return MaxLength MaxLength参数。队列可以容纳的最大条数。若超出上限，将根据 overview behavior 处理
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置MaxLength参数。队列可以容纳的最大条数。若超出上限，将根据 overview behavior 处理
                     * @param _maxLength MaxLength参数。队列可以容纳的最大条数。若超出上限，将根据 overview behavior 处理
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取MaxLengthBytes参数。若超出上限，将根据 overview behavior 处理。
                     * @return MaxLengthBytes MaxLengthBytes参数。若超出上限，将根据 overview behavior 处理。
                     * 
                     */
                    int64_t GetMaxLengthBytes() const;

                    /**
                     * 设置MaxLengthBytes参数。若超出上限，将根据 overview behavior 处理。
                     * @param _maxLengthBytes MaxLengthBytes参数。若超出上限，将根据 overview behavior 处理。
                     * 
                     */
                    void SetMaxLengthBytes(const int64_t& _maxLengthBytes);

                    /**
                     * 判断参数 MaxLengthBytes 是否已赋值
                     * @return MaxLengthBytes 是否已赋值
                     * 
                     */
                    bool MaxLengthBytesHasBeenSet() const;

                    /**
                     * 获取DeliveryLimit参数,quorum类型专用
                     * @return DeliveryLimit DeliveryLimit参数,quorum类型专用
                     * 
                     */
                    int64_t GetDeliveryLimit() const;

                    /**
                     * 设置DeliveryLimit参数,quorum类型专用
                     * @param _deliveryLimit DeliveryLimit参数,quorum类型专用
                     * 
                     */
                    void SetDeliveryLimit(const int64_t& _deliveryLimit);

                    /**
                     * 判断参数 DeliveryLimit 是否已赋值
                     * @return DeliveryLimit 是否已赋值
                     * 
                     */
                    bool DeliveryLimitHasBeenSet() const;

                    /**
                     * 获取OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
                     * @return OverflowBehaviour OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
                     * 
                     */
                    std::string GetOverflowBehaviour() const;

                    /**
                     * 设置OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
                     * @param _overflowBehaviour OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
                     * 
                     */
                    void SetOverflowBehaviour(const std::string& _overflowBehaviour);

                    /**
                     * 判断参数 OverflowBehaviour 是否已赋值
                     * @return OverflowBehaviour 是否已赋值
                     * 
                     */
                    bool OverflowBehaviourHasBeenSet() const;

                    /**
                     * 获取DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * @return DeadLetterExchange DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * 
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 设置DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * @param _deadLetterExchange DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     * 
                     */
                    void SetDeadLetterExchange(const std::string& _deadLetterExchange);

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     * 
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * @return DeadLetterRoutingKey DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * 
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 设置DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * @param _deadLetterRoutingKey DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     * 
                     */
                    void SetDeadLetterRoutingKey(const std::string& _deadLetterRoutingKey);

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     * 
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                    /**
                     * 获取SingleActiveConsumer参数。若开启，需确保每次有且只有一个消费者从队列中消费
                     * @return SingleActiveConsumer SingleActiveConsumer参数。若开启，需确保每次有且只有一个消费者从队列中消费
                     * 
                     */
                    bool GetSingleActiveConsumer() const;

                    /**
                     * 设置SingleActiveConsumer参数。若开启，需确保每次有且只有一个消费者从队列中消费
                     * @param _singleActiveConsumer SingleActiveConsumer参数。若开启，需确保每次有且只有一个消费者从队列中消费
                     * 
                     */
                    void SetSingleActiveConsumer(const bool& _singleActiveConsumer);

                    /**
                     * 判断参数 SingleActiveConsumer 是否已赋值
                     * @return SingleActiveConsumer 是否已赋值
                     * 
                     */
                    bool SingleActiveConsumerHasBeenSet() const;

                    /**
                     * 获取MaximumPriority参数,classic类型专用
                     * @return MaximumPriority MaximumPriority参数,classic类型专用
                     * 
                     */
                    int64_t GetMaximumPriority() const;

                    /**
                     * 设置MaximumPriority参数,classic类型专用
                     * @param _maximumPriority MaximumPriority参数,classic类型专用
                     * 
                     */
                    void SetMaximumPriority(const int64_t& _maximumPriority);

                    /**
                     * 判断参数 MaximumPriority 是否已赋值
                     * @return MaximumPriority 是否已赋值
                     * 
                     */
                    bool MaximumPriorityHasBeenSet() const;

                    /**
                     * 获取LazyMode参数,classic类型专用
                     * @return LazyMode LazyMode参数,classic类型专用
                     * 
                     */
                    bool GetLazyMode() const;

                    /**
                     * 设置LazyMode参数,classic类型专用
                     * @param _lazyMode LazyMode参数,classic类型专用
                     * 
                     */
                    void SetLazyMode(const bool& _lazyMode);

                    /**
                     * 判断参数 LazyMode 是否已赋值
                     * @return LazyMode 是否已赋值
                     * 
                     */
                    bool LazyModeHasBeenSet() const;

                    /**
                     * 获取MasterLocator参数,classic类型专用,取值为min-masters,client-local或random
                     * @return MasterLocator MasterLocator参数,classic类型专用,取值为min-masters,client-local或random
                     * 
                     */
                    std::string GetMasterLocator() const;

                    /**
                     * 设置MasterLocator参数,classic类型专用,取值为min-masters,client-local或random
                     * @param _masterLocator MasterLocator参数,classic类型专用,取值为min-masters,client-local或random
                     * 
                     */
                    void SetMasterLocator(const std::string& _masterLocator);

                    /**
                     * 判断参数 MasterLocator 是否已赋值
                     * @return MasterLocator 是否已赋值
                     * 
                     */
                    bool MasterLocatorHasBeenSet() const;

                    /**
                     * 获取MaxInMemoryLength参数，quorum类型专用。quorum 队列的内存中最大消息数量
                     * @return MaxInMemoryLength MaxInMemoryLength参数，quorum类型专用。quorum 队列的内存中最大消息数量
                     * 
                     */
                    int64_t GetMaxInMemoryLength() const;

                    /**
                     * 设置MaxInMemoryLength参数，quorum类型专用。quorum 队列的内存中最大消息数量
                     * @param _maxInMemoryLength MaxInMemoryLength参数，quorum类型专用。quorum 队列的内存中最大消息数量
                     * 
                     */
                    void SetMaxInMemoryLength(const int64_t& _maxInMemoryLength);

                    /**
                     * 判断参数 MaxInMemoryLength 是否已赋值
                     * @return MaxInMemoryLength 是否已赋值
                     * 
                     */
                    bool MaxInMemoryLengthHasBeenSet() const;

                    /**
                     * 获取MaxInMemoryBytes参数，quorum类型专用。quorum 队列的内存中最大数总消息大小
                     * @return MaxInMemoryBytes MaxInMemoryBytes参数，quorum类型专用。quorum 队列的内存中最大数总消息大小
                     * 
                     */
                    int64_t GetMaxInMemoryBytes() const;

                    /**
                     * 设置MaxInMemoryBytes参数，quorum类型专用。quorum 队列的内存中最大数总消息大小
                     * @param _maxInMemoryBytes MaxInMemoryBytes参数，quorum类型专用。quorum 队列的内存中最大数总消息大小
                     * 
                     */
                    void SetMaxInMemoryBytes(const int64_t& _maxInMemoryBytes);

                    /**
                     * 判断参数 MaxInMemoryBytes 是否已赋值
                     * @return MaxInMemoryBytes 是否已赋值
                     * 
                     */
                    bool MaxInMemoryBytesHasBeenSet() const;

                    /**
                     * 获取Node参数，非必填，指定创建 queue 所在节点
                     * @return Node Node参数，非必填，指定创建 queue 所在节点
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置Node参数，非必填，指定创建 queue 所在节点
                     * @param _node Node参数，非必填，指定创建 queue 所在节点
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取仲裁队列死信一致性策略，at-most-once、at-least-once，默认是at-most-once
                     * @return DeadLetterStrategy 仲裁队列死信一致性策略，at-most-once、at-least-once，默认是at-most-once
                     * 
                     */
                    std::string GetDeadLetterStrategy() const;

                    /**
                     * 设置仲裁队列死信一致性策略，at-most-once、at-least-once，默认是at-most-once
                     * @param _deadLetterStrategy 仲裁队列死信一致性策略，at-most-once、at-least-once，默认是at-most-once
                     * 
                     */
                    void SetDeadLetterStrategy(const std::string& _deadLetterStrategy);

                    /**
                     * 判断参数 DeadLetterStrategy 是否已赋值
                     * @return DeadLetterStrategy 是否已赋值
                     * 
                     */
                    bool DeadLetterStrategyHasBeenSet() const;

                    /**
                     * 获取仲裁队列的领导者选举策略，client-local、balanced，默认是client-local
                     * @return QueueLeaderLocator 仲裁队列的领导者选举策略，client-local、balanced，默认是client-local
                     * 
                     */
                    std::string GetQueueLeaderLocator() const;

                    /**
                     * 设置仲裁队列的领导者选举策略，client-local、balanced，默认是client-local
                     * @param _queueLeaderLocator 仲裁队列的领导者选举策略，client-local、balanced，默认是client-local
                     * 
                     */
                    void SetQueueLeaderLocator(const std::string& _queueLeaderLocator);

                    /**
                     * 判断参数 QueueLeaderLocator 是否已赋值
                     * @return QueueLeaderLocator 是否已赋值
                     * 
                     */
                    bool QueueLeaderLocatorHasBeenSet() const;

                    /**
                     * 获取仲裁队列的初始副本组大小，默认3
                     * @return QuorumInitialGroupSize 仲裁队列的初始副本组大小，默认3
                     * 
                     */
                    int64_t GetQuorumInitialGroupSize() const;

                    /**
                     * 设置仲裁队列的初始副本组大小，默认3
                     * @param _quorumInitialGroupSize 仲裁队列的初始副本组大小，默认3
                     * 
                     */
                    void SetQuorumInitialGroupSize(const int64_t& _quorumInitialGroupSize);

                    /**
                     * 判断参数 QuorumInitialGroupSize 是否已赋值
                     * @return QuorumInitialGroupSize 是否已赋值
                     * 
                     */
                    bool QuorumInitialGroupSizeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VHost参数
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * 队列名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 只支持 classic
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 持久标记,classic类型必传,quorum类型无需传入固定为true
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * 自动清除,classic类型必传,quorum类型无需传入固定为false
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * MessageTTL参数,classic类型专用
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * AutoExpire参数，单位为 ms，队列在指定时间内没有被使用，将会被删除
                     */
                    int64_t m_autoExpire;
                    bool m_autoExpireHasBeenSet;

                    /**
                     * MaxLength参数。队列可以容纳的最大条数。若超出上限，将根据 overview behavior 处理
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * MaxLengthBytes参数。若超出上限，将根据 overview behavior 处理。
                     */
                    int64_t m_maxLengthBytes;
                    bool m_maxLengthBytesHasBeenSet;

                    /**
                     * DeliveryLimit参数,quorum类型专用
                     */
                    int64_t m_deliveryLimit;
                    bool m_deliveryLimitHasBeenSet;

                    /**
                     * OverflowBehaviour参数,取值为drop-head, reject-publish或reject-publish-dlx
                     */
                    std::string m_overflowBehaviour;
                    bool m_overflowBehaviourHasBeenSet;

                    /**
                     * DeadLetterExchange参数。可将过期或被拒绝的消息投往指定的死信 exchange。
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * DeadLetterRoutingKey参数。只能包含字母、数字、"."、"-"，"@"，"_"
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                    /**
                     * SingleActiveConsumer参数。若开启，需确保每次有且只有一个消费者从队列中消费
                     */
                    bool m_singleActiveConsumer;
                    bool m_singleActiveConsumerHasBeenSet;

                    /**
                     * MaximumPriority参数,classic类型专用
                     */
                    int64_t m_maximumPriority;
                    bool m_maximumPriorityHasBeenSet;

                    /**
                     * LazyMode参数,classic类型专用
                     */
                    bool m_lazyMode;
                    bool m_lazyModeHasBeenSet;

                    /**
                     * MasterLocator参数,classic类型专用,取值为min-masters,client-local或random
                     */
                    std::string m_masterLocator;
                    bool m_masterLocatorHasBeenSet;

                    /**
                     * MaxInMemoryLength参数，quorum类型专用。quorum 队列的内存中最大消息数量
                     */
                    int64_t m_maxInMemoryLength;
                    bool m_maxInMemoryLengthHasBeenSet;

                    /**
                     * MaxInMemoryBytes参数，quorum类型专用。quorum 队列的内存中最大数总消息大小
                     */
                    int64_t m_maxInMemoryBytes;
                    bool m_maxInMemoryBytesHasBeenSet;

                    /**
                     * Node参数，非必填，指定创建 queue 所在节点
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * 仲裁队列死信一致性策略，at-most-once、at-least-once，默认是at-most-once
                     */
                    std::string m_deadLetterStrategy;
                    bool m_deadLetterStrategyHasBeenSet;

                    /**
                     * 仲裁队列的领导者选举策略，client-local、balanced，默认是client-local
                     */
                    std::string m_queueLeaderLocator;
                    bool m_queueLeaderLocatorHasBeenSet;

                    /**
                     * 仲裁队列的初始副本组大小，默认3
                     */
                    int64_t m_quorumInitialGroupSize;
                    bool m_quorumInitialGroupSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSQUEUEREQUEST_H_
