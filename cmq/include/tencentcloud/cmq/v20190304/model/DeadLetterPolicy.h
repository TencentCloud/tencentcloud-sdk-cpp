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
                * DeadLetterPolicy
                */
                class DeadLetterPolicy : public AbstractModel
                {
                public:
                    DeadLetterPolicy();
                    ~DeadLetterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DeadLetterQueueName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterQueueName DeadLetterQueueName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeadLetterQueueName() const;

                    /**
                     * 设置DeadLetterQueueName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterQueueName DeadLetterQueueName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterQueueName(const std::string& _deadLetterQueueName);

                    /**
                     * 判断参数 DeadLetterQueueName 是否已赋值
                     * @return DeadLetterQueueName 是否已赋值
                     */
                    bool DeadLetterQueueNameHasBeenSet() const;

                    /**
                     * 获取DeadLetterQueue
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterQueue DeadLetterQueue
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeadLetterQueue() const;

                    /**
                     * 设置DeadLetterQueue
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterQueue DeadLetterQueue
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterQueue(const std::string& _deadLetterQueue);

                    /**
                     * 判断参数 DeadLetterQueue 是否已赋值
                     * @return DeadLetterQueue 是否已赋值
                     */
                    bool DeadLetterQueueHasBeenSet() const;

                    /**
                     * 获取Policy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Policy Policy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPolicy() const;

                    /**
                     * 设置Policy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Policy Policy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicy(const uint64_t& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取MaxTimeToLive
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxTimeToLive MaxTimeToLive
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxTimeToLive() const;

                    /**
                     * 设置MaxTimeToLive
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxTimeToLive MaxTimeToLive
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxTimeToLive(const uint64_t& _maxTimeToLive);

                    /**
                     * 判断参数 MaxTimeToLive 是否已赋值
                     * @return MaxTimeToLive 是否已赋值
                     */
                    bool MaxTimeToLiveHasBeenSet() const;

                    /**
                     * 获取MaxReceiveCount
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxReceiveCount MaxReceiveCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxReceiveCount() const;

                    /**
                     * 设置MaxReceiveCount
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxReceiveCount MaxReceiveCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxReceiveCount(const uint64_t& _maxReceiveCount);

                    /**
                     * 判断参数 MaxReceiveCount 是否已赋值
                     * @return MaxReceiveCount 是否已赋值
                     */
                    bool MaxReceiveCountHasBeenSet() const;

                private:

                    /**
                     * DeadLetterQueueName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterQueueName;
                    bool m_deadLetterQueueNameHasBeenSet;

                    /**
                     * DeadLetterQueue
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterQueue;
                    bool m_deadLetterQueueHasBeenSet;

                    /**
                     * Policy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * MaxTimeToLive
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxTimeToLive;
                    bool m_maxTimeToLiveHasBeenSet;

                    /**
                     * MaxReceiveCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxReceiveCount;
                    bool m_maxReceiveCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DEADLETTERPOLICY_H_
