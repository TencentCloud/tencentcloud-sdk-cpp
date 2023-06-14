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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Rule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎规则详情
                */
                class RuleItem : public AbstractModel
                {
                public:
                    RuleItem();
                    ~RuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param _ruleId 规则ID。
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
                     * 获取规则名称，名称字符串长度 1~255。
                     * @return RuleName 规则名称，名称字符串长度 1~255。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称，名称字符串长度 1~255。
                     * @param _ruleName 规则名称，名称字符串长度 1~255。
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
                     * 获取规则状态，取值有:
<li> enable: 启用； </li>
<li> disable: 未启用。 </li>
                     * @return Status 规则状态，取值有:
<li> enable: 启用； </li>
<li> disable: 未启用。 </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则状态，取值有:
<li> enable: 启用； </li>
<li> disable: 未启用。 </li>
                     * @param _status 规则状态，取值有:
<li> enable: 启用； </li>
<li> disable: 未启用。 </li>
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
                     * 获取规则内容。
                     * @return Rules 规则内容。
                     * 
                     */
                    std::vector<Rule> GetRules() const;

                    /**
                     * 设置规则内容。
                     * @param _rules 规则内容。
                     * 
                     */
                    void SetRules(const std::vector<Rule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取规则优先级, 值越大优先级越高，最小为 1。
                     * @return RulePriority 规则优先级, 值越大优先级越高，最小为 1。
                     * 
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则优先级, 值越大优先级越高，最小为 1。
                     * @param _rulePriority 规则优先级, 值越大优先级越高，最小为 1。
                     * 
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     * 
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取规则标签。
                     * @return Tags 规则标签。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置规则标签。
                     * @param _tags 规则标签。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称，名称字符串长度 1~255。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则状态，取值有:
<li> enable: 启用； </li>
<li> disable: 未启用。 </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则内容。
                     */
                    std::vector<Rule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 规则优先级, 值越大优先级越高，最小为 1。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * 规则标签。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEITEM_H_
