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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafConfig.h>
#include <tencentcloud/teo/v20220901/model/RateLimitConfig.h>
#include <tencentcloud/teo/v20220901/model/AclConfig.h>
#include <tencentcloud/teo/v20220901/model/BotConfig.h>
#include <tencentcloud/teo/v20220901/model/SwitchConfig.h>
#include <tencentcloud/teo/v20220901/model/IpTableConfig.h>
#include <tencentcloud/teo/v20220901/model/ExceptConfig.h>
#include <tencentcloud/teo/v20220901/model/DropPageConfig.h>
#include <tencentcloud/teo/v20220901/model/TemplateConfig.h>
#include <tencentcloud/teo/v20220901/model/SlowPostConfig.h>
#include <tencentcloud/teo/v20220901/model/DetectLengthLimitConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web安全配置
                */
                class SecurityConfig : public AbstractModel
                {
                public:
                    SecurityConfig();
                    ~SecurityConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则。如果入参为空或不填，默认使用历史配置。
                     * @return WafConfig 托管规则。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    WafConfig GetWafConfig() const;

                    /**
                     * 设置托管规则。如果入参为空或不填，默认使用历史配置。
                     * @param _wafConfig 托管规则。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetWafConfig(const WafConfig& _wafConfig);

                    /**
                     * 判断参数 WafConfig 是否已赋值
                     * @return WafConfig 是否已赋值
                     * 
                     */
                    bool WafConfigHasBeenSet() const;

                    /**
                     * 获取速率限制。如果入参为空或不填，默认使用历史配置。
                     * @return RateLimitConfig 速率限制。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    RateLimitConfig GetRateLimitConfig() const;

                    /**
                     * 设置速率限制。如果入参为空或不填，默认使用历史配置。
                     * @param _rateLimitConfig 速率限制。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfig& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                    /**
                     * 获取自定义规则。如果入参为空或不填，默认使用历史配置。
                     * @return AclConfig 自定义规则。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置自定义规则。如果入参为空或不填，默认使用历史配置。
                     * @param _aclConfig 自定义规则。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetAclConfig(const AclConfig& _aclConfig);

                    /**
                     * 判断参数 AclConfig 是否已赋值
                     * @return AclConfig 是否已赋值
                     * 
                     */
                    bool AclConfigHasBeenSet() const;

                    /**
                     * 获取Bot配置。如果入参为空或不填，默认使用历史配置。
                     * @return BotConfig Bot配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    BotConfig GetBotConfig() const;

                    /**
                     * 设置Bot配置。如果入参为空或不填，默认使用历史配置。
                     * @param _botConfig Bot配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetBotConfig(const BotConfig& _botConfig);

                    /**
                     * 判断参数 BotConfig 是否已赋值
                     * @return BotConfig 是否已赋值
                     * 
                     */
                    bool BotConfigHasBeenSet() const;

                    /**
                     * 获取七层防护总开关。如果入参为空或不填，默认使用历史配置。
                     * @return SwitchConfig 七层防护总开关。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    SwitchConfig GetSwitchConfig() const;

                    /**
                     * 设置七层防护总开关。如果入参为空或不填，默认使用历史配置。
                     * @param _switchConfig 七层防护总开关。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetSwitchConfig(const SwitchConfig& _switchConfig);

                    /**
                     * 判断参数 SwitchConfig 是否已赋值
                     * @return SwitchConfig 是否已赋值
                     * 
                     */
                    bool SwitchConfigHasBeenSet() const;

                    /**
                     * 获取基础访问管控。如果入参为空或不填，默认使用历史配置。
                     * @return IpTableConfig 基础访问管控。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    IpTableConfig GetIpTableConfig() const;

                    /**
                     * 设置基础访问管控。如果入参为空或不填，默认使用历史配置。
                     * @param _ipTableConfig 基础访问管控。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetIpTableConfig(const IpTableConfig& _ipTableConfig);

                    /**
                     * 判断参数 IpTableConfig 是否已赋值
                     * @return IpTableConfig 是否已赋值
                     * 
                     */
                    bool IpTableConfigHasBeenSet() const;

                    /**
                     * 获取例外规则配置。如果入参为空或不填，默认使用历史配置。
                     * @return ExceptConfig 例外规则配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    ExceptConfig GetExceptConfig() const;

                    /**
                     * 设置例外规则配置。如果入参为空或不填，默认使用历史配置。
                     * @param _exceptConfig 例外规则配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetExceptConfig(const ExceptConfig& _exceptConfig);

                    /**
                     * 判断参数 ExceptConfig 是否已赋值
                     * @return ExceptConfig 是否已赋值
                     * 
                     */
                    bool ExceptConfigHasBeenSet() const;

                    /**
                     * 获取自定义拦截页面配置。如果入参为空或不填，默认使用历史配置。
                     * @return DropPageConfig 自定义拦截页面配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    DropPageConfig GetDropPageConfig() const;

                    /**
                     * 设置自定义拦截页面配置。如果入参为空或不填，默认使用历史配置。
                     * @param _dropPageConfig 自定义拦截页面配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetDropPageConfig(const DropPageConfig& _dropPageConfig);

                    /**
                     * 判断参数 DropPageConfig 是否已赋值
                     * @return DropPageConfig 是否已赋值
                     * 
                     */
                    bool DropPageConfigHasBeenSet() const;

                    /**
                     * 获取模板配置。此处仅出参数使用。
                     * @return TemplateConfig 模板配置。此处仅出参数使用。
                     * 
                     */
                    TemplateConfig GetTemplateConfig() const;

                    /**
                     * 设置模板配置。此处仅出参数使用。
                     * @param _templateConfig 模板配置。此处仅出参数使用。
                     * 
                     */
                    void SetTemplateConfig(const TemplateConfig& _templateConfig);

                    /**
                     * 判断参数 TemplateConfig 是否已赋值
                     * @return TemplateConfig 是否已赋值
                     * 
                     */
                    bool TemplateConfigHasBeenSet() const;

                    /**
                     * 获取慢速攻击配置。如果入参为空或不填，默认使用历史配置。
                     * @return SlowPostConfig 慢速攻击配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    SlowPostConfig GetSlowPostConfig() const;

                    /**
                     * 设置慢速攻击配置。如果入参为空或不填，默认使用历史配置。
                     * @param _slowPostConfig 慢速攻击配置。如果入参为空或不填，默认使用历史配置。
                     * 
                     */
                    void SetSlowPostConfig(const SlowPostConfig& _slowPostConfig);

                    /**
                     * 判断参数 SlowPostConfig 是否已赋值
                     * @return SlowPostConfig 是否已赋值
                     * 
                     */
                    bool SlowPostConfigHasBeenSet() const;

                    /**
                     * 获取检测长度限制配置。仅出参使用。
                     * @return DetectLengthLimitConfig 检测长度限制配置。仅出参使用。
                     * 
                     */
                    DetectLengthLimitConfig GetDetectLengthLimitConfig() const;

                    /**
                     * 设置检测长度限制配置。仅出参使用。
                     * @param _detectLengthLimitConfig 检测长度限制配置。仅出参使用。
                     * 
                     */
                    void SetDetectLengthLimitConfig(const DetectLengthLimitConfig& _detectLengthLimitConfig);

                    /**
                     * 判断参数 DetectLengthLimitConfig 是否已赋值
                     * @return DetectLengthLimitConfig 是否已赋值
                     * 
                     */
                    bool DetectLengthLimitConfigHasBeenSet() const;

                private:

                    /**
                     * 托管规则。如果入参为空或不填，默认使用历史配置。
                     */
                    WafConfig m_wafConfig;
                    bool m_wafConfigHasBeenSet;

                    /**
                     * 速率限制。如果入参为空或不填，默认使用历史配置。
                     */
                    RateLimitConfig m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                    /**
                     * 自定义规则。如果入参为空或不填，默认使用历史配置。
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                    /**
                     * Bot配置。如果入参为空或不填，默认使用历史配置。
                     */
                    BotConfig m_botConfig;
                    bool m_botConfigHasBeenSet;

                    /**
                     * 七层防护总开关。如果入参为空或不填，默认使用历史配置。
                     */
                    SwitchConfig m_switchConfig;
                    bool m_switchConfigHasBeenSet;

                    /**
                     * 基础访问管控。如果入参为空或不填，默认使用历史配置。
                     */
                    IpTableConfig m_ipTableConfig;
                    bool m_ipTableConfigHasBeenSet;

                    /**
                     * 例外规则配置。如果入参为空或不填，默认使用历史配置。
                     */
                    ExceptConfig m_exceptConfig;
                    bool m_exceptConfigHasBeenSet;

                    /**
                     * 自定义拦截页面配置。如果入参为空或不填，默认使用历史配置。
                     */
                    DropPageConfig m_dropPageConfig;
                    bool m_dropPageConfigHasBeenSet;

                    /**
                     * 模板配置。此处仅出参数使用。
                     */
                    TemplateConfig m_templateConfig;
                    bool m_templateConfigHasBeenSet;

                    /**
                     * 慢速攻击配置。如果入参为空或不填，默认使用历史配置。
                     */
                    SlowPostConfig m_slowPostConfig;
                    bool m_slowPostConfigHasBeenSet;

                    /**
                     * 检测长度限制配置。仅出参使用。
                     */
                    DetectLengthLimitConfig m_detectLengthLimitConfig;
                    bool m_detectLengthLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYCONFIG_H_
