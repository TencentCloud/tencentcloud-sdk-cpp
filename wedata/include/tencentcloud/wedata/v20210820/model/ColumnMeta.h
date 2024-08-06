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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNMETA_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Pair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 列的元数据
                */
                class ColumnMeta : public AbstractModel
                {
                public:
                    ColumnMeta();
                    ~ColumnMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameEn 字段英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置字段英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameEn 字段英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                    /**
                     * 获取字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameCn 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameCn() const;

                    /**
                     * 设置字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameCn 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameCn(const std::string& _nameCn);

                    /**
                     * 判断参数 NameCn 是否已赋值
                     * @return NameCn 是否已赋值
                     * 
                     */
                    bool NameCnHasBeenSet() const;

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
                     * 获取字段序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 字段序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置字段序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 字段序号
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
                     * 获取字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 字段名
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
                     * 获取HBase列簇属性集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnFamiliesFieldSet HBase列簇属性集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Pair> GetColumnFamiliesFieldSet() const;

                    /**
                     * 设置HBase列簇属性集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnFamiliesFieldSet HBase列簇属性集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnFamiliesFieldSet(const std::vector<Pair>& _columnFamiliesFieldSet);

                    /**
                     * 判断参数 ColumnFamiliesFieldSet 是否已赋值
                     * @return ColumnFamiliesFieldSet 是否已赋值
                     * 
                     */
                    bool ColumnFamiliesFieldSetHasBeenSet() const;

                    /**
                     * 获取对应码表字典ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DictionaryId 对应码表字典ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDictionaryId() const;

                    /**
                     * 设置对应码表字典ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dictionaryId 对应码表字典ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDictionaryId(const std::string& _dictionaryId);

                    /**
                     * 判断参数 DictionaryId 是否已赋值
                     * @return DictionaryId 是否已赋值
                     * 
                     */
                    bool DictionaryIdHasBeenSet() const;

                    /**
                     * 获取对应码表字典名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DictionaryName 对应码表字典名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDictionaryName() const;

                    /**
                     * 设置对应码表字典名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dictionaryName 对应码表字典名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDictionaryName(const std::string& _dictionaryName);

                    /**
                     * 判断参数 DictionaryName 是否已赋值
                     * @return DictionaryName 是否已赋值
                     * 
                     */
                    bool DictionaryNameHasBeenSet() const;

                    /**
                     * 获取安全等级：名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LevelName 安全等级：名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置安全等级：名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _levelName 安全等级：名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取安全等级：值范围1-10
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LevelRank 安全等级：值范围1-10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevelRank() const;

                    /**
                     * 设置安全等级：值范围1-10
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _levelRank 安全等级：值范围1-10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevelRank(const int64_t& _levelRank);

                    /**
                     * 判断参数 LevelRank 是否已赋值
                     * @return LevelRank 是否已赋值
                     * 
                     */
                    bool LevelRankHasBeenSet() const;

                    /**
                     * 获取influxdb字段类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InfluxCategory influxdb字段类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInfluxCategory() const;

                    /**
                     * 设置influxdb字段类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _influxCategory influxdb字段类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInfluxCategory(const std::string& _influxCategory);

                    /**
                     * 判断参数 InfluxCategory 是否已赋值
                     * @return InfluxCategory 是否已赋值
                     * 
                     */
                    bool InfluxCategoryHasBeenSet() const;

                private:

                    /**
                     * 字段英文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                    /**
                     * 字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameCn;
                    bool m_nameCnHasBeenSet;

                    /**
                     * 字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 字段序号
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
                     * 字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * HBase列簇属性集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Pair> m_columnFamiliesFieldSet;
                    bool m_columnFamiliesFieldSetHasBeenSet;

                    /**
                     * 对应码表字典ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dictionaryId;
                    bool m_dictionaryIdHasBeenSet;

                    /**
                     * 对应码表字典名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dictionaryName;
                    bool m_dictionaryNameHasBeenSet;

                    /**
                     * 安全等级：名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * 安全等级：值范围1-10
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_levelRank;
                    bool m_levelRankHasBeenSet;

                    /**
                     * influxdb字段类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_influxCategory;
                    bool m_influxCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNMETA_H_
