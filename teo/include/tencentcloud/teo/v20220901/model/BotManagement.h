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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotManagementCustomRules.h>
#include <tencentcloud/teo/v20220901/model/BasicBotSettings.h>
#include <tencentcloud/teo/v20220901/model/ClientAttestationRules.h>
#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web 安全的 BOT 规则结构。
                */
                class BotManagement : public AbstractModel
                {
                public:
                    BotManagement();
                    ~BotManagement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bot 管理是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled Bot 管理是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Bot 管理是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled Bot 管理是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
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
                     * 获取Bot 管理的自定义规则，组合各类爬虫和请求行为特征，精准定义 Bot 并配置定制化处置方式。
                     * @return CustomRules Bot 管理的自定义规则，组合各类爬虫和请求行为特征，精准定义 Bot 并配置定制化处置方式。
                     * 
                     */
                    BotManagementCustomRules GetCustomRules() const;

                    /**
                     * 设置Bot 管理的自定义规则，组合各类爬虫和请求行为特征，精准定义 Bot 并配置定制化处置方式。
                     * @param _customRules Bot 管理的自定义规则，组合各类爬虫和请求行为特征，精准定义 Bot 并配置定制化处置方式。
                     * 
                     */
                    void SetCustomRules(const BotManagementCustomRules& _customRules);

                    /**
                     * 判断参数 CustomRules 是否已赋值
                     * @return CustomRules 是否已赋值
                     * 
                     */
                    bool CustomRulesHasBeenSet() const;

                    /**
                     * 获取Bot 管理的基础配置，对策略关联的所有域名生效。可以通过 CustomRules 进行精细化定制。
                     * @return BasicBotSettings Bot 管理的基础配置，对策略关联的所有域名生效。可以通过 CustomRules 进行精细化定制。
                     * 
                     */
                    BasicBotSettings GetBasicBotSettings() const;

                    /**
                     * 设置Bot 管理的基础配置，对策略关联的所有域名生效。可以通过 CustomRules 进行精细化定制。
                     * @param _basicBotSettings Bot 管理的基础配置，对策略关联的所有域名生效。可以通过 CustomRules 进行精细化定制。
                     * 
                     */
                    void SetBasicBotSettings(const BasicBotSettings& _basicBotSettings);

                    /**
                     * 判断参数 BasicBotSettings 是否已赋值
                     * @return BasicBotSettings 是否已赋值
                     * 
                     */
                    bool BasicBotSettingsHasBeenSet() const;

                    /**
                     * 获取客户端认证规则的定义列表。该功能内测中，如需使用，请提工单。
                     * @return ClientAttestationRules 客户端认证规则的定义列表。该功能内测中，如需使用，请提工单。
                     * 
                     */
                    ClientAttestationRules GetClientAttestationRules() const;

                    /**
                     * 设置客户端认证规则的定义列表。该功能内测中，如需使用，请提工单。
                     * @param _clientAttestationRules 客户端认证规则的定义列表。该功能内测中，如需使用，请提工单。
                     * 
                     */
                    void SetClientAttestationRules(const ClientAttestationRules& _clientAttestationRules);

                    /**
                     * 判断参数 ClientAttestationRules 是否已赋值
                     * @return ClientAttestationRules 是否已赋值
                     * 
                     */
                    bool ClientAttestationRulesHasBeenSet() const;

                    /**
                     * 获取配置浏览器伪造识别规则（原主动特征识别规则）。设置注入 JavaScript 的响应页面范围，浏览器校验选项，以及对非浏览器客户端的处置方式。
                     * @return BrowserImpersonationDetection 配置浏览器伪造识别规则（原主动特征识别规则）。设置注入 JavaScript 的响应页面范围，浏览器校验选项，以及对非浏览器客户端的处置方式。
                     * 
                     */
                    BrowserImpersonationDetection GetBrowserImpersonationDetection() const;

                    /**
                     * 设置配置浏览器伪造识别规则（原主动特征识别规则）。设置注入 JavaScript 的响应页面范围，浏览器校验选项，以及对非浏览器客户端的处置方式。
                     * @param _browserImpersonationDetection 配置浏览器伪造识别规则（原主动特征识别规则）。设置注入 JavaScript 的响应页面范围，浏览器校验选项，以及对非浏览器客户端的处置方式。
                     * 
                     */
                    void SetBrowserImpersonationDetection(const BrowserImpersonationDetection& _browserImpersonationDetection);

                    /**
                     * 判断参数 BrowserImpersonationDetection 是否已赋值
                     * @return BrowserImpersonationDetection 是否已赋值
                     * 
                     */
                    bool BrowserImpersonationDetectionHasBeenSet() const;

                private:

                    /**
                     * Bot 管理是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Bot 管理的自定义规则，组合各类爬虫和请求行为特征，精准定义 Bot 并配置定制化处置方式。
                     */
                    BotManagementCustomRules m_customRules;
                    bool m_customRulesHasBeenSet;

                    /**
                     * Bot 管理的基础配置，对策略关联的所有域名生效。可以通过 CustomRules 进行精细化定制。
                     */
                    BasicBotSettings m_basicBotSettings;
                    bool m_basicBotSettingsHasBeenSet;

                    /**
                     * 客户端认证规则的定义列表。该功能内测中，如需使用，请提工单。
                     */
                    ClientAttestationRules m_clientAttestationRules;
                    bool m_clientAttestationRulesHasBeenSet;

                    /**
                     * 配置浏览器伪造识别规则（原主动特征识别规则）。设置注入 JavaScript 的响应页面范围，浏览器校验选项，以及对非浏览器客户端的处置方式。
                     */
                    BrowserImpersonationDetection m_browserImpersonationDetection;
                    bool m_browserImpersonationDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEMENT_H_
