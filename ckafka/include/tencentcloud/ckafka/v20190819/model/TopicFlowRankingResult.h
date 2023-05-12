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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKINGRESULT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKINGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/TopicFlowRanking.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerGroupSpeed.h>
#include <tencentcloud/ckafka/v20190819/model/TopicMessageHeapRanking.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * topic 生产消息数据，消费者数据
                */
                class TopicFlowRankingResult : public AbstractModel
                {
                public:
                    TopicFlowRankingResult();
                    ~TopicFlowRankingResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic 流量数组
                     * @return TopicFlow Topic 流量数组
                     */
                    std::vector<TopicFlowRanking> GetTopicFlow() const;

                    /**
                     * 设置Topic 流量数组
                     * @param TopicFlow Topic 流量数组
                     */
                    void SetTopicFlow(const std::vector<TopicFlowRanking>& _topicFlow);

                    /**
                     * 判断参数 TopicFlow 是否已赋值
                     * @return TopicFlow 是否已赋值
                     */
                    bool TopicFlowHasBeenSet() const;

                    /**
                     * 获取消费者组消费速度排行速度
                     * @return ConsumeSpeed 消费者组消费速度排行速度
                     */
                    std::vector<ConsumerGroupSpeed> GetConsumeSpeed() const;

                    /**
                     * 设置消费者组消费速度排行速度
                     * @param ConsumeSpeed 消费者组消费速度排行速度
                     */
                    void SetConsumeSpeed(const std::vector<ConsumerGroupSpeed>& _consumeSpeed);

                    /**
                     * 判断参数 ConsumeSpeed 是否已赋值
                     * @return ConsumeSpeed 是否已赋值
                     */
                    bool ConsumeSpeedHasBeenSet() const;

                    /**
                     * 获取Topic 消息堆积/占用磁盘排行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicMessageHeap Topic 消息堆积/占用磁盘排行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopicMessageHeapRanking> GetTopicMessageHeap() const;

                    /**
                     * 设置Topic 消息堆积/占用磁盘排行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicMessageHeap Topic 消息堆积/占用磁盘排行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicMessageHeap(const std::vector<TopicMessageHeapRanking>& _topicMessageHeap);

                    /**
                     * 判断参数 TopicMessageHeap 是否已赋值
                     * @return TopicMessageHeap 是否已赋值
                     */
                    bool TopicMessageHeapHasBeenSet() const;

                private:

                    /**
                     * Topic 流量数组
                     */
                    std::vector<TopicFlowRanking> m_topicFlow;
                    bool m_topicFlowHasBeenSet;

                    /**
                     * 消费者组消费速度排行速度
                     */
                    std::vector<ConsumerGroupSpeed> m_consumeSpeed;
                    bool m_consumeSpeedHasBeenSet;

                    /**
                     * Topic 消息堆积/占用磁盘排行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TopicMessageHeapRanking> m_topicMessageHeap;
                    bool m_topicMessageHeapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICFLOWRANKINGRESULT_H_
