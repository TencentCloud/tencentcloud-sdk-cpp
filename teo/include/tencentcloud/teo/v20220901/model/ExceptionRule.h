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
                     * 获取<p>例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * @return Id <p>例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * @param _id <p>例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
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
                     * 获取<p>例外规则的名称。</p>
                     * @return Name <p>例外规则的名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>例外规则的名称。</p>
                     * @param _name <p>例外规则的名称。</p>
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
                     * 获取<p>例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * @return Condition <p>例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     * @param _condition <p>例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
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
                     * 获取<p>例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块，需配合 WebSecurityModulesForException 使用；</li><li>WebSecuritySubmodules: 指定例外规则的安全防护子模块，需配合 WebSecuritySubmodulesForException 使用；</li><li>ManagedRules：指定例外规则的具体托管规则，需配合 ManagedRulesForException 使用；</li><li>ManagedRuleGroups：指定例外规则的托管规则组，需配合 ManagedRuleGroupsForException 使用。</li></p>
                     * @return SkipScope <p>例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块，需配合 WebSecurityModulesForException 使用；</li><li>WebSecuritySubmodules: 指定例外规则的安全防护子模块，需配合 WebSecuritySubmodulesForException 使用；</li><li>ManagedRules：指定例外规则的具体托管规则，需配合 ManagedRulesForException 使用；</li><li>ManagedRuleGroups：指定例外规则的托管规则组，需配合 ManagedRuleGroupsForException 使用。</li></p>
                     * 
                     */
                    std::string GetSkipScope() const;

                    /**
                     * 设置<p>例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块，需配合 WebSecurityModulesForException 使用；</li><li>WebSecuritySubmodules: 指定例外规则的安全防护子模块，需配合 WebSecuritySubmodulesForException 使用；</li><li>ManagedRules：指定例外规则的具体托管规则，需配合 ManagedRulesForException 使用；</li><li>ManagedRuleGroups：指定例外规则的托管规则组，需配合 ManagedRuleGroupsForException 使用。</li></p>
                     * @param _skipScope <p>例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块，需配合 WebSecurityModulesForException 使用；</li><li>WebSecuritySubmodules: 指定例外规则的安全防护子模块，需配合 WebSecuritySubmodulesForException 使用；</li><li>ManagedRules：指定例外规则的具体托管规则，需配合 ManagedRulesForException 使用；</li><li>ManagedRuleGroups：指定例外规则的托管规则组，需配合 ManagedRuleGroupsForException 使用。</li></p>
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
                     * 获取<p>跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 时有效。</p>
                     * @return SkipOption <p>跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 时有效。</p>
                     * 
                     */
                    std::string GetSkipOption() const;

                    /**
                     * 设置<p>跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 时有效。</p>
                     * @param _skipOption <p>跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 时有效。</p>
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
                     * 获取<p>指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效，取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li></p>
                     * @return WebSecurityModulesForException <p>指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效，取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li></p>
                     * 
                     */
                    std::vector<std::string> GetWebSecurityModulesForException() const;

                    /**
                     * 设置<p>指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效，取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li></p>
                     * @param _webSecurityModulesForException <p>指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效，取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li></p>
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
                     * 获取<p>指定例外规则的安全防护子模块，仅当 SkipScope 为 WebSecuritySubmodules 时有效。</p><p>枚举值：</p><ul><li>websec-mod-managed-rules/semantic-analysis： 托管规则-深度分析</li><li>websec-mod-managed-rules/managed-rule-groups： 托管规则-规则集</li><li>websec-mod-managed-rules/frequent-scanning-protection： 托管规则-高频扫描防护</li><li>websec-mod-rate-limiting-rules： 速率限制规则</li><li>websec-mod-custom-rules： 自定义规则</li><li>websec-mod-http-ddos-protection/adaptive-frequency-control： HTTP DDoS 防护-自适应频控</li><li>websec-mod-http-ddos-protection/client-filtering： HTTP DDoS 防护-智能客户端过滤</li><li>websec-mod-http-ddos-protection/bandwidth-abuse-defense： HTTP DDoS 防护-流量盗刷防护</li><li>websec-mod-bot-management/basic-feature： 高级 Bot 管理-基础特征管理</li><li>websec-mod-bot-management/ip-reputation： 高级 Bot 管理-客户端画像分析</li><li>websec-mod-bot-management/bot-intelligence： 高级 Bot 管理-智能 Bot 分析</li><li>websec-mod-bot-management/custom-rules： 高级 Bot 管理-自定义规则</li><li>websec-mod-bot-management/browser-impersonation-detection： 高级 Bot 管理-主动特征识别</li><li>websec-mod-bot-management/client-attestation-rules： 高级 Bot 管理-客户端认证</li><li>websec-mod-bot-management-lite/ai-crawler-detection： 基础 Bot 管理-AI 爬虫处置</li><li>websec-mod-bot-management-lite/captcha-page-challenge： 基础 Bot 管理-人机校验页</li></ul>
                     * @return WebSecuritySubmodulesForException <p>指定例外规则的安全防护子模块，仅当 SkipScope 为 WebSecuritySubmodules 时有效。</p><p>枚举值：</p><ul><li>websec-mod-managed-rules/semantic-analysis： 托管规则-深度分析</li><li>websec-mod-managed-rules/managed-rule-groups： 托管规则-规则集</li><li>websec-mod-managed-rules/frequent-scanning-protection： 托管规则-高频扫描防护</li><li>websec-mod-rate-limiting-rules： 速率限制规则</li><li>websec-mod-custom-rules： 自定义规则</li><li>websec-mod-http-ddos-protection/adaptive-frequency-control： HTTP DDoS 防护-自适应频控</li><li>websec-mod-http-ddos-protection/client-filtering： HTTP DDoS 防护-智能客户端过滤</li><li>websec-mod-http-ddos-protection/bandwidth-abuse-defense： HTTP DDoS 防护-流量盗刷防护</li><li>websec-mod-bot-management/basic-feature： 高级 Bot 管理-基础特征管理</li><li>websec-mod-bot-management/ip-reputation： 高级 Bot 管理-客户端画像分析</li><li>websec-mod-bot-management/bot-intelligence： 高级 Bot 管理-智能 Bot 分析</li><li>websec-mod-bot-management/custom-rules： 高级 Bot 管理-自定义规则</li><li>websec-mod-bot-management/browser-impersonation-detection： 高级 Bot 管理-主动特征识别</li><li>websec-mod-bot-management/client-attestation-rules： 高级 Bot 管理-客户端认证</li><li>websec-mod-bot-management-lite/ai-crawler-detection： 基础 Bot 管理-AI 爬虫处置</li><li>websec-mod-bot-management-lite/captcha-page-challenge： 基础 Bot 管理-人机校验页</li></ul>
                     * 
                     */
                    std::vector<std::string> GetWebSecuritySubmodulesForException() const;

                    /**
                     * 设置<p>指定例外规则的安全防护子模块，仅当 SkipScope 为 WebSecuritySubmodules 时有效。</p><p>枚举值：</p><ul><li>websec-mod-managed-rules/semantic-analysis： 托管规则-深度分析</li><li>websec-mod-managed-rules/managed-rule-groups： 托管规则-规则集</li><li>websec-mod-managed-rules/frequent-scanning-protection： 托管规则-高频扫描防护</li><li>websec-mod-rate-limiting-rules： 速率限制规则</li><li>websec-mod-custom-rules： 自定义规则</li><li>websec-mod-http-ddos-protection/adaptive-frequency-control： HTTP DDoS 防护-自适应频控</li><li>websec-mod-http-ddos-protection/client-filtering： HTTP DDoS 防护-智能客户端过滤</li><li>websec-mod-http-ddos-protection/bandwidth-abuse-defense： HTTP DDoS 防护-流量盗刷防护</li><li>websec-mod-bot-management/basic-feature： 高级 Bot 管理-基础特征管理</li><li>websec-mod-bot-management/ip-reputation： 高级 Bot 管理-客户端画像分析</li><li>websec-mod-bot-management/bot-intelligence： 高级 Bot 管理-智能 Bot 分析</li><li>websec-mod-bot-management/custom-rules： 高级 Bot 管理-自定义规则</li><li>websec-mod-bot-management/browser-impersonation-detection： 高级 Bot 管理-主动特征识别</li><li>websec-mod-bot-management/client-attestation-rules： 高级 Bot 管理-客户端认证</li><li>websec-mod-bot-management-lite/ai-crawler-detection： 基础 Bot 管理-AI 爬虫处置</li><li>websec-mod-bot-management-lite/captcha-page-challenge： 基础 Bot 管理-人机校验页</li></ul>
                     * @param _webSecuritySubmodulesForException <p>指定例外规则的安全防护子模块，仅当 SkipScope 为 WebSecuritySubmodules 时有效。</p><p>枚举值：</p><ul><li>websec-mod-managed-rules/semantic-analysis： 托管规则-深度分析</li><li>websec-mod-managed-rules/managed-rule-groups： 托管规则-规则集</li><li>websec-mod-managed-rules/frequent-scanning-protection： 托管规则-高频扫描防护</li><li>websec-mod-rate-limiting-rules： 速率限制规则</li><li>websec-mod-custom-rules： 自定义规则</li><li>websec-mod-http-ddos-protection/adaptive-frequency-control： HTTP DDoS 防护-自适应频控</li><li>websec-mod-http-ddos-protection/client-filtering： HTTP DDoS 防护-智能客户端过滤</li><li>websec-mod-http-ddos-protection/bandwidth-abuse-defense： HTTP DDoS 防护-流量盗刷防护</li><li>websec-mod-bot-management/basic-feature： 高级 Bot 管理-基础特征管理</li><li>websec-mod-bot-management/ip-reputation： 高级 Bot 管理-客户端画像分析</li><li>websec-mod-bot-management/bot-intelligence： 高级 Bot 管理-智能 Bot 分析</li><li>websec-mod-bot-management/custom-rules： 高级 Bot 管理-自定义规则</li><li>websec-mod-bot-management/browser-impersonation-detection： 高级 Bot 管理-主动特征识别</li><li>websec-mod-bot-management/client-attestation-rules： 高级 Bot 管理-客户端认证</li><li>websec-mod-bot-management-lite/ai-crawler-detection： 基础 Bot 管理-AI 爬虫处置</li><li>websec-mod-bot-management-lite/captcha-page-challenge： 基础 Bot 管理-人机校验页</li></ul>
                     * 
                     */
                    void SetWebSecuritySubmodulesForException(const std::vector<std::string>& _webSecuritySubmodulesForException);

                    /**
                     * 判断参数 WebSecuritySubmodulesForException 是否已赋值
                     * @return WebSecuritySubmodulesForException 是否已赋值
                     * 
                     */
                    bool WebSecuritySubmodulesForExceptionHasBeenSet() const;

                    /**
                     * 获取<p>指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效。</p>
                     * @return ManagedRulesForException <p>指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效。</p>
                     * 
                     */
                    std::vector<std::string> GetManagedRulesForException() const;

                    /**
                     * 设置<p>指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效。</p>
                     * @param _managedRulesForException <p>指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效。</p>
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
                     * 获取<p>指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRuleGroups 时有效。</p>
                     * @return ManagedRuleGroupsForException <p>指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRuleGroups 时有效。</p>
                     * 
                     */
                    std::vector<std::string> GetManagedRuleGroupsForException() const;

                    /**
                     * 设置<p>指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRuleGroups 时有效。</p>
                     * @param _managedRuleGroupsForException <p>指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRuleGroups 时有效。</p>
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
                     * 获取<p>指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。</p>
                     * @return RequestFieldsForException <p>指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。</p>
                     * 
                     */
                    std::vector<RequestFieldsForException> GetRequestFieldsForException() const;

                    /**
                     * 设置<p>指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。</p>
                     * @param _requestFieldsForException <p>指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。</p>
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
                     * 获取<p>例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li></p>
                     * @return Enabled <p>例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li></p>
                     * @param _enabled <p>例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li></p>
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
                     * <p>例外规则的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li> <b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li> <b>删除</b>已有规则：ExceptionRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>例外规则的名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>例外规则的具体内容，需符合表达式语法，详细规范参见产品文档。</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>例外规则执行选项，取值有：<li>WebSecurityModules: 指定例外规则的安全防护模块，需配合 WebSecurityModulesForException 使用；</li><li>WebSecuritySubmodules: 指定例外规则的安全防护子模块，需配合 WebSecuritySubmodulesForException 使用；</li><li>ManagedRules：指定例外规则的具体托管规则，需配合 ManagedRulesForException 使用；</li><li>ManagedRuleGroups：指定例外规则的托管规则组，需配合 ManagedRuleGroupsForException 使用。</li></p>
                     */
                    std::string m_skipScope;
                    bool m_skipScopeHasBeenSet;

                    /**
                     * <p>跳过请求的具体类型，取值有：<li>SkipOnAllRequestFields: 跳过所有请求；</li><li>SkipOnSpecifiedRequestFields: 跳过指定请求字段。</li>仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 时有效。</p>
                     */
                    std::string m_skipOption;
                    bool m_skipOptionHasBeenSet;

                    /**
                     * <p>指定例外规则的安全防护模块，仅当 SkipScope 为 WebSecurityModules 时有效，取值有：<li>websec-mod-managed-rules：托管规则；</li><li>websec-mod-rate-limiting：速率限制；</li><li>websec-mod-custom-rules：自定义规则；</li><li>websec-mod-adaptive-control：自适应频控、智能客户端过滤、慢速攻击防护、流量盗刷防护；</li><li>websec-mod-bot：Bot管理。</li></p>
                     */
                    std::vector<std::string> m_webSecurityModulesForException;
                    bool m_webSecurityModulesForExceptionHasBeenSet;

                    /**
                     * <p>指定例外规则的安全防护子模块，仅当 SkipScope 为 WebSecuritySubmodules 时有效。</p><p>枚举值：</p><ul><li>websec-mod-managed-rules/semantic-analysis： 托管规则-深度分析</li><li>websec-mod-managed-rules/managed-rule-groups： 托管规则-规则集</li><li>websec-mod-managed-rules/frequent-scanning-protection： 托管规则-高频扫描防护</li><li>websec-mod-rate-limiting-rules： 速率限制规则</li><li>websec-mod-custom-rules： 自定义规则</li><li>websec-mod-http-ddos-protection/adaptive-frequency-control： HTTP DDoS 防护-自适应频控</li><li>websec-mod-http-ddos-protection/client-filtering： HTTP DDoS 防护-智能客户端过滤</li><li>websec-mod-http-ddos-protection/bandwidth-abuse-defense： HTTP DDoS 防护-流量盗刷防护</li><li>websec-mod-bot-management/basic-feature： 高级 Bot 管理-基础特征管理</li><li>websec-mod-bot-management/ip-reputation： 高级 Bot 管理-客户端画像分析</li><li>websec-mod-bot-management/bot-intelligence： 高级 Bot 管理-智能 Bot 分析</li><li>websec-mod-bot-management/custom-rules： 高级 Bot 管理-自定义规则</li><li>websec-mod-bot-management/browser-impersonation-detection： 高级 Bot 管理-主动特征识别</li><li>websec-mod-bot-management/client-attestation-rules： 高级 Bot 管理-客户端认证</li><li>websec-mod-bot-management-lite/ai-crawler-detection： 基础 Bot 管理-AI 爬虫处置</li><li>websec-mod-bot-management-lite/captcha-page-challenge： 基础 Bot 管理-人机校验页</li></ul>
                     */
                    std::vector<std::string> m_webSecuritySubmodulesForException;
                    bool m_webSecuritySubmodulesForExceptionHasBeenSet;

                    /**
                     * <p>指定例外规则的具体托管规则，仅当 SkipScope 为 ManagedRules 时有效。</p>
                     */
                    std::vector<std::string> m_managedRulesForException;
                    bool m_managedRulesForExceptionHasBeenSet;

                    /**
                     * <p>指定例外规则的托管规则组，仅当 SkipScope 为 ManagedRuleGroups 时有效。</p>
                     */
                    std::vector<std::string> m_managedRuleGroupsForException;
                    bool m_managedRuleGroupsForExceptionHasBeenSet;

                    /**
                     * <p>指定例外规则跳过指定请求字段的具体配置，仅当 SkipScope 为 ManagedRules 或 ManagedRuleGroups 并且 SkipOption 为 SkipOnSpecifiedRequestFields 时有效。</p>
                     */
                    std::vector<RequestFieldsForException> m_requestFieldsForException;
                    bool m_requestFieldsForExceptionHasBeenSet;

                    /**
                     * <p>例外规则是否开启。取值有：<li>on：开启</li><li>off：关闭</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULE_H_
