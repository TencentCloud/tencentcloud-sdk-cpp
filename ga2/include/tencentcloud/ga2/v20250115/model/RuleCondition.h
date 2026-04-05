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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_RULECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 七层转发规则条件信息
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层转发规则条件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleConditionType 七层转发规则条件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleConditionType() const;

                    /**
                     * 设置七层转发规则条件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleConditionType 七层转发规则条件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleConditionType(const std::string& _ruleConditionType);

                    /**
                     * 判断参数 RuleConditionType 是否已赋值
                     * @return RuleConditionType 是否已赋值
                     * 
                     */
                    bool RuleConditionTypeHasBeenSet() const;

                    /**
                     * 获取七层转发规则条件值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleConditionValue 七层转发规则条件值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleConditionValue() const;

                    /**
                     * 设置七层转发规则条件值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleConditionValue 七层转发规则条件值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleConditionValue(const std::vector<std::string>& _ruleConditionValue);

                    /**
                     * 判断参数 RuleConditionValue 是否已赋值
                     * @return RuleConditionValue 是否已赋值
                     * 
                     */
                    bool RuleConditionValueHasBeenSet() const;

                private:

                    /**
                     * 七层转发规则条件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleConditionType;
                    bool m_ruleConditionTypeHasBeenSet;

                    /**
                     * 七层转发规则条件值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleConditionValue;
                    bool m_ruleConditionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_RULECONDITION_H_
