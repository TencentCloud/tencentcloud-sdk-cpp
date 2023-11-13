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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCOLUMNDOCVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCOLUMNDOCVO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 表字段信息
                */
                class SearchColumnDocVO : public AbstractModel
                {
                public:
                    SearchColumnDocVO();
                    ~SearchColumnDocVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 字段名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChineseName 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chineseName 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChineseName(const std::string& _chineseName);

                    /**
                     * 判断参数 ChineseName 是否已赋值
                     * @return ChineseName 是否已赋值
                     * 
                     */
                    bool ChineseNameHasBeenSet() const;

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
                     * 获取字段类型长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Length 字段类型长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置字段类型长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _length 字段类型长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取字段类型精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Precision 字段类型精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPrecision() const;

                    /**
                     * 设置字段类型精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _precision 字段类型精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrecision(const uint64_t& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取字段类型scale
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scale 字段类型scale
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置字段类型scale
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scale 字段类型scale
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

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

                    /**
                     * 获取列上的索引类型 主键: PRI,唯一索引: UNI,一般索引: MUL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnKey 列上的索引类型 主键: PRI,唯一索引: UNI,一般索引: MUL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnKey() const;

                    /**
                     * 设置列上的索引类型 主键: PRI,唯一索引: UNI,一般索引: MUL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnKey 列上的索引类型 主键: PRI,唯一索引: UNI,一般索引: MUL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnKey(const std::string& _columnKey);

                    /**
                     * 判断参数 ColumnKey 是否已赋值
                     * @return ColumnKey 是否已赋值
                     * 
                     */
                    bool ColumnKeyHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段类型长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 字段类型精度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * 字段类型scale
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 字段默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

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

                    /**
                     * 列上的索引类型 主键: PRI,唯一索引: UNI,一般索引: MUL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnKey;
                    bool m_columnKeyHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCOLUMNDOCVO_H_
