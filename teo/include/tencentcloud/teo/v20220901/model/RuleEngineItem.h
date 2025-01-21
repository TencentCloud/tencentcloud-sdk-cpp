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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleBranch.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎规则详情。
                */
                class RuleEngineItem : public AbstractModel
                {
                public:
                    RuleEngineItem();
                    ~RuleEngineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li>
                     * @return Status 规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li>
                     * @param _status 规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则 ID。规则的唯一性标识，当调用 ModifyL7AccRules 时，该参数必填。
                     * @return RuleId 规则 ID。规则的唯一性标识，当调用 ModifyL7AccRules 时，该参数必填。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则 ID。规则的唯一性标识，当调用 ModifyL7AccRules 时，该参数必填。
                     * @param _ruleId 规则 ID。规则的唯一性标识，当调用 ModifyL7AccRules 时，该参数必填。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称。名称长度限制不超过 255 个字符。
                     * @return RuleName 规则名称。名称长度限制不超过 255 个字符。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称。名称长度限制不超过 255 个字符。
                     * @param _ruleName 规则名称。名称长度限制不超过 255 个字符。
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
                     * 获取规则注释。可以填写多个注释。
                     * @return Description 规则注释。可以填写多个注释。
                     * 
                     */
                    std::vector<std::string> GetDescription() const;

                    /**
                     * 设置规则注释。可以填写多个注释。
                     * @param _description 规则注释。可以填写多个注释。
                     * 
                     */
                    void SetDescription(const std::vector<std::string>& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取子规则分支。此列表当前只支持填写一项规则，多填无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branches 子规则分支。此列表当前只支持填写一项规则，多填无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleBranch> GetBranches() const;

                    /**
                     * 设置子规则分支。此列表当前只支持填写一项规则，多填无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branches 子规则分支。此列表当前只支持填写一项规则，多填无效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBranches(const std::vector<RuleBranch>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                    /**
                     * 获取规则优先级。仅作为出参使用。
                     * @return RulePriority 规则优先级。仅作为出参使用。
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则优先级。仅作为出参使用。
                     * @param _rulePriority 规则优先级。仅作为出参使用。
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
                     * 规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则 ID。规则的唯一性标识，当调用 ModifyL7AccRules 时，该参数必填。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称。名称长度限制不超过 255 个字符。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则注释。可以填写多个注释。
                     */
                    std::vector<std::string> m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 子规则分支。此列表当前只支持填写一项规则，多填无效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleBranch> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * 规则优先级。仅作为出参使用。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
