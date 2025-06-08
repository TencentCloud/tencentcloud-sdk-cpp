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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RequestFieldsForException.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web安全的例外规则
                */
                class ExceptionRule : public AbstractModel
                {
                public:
                    ExceptionRule();
                    ~ExceptionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * @return Id 例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     * @param _id 例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
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
                     * 获取例外规则的名称。
                     * @return Name 例外规则的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置例外规则的名称。
                     * @param _name 例外规则的名称。
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
                     * 获取例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @return Condition 例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     * @param _condition 例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。
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
                     * 获取例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块。</li><li>ManagedRules：指定托管规则。</li>
                     * @return SkipScope 例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块。</li><li>ManagedRules：指定托管规则。</li>
                     * 
                     */
                    std::string GetSkipScope() const;

                    /**
                     * 设置例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块。</li><li>ManagedRules：指定托管规则。</li>
                     * @param _skipScope 例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块。</li><li>ManagedRules：指定托管规则。</li>
                     * 
                     */
                    void SetSkipScope(const std::string& _skipScope);

                    /**
                     * 判断参数 SkipScope 是否已赋值
                     * @return SkipScope 是否已赋值
                     * 
                     */
                    bool SkipScopeHasBeenSet() const;

                    /**
                     * 获取跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 时有效。
                     * @return SkipOption 跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 时有效。
                     * 
                     */
                    std::string GetSkipOption() const;

                    /**
                     * 设置跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 时有效。
                     * @param _skipOption 跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 时有效。
                     * 
                     */
                    void SetSkipOption(const std::string& _skipOption);

                    /**
                     * 判断参数 SkipOption 是否已赋值
                     * @return SkipOption 是否已赋值
                     * 
                     */
                    bool SkipOptionHasBeenSet() const;

                    /**
                     * 获取指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效。取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li>
                     * @return WebSecurityModulesForException 指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效。取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li>
                     * 
                     */
                    std::vector<std::string> GetWebSecurityModulesForException() const;

                    /**
                     * 设置指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效。取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li>
                     * @param _webSecurityModulesForException 指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效。取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li>
                     * 
                     */
                    void SetWebSecurityModulesForException(const std::vector<std::string>& _webSecurityModulesForException);

                    /**
                     * 判断参数 WebSecurityModulesForException 是否已赋值
                     * @return WebSecurityModulesForException 是否已赋值
                     * 
                     */
                    bool WebSecurityModulesForExceptionHasBeenSet() const;

                    /**
                     * 获取指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRuleGroupsForException 。
                     * @return ManagedRulesForException 指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRuleGroupsForException 。
                     * 
                     */
                    std::vector<std::string> GetManagedRulesForException() const;

                    /**
                     * 设置指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRuleGroupsForException 。
                     * @param _managedRulesForException 指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRuleGroupsForException 。
                     * 
                     */
                    void SetManagedRulesForException(const std::vector<std::string>& _managedRulesForException);

                    /**
                     * 判断参数 ManagedRulesForException 是否已赋值
                     * @return ManagedRulesForException 是否已赋值
                     * 
                     */
                    bool ManagedRulesForExceptionHasBeenSet() const;

                    /**
                     * 获取指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRulesForException 。
                     * @return ManagedRuleGroupsForException 指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRulesForException 。
                     * 
                     */
                    std::vector<std::string> GetManagedRuleGroupsForException() const;

                    /**
                     * 设置指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRulesForException 。
                     * @param _managedRuleGroupsForException 指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRulesForException 。
                     * 
                     */
                    void SetManagedRuleGroupsForException(const std::vector<std::string>& _managedRuleGroupsForException);

                    /**
                     * 判断参数 ManagedRuleGroupsForException 是否已赋值
                     * @return ManagedRuleGroupsForException 是否已赋值
                     * 
                     */
                    bool ManagedRuleGroupsForExceptionHasBeenSet() const;

                    /**
                     * 获取指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。
                     * @return RequestFieldsForException 指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。
                     * 
                     */
                    std::vector<RequestFieldsForException> GetRequestFieldsForException() const;

                    /**
                     * 设置指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。
                     * @param _requestFieldsForException 指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。
                     * 
                     */
                    void SetRequestFieldsForException(const std::vector<RequestFieldsForException>& _requestFieldsForException);

                    /**
                     * 判断参数 RequestFieldsForException 是否已赋值
                     * @return RequestFieldsForException 是否已赋值
                     * 
                     */
                    bool RequestFieldsForExceptionHasBeenSet() const;

                    /**
                     * 获取例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li>
                     * @return Enabled 例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li>
                     * @param _enabled 例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 例外规则的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块。</li><li>ManagedRules：指定托管规则。</li>
                     */
                    std::string m_skipScope;
                    bool m_skipScopeHasBeenSet;

                    /**
                     * 跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 时有效。
                     */
                    std::string m_skipOption;
                    bool m_skipOptionHasBeenSet;

                    /**
                     * 指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效。取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li>
                     */
                    std::vector<std::string> m_webSecurityModulesForException;
                    bool m_webSecurityModulesForExceptionHasBeenSet;

                    /**
                     * 指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRuleGroupsForException 。
                     */
                    std::vector<std::string> m_managedRulesForException;
                    bool m_managedRulesForExceptionHasBeenSet;

                    /**
                     * 指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRules 时有效，且此时不能指定 ManagedRulesForException 。
                     */
                    std::vector<std::string> m_managedRuleGroupsForException;
                    bool m_managedRuleGroupsForExceptionHasBeenSet;

                    /**
                     * 指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。
                     */
                    std::vector<RequestFieldsForException> m_requestFieldsForException;
                    bool m_requestFieldsForExceptionHasBeenSet;

                    /**
                     * 例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_
