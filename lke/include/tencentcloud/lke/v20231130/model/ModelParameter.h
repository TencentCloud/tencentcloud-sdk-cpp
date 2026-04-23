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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMETER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 模型参数范围
                */
                class ModelParameter : public AbstractModel
                {
                public:
                    ModelParameter();
                    ~ModelParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>超参名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>超参名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>超参名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>超参名称</p>
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
                     * 获取<p>类型</p><p>枚举值：</p><ul><li>string： 字符类型</li><li>int： 整数类型</li><li>float： 浮点数类型</li><li>array： 数组类型</li></ul>
                     * @return Type <p>类型</p><p>枚举值：</p><ul><li>string： 字符类型</li><li>int： 整数类型</li><li>float： 浮点数类型</li><li>array： 数组类型</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p><p>枚举值：</p><ul><li>string： 字符类型</li><li>int： 整数类型</li><li>float： 浮点数类型</li><li>array： 数组类型</li></ul>
                     * @param _type <p>类型</p><p>枚举值：</p><ul><li>string： 字符类型</li><li>int： 整数类型</li><li>float： 浮点数类型</li><li>array： 数组类型</li></ul>
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
                     * 获取<p>默认值</p>
                     * @return DefaultValue <p>默认值</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>默认值</p>
                     * @param _defaultValue <p>默认值</p>
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
                     * 获取<p>枚举值</p>
                     * @return EnumValues <p>枚举值</p>
                     * 
                     */
                    std::vector<std::string> GetEnumValues() const;

                    /**
                     * 设置<p>枚举值</p>
                     * @param _enumValues <p>枚举值</p>
                     * 
                     */
                    void SetEnumValues(const std::vector<std::string>& _enumValues);

                    /**
                     * 判断参数 EnumValues 是否已赋值
                     * @return EnumValues 是否已赋值
                     * 
                     */
                    bool EnumValuesHasBeenSet() const;

                    /**
                     * 获取<p>默认值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Default <p>默认值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDefault() const;

                    /**
                     * 设置<p>默认值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _default <p>默认值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefault(const double& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Min <p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置<p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _min <p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取<p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Max <p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置<p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _max <p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * <p>超参名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>类型</p><p>枚举值：</p><ul><li>string： 字符类型</li><li>int： 整数类型</li><li>float： 浮点数类型</li><li>array： 数组类型</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>默认值</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>枚举值</p>
                     */
                    std::vector<std::string> m_enumValues;
                    bool m_enumValuesHasBeenSet;

                    /**
                     * <p>默认值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODELPARAMETER_H_
