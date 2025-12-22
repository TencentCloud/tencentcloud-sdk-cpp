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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICPARTITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Partitions
                */
                class TopicPartitionInfo : public AbstractModel
                {
                public:
                    TopicPartitionInfo();
                    ~TopicPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicID 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicID() const;

                    /**
                     * 设置日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicID 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicID(const std::string& _topicID);

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     * 
                     */
                    bool TopicIDHasBeenSet() const;

                    /**
                     * 获取分区id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 分区id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetPartitions() const;

                    /**
                     * 设置分区id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 分区id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const std::vector<uint64_t>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                private:

                    /**
                     * 日志主题ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * 分区id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_partitions;
                    bool m_partitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICPARTITIONINFO_H_
