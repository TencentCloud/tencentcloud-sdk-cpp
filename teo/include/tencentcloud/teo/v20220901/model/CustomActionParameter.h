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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 定制配置的单个字段参数内容。
                */
                class CustomActionParameter : public AbstractModel
                {
                public:
                    CustomActionParameter();
                    ~CustomActionParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>定制配置项下各参数字段名称。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Name 获取，如 &quot;Seconds&quot;、&quot;Ports&quot;、&quot;StatusCode&quot;。</p>
                     * @return Name <p>定制配置项下各参数字段名称。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Name 获取，如 &quot;Seconds&quot;、&quot;Ports&quot;、&quot;StatusCode&quot;。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>定制配置项下各参数字段名称。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Name 获取，如 &quot;Seconds&quot;、&quot;Ports&quot;、&quot;StatusCode&quot;。</p>
                     * @param _name <p>定制配置项下各参数字段名称。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Name 获取，如 &quot;Seconds&quot;、&quot;Ports&quot;、&quot;StatusCode&quot;。</p>
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
                     * 获取<p>定制配置项下各参数字段值的类型。</p><p>枚举值：</p><ul><li>String： 字符串类型。</li><li>Integer： 整型类型。</li><li>Float： 浮点数类型。</li><li>Boolean： 布尔类型。</li><li>ArrayOfString： 字符串数组类型。</li><li>ArrayOfInteger： 整型数组类型。</li><li>ArrayOfFloat： 浮点数数组类型。</li></ul><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Type 获取。</p>
                     * @return ValueType <p>定制配置项下各参数字段值的类型。</p><p>枚举值：</p><ul><li>String： 字符串类型。</li><li>Integer： 整型类型。</li><li>Float： 浮点数类型。</li><li>Boolean： 布尔类型。</li><li>ArrayOfString： 字符串数组类型。</li><li>ArrayOfInteger： 整型数组类型。</li><li>ArrayOfFloat： 浮点数数组类型。</li></ul><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Type 获取。</p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>定制配置项下各参数字段值的类型。</p><p>枚举值：</p><ul><li>String： 字符串类型。</li><li>Integer： 整型类型。</li><li>Float： 浮点数类型。</li><li>Boolean： 布尔类型。</li><li>ArrayOfString： 字符串数组类型。</li><li>ArrayOfInteger： 整型数组类型。</li><li>ArrayOfFloat： 浮点数数组类型。</li></ul><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Type 获取。</p>
                     * @param _valueType <p>定制配置项下各参数字段值的类型。</p><p>枚举值：</p><ul><li>String： 字符串类型。</li><li>Integer： 整型类型。</li><li>Float： 浮点数类型。</li><li>Boolean： 布尔类型。</li><li>ArrayOfString： 字符串数组类型。</li><li>ArrayOfInteger： 整型数组类型。</li><li>ArrayOfFloat： 浮点数数组类型。</li></ul><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Type 获取。</p>
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取<p>字符串类型参数值。当 ValueType 为 String 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return StringValue <p>字符串类型参数值。当 ValueType 为 String 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    std::string GetStringValue() const;

                    /**
                     * 设置<p>字符串类型参数值。当 ValueType 为 String 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _stringValue <p>字符串类型参数值。当 ValueType 为 String 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetStringValue(const std::string& _stringValue);

                    /**
                     * 判断参数 StringValue 是否已赋值
                     * @return StringValue 是否已赋值
                     * 
                     */
                    bool StringValueHasBeenSet() const;

                    /**
                     * 获取<p>整型类型参数值。当 ValueType 为 Integer 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return IntegerValue <p>整型类型参数值。当 ValueType 为 Integer 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    int64_t GetIntegerValue() const;

                    /**
                     * 设置<p>整型类型参数值。当 ValueType 为 Integer 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _integerValue <p>整型类型参数值。当 ValueType 为 Integer 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetIntegerValue(const int64_t& _integerValue);

                    /**
                     * 判断参数 IntegerValue 是否已赋值
                     * @return IntegerValue 是否已赋值
                     * 
                     */
                    bool IntegerValueHasBeenSet() const;

                    /**
                     * 获取<p>浮点数类型参数值。当 ValueType 为 Float 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return FloatValue <p>浮点数类型参数值。当 ValueType 为 Float 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    double GetFloatValue() const;

                    /**
                     * 设置<p>浮点数类型参数值。当 ValueType 为 Float 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _floatValue <p>浮点数类型参数值。当 ValueType 为 Float 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetFloatValue(const double& _floatValue);

                    /**
                     * 判断参数 FloatValue 是否已赋值
                     * @return FloatValue 是否已赋值
                     * 
                     */
                    bool FloatValueHasBeenSet() const;

                    /**
                     * 获取<p>布尔类型参数值。当 ValueType 为 Boolean 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return BooleanValue <p>布尔类型参数值。当 ValueType 为 Boolean 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    bool GetBooleanValue() const;

                    /**
                     * 设置<p>布尔类型参数值。当 ValueType 为 Boolean 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _booleanValue <p>布尔类型参数值。当 ValueType 为 Boolean 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetBooleanValue(const bool& _booleanValue);

                    /**
                     * 判断参数 BooleanValue 是否已赋值
                     * @return BooleanValue 是否已赋值
                     * 
                     */
                    bool BooleanValueHasBeenSet() const;

                    /**
                     * 获取<p>字符串数组类型参数值。当 ValueType 为 ArrayOfString 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return StringArrayValue <p>字符串数组类型参数值。当 ValueType 为 ArrayOfString 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    std::vector<std::string> GetStringArrayValue() const;

                    /**
                     * 设置<p>字符串数组类型参数值。当 ValueType 为 ArrayOfString 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _stringArrayValue <p>字符串数组类型参数值。当 ValueType 为 ArrayOfString 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetStringArrayValue(const std::vector<std::string>& _stringArrayValue);

                    /**
                     * 判断参数 StringArrayValue 是否已赋值
                     * @return StringArrayValue 是否已赋值
                     * 
                     */
                    bool StringArrayValueHasBeenSet() const;

                    /**
                     * 获取<p>整型数组类型参数值。当 ValueType 为 ArrayOfInteger 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return IntegerArrayValue <p>整型数组类型参数值。当 ValueType 为 ArrayOfInteger 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    std::vector<int64_t> GetIntegerArrayValue() const;

                    /**
                     * 设置<p>整型数组类型参数值。当 ValueType 为 ArrayOfInteger 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _integerArrayValue <p>整型数组类型参数值。当 ValueType 为 ArrayOfInteger 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetIntegerArrayValue(const std::vector<int64_t>& _integerArrayValue);

                    /**
                     * 判断参数 IntegerArrayValue 是否已赋值
                     * @return IntegerArrayValue 是否已赋值
                     * 
                     */
                    bool IntegerArrayValueHasBeenSet() const;

                    /**
                     * 获取<p>浮点数数组类型参数值。当 ValueType 为 ArrayOfFloat 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @return FloatArrayValue <p>浮点数数组类型参数值。当 ValueType 为 ArrayOfFloat 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    std::vector<double> GetFloatArrayValue() const;

                    /**
                     * 设置<p>浮点数数组类型参数值。当 ValueType 为 ArrayOfFloat 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * @param _floatArrayValue <p>浮点数数组类型参数值。当 ValueType 为 ArrayOfFloat 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     * 
                     */
                    void SetFloatArrayValue(const std::vector<double>& _floatArrayValue);

                    /**
                     * 判断参数 FloatArrayValue 是否已赋值
                     * @return FloatArrayValue 是否已赋值
                     * 
                     */
                    bool FloatArrayValueHasBeenSet() const;

                private:

                    /**
                     * <p>定制配置项下各参数字段名称。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Name 获取，如 &quot;Seconds&quot;、&quot;Ports&quot;、&quot;StatusCode&quot;。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>定制配置项下各参数字段值的类型。</p><p>枚举值：</p><ul><li>String： 字符串类型。</li><li>Integer： 整型类型。</li><li>Float： 浮点数类型。</li><li>Boolean： 布尔类型。</li><li>ArrayOfString： 字符串数组类型。</li><li>ArrayOfInteger： 整型数组类型。</li><li>ArrayOfFloat： 浮点数数组类型。</li></ul><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters[].Type 获取。</p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>字符串类型参数值。当 ValueType 为 String 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    std::string m_stringValue;
                    bool m_stringValueHasBeenSet;

                    /**
                     * <p>整型类型参数值。当 ValueType 为 Integer 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    int64_t m_integerValue;
                    bool m_integerValueHasBeenSet;

                    /**
                     * <p>浮点数类型参数值。当 ValueType 为 Float 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    double m_floatValue;
                    bool m_floatValueHasBeenSet;

                    /**
                     * <p>布尔类型参数值。当 ValueType 为 Boolean 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    bool m_booleanValue;
                    bool m_booleanValueHasBeenSet;

                    /**
                     * <p>字符串数组类型参数值。当 ValueType 为 ArrayOfString 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    std::vector<std::string> m_stringArrayValue;
                    bool m_stringArrayValueHasBeenSet;

                    /**
                     * <p>整型数组类型参数值。当 ValueType 为 ArrayOfInteger 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    std::vector<int64_t> m_integerArrayValue;
                    bool m_integerArrayValueHasBeenSet;

                    /**
                     * <p>浮点数数组类型参数值。当 ValueType 为 ArrayOfFloat 时，该参数必填。</p><p>您可以通过 DescribeAvailableCustomActionsForRuleEngine 接口返回值 CustomActionSet[].Parameters 获取参数值的默认值、单位、限制等说明。</p>
                     */
                    std::vector<double> m_floatArrayValue;
                    bool m_floatArrayValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETER_H_
