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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_MODIFYQUEUEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_MODIFYQUEUEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * ModifyQueueAttribute请求参数结构体
                */
                class ModifyQueueAttributeRequest : public AbstractModel
                {
                public:
                    ModifyQueueAttributeRequest();
                    ~ModifyQueueAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取队列名字，在单个地域同一帐号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     * @return QueueName 队列名字，在单个地域同一帐号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名字，在单个地域同一帐号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     * @param QueueName 队列名字，在单个地域同一帐号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     * @return MaxMsgHeapNum 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     */
                    uint64_t GetMaxMsgHeapNum() const;

                    /**
                     * 设置最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     * @param MaxMsgHeapNum 最大堆积消息数。取值范围在公测期间为 1,000,000 - 10,000,000，正式上线后范围可达到 1000,000-1000,000,000。默认取值在公测期间为 10,000,000，正式上线后为 100,000,000。
                     */
                    void SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum);

                    /**
                     * 判断参数 MaxMsgHeapNum 是否已赋值
                     * @return MaxMsgHeapNum 是否已赋值
                     */
                    bool MaxMsgHeapNumHasBeenSet() const;

                    /**
                     * 获取消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     * @return PollingWaitSeconds 消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     */
                    uint64_t GetPollingWaitSeconds() const;

                    /**
                     * 设置消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     * @param PollingWaitSeconds 消息接收长轮询等待时间。取值范围 0-30 秒，默认值 0。
                     */
                    void SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds);

                    /**
                     * 判断参数 PollingWaitSeconds 是否已赋值
                     * @return PollingWaitSeconds 是否已赋值
                     */
                    bool PollingWaitSecondsHasBeenSet() const;

                    /**
                     * 获取消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     * @return VisibilityTimeout 消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     */
                    uint64_t GetVisibilityTimeout() const;

                    /**
                     * 设置消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     * @param VisibilityTimeout 消息可见性超时。取值范围 1-43200 秒（即12小时内），默认值 30。
                     */
                    void SetVisibilityTimeout(const uint64_t& _visibilityTimeout);

                    /**
                     * 判断参数 VisibilityTimeout 是否已赋值
                     * @return VisibilityTimeout 是否已赋值
                     */
                    bool VisibilityTimeoutHasBeenSet() const;

                    /**
                     * 获取消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     * @return MaxMsgSize 消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     * @param MaxMsgSize 消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取消息保留周期。取值范围 60-1296000 秒（1min-15天），默认值 345600 (4 天)。
                     * @return MsgRetentionSeconds 消息保留周期。取值范围 60-1296000 秒（1min-15天），默认值 345600 (4 天)。
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置消息保留周期。取值范围 60-1296000 秒（1min-15天），默认值 345600 (4 天)。
                     * @param MsgRetentionSeconds 消息保留周期。取值范围 60-1296000 秒（1min-15天），默认值 345600 (4 天)。
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取消息最长回溯时间，取值范围0-msgRetentionSeconds，消息的最大回溯之间为消息在队列中的保存周期，0表示不开启消息回溯。
                     * @return RewindSeconds 消息最长回溯时间，取值范围0-msgRetentionSeconds，消息的最大回溯之间为消息在队列中的保存周期，0表示不开启消息回溯。
                     */
                    uint64_t GetRewindSeconds() const;

                    /**
                     * 设置消息最长回溯时间，取值范围0-msgRetentionSeconds，消息的最大回溯之间为消息在队列中的保存周期，0表示不开启消息回溯。
                     * @param RewindSeconds 消息最长回溯时间，取值范围0-msgRetentionSeconds，消息的最大回溯之间为消息在队列中的保存周期，0表示不开启消息回溯。
                     */
                    void SetRewindSeconds(const uint64_t& _rewindSeconds);

                    /**
                     * 判断参数 RewindSeconds 是否已赋值
                     * @return RewindSeconds 是否已赋值
                     */
                    bool RewindSecondsHasBeenSet() const;

                    /**
                     * 获取第一次查询时间
                     * @return FirstQueryInterval 第一次查询时间
                     */
                    uint64_t GetFirstQueryInterval() const;

                    /**
                     * 设置第一次查询时间
                     * @param FirstQueryInterval 第一次查询时间
                     */
                    void SetFirstQueryInterval(const uint64_t& _firstQueryInterval);

                    /**
                     * 判断参数 FirstQueryInterval 是否已赋值
                     * @return FirstQueryInterval 是否已赋值
                     */
                    bool FirstQueryIntervalHasBeenSet() const;

                    /**
                     * 获取最大查询次数
                     * @return MaxQueryCount 最大查询次数
                     */
                    uint64_t GetMaxQueryCount() const;

                    /**
                     * 设置最大查询次数
                     * @param MaxQueryCount 最大查询次数
                     */
                    void SetMaxQueryCount(const uint64_t& _maxQueryCount);

                    /**
                     * 判断参数 MaxQueryCount 是否已赋值
                     * @return MaxQueryCount 是否已赋值
                     */
                    bool MaxQueryCountHasBeenSet() const;

                    /**
                     * 获取死信队列名称
                     * @return DeadLetterQueueName 死信队列名称
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置死信队列名称
                     * @param DeadLetterQueueName 死信队列名称
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取MaxTimeToLivepolicy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     * @return MaxTimeToLive MaxTimeToLivepolicy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置MaxTimeToLivepolicy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     * @param MaxTimeToLive MaxTimeToLivepolicy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
                     */
                    void SetMaxTimeToLive(const uint64_t& _maxTimeToLive);

                    /**
                     * 判断参数 MaxTimeToLive 是否已赋值
                     * @return MaxTimeToLive 是否已赋值
                     */
                    bool MaxTimeToLiveHasBeenSet() const;

                    /**
                     * 获取最大接收次数
                     * @return MaxReceiveCount 最大接收次数
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置最大接收次数
                     * @param MaxReceiveCount 最大接收次数
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                    /**
                     * 获取死信队列策略
                     * @return Policy 死信队列策略
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置死信队列策略
                     * @param Policy 死信队列策略
                     */
                    void SetPolicy(const uint64_t& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * @return Trace 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     */
                    bool GetTrace() const;

                    /**
                     * 设置是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     * @param Trace 是否开启消息轨迹标识，true表示开启，false表示不开启，不填表示不开启。
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * 队列名字，在单个地域同一帐号下唯一。队列名称是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。
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
                     * 消息最大长度。取值范围 1024-65536 Byte（即1-64K），默认值 65536。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * 消息保留周期。取值范围 60-1296000 秒（1min-15天），默认值 345600 (4 天)。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * 消息最长回溯时间，取值范围0-msgRetentionSeconds，消息的最大回溯之间为消息在队列中的保存周期，0表示不开启消息回溯。
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
                     * MaxTimeToLivepolicy为1时必选。最大未消费过期时间。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_MODIFYQUEUEATTRIBUTEREQUEST_H_
