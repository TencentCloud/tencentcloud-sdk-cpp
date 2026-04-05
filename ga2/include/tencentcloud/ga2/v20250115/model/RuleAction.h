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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_RULEACTION_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_RULEACTION_H_

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
                * 七层转发规则行为信息
                */
                class RuleAction : public AbstractModel
                {
                public:
                    RuleAction();
                    ~RuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层转发规则行为类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleActionType 七层转发规则行为类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleActionType() const;

                    /**
                     * 设置七层转发规则行为类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleActionType 七层转发规则行为类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleActionType(const std::string& _ruleActionType);

                    /**
                     * 判断参数 RuleActionType 是否已赋值
                     * @return RuleActionType 是否已赋值
                     * 
                     */
                    bool RuleActionTypeHasBeenSet() const;

                    /**
                     * 获取七层转发规则行为值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleActionValue 七层转发规则行为值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleActionValue() const;

                    /**
                     * 设置七层转发规则行为值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleActionValue 七层转发规则行为值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleActionValue(const std::string& _ruleActionValue);

                    /**
                     * 判断参数 RuleActionValue 是否已赋值
                     * @return RuleActionValue 是否已赋值
                     * 
                     */
                    bool RuleActionValueHasBeenSet() const;

                private:

                    /**
                     * 七层转发规则行为类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleActionType;
                    bool m_ruleActionTypeHasBeenSet;

                    /**
                     * 七层转发规则行为值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleActionValue;
                    bool m_ruleActionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_RULEACTION_H_
