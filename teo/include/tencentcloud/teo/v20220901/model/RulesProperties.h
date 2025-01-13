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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleChoicePropertiesItem.h>
#include <tencentcloud/teo/v20220901/model/RuleExtraParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎可应用于匹配请求的设置详细信息。
                */
                class RulesProperties : public AbstractModel
                {
                public:
                    RulesProperties();
                    ~RulesProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值为参数名称。
                     * @return Name 值为参数名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置值为参数名称。
                     * @param _name 值为参数名称。
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
                     * 获取数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @return Min 数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @param _min 数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     * @return ChoicesValue 参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     * 
                     */
                    std::vector<std::string> GetChoicesValue() const;

                    /**
                     * 设置参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     * @param _choicesValue 参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     * 
                     */
                    void SetChoicesValue(const std::vector<std::string>& _choicesValue);

                    /**
                     * 判断参数 ChoicesValue 是否已赋值
                     * @return ChoicesValue 是否已赋值
                     * 
                     */
                    bool ChoicesValueHasBeenSet() const;

                    /**
                     * 获取参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> OBJECT：参数值为对象类型，ChoiceProperties 为改对象类型关联的属性；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>注意：当参数类型为 OBJECT 类型时，请注意参考 [示例2 参数为 OBJECT 类型的创建](https://cloud.tencent.com/document/product/1552/80622#.E7.A4.BA.E4.BE.8B2-.E4.BF.AE.E6.94.B9.E6.BA.90.E7.AB.99.E4.B8.BAIP.E5.9F.9F.E5.90.8D)
                     * @return Type 参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> OBJECT：参数值为对象类型，ChoiceProperties 为改对象类型关联的属性；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>注意：当参数类型为 OBJECT 类型时，请注意参考 [示例2 参数为 OBJECT 类型的创建](https://cloud.tencent.com/document/product/1552/80622#.E7.A4.BA.E4.BE.8B2-.E4.BF.AE.E6.94.B9.E6.BA.90.E7.AB.99.E4.B8.BAIP.E5.9F.9F.E5.90.8D)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> OBJECT：参数值为对象类型，ChoiceProperties 为改对象类型关联的属性；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>注意：当参数类型为 OBJECT 类型时，请注意参考 [示例2 参数为 OBJECT 类型的创建](https://cloud.tencent.com/document/product/1552/80622#.E7.A4.BA.E4.BE.8B2-.E4.BF.AE.E6.94.B9.E6.BA.90.E7.AB.99.E4.B8.BAIP.E5.9F.9F.E5.90.8D)
                     * @param _type 参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> OBJECT：参数值为对象类型，ChoiceProperties 为改对象类型关联的属性；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>注意：当参数类型为 OBJECT 类型时，请注意参考 [示例2 参数为 OBJECT 类型的创建](https://cloud.tencent.com/document/product/1552/80622#.E7.A4.BA.E4.BE.8B2-.E4.BF.AE.E6.94.B9.E6.BA.90.E7.AB.99.E4.B8.BAIP.E5.9F.9F.E5.90.8D)
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
                     * 获取数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @return Max 数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * 
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @param _max 数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * 
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取参数值是否支持多选或者填写多个。
                     * @return IsMultiple 参数值是否支持多选或者填写多个。
                     * 
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置参数值是否支持多选或者填写多个。
                     * @param _isMultiple 参数值是否支持多选或者填写多个。
                     * 
                     */
                    void SetIsMultiple(const bool& _isMultiple);

                    /**
                     * 判断参数 IsMultiple 是否已赋值
                     * @return IsMultiple 是否已赋值
                     * 
                     */
                    bool IsMultipleHasBeenSet() const;

                    /**
                     * 获取是否允许为空。
                     * @return IsAllowEmpty 是否允许为空。
                     * 
                     */
                    bool GetIsAllowEmpty() const;

                    /**
                     * 设置是否允许为空。
                     * @param _isAllowEmpty 是否允许为空。
                     * 
                     */
                    void SetIsAllowEmpty(const bool& _isAllowEmpty);

                    /**
                     * 判断参数 IsAllowEmpty 是否已赋值
                     * @return IsAllowEmpty 是否已赋值
                     * 
                     */
                    bool IsAllowEmptyHasBeenSet() const;

                    /**
                     * 获取该参数对应的关联配置参数，属于调用接口的必填参数。
注意：如果可选参数无特殊新增参数则该数组为空数组。
                     * @return ChoiceProperties 该参数对应的关联配置参数，属于调用接口的必填参数。
注意：如果可选参数无特殊新增参数则该数组为空数组。
                     * 
                     */
                    std::vector<RuleChoicePropertiesItem> GetChoiceProperties() const;

                    /**
                     * 设置该参数对应的关联配置参数，属于调用接口的必填参数。
注意：如果可选参数无特殊新增参数则该数组为空数组。
                     * @param _choiceProperties 该参数对应的关联配置参数，属于调用接口的必填参数。
注意：如果可选参数无特殊新增参数则该数组为空数组。
                     * 
                     */
                    void SetChoiceProperties(const std::vector<RuleChoicePropertiesItem>& _choiceProperties);

                    /**
                     * 判断参数 ChoiceProperties 是否已赋值
                     * @return ChoiceProperties 是否已赋值
                     * 
                     */
                    bool ChoicePropertiesHasBeenSet() const;

                    /**
                     * 获取<li> 为 NULL：无特殊参数，RuleAction 选择 NormalAction；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraParameter <li> 为 NULL：无特殊参数，RuleAction 选择 NormalAction；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleExtraParameter GetExtraParameter() const;

                    /**
                     * 设置<li> 为 NULL：无特殊参数，RuleAction 选择 NormalAction；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraParameter <li> 为 NULL：无特殊参数，RuleAction 选择 NormalAction；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraParameter(const RuleExtraParameter& _extraParameter);

                    /**
                     * 判断参数 ExtraParameter 是否已赋值
                     * @return ExtraParameter 是否已赋值
                     * 
                     */
                    bool ExtraParameterHasBeenSet() const;

                private:

                    /**
                     * 值为参数名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     */
                    std::vector<std::string> m_choicesValue;
                    bool m_choicesValueHasBeenSet;

                    /**
                     * 参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> OBJECT：参数值为对象类型，ChoiceProperties 为改对象类型关联的属性；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>注意：当参数类型为 OBJECT 类型时，请注意参考 [示例2 参数为 OBJECT 类型的创建](https://cloud.tencent.com/document/product/1552/80622#.E7.A4.BA.E4.BE.8B2-.E4.BF.AE.E6.94.B9.E6.BA.90.E7.AB.99.E4.B8.BAIP.E5.9F.9F.E5.90.8D)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 参数值是否支持多选或者填写多个。
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * 是否允许为空。
                     */
                    bool m_isAllowEmpty;
                    bool m_isAllowEmptyHasBeenSet;

                    /**
                     * 该参数对应的关联配置参数，属于调用接口的必填参数。
注意：如果可选参数无特殊新增参数则该数组为空数组。
                     */
                    std::vector<RuleChoicePropertiesItem> m_choiceProperties;
                    bool m_choicePropertiesHasBeenSet;

                    /**
                     * <li> 为 NULL：无特殊参数，RuleAction 选择 NormalAction；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleExtraParameter m_extraParameter;
                    bool m_extraParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULESPROPERTIES_H_
