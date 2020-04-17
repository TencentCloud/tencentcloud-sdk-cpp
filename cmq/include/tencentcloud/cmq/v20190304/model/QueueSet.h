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
                     * 获取QueueId
                     * @return QueueId QueueId
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置QueueId
                     * @param QueueId QueueId
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取QueueName
                     * @return QueueName QueueName
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置QueueName
                     * @param QueueName QueueName
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps Qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Qps Qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Bps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bps Bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBps() const;

                    /**
                     * 设置Bps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Bps Bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBps(const uint64_t& _bps);

                    /**
                     * 判断参数 Bps 是否已赋值
                     * @return Bps 是否已赋值
                     */
                    bool BpsHasBeenSet() const;

                    /**
                     * 获取MaxDelaySeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDelaySeconds MaxDelaySeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxDelaySeconds() const;

                    /**
                     * 设置MaxDelaySeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxDelaySeconds MaxDelaySeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxDelaySeconds(const uint64_t& _maxDelaySeconds);

                    /**
                     * 判断参数 MaxDelaySeconds 是否已赋值
                     * @return MaxDelaySeconds 是否已赋值
                     */
                    bool MaxDelaySecondsHasBeenSet() const;

                    /**
                     * 获取MaxMsgHeapNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMsgHeapNum MaxMsgHeapNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxMsgHeapNum() const;

                    /**
                     * 设置MaxMsgHeapNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxMsgHeapNum MaxMsgHeapNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum);

                    /**
                     * 判断参数 MaxMsgHeapNum 是否已赋值
                     * @return MaxMsgHeapNum 是否已赋值
                     */
                    bool MaxMsgHeapNumHasBeenSet() const;

                    /**
                     * 获取PollingWaitSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PollingWaitSeconds PollingWaitSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置PollingWaitSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PollingWaitSeconds PollingWaitSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds);

                    /**
                     * 判断参数 PollingWaitSeconds 是否已赋值
                     * @return PollingWaitSeconds 是否已赋值
                     */
                    bool PollingWaitSecondsHasBeenSet() const;

                    /**
                     * 获取MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRetentionSeconds MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MsgRetentionSeconds MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取VisibilityTimeout
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VisibilityTimeout VisibilityTimeout
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置VisibilityTimeout
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VisibilityTimeout VisibilityTimeout
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVisibilityTimeout(const uint64_t& _visibilityTimeout);

                    /**
                     * 判断参数 VisibilityTimeout 是否已赋值
                     * @return VisibilityTimeout 是否已赋值
                     */
                    bool VisibilityTimeoutHasBeenSet() const;

                    /**
                     * 获取MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMsgSize MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxMsgSize MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取RewindSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewindSeconds RewindSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置RewindSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RewindSeconds RewindSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRewindSeconds(const uint64_t& _rewindSeconds);

                    /**
                     * 判断参数 RewindSeconds 是否已赋值
                     * @return RewindSeconds 是否已赋值
                     */
                    bool RewindSecondsHasBeenSet() const;

                    /**
                     * 获取CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTime LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTime LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取ActiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveMsgNum ActiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetActiveMsgNum() const;

                    /**
                     * 设置ActiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ActiveMsgNum ActiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActiveMsgNum(const uint64_t& _activeMsgNum);

                    /**
                     * 判断参数 ActiveMsgNum 是否已赋值
                     * @return ActiveMsgNum 是否已赋值
                     */
                    bool ActiveMsgNumHasBeenSet() const;

                    /**
                     * 获取InactiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InactiveMsgNum InactiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetInactiveMsgNum() const;

                    /**
                     * 设置InactiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InactiveMsgNum InactiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInactiveMsgNum(const uint64_t& _inactiveMsgNum);

                    /**
                     * 判断参数 InactiveMsgNum 是否已赋值
                     * @return InactiveMsgNum 是否已赋值
                     */
                    bool InactiveMsgNumHasBeenSet() const;

                    /**
                     * 获取DelayMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayMsgNum DelayMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDelayMsgNum() const;

                    /**
                     * 设置DelayMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DelayMsgNum DelayMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDelayMsgNum(const uint64_t& _delayMsgNum);

                    /**
                     * 判断参数 DelayMsgNum 是否已赋值
                     * @return DelayMsgNum 是否已赋值
                     */
                    bool DelayMsgNumHasBeenSet() const;

                    /**
                     * 获取RewindMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewindMsgNum RewindMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRewindMsgNum() const;

                    /**
                     * 设置RewindMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RewindMsgNum RewindMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRewindMsgNum(const uint64_t& _rewindMsgNum);

                    /**
                     * 判断参数 RewindMsgNum 是否已赋值
                     * @return RewindMsgNum 是否已赋值
                     */
                    bool RewindMsgNumHasBeenSet() const;

                    /**
                     * 获取MinMsgTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinMsgTime MinMsgTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMinMsgTime() const;

                    /**
                     * 设置MinMsgTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinMsgTime MinMsgTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinMsgTime(const uint64_t& _minMsgTime);

                    /**
                     * 判断参数 MinMsgTime 是否已赋值
                     * @return MinMsgTime 是否已赋值
                     */
                    bool MinMsgTimeHasBeenSet() const;

                    /**
                     * 获取Transaction
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transaction Transaction
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTransaction() const;

                    /**
                     * 设置Transaction
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Transaction Transaction
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransaction(const bool& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取DeadLetterSource
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterSource DeadLetterSource
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeadLetterSource> GetDeadLetterSource() const;

                    /**
                     * 设置DeadLetterSource
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterSource DeadLetterSource
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterSource(const std::vector<DeadLetterSource>& _deadLetterSource);

                    /**
                     * 判断参数 DeadLetterSource 是否已赋值
                     * @return DeadLetterSource 是否已赋值
                     */
                    bool DeadLetterSourceHasBeenSet() const;

                    /**
                     * 获取DeadLetterPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterPolicy DeadLetterPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeadLetterPolicy GetDeadLetterPolicy() const;

                    /**
                     * 设置DeadLetterPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterPolicy DeadLetterPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterPolicy(const DeadLetterPolicy& _deadLetterPolicy);

                    /**
                     * 判断参数 DeadLetterPolicy 是否已赋值
                     * @return DeadLetterPolicy 是否已赋值
                     */
                    bool DeadLetterPolicyHasBeenSet() const;

                    /**
                     * 获取TransactionPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransactionPolicy TransactionPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransactionPolicy GetTransactionPolicy() const;

                    /**
                     * 设置TransactionPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransactionPolicy TransactionPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransactionPolicy(const TransactionPolicy& _transactionPolicy);

                    /**
                     * 判断参数 TransactionPolicy 是否已赋值
                     * @return TransactionPolicy 是否已赋值
                     */
                    bool TransactionPolicyHasBeenSet() const;

                    /**
                     * 获取创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin 创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateUin 创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取消息轨迹表示，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trace 消息轨迹表示，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTrace() const;

                    /**
                     * 设置消息轨迹表示，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Trace 消息轨迹表示，true表示开启，false表示不开启
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
                     * QueueId
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * QueueName
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bps;
                    bool m_bpsHasBeenSet;

                    /**
                     * MaxDelaySeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxDelaySeconds;
                    bool m_maxDelaySecondsHasBeenSet;

                    /**
                     * MaxMsgHeapNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * PollingWaitSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * VisibilityTimeout
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * RewindSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * ActiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activeMsgNum;
                    bool m_activeMsgNumHasBeenSet;

                    /**
                     * InactiveMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_inactiveMsgNum;
                    bool m_inactiveMsgNumHasBeenSet;

                    /**
                     * DelayMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayMsgNum;
                    bool m_delayMsgNumHasBeenSet;

                    /**
                     * RewindMsgNum
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rewindMsgNum;
                    bool m_rewindMsgNumHasBeenSet;

                    /**
                     * MinMsgTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minMsgTime;
                    bool m_minMsgTimeHasBeenSet;

                    /**
                     * Transaction
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * DeadLetterSource
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeadLetterSource> m_deadLetterSource;
                    bool m_deadLetterSourceHasBeenSet;

                    /**
                     * DeadLetterPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeadLetterPolicy m_deadLetterPolicy;
                    bool m_deadLetterPolicyHasBeenSet;

                    /**
                     * TransactionPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TransactionPolicy m_transactionPolicy;
                    bool m_transactionPolicyHasBeenSet;

                    /**
                     * 创建者uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 消息轨迹表示，true表示开启，false表示不开启
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
