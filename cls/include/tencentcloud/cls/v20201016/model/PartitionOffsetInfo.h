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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONOFFSETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONOFFSETINFO_H_

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
                * PartitionOffsetInfo
                */
                class PartitionOffsetInfo : public AbstractModel
                {
                public:
                    PartitionOffsetInfo();
                    ~PartitionOffsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionId 分区id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPartitionId() const;

                    /**
                     * 设置分区id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionId 分区id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionId(const uint64_t& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                    /**
                     * 获取offset点位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset offset点位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置offset点位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset offset点位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 分区id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * offset点位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONOFFSETINFO_H_
