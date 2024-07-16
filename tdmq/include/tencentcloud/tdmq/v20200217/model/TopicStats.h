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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPICSTATS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPICSTATS_H_

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
                * Topic状态
                */
                class TopicStats : public AbstractModel
                {
                public:
                    TopicStats();
                    ~TopicStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属Broker节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerName 所属Broker节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerName() const;

                    /**
                     * 设置所属Broker节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerName 所属Broker节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerName(const std::string& _brokerName);

                    /**
                     * 判断参数 BrokerName 是否已赋值
                     * @return BrokerName 是否已赋值
                     * 
                     */
                    bool BrokerNameHasBeenSet() const;

                    /**
                     * 获取队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueId 队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQueueId() const;

                    /**
                     * 设置队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueId 队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueId(const int64_t& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取最小位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinOffset 最小位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinOffset() const;

                    /**
                     * 设置最小位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minOffset 最小位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinOffset(const int64_t& _minOffset);

                    /**
                     * 判断参数 MinOffset 是否已赋值
                     * @return MinOffset 是否已赋值
                     * 
                     */
                    bool MinOffsetHasBeenSet() const;

                    /**
                     * 获取最大位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxOffset 最大位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxOffset() const;

                    /**
                     * 设置最大位点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxOffset 最大位点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxOffset(const int64_t& _maxOffset);

                    /**
                     * 判断参数 MaxOffset 是否已赋值
                     * @return MaxOffset 是否已赋值
                     * 
                     */
                    bool MaxOffsetHasBeenSet() const;

                    /**
                     * 获取消息条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageCount 消息条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMessageCount() const;

                    /**
                     * 设置消息条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageCount 消息条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageCount(const int64_t& _messageCount);

                    /**
                     * 判断参数 MessageCount 是否已赋值
                     * @return MessageCount 是否已赋值
                     * 
                     */
                    bool MessageCountHasBeenSet() const;

                    /**
                     * 获取消息最后写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTimestamp 消息最后写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastUpdateTimestamp() const;

                    /**
                     * 设置消息最后写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTimestamp 消息最后写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTimestamp(const int64_t& _lastUpdateTimestamp);

                    /**
                     * 判断参数 LastUpdateTimestamp 是否已赋值
                     * @return LastUpdateTimestamp 是否已赋值
                     * 
                     */
                    bool LastUpdateTimestampHasBeenSet() const;

                private:

                    /**
                     * 所属Broker节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerName;
                    bool m_brokerNameHasBeenSet;

                    /**
                     * 队列编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * 最小位点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minOffset;
                    bool m_minOffsetHasBeenSet;

                    /**
                     * 最大位点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxOffset;
                    bool m_maxOffsetHasBeenSet;

                    /**
                     * 消息条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                    /**
                     * 消息最后写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTimestamp;
                    bool m_lastUpdateTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPICSTATS_H_
