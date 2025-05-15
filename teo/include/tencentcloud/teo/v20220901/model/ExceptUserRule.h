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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ExceptUserRuleCondition.h>
#include <tencentcloud/teo/v20220901/model/ExceptUserRuleScope.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 例外规则的配置，包含生效的条件，生效的范围。
                */
                class ExceptUserRule : public AbstractModel
                {
                public:
                    ExceptUserRule();
                    ~ExceptUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称，不可使用中文。
                     * @return RuleName 规则名称，不可使用中文。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称，不可使用中文。
                     * @param _ruleName 规则名称，不可使用中文。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则的处置方式，当前仅支持skip：跳过全部托管规则。
                     * @return Action 规则的处置方式，当前仅支持skip：跳过全部托管规则。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置规则的处置方式，当前仅支持skip：跳过全部托管规则。
                     * @param _action 规则的处置方式，当前仅支持skip：跳过全部托管规则。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则生效状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * @return RuleStatus 规则生效状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置规则生效状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * @param _ruleStatus 规则生效状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     * 
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取规则ID。仅出参使用。默认由底层生成。
                     * @return RuleID 规则ID。仅出参使用。默认由底层生成。
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则ID。仅出参使用。默认由底层生成。
                     * @param _ruleID 规则ID。仅出参使用。默认由底层生成。
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取更新时间，如果为null，默认由底层按当前时间生成。
                     * @return UpdateTime 更新时间，如果为null，默认由底层按当前时间生成。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，如果为null，默认由底层按当前时间生成。
                     * @param _updateTime 更新时间，如果为null，默认由底层按当前时间生成。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取匹配条件。
                     * @return ExceptUserRuleConditions 匹配条件。
                     * 
                     */
                    std::vector<ExceptUserRuleCondition> GetExceptUserRuleConditions() const;

                    /**
                     * 设置匹配条件。
                     * @param _exceptUserRuleConditions 匹配条件。
                     * 
                     */
                    void SetExceptUserRuleConditions(const std::vector<ExceptUserRuleCondition>& _exceptUserRuleConditions);

                    /**
                     * 判断参数 ExceptUserRuleConditions 是否已赋值
                     * @return ExceptUserRuleConditions 是否已赋值
                     * 
                     */
                    bool ExceptUserRuleConditionsHasBeenSet() const;

                    /**
                     * 获取规则生效的范围。
                     * @return ExceptUserRuleScope 规则生效的范围。
                     * 
                     */
                    ExceptUserRuleScope GetExceptUserRuleScope() const;

                    /**
                     * 设置规则生效的范围。
                     * @param _exceptUserRuleScope 规则生效的范围。
                     * 
                     */
                    void SetExceptUserRuleScope(const ExceptUserRuleScope& _exceptUserRuleScope);

                    /**
                     * 判断参数 ExceptUserRuleScope 是否已赋值
                     * @return ExceptUserRuleScope 是否已赋值
                     * 
                     */
                    bool ExceptUserRuleScopeHasBeenSet() const;

                    /**
                     * 获取优先级，取值范围0-100。如果为null，默认由底层设置为0。
                     * @return RulePriority 优先级，取值范围0-100。如果为null，默认由底层设置为0。
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置优先级，取值范围0-100。如果为null，默认由底层设置为0。
                     * @param _rulePriority 优先级，取值范围0-100。如果为null，默认由底层设置为0。
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                private:

                    /**
                     * 规则名称，不可使用中文。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则的处置方式，当前仅支持skip：跳过全部托管规则。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则生效状态，取值有：
<li>on：生效；</li>
<li>off：失效。</li>
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 规则ID。仅出参使用。默认由底层生成。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 更新时间，如果为null，默认由底层按当前时间生成。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 匹配条件。
                     */
                    std::vector<ExceptUserRuleCondition> m_exceptUserRuleConditions;
                    bool m_exceptUserRuleConditionsHasBeenSet;

                    /**
                     * 规则生效的范围。
                     */
                    ExceptUserRuleScope m_exceptUserRuleScope;
                    bool m_exceptUserRuleScopeHasBeenSet;

                    /**
                     * 优先级，取值范围0-100。如果为null，默认由底层设置为0。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULE_H_
