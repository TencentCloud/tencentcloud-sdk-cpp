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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPQUEUEDETAIL_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPQUEUEDETAIL_H_

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
                * AMQP 队列信息
                */
                class AMQPQueueDetail : public AbstractModel
                {
                public:
                    AMQPQueueDetail();
                    ~AMQPQueueDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queue名称
                     * @return Name Queue名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置Queue名称
                     * @param Name Queue名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取被绑定数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestBindedNum 被绑定数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDestBindedNum() const;

                    /**
                     * 设置被绑定数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DestBindedNum 被绑定数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDestBindedNum(const uint64_t& _destBindedNum);

                    /**
                     * 判断参数 DestBindedNum 是否已赋值
                     * @return DestBindedNum 是否已赋值
                     */
                    bool DestBindedNumHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取在线消费者数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlineConsumerNum 在线消费者数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOnlineConsumerNum() const;

                    /**
                     * 设置在线消费者数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OnlineConsumerNum 在线消费者数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOnlineConsumerNum(const uint64_t& _onlineConsumerNum);

                    /**
                     * 判断参数 OnlineConsumerNum 是否已赋值
                     * @return OnlineConsumerNum 是否已赋值
                     */
                    bool OnlineConsumerNumHasBeenSet() const;

                    /**
                     * 获取每秒钟的事务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tps 每秒钟的事务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTps() const;

                    /**
                     * 设置每秒钟的事务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tps 每秒钟的事务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTps(const uint64_t& _tps);

                    /**
                     * 判断参数 Tps 是否已赋值
                     * @return Tps 是否已赋值
                     */
                    bool TpsHasBeenSet() const;

                    /**
                     * 获取消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccumulativeMsgNum 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAccumulativeMsgNum() const;

                    /**
                     * 设置消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccumulativeMsgNum 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccumulativeMsgNum(const uint64_t& _accumulativeMsgNum);

                    /**
                     * 判断参数 AccumulativeMsgNum 是否已赋值
                     * @return AccumulativeMsgNum 是否已赋值
                     */
                    bool AccumulativeMsgNumHasBeenSet() const;

                    /**
                     * 获取是否自动删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoDelete 是否自动删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置是否自动删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoDelete 是否自动删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取死信交换机
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterExchange 死信交换机
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 设置死信交换机
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterExchange 死信交换机
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterExchange(const std::string& _deadLetterExchange);

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取死信交换机路由键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterRoutingKey 死信交换机路由键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 设置死信交换机路由键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeadLetterRoutingKey 死信交换机路由键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadLetterRoutingKey(const std::string& _deadLetterRoutingKey);

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                    /**
                     * 获取Queue对应的Topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName Queue对应的Topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Queue对应的Topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicName Queue对应的Topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * Queue名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 被绑定数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_destBindedNum;
                    bool m_destBindedNumHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 在线消费者数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_onlineConsumerNum;
                    bool m_onlineConsumerNumHasBeenSet;

                    /**
                     * 每秒钟的事务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tps;
                    bool m_tpsHasBeenSet;

                    /**
                     * 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_accumulativeMsgNum;
                    bool m_accumulativeMsgNumHasBeenSet;

                    /**
                     * 是否自动删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * 死信交换机
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * 死信交换机路由键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                    /**
                     * Queue对应的Topic名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPQUEUEDETAIL_H_
