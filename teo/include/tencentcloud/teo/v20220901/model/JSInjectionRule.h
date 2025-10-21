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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_JSINJECTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_JSINJECTIONRULE_H_

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
                * JavaScript 注入规则。
                */
                class JSInjectionRule : public AbstractModel
                {
                public:
                    JSInjectionRule();
                    ~JSInjectionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则 ID。
                     * @return RuleId 规则 ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则 ID。
                     * @param _ruleId 规则 ID。
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
                     * 获取规则名称。
                     * @return Name 规则名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称。
                     * @param _name 规则名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规则优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * @return Priority 规则优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * @param _priority 规则优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取匹配条件内容。需符合表达式语法，详细规范参见产品文档。
                     * @return Condition 匹配条件内容。需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置匹配条件内容。需符合表达式语法，详细规范参见产品文档。
                     * @param _condition 匹配条件内容。需符合表达式语法，详细规范参见产品文档。
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
                     * 获取JavaScript 注入选项。默认值为 run-attestations，取值有：
<li> no-injection: 不注入 JavaScript;</li>
<li> inject-sdk-only: 注入当前支持的所有认证方式的 SDK，当前支持：TC-RCE 和 TC-CAPTCHA。注意：若需执行认证检测，请配置挑战规则。</li>

                     * @return InjectJS JavaScript 注入选项。默认值为 run-attestations，取值有：
<li> no-injection: 不注入 JavaScript;</li>
<li> inject-sdk-only: 注入当前支持的所有认证方式的 SDK，当前支持：TC-RCE 和 TC-CAPTCHA。注意：若需执行认证检测，请配置挑战规则。</li>

                     * 
                     */
                    std::string GetInjectJS() const;

                    /**
                     * 设置JavaScript 注入选项。默认值为 run-attestations，取值有：
<li> no-injection: 不注入 JavaScript;</li>
<li> inject-sdk-only: 注入当前支持的所有认证方式的 SDK，当前支持：TC-RCE 和 TC-CAPTCHA。注意：若需执行认证检测，请配置挑战规则。</li>

                     * @param _injectJS JavaScript 注入选项。默认值为 run-attestations，取值有：
<li> no-injection: 不注入 JavaScript;</li>
<li> inject-sdk-only: 注入当前支持的所有认证方式的 SDK，当前支持：TC-RCE 和 TC-CAPTCHA。注意：若需执行认证检测，请配置挑战规则。</li>

                     * 
                     */
                    void SetInjectJS(const std::string& _injectJS);

                    /**
                     * 判断参数 InjectJS 是否已赋值
                     * @return InjectJS 是否已赋值
                     * 
                     */
                    bool InjectJSHasBeenSet() const;

                private:

                    /**
                     * 规则 ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则优先级，数值越小越优先执行，范围是 0 ~ 100，默认为 0。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 匹配条件内容。需符合表达式语法，详细规范参见产品文档。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * JavaScript 注入选项。默认值为 run-attestations，取值有：
<li> no-injection: 不注入 JavaScript;</li>
<li> inject-sdk-only: 注入当前支持的所有认证方式的 SDK，当前支持：TC-RCE 和 TC-CAPTCHA。注意：若需执行认证检测，请配置挑战规则。</li>

                     */
                    std::string m_injectJS;
                    bool m_injectJSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_JSINJECTIONRULE_H_
