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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariable.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperation.h>
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
                     * 获取<p>规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li></p>
                     * @return Status <p>规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li></p>
                     * @param _status <p>规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li></p>
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
                     * 获取<p>规则 ID。规则的唯一性标识，当调用 ModifyL7AccRule 时，该参数必填。</p>
                     * @return RuleId <p>规则 ID。规则的唯一性标识，当调用 ModifyL7AccRule 时，该参数必填。</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则 ID。规则的唯一性标识，当调用 ModifyL7AccRule 时，该参数必填。</p>
                     * @param _ruleId <p>规则 ID。规则的唯一性标识，当调用 ModifyL7AccRule 时，该参数必填。</p>
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
                     * 获取<p>规则名称。名称长度限制不超过 255 个字符。</p>
                     * @return RuleName <p>规则名称。名称长度限制不超过 255 个字符。</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称。名称长度限制不超过 255 个字符。</p>
                     * @param _ruleName <p>规则名称。名称长度限制不超过 255 个字符。</p>
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
                     * 获取<p>规则注释。可以填写多个注释。</p>
                     * @return Description <p>规则注释。可以填写多个注释。</p>
                     * 
                     */
                    std::vector<std::string> GetDescription() const;

                    /**
                     * 设置<p>规则注释。可以填写多个注释。</p>
                     * @param _description <p>规则注释。可以填写多个注释。</p>
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
                     * 获取<p>规则级自定义变量列表。CustomVariable.Name 需要使用 user.rule. 作为前缀。变量按照数组顺序依次初始化，InitialValue 支持引用站点级自定义变量，以及位于当前变量之前的规则级自定义变量，不支持引用当前变量自身或位于其后的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。当 Branches 为空时 CustomVariable 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomVariables <p>规则级自定义变量列表。CustomVariable.Name 需要使用 user.rule. 作为前缀。变量按照数组顺序依次初始化，InitialValue 支持引用站点级自定义变量，以及位于当前变量之前的规则级自定义变量，不支持引用当前变量自身或位于其后的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。当 Branches 为空时 CustomVariable 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置<p>规则级自定义变量列表。CustomVariable.Name 需要使用 user.rule. 作为前缀。变量按照数组顺序依次初始化，InitialValue 支持引用站点级自定义变量，以及位于当前变量之前的规则级自定义变量，不支持引用当前变量自身或位于其后的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。当 Branches 为空时 CustomVariable 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customVariables <p>规则级自定义变量列表。CustomVariable.Name 需要使用 user.rule. 作为前缀。变量按照数组顺序依次初始化，InitialValue 支持引用站点级自定义变量，以及位于当前变量之前的规则级自定义变量，不支持引用当前变量自身或位于其后的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。当 Branches 为空时 CustomVariable 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomVariables(const std::vector<CustomVariable>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>规则级自定义变量运算详情。运算中支持引用站点级自定义变量和当前规则已定义的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。此列表当前只支持填写一项规则，多填无效。当 Branches 为空时 CustomVariableOperations 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomVariableOperations <p>规则级自定义变量运算详情。运算中支持引用站点级自定义变量和当前规则已定义的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。此列表当前只支持填写一项规则，多填无效。当 Branches 为空时 CustomVariableOperations 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomVariableOperation> GetCustomVariableOperations() const;

                    /**
                     * 设置<p>规则级自定义变量运算详情。运算中支持引用站点级自定义变量和当前规则已定义的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。此列表当前只支持填写一项规则，多填无效。当 Branches 为空时 CustomVariableOperations 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customVariableOperations <p>规则级自定义变量运算详情。运算中支持引用站点级自定义变量和当前规则已定义的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。此列表当前只支持填写一项规则，多填无效。当 Branches 为空时 CustomVariableOperations 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomVariableOperations(const std::vector<CustomVariableOperation>& _customVariableOperations);

                    /**
                     * 判断参数 CustomVariableOperations 是否已赋值
                     * @return CustomVariableOperations 是否已赋值
                     * 
                     */
                    bool CustomVariableOperationsHasBeenSet() const;

                    /**
                     * 获取<p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branches <p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleBranch> GetBranches() const;

                    /**
                     * 设置<p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branches <p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
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
                     * 获取<p>规则优先级。仅作为出参使用。</p>
                     * @return RulePriority <p>规则优先级。仅作为出参使用。</p>
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置<p>规则优先级。仅作为出参使用。</p>
                     * @param _rulePriority <p>规则优先级。仅作为出参使用。</p>
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
                     * <p>规则状态。取值有：<li> enable: 启用； </li><li> disable: 未启用。</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>规则 ID。规则的唯一性标识，当调用 ModifyL7AccRule 时，该参数必填。</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称。名称长度限制不超过 255 个字符。</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则注释。可以填写多个注释。</p>
                     */
                    std::vector<std::string> m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>规则级自定义变量列表。CustomVariable.Name 需要使用 user.rule. 作为前缀。变量按照数组顺序依次初始化，InitialValue 支持引用站点级自定义变量，以及位于当前变量之前的规则级自定义变量，不支持引用当前变量自身或位于其后的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。当 Branches 为空时 CustomVariable 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>规则级自定义变量运算详情。运算中支持引用站点级自定义变量和当前规则已定义的规则级自定义变量。站点级自定义变量可通过 DescribeZoneCustomVariables 接口查询。此列表当前只支持填写一项规则，多填无效。当 Branches 为空时 CustomVariableOperations 不允许填写，填写无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomVariableOperation> m_customVariableOperations;
                    bool m_customVariableOperationsHasBeenSet;

                    /**
                     * <p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleBranch> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * <p>规则优先级。仅作为出参使用。</p>
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEITEM_H_
