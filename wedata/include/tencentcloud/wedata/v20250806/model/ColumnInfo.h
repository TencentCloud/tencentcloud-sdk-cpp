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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_COLUMNINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_COLUMNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ColumnInfo
                */
                class ColumnInfo : public AbstractModel
                {
                public:
                    ColumnInfo();
                    ~ColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取字段名称
                     * @return Name 字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
                     * @param _name 字段名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取字段长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Length 字段长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置字段长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _length 字段长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取字段的顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 字段的顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置字段的顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 字段的顺序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取是否为分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPartition 是否为分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPartition() const;

                    /**
                     * 设置是否为分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPartition 是否为分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPartition(const bool& _isPartition);

                    /**
                     * 判断参数 IsPartition 是否已赋值
                     * @return IsPartition 是否已赋值
                     * 
                     */
                    bool IsPartitionHasBeenSet() const;

                private:

                    /**
                     * 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 字段的顺序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 是否为分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPartition;
                    bool m_isPartitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_COLUMNINFO_H_
