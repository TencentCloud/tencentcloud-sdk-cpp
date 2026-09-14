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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEBRANCH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEBRANCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperationRuleAction.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperationSubRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义变量运算子规则分支。
                */
                class CustomVariableOperationRuleBranch : public AbstractModel
                {
                public:
                    CustomVariableOperationRuleBranch();
                    ~CustomVariableOperationRuleBranch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件</a>。</p>
                     * @return Condition <p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件</a>。</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件</a>。</p>
                     * @param _condition <p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件</a>。</p>
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
                     * 获取<p><a href="https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198">操作</a>。<br>注意：Actions 和 SubRules 不可同时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions <p><a href="https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198">操作</a>。<br>注意：Actions 和 SubRules 不可同时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomVariableOperationRuleAction> GetActions() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198">操作</a>。<br>注意：Actions 和 SubRules 不可同时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actions <p><a href="https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198">操作</a>。<br>注意：Actions 和 SubRules 不可同时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActions(const std::vector<CustomVariableOperationRuleAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取<p>子规则列表。此列表中若存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRules <p>子规则列表。此列表中若存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomVariableOperationSubRule> GetSubRules() const;

                    /**
                     * 设置<p>子规则列表。此列表中若存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subRules <p>子规则列表。此列表中若存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubRules(const std::vector<CustomVariableOperationSubRule>& _subRules);

                    /**
                     * 判断参数 SubRules 是否已赋值
                     * @return SubRules 是否已赋值
                     * 
                     */
                    bool SubRulesHasBeenSet() const;

                private:

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d">匹配条件</a>。</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198">操作</a>。<br>注意：Actions 和 SubRules 不可同时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomVariableOperationRuleAction> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>子规则列表。此列表中若存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomVariableOperationSubRule> m_subRules;
                    bool m_subRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEBRANCH_H_
