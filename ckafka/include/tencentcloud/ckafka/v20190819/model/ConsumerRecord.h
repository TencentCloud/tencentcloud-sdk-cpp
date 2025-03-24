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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERRECORD_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 消息记录
                */
                class ConsumerRecord : public AbstractModel
                {
                public:
                    ConsumerRecord();
                    ~ConsumerRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名
                     * @return Topic 主题名
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名
                     * @param _topic 主题名
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
                     * 获取分区id
                     * @return Partition 分区id
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置分区id
                     * @param _partition 分区id
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取位点
                     * @return Offset 位点
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置位点
                     * @param _offset 位点
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取消息value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 消息value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置消息value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 消息value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取消息时间戳
                     * @return Timestamp 消息时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置消息时间戳
                     * @param _timestamp 消息时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取消息headers
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers 消息headers
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置消息headers
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers 消息headers
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::string& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 主题名
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 分区id
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 位点
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 消息key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 消息value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 消息时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 消息headers
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERRECORD_H_
