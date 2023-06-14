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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_RISKFIELDSDESC_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_RISKFIELDSDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/KeyValue.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * 风险实例字段描述
                */
                class RiskFieldsDesc : public AbstractModel
                {
                public:
                    RiskFieldsDesc();
                    ~RiskFieldsDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段ID
                     * @return Field 字段ID
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置字段ID
                     * @param _field 字段ID
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取字段名称
                     * @return FieldName 字段名称
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置字段名称
                     * @param _fieldName 字段名称
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取字段类型, 
string: 字符串类型，例如"aa"
int: 整形，例如 111
stringSlice : 字符串数组类型，例如["a", "b"]
tags: 标签类型, 例如: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * @return FieldType 字段类型, 
string: 字符串类型，例如"aa"
int: 整形，例如 111
stringSlice : 字符串数组类型，例如["a", "b"]
tags: 标签类型, 例如: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置字段类型, 
string: 字符串类型，例如"aa"
int: 整形，例如 111
stringSlice : 字符串数组类型，例如["a", "b"]
tags: 标签类型, 例如: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * @param _fieldType 字段类型, 
string: 字符串类型，例如"aa"
int: 整形，例如 111
stringSlice : 字符串数组类型，例如["a", "b"]
tags: 标签类型, 例如: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取字段值对应字典
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldDict 字段值对应字典
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValue> GetFieldDict() const;

                    /**
                     * 设置字段值对应字典
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldDict 字段值对应字典
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldDict(const std::vector<KeyValue>& _fieldDict);

                    /**
                     * 判断参数 FieldDict 是否已赋值
                     * @return FieldDict 是否已赋值
                     * 
                     */
                    bool FieldDictHasBeenSet() const;

                private:

                    /**
                     * 字段ID
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 字段名称
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 字段类型, 
string: 字符串类型，例如"aa"
int: 整形，例如 111
stringSlice : 字符串数组类型，例如["a", "b"]
tags: 标签类型, 例如: [{"Key":"kkk","Value":"vvv"},{"Key":"kkk2","Value":"vvv2"}]
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * 字段值对应字典
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValue> m_fieldDict;
                    bool m_fieldDictHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_RISKFIELDSDESC_H_
