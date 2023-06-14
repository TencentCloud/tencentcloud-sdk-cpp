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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERRECENTSTATS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERRECENTSTATS_H_

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
                * RocketMQ近期使用量
                */
                class RocketMQClusterRecentStats : public AbstractModel
                {
                public:
                    RocketMQClusterRecentStats();
                    ~RocketMQClusterRecentStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic数量
                     * @return TopicNum Topic数量
                     * 
                     */
                    uint64_t GetTopicNum() const;

                    /**
                     * 设置Topic数量
                     * @param _topicNum Topic数量
                     * 
                     */
                    void SetTopicNum(const uint64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取消息生产数
                     * @return ProducedMsgNum 消息生产数
                     * 
                     */
                    uint64_t GetProducedMsgNum() const;

                    /**
                     * 设置消息生产数
                     * @param _producedMsgNum 消息生产数
                     * 
                     */
                    void SetProducedMsgNum(const uint64_t& _producedMsgNum);

                    /**
                     * 判断参数 ProducedMsgNum 是否已赋值
                     * @return ProducedMsgNum 是否已赋值
                     * 
                     */
                    bool ProducedMsgNumHasBeenSet() const;

                    /**
                     * 获取消息消费数
                     * @return ConsumedMsgNum 消息消费数
                     * 
                     */
                    uint64_t GetConsumedMsgNum() const;

                    /**
                     * 设置消息消费数
                     * @param _consumedMsgNum 消息消费数
                     * 
                     */
                    void SetConsumedMsgNum(const uint64_t& _consumedMsgNum);

                    /**
                     * 判断参数 ConsumedMsgNum 是否已赋值
                     * @return ConsumedMsgNum 是否已赋值
                     * 
                     */
                    bool ConsumedMsgNumHasBeenSet() const;

                    /**
                     * 获取消息堆积数
                     * @return AccumulativeMsgNum 消息堆积数
                     * 
                     */
                    uint64_t GetAccumulativeMsgNum() const;

                    /**
                     * 设置消息堆积数
                     * @param _accumulativeMsgNum 消息堆积数
                     * 
                     */
                    void SetAccumulativeMsgNum(const uint64_t& _accumulativeMsgNum);

                    /**
                     * 判断参数 AccumulativeMsgNum 是否已赋值
                     * @return AccumulativeMsgNum 是否已赋值
                     * 
                     */
                    bool AccumulativeMsgNumHasBeenSet() const;

                private:

                    /**
                     * Topic数量
                     */
                    uint64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 消息生产数
                     */
                    uint64_t m_producedMsgNum;
                    bool m_producedMsgNumHasBeenSet;

                    /**
                     * 消息消费数
                     */
                    uint64_t m_consumedMsgNum;
                    bool m_consumedMsgNumHasBeenSet;

                    /**
                     * 消息堆积数
                     */
                    uint64_t m_accumulativeMsgNum;
                    bool m_accumulativeMsgNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERRECENTSTATS_H_
