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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SIMPLECONDITION_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SIMPLECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 匹配条件请求参数
                */
                class SimpleCondition : public AbstractModel
                {
                public:
                    SimpleCondition();
                    ~SimpleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>匹配方式: eq 等于;ne 不等于;regex 正则;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Condition <p>匹配方式: eq 等于;ne 不等于;regex 正则;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>匹配方式: eq 等于;ne 不等于;regex 正则;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _condition <p>匹配方式: eq 等于;ne 不等于;regex 正则;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>字段值 或正则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>字段值 或正则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>字段值 或正则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>字段值 或正则表达式</p>
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

                private:

                    /**
                     * <p>字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>匹配方式: eq 等于;ne 不等于;regex 正则;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>字段值 或正则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SIMPLECONDITION_H_
