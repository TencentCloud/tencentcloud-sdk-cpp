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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECRULERELATEDINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECRULERELATEDINFO_H_

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
                * 安全规则（cc/waf/bot）相关信息
                */
                class SecRuleRelatedInfo : public AbstractModel
                {
                public:
                    SecRuleRelatedInfo();
                    ~SecRuleRelatedInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param _ruleId 规则ID。
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     * @return Action 执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     * @param _action 执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
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
                     * 获取风险等级（waf日志中独有），取值有：
<li>high risk ：高危 ；</li>
<li>middle risk ：中危 ；</li>
<li>low risk ：低危 ；</li>
<li>unkonw ：未知 。</li>
                     * @return RiskLevel 风险等级（waf日志中独有），取值有：
<li>high risk ：高危 ；</li>
<li>middle risk ：中危 ；</li>
<li>low risk ：低危 ；</li>
<li>unkonw ：未知 。</li>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级（waf日志中独有），取值有：
<li>high risk ：高危 ；</li>
<li>middle risk ：中危 ；</li>
<li>low risk ：低危 ；</li>
<li>unkonw ：未知 。</li>
                     * @param _riskLevel 风险等级（waf日志中独有），取值有：
<li>high risk ：高危 ；</li>
<li>middle risk ：中危 ；</li>
<li>low risk ：低危 ；</li>
<li>unkonw ：未知 。</li>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取规则等级，取值有：
<li>normal  ：正常 。</li>
                     * @return RuleLevel 规则等级，取值有：
<li>normal  ：正常 。</li>
                     * 
                     */
                    std::string GetRuleLevel() const;

                    /**
                     * 设置规则等级，取值有：
<li>normal  ：正常 。</li>
                     * @param _ruleLevel 规则等级，取值有：
<li>normal  ：正常 。</li>
                     * 
                     */
                    void SetRuleLevel(const std::string& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取规则描述。
                     * @return Description 规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。
                     * @param _description 规则描述。
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
                     * 获取规则类型名称。
                     * @return RuleTypeName 规则类型名称。
                     * 
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置规则类型名称。
                     * @param _ruleTypeName 规则类型名称。
                     * 
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     * 
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackContent 攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackContent 攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     * 
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取规则类型，取值有：
<li>waf: 托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：bot防护规则。</li>
                     * @return RuleType 规则类型，取值有：
<li>waf: 托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：bot防护规则。</li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型，取值有：
<li>waf: 托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：bot防护规则。</li>
                     * @param _ruleType 规则类型，取值有：
<li>waf: 托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：bot防护规则。</li>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则是否开启。
                     * @return RuleEnabled 规则是否开启。
                     * 
                     */
                    bool GetRuleEnabled() const;

                    /**
                     * 设置规则是否开启。
                     * @param _ruleEnabled 规则是否开启。
                     * 
                     */
                    void SetRuleEnabled(const bool& _ruleEnabled);

                    /**
                     * 判断参数 RuleEnabled 是否已赋值
                     * @return RuleEnabled 是否已赋值
                     * 
                     */
                    bool RuleEnabledHasBeenSet() const;

                    /**
                     * 获取规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * @return RuleDeleted 规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * 
                     */
                    bool GetRuleDeleted() const;

                    /**
                     * 设置规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * @param _ruleDeleted 规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     * 
                     */
                    void SetRuleDeleted(const bool& _ruleDeleted);

                    /**
                     * 判断参数 RuleDeleted 是否已赋值
                     * @return RuleDeleted 是否已赋值
                     * 
                     */
                    bool RuleDeletedHasBeenSet() const;

                    /**
                     * 获取规则是否启用监控告警。
                     * @return AlarmEnabled 规则是否启用监控告警。
                     * 
                     */
                    bool GetAlarmEnabled() const;

                    /**
                     * 设置规则是否启用监控告警。
                     * @param _alarmEnabled 规则是否启用监控告警。
                     * 
                     */
                    void SetAlarmEnabled(const bool& _alarmEnabled);

                    /**
                     * 判断参数 AlarmEnabled 是否已赋值
                     * @return AlarmEnabled 是否已赋值
                     * 
                     */
                    bool AlarmEnabledHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 执行动作（处置方式），取值有：
<li>trans ：通过 ；</li>
<li>alg ：算法挑战 ；</li>
<li>drop ：丢弃 ；</li>
<li>ban ：封禁源ip ；</li>
<li>redirect ：重定向 ；</li>
<li>page ：返回指定页面 ；</li>
<li>monitor ：观察 。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 风险等级（waf日志中独有），取值有：
<li>high risk ：高危 ；</li>
<li>middle risk ：中危 ；</li>
<li>low risk ：低危 ；</li>
<li>unkonw ：未知 。</li>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则等级，取值有：
<li>normal  ：正常 。</li>
                     */
                    std::string m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * 规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则类型名称。
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * 攻击内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * 规则类型，取值有：
<li>waf: 托管规则；</li>
<li>acl：自定义规则；</li>
<li>rate：速率限制规则；</li>
<li>bot：bot防护规则。</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则是否开启。
                     */
                    bool m_ruleEnabled;
                    bool m_ruleEnabledHasBeenSet;

                    /**
                     * 规则是否存在，取值有：
<li>true: 规则不存在；</li>
<li>false: 规则存在。</li>
                     */
                    bool m_ruleDeleted;
                    bool m_ruleDeletedHasBeenSet;

                    /**
                     * 规则是否启用监控告警。
                     */
                    bool m_alarmEnabled;
                    bool m_alarmEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECRULERELATEDINFO_H_
