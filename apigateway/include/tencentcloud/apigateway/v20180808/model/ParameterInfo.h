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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PARAMETERINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PARAMETERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 独享实例配置参数
                */
                class ParameterInfo : public AbstractModel
                {
                public:
                    ParameterInfo();
                    ~ParameterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
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
                     * 获取当前值
                     * @return Value 当前值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置当前值
                     * @param _value 当前值
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return Default 默认值
                     * 
                     */
                    int64_t GetDefault() const;

                    /**
                     * 设置默认值
                     * @param _default 默认值
                     * 
                     */
                    void SetDefault(const int64_t& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
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
                     * 获取类型, integer|string
                     * @return Type 类型, integer|string
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型, integer|string
                     * @param _type 类型, integer|string
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
                     * 获取最小
                     * @return Minimum 最小
                     * 
                     */
                    int64_t GetMinimum() const;

                    /**
                     * 设置最小
                     * @param _minimum 最小
                     * 
                     */
                    void SetMinimum(const int64_t& _minimum);

                    /**
                     * 判断参数 Minimum 是否已赋值
                     * @return Minimum 是否已赋值
                     * 
                     */
                    bool MinimumHasBeenSet() const;

                    /**
                     * 获取最大
                     * @return Maximum 最大
                     * 
                     */
                    int64_t GetMaximum() const;

                    /**
                     * 设置最大
                     * @param _maximum 最大
                     * 
                     */
                    void SetMaximum(const int64_t& _maximum);

                    /**
                     * 判断参数 Maximum 是否已赋值
                     * @return Maximum 是否已赋值
                     * 
                     */
                    bool MaximumHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifedTime 修改时间
                     * @deprecated
                     */
                    std::string GetModifedTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifedTime 修改时间
                     * @deprecated
                     */
                    void SetModifedTime(const std::string& _modifedTime);

                    /**
                     * 判断参数 ModifedTime 是否已赋值
                     * @return ModifedTime 是否已赋值
                     * @deprecated
                     */
                    bool ModifedTimeHasBeenSet() const;

                    /**
                     * 获取字符类型的值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueString 字符类型的值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueString() const;

                    /**
                     * 设置字符类型的值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueString 字符类型的值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueString(const std::string& _valueString);

                    /**
                     * 判断参数 ValueString 是否已赋值
                     * @return ValueString 是否已赋值
                     * 
                     */
                    bool ValueStringHasBeenSet() const;

                    /**
                     * 获取字符类型的默认值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValueString 字符类型的默认值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValueString() const;

                    /**
                     * 设置字符类型的默认值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValueString 字符类型的默认值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultValueString(const std::string& _defaultValueString);

                    /**
                     * 判断参数 DefaultValueString 是否已赋值
                     * @return DefaultValueString 是否已赋值
                     * 
                     */
                    bool DefaultValueStringHasBeenSet() const;

                    /**
                     * 获取可调整范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Range 可调整范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置可调整范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _range 可调整范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 当前值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 默认值
                     */
                    int64_t m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 类型, integer|string
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 最小
                     */
                    int64_t m_minimum;
                    bool m_minimumHasBeenSet;

                    /**
                     * 最大
                     */
                    int64_t m_maximum;
                    bool m_maximumHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifedTime;
                    bool m_modifedTimeHasBeenSet;

                    /**
                     * 字符类型的值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueString;
                    bool m_valueStringHasBeenSet;

                    /**
                     * 字符类型的默认值，当Type为string时才有意义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValueString;
                    bool m_defaultValueStringHasBeenSet;

                    /**
                     * 可调整范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PARAMETERINFO_H_
