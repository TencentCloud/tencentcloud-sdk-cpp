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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PARAMCREATEDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PARAMCREATEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 1
                */
                class ParamCreateDTO : public AbstractModel
                {
                public:
                    ParamCreateDTO();
                    ~ParamCreateDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamName 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramName 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 默认值
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
                     * 获取参数类型，string/datetime/number
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamType 参数类型，string/datetime/number
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型，string/datetime/number
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramType 参数类型，string/datetime/number
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取格式化类型，yyyy-MM-dd HH:mm:ss.SSS（只有时间必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FormatRule 格式化类型，yyyy-MM-dd HH:mm:ss.SSS（只有时间必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormatRule() const;

                    /**
                     * 设置格式化类型，yyyy-MM-dd HH:mm:ss.SSS（只有时间必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _formatRule 格式化类型，yyyy-MM-dd HH:mm:ss.SSS（只有时间必填）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormatRule(const std::string& _formatRule);

                    /**
                     * 判断参数 FormatRule 是否已赋值
                     * @return FormatRule 是否已赋值
                     * 
                     */
                    bool FormatRuleHasBeenSet() const;

                    /**
                     * 获取复杂类型，格式化的另一种表达，例如YYYY-MM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComplexType 复杂类型，格式化的另一种表达，例如YYYY-MM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComplexType() const;

                    /**
                     * 设置复杂类型，格式化的另一种表达，例如YYYY-MM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _complexType 复杂类型，格式化的另一种表达，例如YYYY-MM
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComplexType(const std::string& _complexType);

                    /**
                     * 判断参数 ComplexType 是否已赋值
                     * @return ComplexType 是否已赋值
                     * 
                     */
                    bool ComplexTypeHasBeenSet() const;

                    /**
                     * 获取作用域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope 作用域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置作用域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope 作用域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 参数类型，string/datetime/number
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 格式化类型，yyyy-MM-dd HH:mm:ss.SSS（只有时间必填）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_formatRule;
                    bool m_formatRuleHasBeenSet;

                    /**
                     * 复杂类型，格式化的另一种表达，例如YYYY-MM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_complexType;
                    bool m_complexTypeHasBeenSet;

                    /**
                     * 作用域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PARAMCREATEDTO_H_
