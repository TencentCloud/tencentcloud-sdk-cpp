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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web 防护功能下的自定义规则。
                */
                class CustomRule : public AbstractModel
                {
                public:
                    CustomRule();
                    ~CustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义规则的名称。
                     * @return Name 自定义规则的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义规则的名称。
                     * @param _name 自定义规则的名称。
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
                     * 获取自定义规则的具体内容，需符合表达式语法，详细规范参见 [产品文档](https://cloud.tencent.com/document/product/1552/125343) 。
                     * @return Condition 自定义规则的具体内容，需符合表达式语法，详细规范参见 [产品文档](https://cloud.tencent.com/document/product/1552/125343) 。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置自定义规则的具体内容，需符合表达式语法，详细规范参见 [产品文档](https://cloud.tencent.com/document/product/1552/125343) 。
                     * @param _condition 自定义规则的具体内容，需符合表达式语法，详细规范参见 [产品文档](https://cloud.tencent.com/document/product/1552/125343) 。
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
                     * 获取自定义规则的处置动作。SecurityAction.Name 取值范围如下：<ul><li>Deny：拦截；</li><li>Monitor：观察；</li><li>ReturnCustomPage：使用指定页面拦截；</li><li>Redirect：重定向至 URL；</li><li>BlockIP：IP 封禁；</li><li>JSChallenge：JavaScript 挑战；</li><li>ManagedChallenge：托管挑战；</li><li>Allow：放行。</li></ul>
                     * @return Action 自定义规则的处置动作。SecurityAction.Name 取值范围如下：<ul><li>Deny：拦截；</li><li>Monitor：观察；</li><li>ReturnCustomPage：使用指定页面拦截；</li><li>Redirect：重定向至 URL；</li><li>BlockIP：IP 封禁；</li><li>JSChallenge：JavaScript 挑战；</li><li>ManagedChallenge：托管挑战；</li><li>Allow：放行。</li></ul>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置自定义规则的处置动作。SecurityAction.Name 取值范围如下：<ul><li>Deny：拦截；</li><li>Monitor：观察；</li><li>ReturnCustomPage：使用指定页面拦截；</li><li>Redirect：重定向至 URL；</li><li>BlockIP：IP 封禁；</li><li>JSChallenge：JavaScript 挑战；</li><li>ManagedChallenge：托管挑战；</li><li>Allow：放行。</li></ul>
                     * @param _action 自定义规则的处置动作。SecurityAction.Name 取值范围如下：<ul><li>Deny：拦截；</li><li>Monitor：观察；</li><li>ReturnCustomPage：使用指定页面拦截；</li><li>Redirect：重定向至 URL；</li><li>BlockIP：IP 封禁；</li><li>JSChallenge：JavaScript 挑战；</li><li>ManagedChallenge：托管挑战；</li><li>Allow：放行。</li></ul>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取自定义规则是否开启。取值有：<ul><li>on：开启</li><li>off：关闭</li></ul>
                     * @return Enabled 自定义规则是否开启。取值有：<ul><li>on：开启</li><li>off：关闭</li></ul>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置自定义规则是否开启。取值有：<ul><li>on：开启</li><li>off：关闭</li></ul>
                     * @param _enabled 自定义规则是否开启。取值有：<ul><li>on：开启</li><li>off：关闭</li></ul>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取自定义规则的 ID。通过规则 ID 可支持不同的规则配置操作：<ul><li>增加新规则：ID 为空或不指定 ID 参数；</li><li>修改已有规则：指定需要更新/修改的规则 ID；</li><li>删除已有规则：CustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></ul>
                     * @return Id 自定义规则的 ID。通过规则 ID 可支持不同的规则配置操作：<ul><li>增加新规则：ID 为空或不指定 ID 参数；</li><li>修改已有规则：指定需要更新/修改的规则 ID；</li><li>删除已有规则：CustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></ul>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置自定义规则的 ID。通过规则 ID 可支持不同的规则配置操作：<ul><li>增加新规则：ID 为空或不指定 ID 参数；</li><li>修改已有规则：指定需要更新/修改的规则 ID；</li><li>删除已有规则：CustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></ul>
                     * @param _id 自定义规则的 ID。通过规则 ID 可支持不同的规则配置操作：<ul><li>增加新规则：ID 为空或不指定 ID 参数；</li><li>修改已有规则：指定需要更新/修改的规则 ID；</li><li>删除已有规则：CustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></ul>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取自定义规则的类型。取值有：<ul><li>BasicAccessRule：基础访问管控；</li><li>PreciseMatchRule：精准匹配规则；</li><li>ManagedAccessRule：专家定制规则，仅出参支持。</li></ul>说明：当未指定 RuleType 时，默认为 `PreciseMatchRule`。
                     * @return RuleType 自定义规则的类型。取值有：<ul><li>BasicAccessRule：基础访问管控；</li><li>PreciseMatchRule：精准匹配规则；</li><li>ManagedAccessRule：专家定制规则，仅出参支持。</li></ul>说明：当未指定 RuleType 时，默认为 `PreciseMatchRule`。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置自定义规则的类型。取值有：<ul><li>BasicAccessRule：基础访问管控；</li><li>PreciseMatchRule：精准匹配规则；</li><li>ManagedAccessRule：专家定制规则，仅出参支持。</li></ul>说明：当未指定 RuleType 时，默认为 `PreciseMatchRule`。
                     * @param _ruleType 自定义规则的类型。取值有：<ul><li>BasicAccessRule：基础访问管控；</li><li>PreciseMatchRule：精准匹配规则；</li><li>ManagedAccessRule：专家定制规则，仅出参支持。</li></ul>说明：当未指定 RuleType 时，默认为 `PreciseMatchRule`。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取自定义规则的优先级，范围是 0 ~ 100，默认为 0，仅支持精准匹配规则（`PreciseMatchRule`）。
                     * @return Priority 自定义规则的优先级，范围是 0 ~ 100，默认为 0，仅支持精准匹配规则（`PreciseMatchRule`）。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置自定义规则的优先级，范围是 0 ~ 100，默认为 0，仅支持精准匹配规则（`PreciseMatchRule`）。
                     * @param _priority 自定义规则的优先级，范围是 0 ~ 100，默认为 0，仅支持精准匹配规则（`PreciseMatchRule`）。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 自定义规则的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义规则的具体内容，需符合表达式语法，详细规范参见 [产品文档](https://cloud.tencent.com/document/product/1552/125343) 。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 自定义规则的处置动作。SecurityAction.Name 取值范围如下：<ul><li>Deny：拦截；</li><li>Monitor：观察；</li><li>ReturnCustomPage：使用指定页面拦截；</li><li>Redirect：重定向至 URL；</li><li>BlockIP：IP 封禁；</li><li>JSChallenge：JavaScript 挑战；</li><li>ManagedChallenge：托管挑战；</li><li>Allow：放行。</li></ul>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 自定义规则是否开启。取值有：<ul><li>on：开启</li><li>off：关闭</li></ul>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 自定义规则的 ID。通过规则 ID 可支持不同的规则配置操作：<ul><li>增加新规则：ID 为空或不指定 ID 参数；</li><li>修改已有规则：指定需要更新/修改的规则 ID；</li><li>删除已有规则：CustomRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></ul>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自定义规则的类型。取值有：<ul><li>BasicAccessRule：基础访问管控；</li><li>PreciseMatchRule：精准匹配规则；</li><li>ManagedAccessRule：专家定制规则，仅出参支持。</li></ul>说明：当未指定 RuleType 时，默认为 `PreciseMatchRule`。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 自定义规则的优先级，范围是 0 ~ 100，默认为 0，仅支持精准匹配规则（`PreciseMatchRule`）。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULE_H_
