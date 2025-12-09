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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMTABLELINK_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMTABLELINK_H_

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
                * 维度关联单个表字段
                */
                class DimTableLink : public AbstractModel
                {
                public:
                    DimTableLink();
                    ~DimTableLink() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度主键KEY对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 维度主键KEY对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置维度主键KEY对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 维度主键KEY对应的表列
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
                     * 获取维度值对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 维度值对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置维度值对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 维度值对应的表列
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
                     * 获取表 GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGuid 表 GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGuid() const;

                    /**
                     * 设置表 GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGuid 表 GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGuid(const std::string& _tableGuid);

                    /**
                     * 判断参数 TableGuid 是否已赋值
                     * @return TableGuid 是否已赋值
                     * 
                     */
                    bool TableGuidHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                private:

                    /**
                     * 维度主键KEY对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 维度值对应的表列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 表 GUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGuid;
                    bool m_tableGuidHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMTABLELINK_H_
