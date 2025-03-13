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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 死信队列策略
                */
                class DeadLetterPolicy : public AbstractModel
                {
                public:
                    DeadLetterPolicy();
                    ~DeadLetterPolicy() = default;
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
                     * 获取死信队列名字。
                     * @return DeadLetterQueueName 死信队列名字。
                     * 
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置死信队列名字。
                     * @param _deadLetterQueueName 死信队列名字。
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
                     * 获取死信队列策略。
                     * @return Policy 死信队列策略。
                     * 
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置死信队列策略。
                     * @param _policy 死信队列策略。
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
                     * 获取最大接收次数。
                     * @return MaxReceiveCount 最大接收次数。
                     * 
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置最大接收次数。
                     * @param _maxReceiveCount 最大接收次数。
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
                     * 死信队列名字。
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * 最大未消费过期时间。Policy为1时必选。范围300-43200，单位秒，需要小于消息最大保留时间MsgRetentionSeconds。
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * 死信队列策略。
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 最大接收次数。
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_
