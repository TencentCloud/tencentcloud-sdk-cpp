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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_QUEUESET_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_QUEUESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/DeadLetterSource.h>
#include <tencentcloud/cmq/v20190304/model/DeadLetterPolicy.h>
#include <tencentcloud/cmq/v20190304/model/TransactionPolicy.h>
#include <tencentcloud/cmq/v20190304/model/Tag.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * 批量queue属性信息
                */
                class QueueSet : public AbstractModel
                {
                public:
                    QueueSet();
                    ~QueueSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息队列ID。
                     * @return QueueId 消息队列ID。
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置消息队列ID。
                     * @param QueueId 消息队列ID。
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取消息队列名字。
                     * @return QueueName 消息队列名字。
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置消息队列名字。
                     * @param QueueName 消息队列名字。
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取每秒钟生产消息条数的限制，消费消息的大小是该值的1.1倍。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps 每秒钟生产消息条数的限制，消费消息的大小是该值的1.1倍。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置每秒钟生产消息条数的限制，消费消息的大小是该值的1.1倍。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Qps 每秒钟生产消息条数的限制，消费消息的大小是该值的1.1倍。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取带宽限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bps 带宽限制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBps() const;

                    /**
                     * 设置带宽限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Bps 带宽限制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBps(const uint64_t& _bps);

                    /**
                     * 判断参数 Bps 是否已赋值
                     * @return Bps 是否已赋值
                     */
                    bool BpsHasBeenSet() const;

                    /**
                     * 获取飞行消息最大保留时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDelaySeconds 飞行消息最大保留时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxDelaySeconds() const;

                    /**
                     * 设置飞行消息最大保留时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxDelaySeconds 飞行消息最大保留时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxDelaySeconds(const uint64_t& _maxDelaySeconds);

                    /**
                     * 判断参数 MaxDelaySeconds 是否已赋值
                     * @return MaxDelaySeconds 是否已赋值
                     */
                    bool MaxDelaySecondsHasBeenSet() const;

                    /**
                     * 获取最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMsgHeapNum 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxMsgHeapNum() const;

                    /**
                     * 设置最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxMsgHeapNum 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum);

                    /**
                     * 判断参数 MaxMsgHeapNum 是否已赋值
                     * @return MaxMsgHeapNum 是否已赋值
                     */
                    bool MaxMsgHeapNumHasBeenSet() const;

                    /**
                     * 获取消息接收长轮询等待时间。取值范围0 - 30秒，默认值0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PollingWaitSeconds 消息接收长轮询等待时间。取值范围0 - 30秒，默认值0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置消息接收长轮询等待时间。取值范围0 - 30秒，默认值0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PollingWaitSeconds 消息接收长轮询等待时间。取值范围0 - 30秒，默认值0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds);

                    /**
                     * 判断参数 PollingWaitSeconds 是否已赋值
                     * @return PollingWaitSeconds 是否已赋值
                     */
                    bool PollingWaitSecondsHasBeenSet() const;

                    /**
                     * 获取消息保留周期。取值范围60-1296000秒（1min-15天），默认值345600秒（4 天）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRetentionSeconds 消息保留周期。取值范围60-1296000秒（1min-15天），默认值345600秒（4 天）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置消息保留周期。取值范围60-1296000秒（1min-15天），默认值345600秒（4 天）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MsgRetentionSeconds 消息保留周期。取值范围60-1296000秒（1min-15天），默认值345600秒（4 天）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取消息可见性超时。取值范围1 - 43200秒（即12小时内），默认值30。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VisibilityTimeout 消息可见性超时。取值范围1 - 43200秒（即12小时内），默认值30。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置消息可见性超时。取值范围1 - 43200秒（即12小时内），默认值30。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VisibilityTimeout 消息可见性超时。取值范围1 - 43200秒（即12小时内），默认值30。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVisibilityTimeout(const uint64_t& _visibilityTimeout);

                    /**
                     * 判断参数 VisibilityTimeout 是否已赋值
                     * @return VisibilityTimeout 是否已赋值
                     */
                    bool VisibilityTimeoutHasBeenSet() const;

                    /**
                     * 获取消息最大长度。取值范围1024 - 1048576 Byte（即1K - 1024K），默认值65536。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMsgSize 消息最大长度。取值范围1024 - 1048576 Byte（即1K - 1024K），默认值65536。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置消息最大长度。取值范围1024 - 1048576 Byte（即1K - 1024K），默认值65536。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxMsgSize 消息最大长度。取值范围1024 - 1048576 Byte（即1K - 1024K），默认值65536。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取回溯队列的消息回溯时间最大值，取值范围0 - 43200秒，0表示不开启消息回溯。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewindSeconds 回溯队列的消息回溯时间最大值，取值范围0 - 43200秒，0表示不开启消息回溯。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置回溯队列的消息回溯时间最大值，取值范围0 - 43200秒，0表示不开启消息回溯。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RewindSeconds 回溯队列的消息回溯时间最大值，取值范围0 - 43200秒，0表示不开启消息回溯。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRewindSeconds(const uint64_t& _rewindSeconds);

                    /**
                     * 判断参数 RewindSeconds 是否已赋值
                     * @return RewindSeconds 是否已赋值
                     */
                    bool RewindSecondsHasBeenSet() const;

                    /**
                     * 获取队列的创建时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 队列的创建时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置队列的创建时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 队列的创建时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后一次修改队列属性的时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTime 最后一次修改队列属性的时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置最后一次修改队列属性的时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTime 最后一次修改队列属性的时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取在队列中处于 Active 状态（不处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveMsgNum 在队列中处于 Active 状态（不处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetActiveMsgNum() const;

                    /**
                     * 设置在队列中处于 Active 状态（不处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ActiveMsgNum 在队列中处于 Active 状态（不处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActiveMsgNum(const uint64_t& _activeMsgNum);

                    /**
                     * 判断参数 ActiveMsgNum 是否已赋值
                     * @return ActiveMsgNum 是否已赋值
                     */
                    bool ActiveMsgNumHasBeenSet() const;

                    /**
                     * 获取在队列中处于 Inactive 状态（正处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InactiveMsgNum 在队列中处于 Inactive 状态（正处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetInactiveMsgNum() const;

                    /**
                     * 设置在队列中处于 Inactive 状态（正处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InactiveMsgNum 在队列中处于 Inactive 状态（正处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInactiveMsgNum(const uint64_t& _inactiveMsgNum);

                    /**
                     * 判断参数 InactiveMsgNum 是否已赋值
                     * @return InactiveMsgNum 是否已赋值
                     */
                    bool InactiveMsgNumHasBeenSet() const;

                    /**
                     * 获取延迟消息数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayMsgNum 延迟消息数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDelayMsgNum() const;

                    /**
                     * 设置延迟消息数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DelayMsgNum 延迟消息数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDelayMsgNum(const uint64_t& _delayMsgNum);

                    /**
                     * 判断参数 DelayMsgNum 是否已赋值
                     * @return DelayMsgNum 是否已赋值
                     */
                    bool DelayMsgNumHasBeenSet() const;

                    /**
                     * 获取已调用 DelMsg 接口删除，但还在回溯保留时间内的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewindMsgNum 已调用 DelMsg 接口删除，但还在回溯保留时间内的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRewindMsgNum() const;

                    /**
                     * 设置已调用 DelMsg 接口删除，但还在回溯保留时间内的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RewindMsgNum 已调用 DelMsg 接口删除，但还在回溯保留时间内的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRewindMsgNum(const uint64_t& _rewindMsgNum);

                    /**
                     * 判断参数 RewindMsgNum 是否已赋值
                     * @return RewindMsgNum 是否已赋值
                     */
                    bool RewindMsgNumHasBeenSet() const;

                    /**
                     * 获取消息最小未消费时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinMsgTime 消息最小未消费时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMinMsgTime() const;

                    /**
                     * 设置消息最小未消费时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinMsgTime 消息最小未消费时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinMsgTime(const uint64_t& _minMsgTime);

                    /**
                     * 判断参数 MinMsgTime 是否已赋值
                     * @return MinMsgTime 是否已赋值
                     */
                    bool MinMsgTimeHasBeenSet() const;

                    /**
                     * 获取事务消息队列。true表示是事务消息，false表示不是事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transaction 事务消息队列。true表示是事务消息，false表示不是事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTransaction() const;

                    /**
                     * 设置事务消息队列。true表示是事务消息，false表示不是事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Transaction 事务消息队列。true表示是事务消息，false表示不是事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransaction(const bool& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取死信队列。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterSource 死信队列。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeadLetterSource> GetDeadLetterSource() const;

                    /**
                     * 设置死信队列。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterSource 死信队列。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterSource(const std::vector<DeadLetterSource>& _deadLetterSource);

                    /**
                     * 判断参数 DeadLetterSource 是否已赋值
                     * @return DeadLetterSource 是否已赋值
                     */
                    bool DeadLetterSourceHasBeenSet() const;

                    /**
                     * 获取死信队列策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterPolicy 死信队列策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeadLetterPolicy GetDeadLetterPolicy() const;

                    /**
                     * 设置死信队列策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterPolicy 死信队列策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterPolicy(const DeadLetterPolicy& _deadLetterPolicy);

                    /**
                     * 判断参数 DeadLetterPolicy 是否已赋值
                     * @return DeadLetterPolicy 是否已赋值
                     */
                    bool DeadLetterPolicyHasBeenSet() const;

                    /**
                     * 获取事务消息策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionPolicy 事务消息策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransactionPolicy GetTransactionPolicy() const;

                    /**
                     * 设置事务消息策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransactionPolicy 事务消息策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransactionPolicy(const TransactionPolicy& _transactionPolicy);

                    /**
                     * 判断参数 TransactionPolicy 是否已赋值
                     * @return TransactionPolicy 是否已赋值
                     */
                    bool TransactionPolicyHasBeenSet() const;

                    /**
                     * 获取创建者Uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建者Uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者Uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateUin 创建者Uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trace 消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTrace() const;

                    /**
                     * 设置消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Trace 消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * 消息队列ID。
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * 消息队列名字。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 每秒钟生产消息条数的限制，消费消息的大小是该值的1.1倍。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 带宽限制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bps;
                    bool m_bpsHasBeenSet;

                    /**
                     * 飞行消息最大保留时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxDelaySeconds;
                    bool m_maxDelaySecondsHasBeenSet;

                    /**
                     * 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * 消息接收长轮询等待时间。取值范围0 - 30秒，默认值0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * 消息保留周期。取值范围60-1296000秒（1min-15天），默认值345600秒（4 天）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * 消息可见性超时。取值范围1 - 43200秒（即12小时内），默认值30。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * 消息最大长度。取值范围1024 - 1048576 Byte（即1K - 1024K），默认值65536。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * 回溯队列的消息回溯时间最大值，取值范围0 - 43200秒，0表示不开启消息回溯。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * 队列的创建时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次修改队列属性的时间。返回 Unix 时间戳，精确到秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * 在队列中处于 Active 状态（不处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activeMsgNum;
                    bool m_activeMsgNumHasBeenSet;

                    /**
                     * 在队列中处于 Inactive 状态（正处于被消费状态）的消息总数，为近似值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inactiveMsgNum;
                    bool m_inactiveMsgNumHasBeenSet;

                    /**
                     * 延迟消息数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayMsgNum;
                    bool m_delayMsgNumHasBeenSet;

                    /**
                     * 已调用 DelMsg 接口删除，但还在回溯保留时间内的消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rewindMsgNum;
                    bool m_rewindMsgNumHasBeenSet;

                    /**
                     * 消息最小未消费时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minMsgTime;
                    bool m_minMsgTimeHasBeenSet;

                    /**
                     * 事务消息队列。true表示是事务消息，false表示不是事务消息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * 死信队列。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeadLetterSource> m_deadLetterSource;
                    bool m_deadLetterSourceHasBeenSet;

                    /**
                     * 死信队列策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeadLetterPolicy m_deadLetterPolicy;
                    bool m_deadLetterPolicyHasBeenSet;

                    /**
                     * 事务消息策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransactionPolicy m_transactionPolicy;
                    bool m_transactionPolicyHasBeenSet;

                    /**
                     * 创建者Uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 关联的标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 消息轨迹。true表示开启，false表示不开启。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_QUEUESET_H_
