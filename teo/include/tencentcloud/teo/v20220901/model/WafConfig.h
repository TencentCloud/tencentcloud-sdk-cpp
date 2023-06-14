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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafRule.h>
#include <tencentcloud/teo/v20220901/model/AiRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Waf配置。
                */
                class WafConfig : public AbstractModel
                {
                public:
                    WafConfig();
                    ~WafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WafConfig开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>开关仅与配置是否生效有关，即使为off（关闭），也可以正常修改配置的内容。
                     * @return Switch WafConfig开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>开关仅与配置是否生效有关，即使为off（关闭），也可以正常修改配置的内容。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置WafConfig开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>开关仅与配置是否生效有关，即使为off（关闭），也可以正常修改配置的内容。
                     * @param _switch WafConfig开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>开关仅与配置是否生效有关，即使为off（关闭），也可以正常修改配置的内容。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取上一次设置的防护级别，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>
                     * @return Level 上一次设置的防护级别，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置上一次设置的防护级别，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>
                     * @param _level 上一次设置的防护级别，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取全局WAF模式，取值有：
<li> block：阻断（全局阻断，但可对详细规则配置观察）；</li>
<li> observe：观察（无论详细规则配置什么，都为观察）。</li>
                     * @return Mode 全局WAF模式，取值有：
<li> block：阻断（全局阻断，但可对详细规则配置观察）；</li>
<li> observe：观察（无论详细规则配置什么，都为观察）。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置全局WAF模式，取值有：
<li> block：阻断（全局阻断，但可对详细规则配置观察）；</li>
<li> observe：观察（无论详细规则配置什么，都为观察）。</li>
                     * @param _mode 全局WAF模式，取值有：
<li> block：阻断（全局阻断，但可对详细规则配置观察）；</li>
<li> observe：观察（无论详细规则配置什么，都为观察）。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取托管规则详细配置。如果为null，默认使用历史配置。
                     * @return WafRule 托管规则详细配置。如果为null，默认使用历史配置。
                     * 
                     */
                    WafRule GetWafRule() const;

                    /**
                     * 设置托管规则详细配置。如果为null，默认使用历史配置。
                     * @param _wafRule 托管规则详细配置。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetWafRule(const WafRule& _wafRule);

                    /**
                     * 判断参数 WafRule 是否已赋值
                     * @return WafRule 是否已赋值
                     * 
                     */
                    bool WafRuleHasBeenSet() const;

                    /**
                     * 获取AI规则引擎防护配置。如果为null，默认使用历史配置。
                     * @return AiRule AI规则引擎防护配置。如果为null，默认使用历史配置。
                     * 
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置AI规则引擎防护配置。如果为null，默认使用历史配置。
                     * @param _aiRule AI规则引擎防护配置。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetAiRule(const AiRule& _aiRule);

                    /**
                     * 判断参数 AiRule 是否已赋值
                     * @return AiRule 是否已赋值
                     * 
                     */
                    bool AiRuleHasBeenSet() const;

                private:

                    /**
                     * WafConfig开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>开关仅与配置是否生效有关，即使为off（关闭），也可以正常修改配置的内容。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 上一次设置的防护级别，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格；</li>
<li> custom：自定义。</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 全局WAF模式，取值有：
<li> block：阻断（全局阻断，但可对详细规则配置观察）；</li>
<li> observe：观察（无论详细规则配置什么，都为观察）。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 托管规则详细配置。如果为null，默认使用历史配置。
                     */
                    WafRule m_wafRule;
                    bool m_wafRuleHasBeenSet;

                    /**
                     * AI规则引擎防护配置。如果为null，默认使用历史配置。
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFCONFIG_H_
