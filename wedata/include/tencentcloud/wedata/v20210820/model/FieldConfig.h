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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FIELDCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FIELDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ColumnValueConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 字段变量
                */
                class FieldConfig : public AbstractModel
                {
                public:
                    FieldConfig();
                    ~FieldConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldKey 字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldKey() const;

                    /**
                     * 设置字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldKey 字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldKey(const std::string& _fieldKey);

                    /**
                     * 判断参数 FieldKey 是否已赋值
                     * @return FieldKey 是否已赋值
                     * 
                     */
                    bool FieldKeyHasBeenSet() const;

                    /**
                     * 获取字段值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldValue 字段值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldValue() const;

                    /**
                     * 设置字段值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldValue 字段值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldValue(const std::string& _fieldValue);

                    /**
                     * 判断参数 FieldValue 是否已赋值
                     * @return FieldValue 是否已赋值
                     * 
                     */
                    bool FieldValueHasBeenSet() const;

                    /**
                     * 获取字段值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldDataType 字段值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldDataType() const;

                    /**
                     * 设置字段值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldDataType 字段值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldDataType(const std::string& _fieldDataType);

                    /**
                     * 判断参数 FieldDataType 是否已赋值
                     * @return FieldDataType 是否已赋值
                     * 
                     */
                    bool FieldDataTypeHasBeenSet() const;

                    /**
                     * 获取字段值变量信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueConfig 字段值变量信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ColumnValueConfig GetValueConfig() const;

                    /**
                     * 设置字段值变量信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueConfig 字段值变量信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueConfig(const ColumnValueConfig& _valueConfig);

                    /**
                     * 判断参数 ValueConfig 是否已赋值
                     * @return ValueConfig 是否已赋值
                     * 
                     */
                    bool ValueConfigHasBeenSet() const;

                private:

                    /**
                     * 字段key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldKey;
                    bool m_fieldKeyHasBeenSet;

                    /**
                     * 字段值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldValue;
                    bool m_fieldValueHasBeenSet;

                    /**
                     * 字段值类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldDataType;
                    bool m_fieldDataTypeHasBeenSet;

                    /**
                     * 字段值变量信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ColumnValueConfig m_valueConfig;
                    bool m_valueConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FIELDCONFIG_H_
