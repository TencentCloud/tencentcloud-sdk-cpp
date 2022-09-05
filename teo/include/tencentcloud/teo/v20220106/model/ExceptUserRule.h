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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_EXCEPTUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_EXCEPTUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ExceptUserRuleCondition.h>
#include <tencentcloud/teo/v20220106/model/ExceptUserRuleScope.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 例外规则的配置，包含生效的条件，生效的范围
                */
                class ExceptUserRule : public AbstractModel
                {
                public:
                    ExceptUserRule();
                    ~ExceptUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleID 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleName 规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则的处置方式。
1. skip 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 规则的处置方式。
1. skip 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置规则的处置方式。
1. skip 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 规则的处置方式。
1. skip 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则生效状态。
1. on 生效
2. off 失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleStatus 规则生效状态。
1. on 生效
2. off 失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置规则生效状态。
1. on 生效
2. off 失效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleStatus 规则生效状态。
1. on 生效
2. off 失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取匹配条件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conditions 匹配条件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExceptUserRuleCondition> GetConditions() const;

                    /**
                     * 设置匹配条件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Conditions 匹配条件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConditions(const std::vector<ExceptUserRuleCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取规则生效的范围。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope 规则生效的范围。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExceptUserRuleScope GetScope() const;

                    /**
                     * 设置规则生效的范围。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Scope 规则生效的范围。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScope(const ExceptUserRuleScope& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulePriority 优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RulePriority 优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则的处置方式。
1. skip 跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则生效状态。
1. on 生效
2. off 失效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 匹配条件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExceptUserRuleCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 规则生效的范围。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExceptUserRuleScope m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 优先级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_EXCEPTUSERRULE_H_
