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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTDESCRIPTION_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时容器访问控制事件描述信息
                */
                class AccessControlEventDescription : public AbstractModel
                {
                public:
                    AccessControlEventDescription();
                    ~AccessControlEventDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件规则
                     * @return Description 事件规则
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置事件规则
                     * @param _description 事件规则
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
                     * 获取解决方案
                     * @return Solution 解决方案
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置解决方案
                     * @param _solution 解决方案
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取事件备注信息
                     * @return Remark 事件备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置事件备注信息
                     * @param _remark 事件备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取命中规则详细信息
                     * @return MatchRule 命中规则详细信息
                     * 
                     */
                    AccessControlChildRuleInfo GetMatchRule() const;

                    /**
                     * 设置命中规则详细信息
                     * @param _matchRule 命中规则详细信息
                     * 
                     */
                    void SetMatchRule(const AccessControlChildRuleInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                    /**
                     * 获取命中规则名字
                     * @return RuleName 命中规则名字
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置命中规则名字
                     * @param _ruleName 命中规则名字
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
                     * 获取命中规则id
                     * @return RuleId 命中规则id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置命中规则id
                     * @param _ruleId 命中规则id
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
                     * 获取事件最后一次处理的时间
                     * @return OperationTime 事件最后一次处理的时间
                     * 
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 设置事件最后一次处理的时间
                     * @param _operationTime 事件最后一次处理的时间
                     * 
                     */
                    void SetOperationTime(const std::string& _operationTime);

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     * 
                     */
                    bool OperationTimeHasBeenSet() const;

                private:

                    /**
                     * 事件规则
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 事件备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 命中规则详细信息
                     */
                    AccessControlChildRuleInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                    /**
                     * 命中规则名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 命中规则id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 事件最后一次处理的时间
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLEVENTDESCRIPTION_H_
