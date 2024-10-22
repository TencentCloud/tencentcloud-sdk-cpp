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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCONSUMERTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCONSUMERTOPIC_H_

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
                * 消费者详情中的主题信息
                */
                class RocketMQConsumerTopic : public AbstractModel
                {
                public:
                    RocketMQConsumerTopic();
                    ~RocketMQConsumerTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
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
                     * 获取主题类型，Normal表示普通，GlobalOrder表示全局顺序，PartitionedOrder表示局部顺序，Transaction表示事务，Retry表示重试，DeadLetter表示死信
                     * @return Type 主题类型，Normal表示普通，GlobalOrder表示全局顺序，PartitionedOrder表示局部顺序，Transaction表示事务，Retry表示重试，DeadLetter表示死信
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置主题类型，Normal表示普通，GlobalOrder表示全局顺序，PartitionedOrder表示局部顺序，Transaction表示事务，Retry表示重试，DeadLetter表示死信
                     * @param _type 主题类型，Normal表示普通，GlobalOrder表示全局顺序，PartitionedOrder表示局部顺序，Transaction表示事务，Retry表示重试，DeadLetter表示死信
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return PartitionNum 分区数
                     * 
                     */
                    uint64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
                     * @param _partitionNum 分区数
                     * 
                     */
                    void SetPartitionNum(const uint64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取消息堆积数
                     * @return Accumulative 消息堆积数
                     * 
                     */
                    int64_t GetAccumulative() const;

                    /**
                     * 设置消息堆积数
                     * @param _accumulative 消息堆积数
                     * 
                     */
                    void SetAccumulative(const int64_t& _accumulative);

                    /**
                     * 判断参数 Accumulative 是否已赋值
                     * @return Accumulative 是否已赋值
                     * 
                     */
                    bool AccumulativeHasBeenSet() const;

                    /**
                     * 获取最后消费时间，以毫秒为单位
                     * @return LastConsumptionTime 最后消费时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetLastConsumptionTime() const;

                    /**
                     * 设置最后消费时间，以毫秒为单位
                     * @param _lastConsumptionTime 最后消费时间，以毫秒为单位
                     * 
                     */
                    void SetLastConsumptionTime(const uint64_t& _lastConsumptionTime);

                    /**
                     * 判断参数 LastConsumptionTime 是否已赋值
                     * @return LastConsumptionTime 是否已赋值
                     * 
                     */
                    bool LastConsumptionTimeHasBeenSet() const;

                    /**
                     * 获取订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRule 订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubRule() const;

                    /**
                     * 设置订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subRule 订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubRule(const std::string& _subRule);

                    /**
                     * 判断参数 SubRule 是否已赋值
                     * @return SubRule 是否已赋值
                     * 
                     */
                    bool SubRuleHasBeenSet() const;

                private:

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 主题类型，Normal表示普通，GlobalOrder表示全局顺序，PartitionedOrder表示局部顺序，Transaction表示事务，Retry表示重试，DeadLetter表示死信
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分区数
                     */
                    uint64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 消息堆积数
                     */
                    int64_t m_accumulative;
                    bool m_accumulativeHasBeenSet;

                    /**
                     * 最后消费时间，以毫秒为单位
                     */
                    uint64_t m_lastConsumptionTime;
                    bool m_lastConsumptionTimeHasBeenSet;

                    /**
                     * 订阅规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subRule;
                    bool m_subRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCONSUMERTOPIC_H_
