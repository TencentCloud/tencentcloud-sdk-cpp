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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_PARTITIONOFFSET_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_PARTITIONOFFSET_H_

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
                * 分区和位移
                */
                class PartitionOffset : public AbstractModel
                {
                public:
                    PartitionOffset();
                    ~PartitionOffset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition,例如"0"或"1"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partition Partition,例如"0"或"1"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置Partition,例如"0"或"1"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Partition Partition,例如"0"或"1"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Offset,例如100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset Offset,例如100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset,例如100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Offset Offset,例如100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Partition,例如"0"或"1"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Offset,例如100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_PARTITIONOFFSET_H_
