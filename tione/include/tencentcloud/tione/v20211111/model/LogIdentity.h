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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_LOGIDENTITY_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_LOGIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 单条日志数据结构
                */
                class LogIdentity : public AbstractModel
                {
                public:
                    LogIdentity();
                    ~LogIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单条日志的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 单条日志的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置单条日志的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 单条日志的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取单条日志的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 单条日志的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置单条日志的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 单条日志的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取这条日志对应的Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodName 这条日志对应的Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置这条日志对应的Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podName 这条日志对应的Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取日志的时间戳（RFC3339格式的时间字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 日志的时间戳（RFC3339格式的时间字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置日志的时间戳（RFC3339格式的时间字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 日志的时间戳（RFC3339格式的时间字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 单条日志的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 单条日志的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 这条日志对应的Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 日志的时间戳（RFC3339格式的时间字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_LOGIDENTITY_H_
