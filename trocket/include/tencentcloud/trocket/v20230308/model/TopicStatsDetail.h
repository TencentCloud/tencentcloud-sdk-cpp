/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICSTATSDETAIL_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICSTATSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 主题队列级别的消费详情
                */
                class TopicStatsDetail : public AbstractModel
                {
                public:
                    TopicStatsDetail();
                    ~TopicStatsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Broker节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerName <p>Broker节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerName() const;

                    /**
                     * 设置<p>Broker节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerName <p>Broker节点名称</p>
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
                     * 获取<p>队列编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueId <p>队列编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQueueId() const;

                    /**
                     * 设置<p>队列编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueId <p>队列编号</p>
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
                     * 获取<p>生产消息位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerOffset <p>生产消息位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBrokerOffset() const;

                    /**
                     * 设置<p>生产消息位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerOffset <p>生产消息位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrokerOffset(const int64_t& _brokerOffset);

                    /**
                     * 判断参数 BrokerOffset 是否已赋值
                     * @return BrokerOffset 是否已赋值
                     * 
                     */
                    bool BrokerOffsetHasBeenSet() const;

                    /**
                     * 获取<p>最新消费位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommitOffset <p>最新消费位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCommitOffset() const;

                    /**
                     * 设置<p>最新消费位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commitOffset <p>最新消费位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommitOffset(const int64_t& _commitOffset);

                    /**
                     * 判断参数 CommitOffset 是否已赋值
                     * @return CommitOffset 是否已赋值
                     * 
                     */
                    bool CommitOffsetHasBeenSet() const;

                    /**
                     * 获取<p>堆积总数</p><p>单位：条</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageCount <p>堆积总数</p><p>单位：条</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMessageCount() const;

                    /**
                     * 设置<p>堆积总数</p><p>单位：条</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageCount <p>堆积总数</p><p>单位：条</p>
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
                     * 获取<p>最后消费时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTimestamp <p>最后消费时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastUpdateTimestamp() const;

                    /**
                     * 设置<p>最后消费时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTimestamp <p>最后消费时间</p><p>单位：毫秒</p>
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
                     * <p>Broker节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerName;
                    bool m_brokerNameHasBeenSet;

                    /**
                     * <p>队列编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * <p>生产消息位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_brokerOffset;
                    bool m_brokerOffsetHasBeenSet;

                    /**
                     * <p>最新消费位点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_commitOffset;
                    bool m_commitOffsetHasBeenSet;

                    /**
                     * <p>堆积总数</p><p>单位：条</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                    /**
                     * <p>最后消费时间</p><p>单位：毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTimestamp;
                    bool m_lastUpdateTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICSTATSDETAIL_H_
