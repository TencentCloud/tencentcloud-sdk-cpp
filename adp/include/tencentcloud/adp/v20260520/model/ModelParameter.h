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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMETER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 模型超参
                */
                class ModelParameter : public AbstractModel
                {
                public:
                    ModelParameter();
                    ~ModelParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
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
                     * 获取枚举值列表（仅枚举类型有效）
                     * @return EnumValueList 枚举值列表（仅枚举类型有效）
                     * 
                     */
                    std::vector<std::string> GetEnumValueList() const;

                    /**
                     * 设置枚举值列表（仅枚举类型有效）
                     * @param _enumValueList 枚举值列表（仅枚举类型有效）
                     * 
                     */
                    void SetEnumValueList(const std::vector<std::string>& _enumValueList);

                    /**
                     * 判断参数 EnumValueList 是否已赋值
                     * @return EnumValueList 是否已赋值
                     * 
                     */
                    bool EnumValueListHasBeenSet() const;

                    /**
                     * 获取最大值（仅数值类型有效）
                     * @return MaxValue 最大值（仅数值类型有效）
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置最大值（仅数值类型有效）
                     * @param _maxValue 最大值（仅数值类型有效）
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
                     * 获取最小值（仅数值类型有效）
                     * @return MinValue 最小值（仅数值类型有效）
                     * 
                     */
                    double GetMinValue() const;

                    /**
                     * 设置最小值（仅数值类型有效）
                     * @param _minValue 最小值（仅数值类型有效）
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
                     * 获取超参名称
                     * @return Name 超参名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置超参名称
                     * @param _name 超参名称
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
                     * 获取超参类型。1-浮点数, 2-整数, 3-字符串, 4-枚举
                     * @return Type 超参类型。1-浮点数, 2-整数, 3-字符串, 4-枚举
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置超参类型。1-浮点数, 2-整数, 3-字符串, 4-枚举
                     * @param _type 超参类型。1-浮点数, 2-整数, 3-字符串, 4-枚举
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 枚举值列表（仅枚举类型有效）
                     */
                    std::vector<std::string> m_enumValueList;
                    bool m_enumValueListHasBeenSet;

                    /**
                     * 最大值（仅数值类型有效）
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * 最小值（仅数值类型有效）
                     */
                    double m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * 超参名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 超参类型。1-浮点数, 2-整数, 3-字符串, 4-枚举
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMETER_H_
