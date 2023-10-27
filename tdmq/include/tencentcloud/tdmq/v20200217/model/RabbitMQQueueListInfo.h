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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQQUEUELISTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQQUEUELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQQueueListConsumerDetailInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ队列列表成员信息
                */
                class RabbitMQQueueListInfo : public AbstractModel
                {
                public:
                    RabbitMQQueueListInfo();
                    ~RabbitMQQueueListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取队列名
                     * @return QueueName 队列名
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名
                     * @param _queueName 队列名
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
                     * 获取备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取消费者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerDetail 消费者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RabbitMQQueueListConsumerDetailInfo GetConsumerDetail() const;

                    /**
                     * 设置消费者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerDetail 消费者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerDetail(const RabbitMQQueueListConsumerDetailInfo& _consumerDetail);

                    /**
                     * 判断参数 ConsumerDetail 是否已赋值
                     * @return ConsumerDetail 是否已赋值
                     * 
                     */
                    bool ConsumerDetailHasBeenSet() const;

                    /**
                     * 获取队列类型，取值 "classic"，"quorum"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueType 队列类型，取值 "classic"，"quorum"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置队列类型，取值 "classic"，"quorum"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueType 队列类型，取值 "classic"，"quorum"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueType(const std::string& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageHeapCount 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageHeapCount 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageHeapCount(const int64_t& _messageHeapCount);

                    /**
                     * 判断参数 MessageHeapCount 是否已赋值
                     * @return MessageHeapCount 是否已赋值
                     * 
                     */
                    bool MessageHeapCountHasBeenSet() const;

                    /**
                     * 获取消息生产速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageRateIn 消息生产速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置消息生产速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageRateIn 消息生产速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageRateIn(const double& _messageRateIn);

                    /**
                     * 判断参数 MessageRateIn 是否已赋值
                     * @return MessageRateIn 是否已赋值
                     * 
                     */
                    bool MessageRateInHasBeenSet() const;

                    /**
                     * 获取消息消费速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageRateOut 消息消费速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置消息消费速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageRateOut 消息消费速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageRateOut(const double& _messageRateOut);

                    /**
                     * 判断参数 MessageRateOut 是否已赋值
                     * @return MessageRateOut 是否已赋值
                     * 
                     */
                    bool MessageRateOutHasBeenSet() const;

                private:

                    /**
                     * 队列名
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 备注说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 消费者信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RabbitMQQueueListConsumerDetailInfo m_consumerDetail;
                    bool m_consumerDetailHasBeenSet;

                    /**
                     * 队列类型，取值 "classic"，"quorum"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * 消息堆积数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * 消息生产速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * 消息消费速率，每秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQQUEUELISTINFO_H_
