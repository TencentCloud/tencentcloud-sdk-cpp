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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleAndConditions.h>
#include <tencentcloud/teo/v20220901/model/Action.h>
#include <tencentcloud/teo/v20220901/model/SubRuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎规则项，Conditions 数组内多个项的关系为 或，内层 Conditions 列表内多个项的关系为 且。
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行功能判断条件。
注意：满足该数组内任意一项条件，功能即可执行。
                     * @return Conditions 执行功能判断条件。
注意：满足该数组内任意一项条件，功能即可执行。
                     * 
                     */
                    std::vector<RuleAndConditions> GetConditions() const;

                    /**
                     * 设置执行功能判断条件。
注意：满足该数组内任意一项条件，功能即可执行。
                     * @param _conditions 执行功能判断条件。
注意：满足该数组内任意一项条件，功能即可执行。
                     * 
                     */
                    void SetConditions(const std::vector<RuleAndConditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取执行的功能。注意：Actions 和 SubRules 不可都为空
                     * @return Actions 执行的功能。注意：Actions 和 SubRules 不可都为空
                     * 
                     */
                    std::vector<Action> GetActions() const;

                    /**
                     * 设置执行的功能。注意：Actions 和 SubRules 不可都为空
                     * @param _actions 执行的功能。注意：Actions 和 SubRules 不可都为空
                     * 
                     */
                    void SetActions(const std::vector<Action>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取嵌套规则。注意：SubRules 和 Actions 不可都为空
                     * @return SubRules 嵌套规则。注意：SubRules 和 Actions 不可都为空
                     * 
                     */
                    std::vector<SubRuleItem> GetSubRules() const;

                    /**
                     * 设置嵌套规则。注意：SubRules 和 Actions 不可都为空
                     * @param _subRules 嵌套规则。注意：SubRules 和 Actions 不可都为空
                     * 
                     */
                    void SetSubRules(const std::vector<SubRuleItem>& _subRules);

                    /**
                     * 判断参数 SubRules 是否已赋值
                     * @return SubRules 是否已赋值
                     * 
                     */
                    bool SubRulesHasBeenSet() const;

                private:

                    /**
                     * 执行功能判断条件。
注意：满足该数组内任意一项条件，功能即可执行。
                     */
                    std::vector<RuleAndConditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 执行的功能。注意：Actions 和 SubRules 不可都为空
                     */
                    std::vector<Action> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 嵌套规则。注意：SubRules 和 Actions 不可都为空
                     */
                    std::vector<SubRuleItem> m_subRules;
                    bool m_subRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULE_H_
