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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TRAINPARAM_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TRAINPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 训练超参
                */
                class TrainParam : public AbstractModel
                {
                public:
                    TrainParam();
                    ~TrainParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 参数名
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
                     * 获取默认参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 默认参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 默认参数值
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
                     * 获取参数注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 参数注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置参数注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 参数注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 参数类型
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
                     * 获取是否必选
                     * @return Required 是否必选
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置是否必选
                     * @param _required 是否必选
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取参数值
                     * @return Value 参数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置参数值
                     * @param _value 参数值
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
                     * 获取参数范围
                     * @return Range 参数范围
                     * 
                     */
                    std::vector<std::string> GetRange() const;

                    /**
                     * 设置参数范围
                     * @param _range 参数范围
                     * 
                     */
                    void SetRange(const std::vector<std::string>& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取参数选项
                     * @return Enum 参数选项
                     * 
                     */
                    std::vector<std::string> GetEnum() const;

                    /**
                     * 设置参数选项
                     * @param _enum 参数选项
                     * 
                     */
                    void SetEnum(const std::vector<std::string>& _enum);

                    /**
                     * 判断参数 Enum 是否已赋值
                     * @return Enum 是否已赋值
                     * 
                     */
                    bool EnumHasBeenSet() const;

                private:

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 默认参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 参数注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否必选
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 参数范围
                     */
                    std::vector<std::string> m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 参数选项
                     */
                    std::vector<std::string> m_enum;
                    bool m_enumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TRAINPARAM_H_
