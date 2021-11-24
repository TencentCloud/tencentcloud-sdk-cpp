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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERRECENTSTATS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERRECENTSTATS_H_

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
                * AMQP集群近期使用量
                */
                class AMQPClusterRecentStats : public AbstractModel
                {
                public:
                    AMQPClusterRecentStats();
                    ~AMQPClusterRecentStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queue数量
                     * @return QueueNum Queue数量
                     */
                    uint64_t GetQueueNum() const;

                    /**
                     * 设置Queue数量
                     * @param QueueNum Queue数量
                     */
                    void SetQueueNum(const uint64_t& _queueNum);

                    /**
                     * 判断参数 QueueNum 是否已赋值
                     * @return QueueNum 是否已赋值
                     */
                    bool QueueNumHasBeenSet() const;

                    /**
                     * 获取消息生产数
                     * @return ProducedMsgNum 消息生产数
                     */
                    uint64_t GetProducedMsgNum() const;

                    /**
                     * 设置消息生产数
                     * @param ProducedMsgNum 消息生产数
                     */
                    void SetProducedMsgNum(const uint64_t& _producedMsgNum);

                    /**
                     * 判断参数 ProducedMsgNum 是否已赋值
                     * @return ProducedMsgNum 是否已赋值
                     */
                    bool ProducedMsgNumHasBeenSet() const;

                    /**
                     * 获取消息堆积数
                     * @return AccumulativeMsgNum 消息堆积数
                     */
                    uint64_t GetAccumulativeMsgNum() const;

                    /**
                     * 设置消息堆积数
                     * @param AccumulativeMsgNum 消息堆积数
                     */
                    void SetAccumulativeMsgNum(const uint64_t& _accumulativeMsgNum);

                    /**
                     * 判断参数 AccumulativeMsgNum 是否已赋值
                     * @return AccumulativeMsgNum 是否已赋值
                     */
                    bool AccumulativeMsgNumHasBeenSet() const;

                    /**
                     * 获取Exchange数量
                     * @return ExchangeNum Exchange数量
                     */
                    uint64_t GetExchangeNum() const;

                    /**
                     * 设置Exchange数量
                     * @param ExchangeNum Exchange数量
                     */
                    void SetExchangeNum(const uint64_t& _exchangeNum);

                    /**
                     * 判断参数 ExchangeNum 是否已赋值
                     * @return ExchangeNum 是否已赋值
                     */
                    bool ExchangeNumHasBeenSet() const;

                private:

                    /**
                     * Queue数量
                     */
                    uint64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * 消息生产数
                     */
                    uint64_t m_producedMsgNum;
                    bool m_producedMsgNumHasBeenSet;

                    /**
                     * 消息堆积数
                     */
                    uint64_t m_accumulativeMsgNum;
                    bool m_accumulativeMsgNumHasBeenSet;

                    /**
                     * Exchange数量
                     */
                    uint64_t m_exchangeNum;
                    bool m_exchangeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERRECENTSTATS_H_
