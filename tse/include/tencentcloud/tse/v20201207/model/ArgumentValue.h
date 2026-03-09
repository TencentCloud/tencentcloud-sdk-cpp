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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ARGUMENTVALUE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ARGUMENTVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 被调服务配置表达式
                */
                class ArgumentValue : public AbstractModel
                {
                public:
                    ArgumentValue();
                    ~ArgumentValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 表达式类型
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
                     * 获取匹配值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 匹配值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置匹配值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 匹配值
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
                     * 获取值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueType 值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueType 值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * 表达式类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 匹配值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 值类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ARGUMENTVALUE_H_
