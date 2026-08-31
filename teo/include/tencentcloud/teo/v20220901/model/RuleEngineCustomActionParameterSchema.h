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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTIONPARAMETERSCHEMA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTIONPARAMETERSCHEMA_H_

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
                * 规则引擎操作定制配置参数结构定义。
                */
                class RuleEngineCustomActionParameterSchema : public AbstractModel
                {
                public:
                    RuleEngineCustomActionParameterSchema();
                    ~RuleEngineCustomActionParameterSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数字段名称。</p>
                     * @return Name <p>参数字段名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>参数字段名称。</p>
                     * @param _name <p>参数字段名称。</p>
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
                     * 获取<p>参数字段类型，取值有：<li>Boolean：布尔；</li><li>Integer：整型；</li><li>Float：浮点型；</li><li>String：字符串；</li><li>ArrayOfInteger：整型数组；</li><li>ArrayOfFloat：浮点型数组；</li><li>ArrayOfString：字符串数组。</li></p>
                     * @return ValueType <p>参数字段类型，取值有：<li>Boolean：布尔；</li><li>Integer：整型；</li><li>Float：浮点型；</li><li>String：字符串；</li><li>ArrayOfInteger：整型数组；</li><li>ArrayOfFloat：浮点型数组；</li><li>ArrayOfString：字符串数组。</li></p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>参数字段类型，取值有：<li>Boolean：布尔；</li><li>Integer：整型；</li><li>Float：浮点型；</li><li>String：字符串；</li><li>ArrayOfInteger：整型数组；</li><li>ArrayOfFloat：浮点型数组；</li><li>ArrayOfString：字符串数组。</li></p>
                     * @param _valueType <p>参数字段类型，取值有：<li>Boolean：布尔；</li><li>Integer：整型；</li><li>Float：浮点型；</li><li>String：字符串；</li><li>ArrayOfInteger：整型数组；</li><li>ArrayOfFloat：浮点型数组；</li><li>ArrayOfString：字符串数组。</li></p>
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
                     * 获取<p>参数字段描述。</p>
                     * @return Description <p>参数字段描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>参数字段描述。</p>
                     * @param _description <p>参数字段描述。</p>
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
                     * 获取<p>参数字段默认值。</p>
                     * @return Default <p>参数字段默认值。</p>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>参数字段默认值。</p>
                     * @param _default <p>参数字段默认值。</p>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>参数字段单位。</p>
                     * @return Unit <p>参数字段单位。</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>参数字段单位。</p>
                     * @param _unit <p>参数字段单位。</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>参数字段是否必填。</p><p>默认值：false</p><p>若填充，则适用于所有参数字段类型校验；若不填充则不校验。</p>
                     * @return Required <p>参数字段是否必填。</p><p>默认值：false</p><p>若填充，则适用于所有参数字段类型校验；若不填充则不校验。</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>参数字段是否必填。</p><p>默认值：false</p><p>若填充，则适用于所有参数字段类型校验；若不填充则不校验。</p>
                     * @param _required <p>参数字段是否必填。</p><p>默认值：false</p><p>若填充，则适用于所有参数字段类型校验；若不填充则不校验。</p>
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
                     * 获取<p>参数字段最小值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MinValue <p>参数字段最小值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    double GetMinValue() const;

                    /**
                     * 设置<p>参数字段最小值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _minValue <p>参数字段最小值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMinValue(const double& _minValue);

                    /**
                     * 判断参数 MinValue 是否已赋值
                     * @return MinValue 是否已赋值
                     * 
                     */
                    bool MinValueHasBeenSet() const;

                    /**
                     * 获取<p>参数字段最大值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MaxValue <p>参数字段最大值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置<p>参数字段最大值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _maxValue <p>参数字段最大值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMaxValue(const double& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取<p>参数字段最小长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MinLength <p>参数字段最小长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置<p>参数字段最小长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _minLength <p>参数字段最小长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取<p>参数字段最大长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MaxLength <p>参数字段最大长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置<p>参数字段最大长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _maxLength <p>参数字段最大长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取<p>参数字段最小项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MinItems <p>参数字段最小项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    int64_t GetMinItems() const;

                    /**
                     * 设置<p>参数字段最小项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _minItems <p>参数字段最小项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMinItems(const int64_t& _minItems);

                    /**
                     * 判断参数 MinItems 是否已赋值
                     * @return MinItems 是否已赋值
                     * 
                     */
                    bool MinItemsHasBeenSet() const;

                    /**
                     * 获取<p>参数字段最大项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MaxItems <p>参数字段最大项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    int64_t GetMaxItems() const;

                    /**
                     * 设置<p>参数字段最大项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _maxItems <p>参数字段最大项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMaxItems(const int64_t& _maxItems);

                    /**
                     * 判断参数 MaxItems 是否已赋值
                     * @return MaxItems 是否已赋值
                     * 
                     */
                    bool MaxItemsHasBeenSet() const;

                    /**
                     * 获取<p>参数字段项是否唯一。</p><p>默认值：false</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return UniqueItems <p>参数字段项是否唯一。</p><p>默认值：false</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    bool GetUniqueItems() const;

                    /**
                     * 设置<p>参数字段项是否唯一。</p><p>默认值：false</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _uniqueItems <p>参数字段项是否唯一。</p><p>默认值：false</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetUniqueItems(const bool& _uniqueItems);

                    /**
                     * 判断参数 UniqueItems 是否已赋值
                     * @return UniqueItems 是否已赋值
                     * 
                     */
                    bool UniqueItemsHasBeenSet() const;

                    /**
                     * 获取<p>参数字段允许的格式。</p><p>若填充，需要校验字符串或者字符串数组内容合适；若不填充则不校验。</p>
                     * @return AllowedPattern <p>参数字段允许的格式。</p><p>若填充，需要校验字符串或者字符串数组内容合适；若不填充则不校验。</p>
                     * 
                     */
                    std::string GetAllowedPattern() const;

                    /**
                     * 设置<p>参数字段允许的格式。</p><p>若填充，需要校验字符串或者字符串数组内容合适；若不填充则不校验。</p>
                     * @param _allowedPattern <p>参数字段允许的格式。</p><p>若填充，需要校验字符串或者字符串数组内容合适；若不填充则不校验。</p>
                     * 
                     */
                    void SetAllowedPattern(const std::string& _allowedPattern);

                    /**
                     * 判断参数 AllowedPattern 是否已赋值
                     * @return AllowedPattern 是否已赋值
                     * 
                     */
                    bool AllowedPatternHasBeenSet() const;

                    /**
                     * 获取<p>参数字段允许的取值，若为空则不校验。</p><p>若本参数填充，则说明对应参数为枚举类型，仅允许填充本参数数组中的值；若不填充则不校验。</p>
                     * @return AllowedValues <p>参数字段允许的取值，若为空则不校验。</p><p>若本参数填充，则说明对应参数为枚举类型，仅允许填充本参数数组中的值；若不填充则不校验。</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedValues() const;

                    /**
                     * 设置<p>参数字段允许的取值，若为空则不校验。</p><p>若本参数填充，则说明对应参数为枚举类型，仅允许填充本参数数组中的值；若不填充则不校验。</p>
                     * @param _allowedValues <p>参数字段允许的取值，若为空则不校验。</p><p>若本参数填充，则说明对应参数为枚举类型，仅允许填充本参数数组中的值；若不填充则不校验。</p>
                     * 
                     */
                    void SetAllowedValues(const std::vector<std::string>& _allowedValues);

                    /**
                     * 判断参数 AllowedValues 是否已赋值
                     * @return AllowedValues 是否已赋值
                     * 
                     */
                    bool AllowedValuesHasBeenSet() const;

                    /**
                     * 获取<p>参数字段最小步长。若填充，适用于浮点型和浮点型数组类型参数的数值校验；若不填充则不校验。</p>
                     * @return MultipleOf <p>参数字段最小步长。若填充，适用于浮点型和浮点型数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    std::string GetMultipleOf() const;

                    /**
                     * 设置<p>参数字段最小步长。若填充，适用于浮点型和浮点型数组类型参数的数值校验；若不填充则不校验。</p>
                     * @param _multipleOf <p>参数字段最小步长。若填充，适用于浮点型和浮点型数组类型参数的数值校验；若不填充则不校验。</p>
                     * 
                     */
                    void SetMultipleOf(const std::string& _multipleOf);

                    /**
                     * 判断参数 MultipleOf 是否已赋值
                     * @return MultipleOf 是否已赋值
                     * 
                     */
                    bool MultipleOfHasBeenSet() const;

                private:

                    /**
                     * <p>参数字段名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>参数字段类型，取值有：<li>Boolean：布尔；</li><li>Integer：整型；</li><li>Float：浮点型；</li><li>String：字符串；</li><li>ArrayOfInteger：整型数组；</li><li>ArrayOfFloat：浮点型数组；</li><li>ArrayOfString：字符串数组。</li></p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>参数字段描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>参数字段默认值。</p>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>参数字段单位。</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>参数字段是否必填。</p><p>默认值：false</p><p>若填充，则适用于所有参数字段类型校验；若不填充则不校验。</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>参数字段最小值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    double m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * <p>参数字段最大值。</p><p>若填充，适用于整数、浮点数、整数数组、浮点数数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * <p>参数字段最小长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * <p>参数字段最大长度。</p><p>若填充，适用于字符串、字符串数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * <p>参数字段最小项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    int64_t m_minItems;
                    bool m_minItemsHasBeenSet;

                    /**
                     * <p>参数字段最大项数。</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    int64_t m_maxItems;
                    bool m_maxItemsHasBeenSet;

                    /**
                     * <p>参数字段项是否唯一。</p><p>默认值：false</p><p>若填充，适用于各类数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    bool m_uniqueItems;
                    bool m_uniqueItemsHasBeenSet;

                    /**
                     * <p>参数字段允许的格式。</p><p>若填充，需要校验字符串或者字符串数组内容合适；若不填充则不校验。</p>
                     */
                    std::string m_allowedPattern;
                    bool m_allowedPatternHasBeenSet;

                    /**
                     * <p>参数字段允许的取值，若为空则不校验。</p><p>若本参数填充，则说明对应参数为枚举类型，仅允许填充本参数数组中的值；若不填充则不校验。</p>
                     */
                    std::vector<std::string> m_allowedValues;
                    bool m_allowedValuesHasBeenSet;

                    /**
                     * <p>参数字段最小步长。若填充，适用于浮点型和浮点型数组类型参数的数值校验；若不填充则不校验。</p>
                     */
                    std::string m_multipleOf;
                    bool m_multipleOfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTIONPARAMETERSCHEMA_H_
