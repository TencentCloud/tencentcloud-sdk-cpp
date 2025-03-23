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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_RECORDMAPPING_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_RECORDMAPPING_H_

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
                * record 与数据库表的映射关系
                */
                class RecordMapping : public AbstractModel
                {
                public:
                    RecordMapping();
                    ~RecordMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息的 key 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonKey 消息的 key 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJsonKey() const;

                    /**
                     * 设置消息的 key 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jsonKey 消息的 key 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJsonKey(const std::string& _jsonKey);

                    /**
                     * 判断参数 JsonKey 是否已赋值
                     * @return JsonKey 是否已赋值
                     * 
                     */
                    bool JsonKeyHasBeenSet() const;

                    /**
                     * 获取消息类型
                     * @return Type 消息类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置消息类型
                     * @param _type 消息类型
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
                     * 获取消息是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowNull 消息是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAllowNull() const;

                    /**
                     * 设置消息是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowNull 消息是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowNull(const bool& _allowNull);

                    /**
                     * 判断参数 AllowNull 是否已赋值
                     * @return AllowNull 是否已赋值
                     * 
                     */
                    bool AllowNullHasBeenSet() const;

                    /**
                     * 获取对应映射列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnName 对应映射列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置对应映射列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnName 对应映射列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取数据库表额外字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 数据库表额外字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置数据库表额外字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 数据库表额外字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取当前列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnSize 当前列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnSize() const;

                    /**
                     * 设置当前列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnSize 当前列大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnSize(const std::string& _columnSize);

                    /**
                     * 判断参数 ColumnSize 是否已赋值
                     * @return ColumnSize 是否已赋值
                     * 
                     */
                    bool ColumnSizeHasBeenSet() const;

                    /**
                     * 获取当前列精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DecimalDigits 当前列精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDecimalDigits() const;

                    /**
                     * 设置当前列精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _decimalDigits 当前列精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDecimalDigits(const std::string& _decimalDigits);

                    /**
                     * 判断参数 DecimalDigits 是否已赋值
                     * @return DecimalDigits 是否已赋值
                     * 
                     */
                    bool DecimalDigitsHasBeenSet() const;

                    /**
                     * 获取是否为自增列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoIncrement 是否为自增列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoIncrement() const;

                    /**
                     * 设置是否为自增列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoIncrement 是否为自增列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoIncrement(const bool& _autoIncrement);

                    /**
                     * 判断参数 AutoIncrement 是否已赋值
                     * @return AutoIncrement 是否已赋值
                     * 
                     */
                    bool AutoIncrementHasBeenSet() const;

                    /**
                     * 获取数据库表默认参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 数据库表默认参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置数据库表默认参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 数据库表默认参数
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

                private:

                    /**
                     * 消息的 key 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jsonKey;
                    bool m_jsonKeyHasBeenSet;

                    /**
                     * 消息类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 消息是否允许为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_allowNull;
                    bool m_allowNullHasBeenSet;

                    /**
                     * 对应映射列名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 数据库表额外字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 当前列大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnSize;
                    bool m_columnSizeHasBeenSet;

                    /**
                     * 当前列精度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_decimalDigits;
                    bool m_decimalDigitsHasBeenSet;

                    /**
                     * 是否为自增列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoIncrement;
                    bool m_autoIncrementHasBeenSet;

                    /**
                     * 数据库表默认参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_RECORDMAPPING_H_
