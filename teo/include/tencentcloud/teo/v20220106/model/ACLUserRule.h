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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ACLUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ACLUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ACLCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ACL用户规则
                */
                class ACLUserRule : public AbstractModel
                {
                public:
                    ACLUserRule();
                    ~ACLUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名
                     * @return RuleName 规则名
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名
                     * @param RuleName 规则名
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取动作
                     * @return Action 动作
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作
                     * @param Action 动作
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return RuleStatus 状态
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置状态
                     * @param RuleStatus 状态
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取ACL规则
                     * @return Conditions ACL规则
                     */
                    std::vector<ACLCondition> GetConditions() const;

                    /**
                     * 设置ACL规则
                     * @param Conditions ACL规则
                     */
                    void SetConditions(const std::vector<ACLCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取规则优先级
                     * @return RulePriority 规则优先级
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则优先级
                     * @param RulePriority 规则优先级
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleID 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishTime ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PunishTime ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取ip封禁的惩罚时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishTimeUnit ip封禁的惩罚时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置ip封禁的惩罚时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PunishTimeUnit ip封禁的惩罚时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageId 自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PageId 自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取重定向时候的地址，必须为本用户接入的站点子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectUrl 重定向时候的地址，必须为本用户接入的站点子域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置重定向时候的地址，必须为本用户接入的站点子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RedirectUrl 重定向时候的地址，必须为本用户接入的站点子域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseCode 重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResponseCode 重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     */
                    bool ResponseCodeHasBeenSet() const;

                private:

                    /**
                     * 规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * ACL规则
                     */
                    std::vector<ACLCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 规则优先级
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * ip封禁的惩罚时间单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * 自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 重定向时候的地址，必须为本用户接入的站点子域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ACLUSERRULE_H_
