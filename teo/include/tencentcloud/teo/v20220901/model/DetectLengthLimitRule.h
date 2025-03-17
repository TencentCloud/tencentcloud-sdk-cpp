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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DetectLengthLimitCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 检测长度限制规则详情
                */
                class DetectLengthLimitRule : public AbstractModel
                {
                public:
                    DetectLengthLimitRule();
                    ~DetectLengthLimitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id。仅出参使用。
                     * @return RuleId 规则Id。仅出参使用。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则Id。仅出参使用。
                     * @param _ruleId 规则Id。仅出参使用。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称。仅出参使用。
                     * @return RuleName 规则名称。仅出参使用。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称。仅出参使用。
                     * @param _ruleName 规则名称。仅出参使用。
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
                     * 获取规则描述，仅出参使用。
                     * @return Description 规则描述，仅出参使用。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，仅出参使用。
                     * @param _description 规则描述，仅出参使用。
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
                     * 获取规则配置条件。仅出参使用。
                     * @return Conditions 规则配置条件。仅出参使用。
                     * 
                     */
                    std::vector<DetectLengthLimitCondition> GetConditions() const;

                    /**
                     * 设置规则配置条件。仅出参使用。
                     * @param _conditions 规则配置条件。仅出参使用。
                     * 
                     */
                    void SetConditions(const std::vector<DetectLengthLimitCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取处置方式，取值有：
<li>skip：当请求正文数据超过 Conditions 出参中 body_depth 设置的检测深度时，跳过所有请求正文内容的检测；</li>
<li>scan：仅检测 Conditions 出参中 body_depth 设置的检测深度，对超出部分的请求正文内容直接截断处理，超出部分的请求正文不会经过安全检测。</li>仅出参使用。
                     * @return Action 处置方式，取值有：
<li>skip：当请求正文数据超过 Conditions 出参中 body_depth 设置的检测深度时，跳过所有请求正文内容的检测；</li>
<li>scan：仅检测 Conditions 出参中 body_depth 设置的检测深度，对超出部分的请求正文内容直接截断处理，超出部分的请求正文不会经过安全检测。</li>仅出参使用。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置方式，取值有：
<li>skip：当请求正文数据超过 Conditions 出参中 body_depth 设置的检测深度时，跳过所有请求正文内容的检测；</li>
<li>scan：仅检测 Conditions 出参中 body_depth 设置的检测深度，对超出部分的请求正文内容直接截断处理，超出部分的请求正文不会经过安全检测。</li>仅出参使用。
                     * @param _action 处置方式，取值有：
<li>skip：当请求正文数据超过 Conditions 出参中 body_depth 设置的检测深度时，跳过所有请求正文内容的检测；</li>
<li>scan：仅检测 Conditions 出参中 body_depth 设置的检测深度，对超出部分的请求正文内容直接截断处理，超出部分的请求正文不会经过安全检测。</li>仅出参使用。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 规则Id。仅出参使用。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称。仅出参使用。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则描述，仅出参使用。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则配置条件。仅出参使用。
                     */
                    std::vector<DetectLengthLimitCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 处置方式，取值有：
<li>skip：当请求正文数据超过 Conditions 出参中 body_depth 设置的检测深度时，跳过所有请求正文内容的检测；</li>
<li>scan：仅检测 Conditions 出参中 body_depth 设置的检测深度，对超出部分的请求正文内容直接截断处理，超出部分的请求正文不会经过安全检测。</li>仅出参使用。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITRULE_H_
