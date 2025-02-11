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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEBRANCH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEBRANCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineAction.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineSubRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 子规则分支。
                */
                class RuleBranch : public AbstractModel
                {
                public:
                    RuleBranch();
                    ~RuleBranch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[匹配条件](https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d)。
                     * @return Condition [匹配条件](https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d)。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置[匹配条件](https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d)。
                     * @param _condition [匹配条件](https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d)。
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
                     * 获取[操作](https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198)。<br>注意：Actions 和 SubRules 不可同时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions [操作](https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198)。<br>注意：Actions 和 SubRules 不可同时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleEngineAction> GetActions() const;

                    /**
                     * 设置[操作](https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198)。<br>注意：Actions 和 SubRules 不可同时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actions [操作](https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198)。<br>注意：Actions 和 SubRules 不可同时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActions(const std::vector<RuleEngineAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取子规则列表。此列表中时存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubRules 子规则列表。此列表中时存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleEngineSubRule> GetSubRules() const;

                    /**
                     * 设置子规则列表。此列表中时存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subRules 子规则列表。此列表中时存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubRules(const std::vector<RuleEngineSubRule>& _subRules);

                    /**
                     * 判断参数 SubRules 是否已赋值
                     * @return SubRules 是否已赋值
                     * 
                     */
                    bool SubRulesHasBeenSet() const;

                private:

                    /**
                     * [匹配条件](https://cloud.tencent.com/document/product/1552/90438#33f65828-c6c6-4b66-a011-25a20b548d5d)。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * [操作](https://cloud.tencent.com/document/product/1552/90438#c7bd7e02-9247-4a72-b0e4-11c27cadb198)。<br>注意：Actions 和 SubRules 不可同时为空。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleEngineAction> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 子规则列表。此列表中时存在多条规则，按照从上往下的顺序依次执行。<br>注意：SubRules 和 Actions 不可同时为空。且当前只支持填写一层 SubRules。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleEngineSubRule> m_subRules;
                    bool m_subRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEBRANCH_H_
