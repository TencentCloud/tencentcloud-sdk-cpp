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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQQUEUEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQQUEUEATTRIBUTEREQUEST_H_

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
                * ModifyCmqQueueAttribute请求参数结构体
                */
                class ModifyCmqQueueAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCmqQueueAttributeRequest();
                    ~ModifyCmqQueueAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取队列名字，在单个地域同一账号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     * @return QueueName 队列名字，在单个地域同一账号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名字，在单个地域同一账号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     * @param _queueName 队列名字，在单个地域同一账号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
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
                     * 获取最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     * @return MaxMsgHeapNum 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     * 
                     */
                    uint64_t GetMaxMsgHeapNum() const;

                    /**
                     * 设置最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     * @param _maxMsgHeapNum 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     * 
                     */
                    void SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum);

                    /**
                     * 判断参数 MaxMsgHeapNum 是否已赋值
                     * @return MaxMsgHeapNum 是否已赋值
                     * 
                     */
                    bool MaxMsgHeapNumHasBeenSet() const;

                    /**
                     * 获取消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     * @return PollingWaitSeconds 消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     * 
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     * @param _pollingWaitSeconds 消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     * 
                     */
                    void SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds);

                    /**
                     * 判断参数 PollingWaitSeconds 是否已赋值
                     * @return PollingWaitSeconds 是否已赋值
                     * 
                     */
                    bool PollingWaitSecondsHasBeenSet() const;

                    /**
                     * 获取消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     * @return VisibilityTimeout 消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     * 
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     * @param _visibilityTimeout 消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     * 
                     */
                    void SetVisibilityTimeout(const uint64_t& _visibilityTimeout);

                    /**
                     * 判断参数 VisibilityTimeout 是否已赋值
                     * @return VisibilityTimeout 是否已赋值
                     * 
                     */
                    bool VisibilityTimeoutHasBeenSet() const;

                    /**
                     * 获取消息最大长度，新版CMQ新建的队列默认1024KB，不支持修改
                     * @return MaxMsgSize 消息最大长度，新版CMQ新建的队列默认1024KB，不支持修改
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置消息最大长度，新版CMQ新建的队列默认1024KB，不支持修改
                     * @param _maxMsgSize 消息最大长度，新版CMQ新建的队列默认1024KB，不支持修改
                     * 
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     * 
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取消息最长未确认时间。取值范围 30-43200 秒（30秒~12小时），默认值 3600 (1 小时)。
                     * @return MsgRetentionSeconds 消息最长未确认时间。取值范围 30-43200 秒（30秒~12小时），默认值 3600 (1 小时)。
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置消息最长未确认时间。取值范围 30-43200 秒（30秒~12小时），默认值 3600 (1 小时)。
                     * @param _msgRetentionSeconds 消息最长未确认时间。取值范围 30-43200 秒（30秒~12小时），默认值 3600 (1 小时)。
                     * 
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     * 
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取队列是否开启回溯消息能力，该参数取值范围0-1296000，0表示不开启。
                     * @return RewindSeconds 队列是否开启回溯消息能力，该参数取值范围0-1296000，0表示不开启。
                     * 
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置队列是否开启回溯消息能力，该参数取值范围0-1296000，0表示不开启。
                     * @param _rewindSeconds 队列是否开启回溯消息能力，该参数取值范围0-1296000，0表示不开启。
                     * 
                     */
                    void SetRewindSeconds(const uint64_t& _rewindSeconds);

                    /**
                     * 判断参数 RewindSeconds 是否已赋值
                     * @return RewindSeconds 是否已赋值
                     * 
                     */
                    bool RewindSecondsHasBeenSet() const;

                    /**
                     * 获取第一次查询时间
                     * @return FirstQueryInterval 第一次查询时间
                     * 
                     */
                    uint64_t GetFirstQueryInterval() const;

                    /**
                     * 设置第一次查询时间
                     * @param _firstQueryInterval 第一次查询时间
                     * 
                     */
                    void SetFirstQueryInterval(const uint64_t& _firstQueryInterval);

                    /**
                     * 判断参数 FirstQueryInterval 是否已赋值
                     * @return FirstQueryInterval 是否已赋值
                     * 
                     */
                    bool FirstQueryIntervalHasBeenSet() const;

                    /**
                     * 获取最大查询次数
                     * @return MaxQueryCount 最大查询次数
                     * 
                     */
                    uint64_t GetMaxQueryCount() const;

                    /**
                     * 设置最大查询次数
                     * @param _maxQueryCount 最大查询次数
                     * 
                     */
                    void SetMaxQueryCount(const uint64_t& _maxQueryCount);

                    /**
                     * 判断参数 MaxQueryCount 是否已赋值
                     * @return MaxQueryCount 是否已赋值
                     * 
                     */
                    bool MaxQueryCountHasBeenSet() const;

                    /**
                     * 获取死信队列名称
                     * @return DeadLetterQueueName 死信队列名称
                     * 
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置死信队列名称
                     * @param _deadLetterQueueName 死信队列名称
                     * 
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     * 
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取policy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     * @return MaxTimeToLive policy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     * 
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置policy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     * @param _maxTimeToLive policy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     * 
                     */
                    void SetMaxTimeToLive(const uint64_t& _maxTimeToLive);

                    /**
                     * 判断参数 MaxTimeToLive 是否已赋值
                     * @return MaxTimeToLive 是否已赋值
                     * 
                     */
                    bool MaxTimeToLiveHasBeenSet() const;

                    /**
                     * 获取最大接收次数
                     * @return MaxReceiveCount 最大接收次数
                     * 
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置最大接收次数
                     * @param _maxReceiveCount 最大接收次数
                     * 
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     * 
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                    /**
                     * 获取死信队列策略
                     * @return Policy 死信队列策略
                     * 
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置死信队列策略
                     * @param _policy 死信队列策略
                     * 
                     */
                    void SetPolicy(const uint64_t& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * @return Trace 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * 
                     */
                    bool GetTrace() const;

                    /**
                     * 设置是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * @param _trace 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * 
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取是否开启事务，1开启，0不开启
                     * @return Transaction 是否开启事务，1开启，0不开启
                     * 
                     */
                    uint64_t GetTransaction() const;

                    /**
                     * 设置是否开启事务，1开启，0不开启
                     * @param _transaction 是否开启事务，1开启，0不开启
                     * 
                     */
                    void SetTransaction(const uint64_t& _transaction);

                    /**
                     * 判断参数 Transaction 是否已赋值
                     * @return Transaction 是否已赋值
                     * 
                     */
                    bool TransactionHasBeenSet() const;

                    /**
                     * 获取队列可回溯存储空间：若开启消息回溯，取值范围：10240MB - 512000MB，若不开启消息回溯，取值：0
                     * @return RetentionSizeInMB 队列可回溯存储空间：若开启消息回溯，取值范围：10240MB - 512000MB，若不开启消息回溯，取值：0
                     * 
                     */
                    uint64_t GetRetentionSizeInMB() const;

                    /**
                     * 设置队列可回溯存储空间：若开启消息回溯，取值范围：10240MB - 512000MB，若不开启消息回溯，取值：0
                     * @param _retentionSizeInMB 队列可回溯存储空间：若开启消息回溯，取值范围：10240MB - 512000MB，若不开启消息回溯，取值：0
                     * 
                     */
                    void SetRetentionSizeInMB(const uint64_t& _retentionSizeInMB);

                    /**
                     * 判断参数 RetentionSizeInMB 是否已赋值
                     * @return RetentionSizeInMB 是否已赋值
                     * 
                     */
                    bool RetentionSizeInMBHasBeenSet() const;

                private:

                    /**
                     * 队列名字，在单个地域同一账号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     */
                    uint64_t m_maxMsgHeapNum;
                    bool m_maxMsgHeapNumHasBeenSet;

                    /**
                     * 消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     */
                    uint64_t m_pollingWaitSeconds;
                    bool m_pollingWaitSecondsHasBeenSet;

                    /**
                     * 消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     */
                    uint64_t m_visibilityTimeout;
                    bool m_visibilityTimeoutHasBeenSet;

                    /**
                     * 消息最大长度，新版CMQ新建的队列默认1024KB，不支持修改
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * 消息最长未确认时间。取值范围 30-43200 秒（30秒~12小时），默认值 3600 (1 小时)。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * 队列是否开启回溯消息能力，该参数取值范围0-1296000，0表示不开启。
                     */
                    uint64_t m_rewindSeconds;
                    bool m_rewindSecondsHasBeenSet;

                    /**
                     * 第一次查询时间
                     */
                    uint64_t m_firstQueryInterval;
                    bool m_firstQueryIntervalHasBeenSet;

                    /**
                     * 最大查询次数
                     */
                    uint64_t m_maxQueryCount;
                    bool m_maxQueryCountHasBeenSet;

                    /**
                     * 死信队列名称
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * policy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * 最大接收次数
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                    /**
                     * 死信队列策略
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * 是否开启事务，1开启，0不开启
                     */
                    uint64_t m_transaction;
                    bool m_transactionHasBeenSet;

                    /**
                     * 队列可回溯存储空间：若开启消息回溯，取值范围：10240MB - 512000MB，若不开启消息回溯，取值：0
                     */
                    uint64_t m_retentionSizeInMB;
                    bool m_retentionSizeInMBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQQUEUEATTRIBUTEREQUEST_H_
