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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomRules.h>
#include <tencentcloud/teo/v20220901/model/ManagedRules.h>
#include <tencentcloud/teo/v20220901/model/HttpDDoSProtection.h>
#include <tencentcloud/teo/v20220901/model/RateLimitingRules.h>
#include <tencentcloud/teo/v20220901/model/ExceptionRules.h>
#include <tencentcloud/teo/v20220901/model/BotManagement.h>
#include <tencentcloud/teo/v20220901/model/BotManagementLite.h>
#include <tencentcloud/teo/v20220901/model/DefaultDenySecurityActionParameters.h>
#include <tencentcloud/teo/v20220901/model/SecurityHeadersToOrigin.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全策略配置
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义规则配置。</p>
                     * @return CustomRules <p>自定义规则配置。</p>
                     * 
                     */
                    CustomRules GetCustomRules() const;

                    /**
                     * 设置<p>自定义规则配置。</p>
                     * @param _customRules <p>自定义规则配置。</p>
                     * 
                     */
                    void SetCustomRules(const CustomRules& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取<p>托管规则配置。</p>
                     * @return ManagedRules <p>托管规则配置。</p>
                     * 
                     */
                    ManagedRules GetManagedRules() const;

                    /**
                     * 设置<p>托管规则配置。</p>
                     * @param _managedRules <p>托管规则配置。</p>
                     * 
                     */
                    void SetManagedRules(const ManagedRules& _managedRules);

                    /**
                     * 判断参数 ManagedRules 是否已赋值
                     * @return ManagedRules 是否已赋值
                     * 
                     */
                    bool ManagedRulesHasBeenSet() const;

                    /**
                     * 获取<p>HTTP DDOS 防护配置。</p>
                     * @return HttpDDoSProtection <p>HTTP DDOS 防护配置。</p>
                     * 
                     */
                    HttpDDoSProtection GetHttpDDoSProtection() const;

                    /**
                     * 设置<p>HTTP DDOS 防护配置。</p>
                     * @param _httpDDoSProtection <p>HTTP DDOS 防护配置。</p>
                     * 
                     */
                    void SetHttpDDoSProtection(const HttpDDoSProtection& _httpDDoSProtection);

                    /**
                     * 判断参数 HttpDDoSProtection 是否已赋值
                     * @return HttpDDoSProtection 是否已赋值
                     * 
                     */
                    bool HttpDDoSProtectionHasBeenSet() const;

                    /**
                     * 获取<p>速率限制规则配置。</p>
                     * @return RateLimitingRules <p>速率限制规则配置。</p>
                     * 
                     */
                    RateLimitingRules GetRateLimitingRules() const;

                    /**
                     * 设置<p>速率限制规则配置。</p>
                     * @param _rateLimitingRules <p>速率限制规则配置。</p>
                     * 
                     */
                    void SetRateLimitingRules(const RateLimitingRules& _rateLimitingRules);

                    /**
                     * 判断参数 RateLimitingRules 是否已赋值
                     * @return RateLimitingRules 是否已赋值
                     * 
                     */
                    bool RateLimitingRulesHasBeenSet() const;

                    /**
                     * 获取<p>例外规则配置。</p>
                     * @return ExceptionRules <p>例外规则配置。</p>
                     * 
                     */
                    ExceptionRules GetExceptionRules() const;

                    /**
                     * 设置<p>例外规则配置。</p>
                     * @param _exceptionRules <p>例外规则配置。</p>
                     * 
                     */
                    void SetExceptionRules(const ExceptionRules& _exceptionRules);

                    /**
                     * 判断参数 ExceptionRules 是否已赋值
                     * @return ExceptionRules 是否已赋值
                     * 
                     */
                    bool ExceptionRulesHasBeenSet() const;

                    /**
                     * 获取<p>Bot 管理配置。</p>
                     * @return BotManagement <p>Bot 管理配置。</p>
                     * 
                     */
                    BotManagement GetBotManagement() const;

                    /**
                     * 设置<p>Bot 管理配置。</p>
                     * @param _botManagement <p>Bot 管理配置。</p>
                     * 
                     */
                    void SetBotManagement(const BotManagement& _botManagement);

                    /**
                     * 判断参数 BotManagement 是否已赋值
                     * @return BotManagement 是否已赋值
                     * 
                     */
                    bool BotManagementHasBeenSet() const;

                    /**
                     * 获取<p>基础 Bot 管理配置。</p>
                     * @return BotManagementLite <p>基础 Bot 管理配置。</p>
                     * 
                     */
                    BotManagementLite GetBotManagementLite() const;

                    /**
                     * 设置<p>基础 Bot 管理配置。</p>
                     * @param _botManagementLite <p>基础 Bot 管理配置。</p>
                     * 
                     */
                    void SetBotManagementLite(const BotManagementLite& _botManagementLite);

                    /**
                     * 判断参数 BotManagementLite 是否已赋值
                     * @return BotManagementLite 是否已赋值
                     * 
                     */
                    bool BotManagementLiteHasBeenSet() const;

                    /**
                     * 获取<p>默认拦截动作配置。</p>
                     * @return DefaultDenySecurityActionParameters <p>默认拦截动作配置。</p>
                     * 
                     */
                    DefaultDenySecurityActionParameters GetDefaultDenySecurityActionParameters() const;

                    /**
                     * 设置<p>默认拦截动作配置。</p>
                     * @param _defaultDenySecurityActionParameters <p>默认拦截动作配置。</p>
                     * 
                     */
                    void SetDefaultDenySecurityActionParameters(const DefaultDenySecurityActionParameters& _defaultDenySecurityActionParameters);

                    /**
                     * 判断参数 DefaultDenySecurityActionParameters 是否已赋值
                     * @return DefaultDenySecurityActionParameters 是否已赋值
                     * 
                     */
                    bool DefaultDenySecurityActionParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源请求携带安全头部配置，配置生效后将携带对应 keyname 的请求头部回源。</p>
                     * @return SecurityHeadersToOrigin <p>回源请求携带安全头部配置，配置生效后将携带对应 keyname 的请求头部回源。</p>
                     * 
                     */
                    SecurityHeadersToOrigin GetSecurityHeadersToOrigin() const;

                    /**
                     * 设置<p>回源请求携带安全头部配置，配置生效后将携带对应 keyname 的请求头部回源。</p>
                     * @param _securityHeadersToOrigin <p>回源请求携带安全头部配置，配置生效后将携带对应 keyname 的请求头部回源。</p>
                     * 
                     */
                    void SetSecurityHeadersToOrigin(const SecurityHeadersToOrigin& _securityHeadersToOrigin);

                    /**
                     * 判断参数 SecurityHeadersToOrigin 是否已赋值
                     * @return SecurityHeadersToOrigin 是否已赋值
                     * 
                     */
                    bool SecurityHeadersToOriginHasBeenSet() const;

                private:

                    /**
                     * <p>自定义规则配置。</p>
                     */
                    CustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * <p>托管规则配置。</p>
                     */
                    ManagedRules m_managedRules;
                    bool m_managedRulesHasBeenSet;

                    /**
                     * <p>HTTP DDOS 防护配置。</p>
                     */
                    HttpDDoSProtection m_httpDDoSProtection;
                    bool m_httpDDoSProtectionHasBeenSet;

                    /**
                     * <p>速率限制规则配置。</p>
                     */
                    RateLimitingRules m_rateLimitingRules;
                    bool m_rateLimitingRulesHasBeenSet;

                    /**
                     * <p>例外规则配置。</p>
                     */
                    ExceptionRules m_exceptionRules;
                    bool m_exceptionRulesHasBeenSet;

                    /**
                     * <p>Bot 管理配置。</p>
                     */
                    BotManagement m_botManagement;
                    bool m_botManagementHasBeenSet;

                    /**
                     * <p>基础 Bot 管理配置。</p>
                     */
                    BotManagementLite m_botManagementLite;
                    bool m_botManagementLiteHasBeenSet;

                    /**
                     * <p>默认拦截动作配置。</p>
                     */
                    DefaultDenySecurityActionParameters m_defaultDenySecurityActionParameters;
                    bool m_defaultDenySecurityActionParametersHasBeenSet;

                    /**
                     * <p>回源请求携带安全头部配置，配置生效后将携带对应 keyname 的请求头部回源。</p>
                     */
                    SecurityHeadersToOrigin m_securityHeadersToOrigin;
                    bool m_securityHeadersToOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYPOLICY_H_
