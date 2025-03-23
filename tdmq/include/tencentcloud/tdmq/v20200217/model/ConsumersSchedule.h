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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_

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
                * 消费进度详情
                */
                class ConsumersSchedule : public AbstractModel
                {
                public:
                    ConsumersSchedule();
                    ~ConsumersSchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 当前分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPartitions() const;

                    /**
                     * 设置当前分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 当前分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const uint64_t& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NumberOfEntries 消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNumberOfEntries() const;

                    /**
                     * 设置消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _numberOfEntries 消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumberOfEntries(const uint64_t& _numberOfEntries);

                    /**
                     * 判断参数 NumberOfEntries 是否已赋值
                     * @return NumberOfEntries 是否已赋值
                     * 
                     */
                    bool NumberOfEntriesHasBeenSet() const;

                    /**
                     * 获取消息积压数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgBacklog 消息积压数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMsgBacklog() const;

                    /**
                     * 设置消息积压数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgBacklog 消息积压数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgBacklog(const uint64_t& _msgBacklog);

                    /**
                     * 判断参数 MsgBacklog 是否已赋值
                     * @return MsgBacklog 是否已赋值
                     * 
                     */
                    bool MsgBacklogHasBeenSet() const;

                    /**
                     * 获取消费者每秒分发消息的数量之和。
                     * @return MsgRateOut 消费者每秒分发消息的数量之和。
                     * 
                     */
                    std::string GetMsgRateOut() const;

                    /**
                     * 设置消费者每秒分发消息的数量之和。
                     * @param _msgRateOut 消费者每秒分发消息的数量之和。
                     * 
                     */
                    void SetMsgRateOut(const std::string& _msgRateOut);

                    /**
                     * 判断参数 MsgRateOut 是否已赋值
                     * @return MsgRateOut 是否已赋值
                     * 
                     */
                    bool MsgRateOutHasBeenSet() const;

                    /**
                     * 获取消费者每秒消息的byte。
                     * @return MsgThroughputOut 消费者每秒消息的byte。
                     * 
                     */
                    std::string GetMsgThroughputOut() const;

                    /**
                     * 设置消费者每秒消息的byte。
                     * @param _msgThroughputOut 消费者每秒消息的byte。
                     * 
                     */
                    void SetMsgThroughputOut(const std::string& _msgThroughputOut);

                    /**
                     * 判断参数 MsgThroughputOut 是否已赋值
                     * @return MsgThroughputOut 是否已赋值
                     * 
                     */
                    bool MsgThroughputOutHasBeenSet() const;

                    /**
                     * 获取超时丢弃比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRateExpired 超时丢弃比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsgRateExpired() const;

                    /**
                     * 设置超时丢弃比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msgRateExpired 超时丢弃比例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsgRateExpired(const std::string& _msgRateExpired);

                    /**
                     * 判断参数 MsgRateExpired 是否已赋值
                     * @return MsgRateExpired 是否已赋值
                     * 
                     */
                    bool MsgRateExpiredHasBeenSet() const;

                private:

                    /**
                     * 当前分区id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 消息数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_numberOfEntries;
                    bool m_numberOfEntriesHasBeenSet;

                    /**
                     * 消息积压数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgBacklog;
                    bool m_msgBacklogHasBeenSet;

                    /**
                     * 消费者每秒分发消息的数量之和。
                     */
                    std::string m_msgRateOut;
                    bool m_msgRateOutHasBeenSet;

                    /**
                     * 消费者每秒消息的byte。
                     */
                    std::string m_msgThroughputOut;
                    bool m_msgThroughputOutHasBeenSet;

                    /**
                     * 超时丢弃比例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msgRateExpired;
                    bool m_msgRateExpiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERSSCHEDULE_H_
