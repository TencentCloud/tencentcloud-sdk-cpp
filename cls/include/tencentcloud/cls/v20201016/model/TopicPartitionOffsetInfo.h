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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICPARTITIONOFFSETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICPARTITIONOFFSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/PartitionOffsetInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * TopicPartitionOffsetInfo
                */
                class TopicPartitionOffsetInfo : public AbstractModel
                {
                public:
                    TopicPartitionOffsetInfo();
                    ~TopicPartitionOffsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicID 日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicID() const;

                    /**
                     * 设置日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicID 日志主题id
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
                     * 获取分区点位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionOffsets 分区点位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PartitionOffsetInfo> GetPartitionOffsets() const;

                    /**
                     * 设置分区点位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionOffsets 分区点位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionOffsets(const std::vector<PartitionOffsetInfo>& _partitionOffsets);

                    /**
                     * 判断参数 PartitionOffsets 是否已赋值
                     * @return PartitionOffsets 是否已赋值
                     * 
                     */
                    bool PartitionOffsetsHasBeenSet() const;

                private:

                    /**
                     * 日志主题id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * 分区点位信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PartitionOffsetInfo> m_partitionOffsets;
                    bool m_partitionOffsetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICPARTITIONOFFSETINFO_H_
