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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERPOLICY_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * cmq DeadLetterPolicy
                */
                class CmqDeadLetterPolicy : public AbstractModel
                {
                public:
                    CmqDeadLetterPolicy();
                    ~CmqDeadLetterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取死信队列。
                     * @return DeadLetterQueue 死信队列。
                     * 
                     */
                    std::string GetDeadLetterQueue() const;

                    /**
                     * 设置死信队列。
                     * @param _deadLetterQueue 死信队列。
                     * 
                     */
                    void SetDeadLetterQueue(const std::string& _deadLetterQueue);

                    /**
                     * 判断参数 DeadLetterQueue 是否已赋值
                     * @return DeadLetterQueue 是否已赋值
                     * 
                     */
                    bool DeadLetterQueueHasBeenSet() const;

                    /**
                     * 获取死信队列策略。0:最大接收次数;1:最大未消费时间
                     * @return Policy 死信队列策略。0:最大接收次数;1:最大未消费时间
                     * 
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置死信队列策略。0:最大接收次数;1:最大未消费时间
                     * @param _policy 死信队列策略。0:最大接收次数;1:最大未消费时间
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
                     * 获取最大未消费过期时间。Policy为1时必选。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds。
                     * @return MaxTimeToLive 最大未消费过期时间。Policy为1时必选。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds。
                     * 
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置最大未消费过期时间。Policy为1时必选。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds。
                     * @param _maxTimeToLive 最大未消费过期时间。Policy为1时必选。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds。
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
                     * 获取最大接收次数。Policy为0时必选，范围在1到1000。
                     * @return MaxReceiveCount 最大接收次数。Policy为0时必选，范围在1到1000。
                     * 
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置最大接收次数。Policy为0时必选，范围在1到1000。
                     * @param _maxReceiveCount 最大接收次数。Policy为0时必选，范围在1到1000。
                     * 
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     * 
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                private:

                    /**
                     * 死信队列。
                     */
                    std::string m_deadLetterQueue;
                    bool m_deadLetterQueueHasBeenSet;

                    /**
                     * 死信队列策略。0:最大接收次数;1:最大未消费时间
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 最大未消费过期时间。Policy为1时必选。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds。
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * 最大接收次数。Policy为0时必选，范围在1到1000。
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQDEADLETTERPOLICY_H_
