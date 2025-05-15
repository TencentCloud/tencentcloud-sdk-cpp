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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RateLimitUserRule.h>
#include <tencentcloud/teo/v20220901/model/RateLimitTemplate.h>
#include <tencentcloud/teo/v20220901/model/RateLimitIntelligence.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 速率限制规则
                */
                class RateLimitConfig : public AbstractModel
                {
                public:
                    RateLimitConfig();
                    ~RateLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
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
                     * 获取速率限制-用户规则列表。如果为null，默认使用历史配置。
                     * @return RateLimitUserRules 速率限制-用户规则列表。如果为null，默认使用历史配置。
                     * 
                     */
                    std::vector<RateLimitUserRule> GetRateLimitUserRules() const;

                    /**
                     * 设置速率限制-用户规则列表。如果为null，默认使用历史配置。
                     * @param _rateLimitUserRules 速率限制-用户规则列表。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetRateLimitUserRules(const std::vector<RateLimitUserRule>& _rateLimitUserRules);

                    /**
                     * 判断参数 RateLimitUserRules 是否已赋值
                     * @return RateLimitUserRules 是否已赋值
                     * 
                     */
                    bool RateLimitUserRulesHasBeenSet() const;

                    /**
                     * 获取速率限制模板功能。如果为null，默认使用历史配置。
                     * @return RateLimitTemplate 速率限制模板功能。如果为null，默认使用历史配置。
                     * 
                     */
                    RateLimitTemplate GetRateLimitTemplate() const;

                    /**
                     * 设置速率限制模板功能。如果为null，默认使用历史配置。
                     * @param _rateLimitTemplate 速率限制模板功能。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetRateLimitTemplate(const RateLimitTemplate& _rateLimitTemplate);

                    /**
                     * 判断参数 RateLimitTemplate 是否已赋值
                     * @return RateLimitTemplate 是否已赋值
                     * 
                     */
                    bool RateLimitTemplateHasBeenSet() const;

                    /**
                     * 获取智能客户端过滤。如果为null，默认使用历史配置。
                     * @return RateLimitIntelligence 智能客户端过滤。如果为null，默认使用历史配置。
                     * 
                     */
                    RateLimitIntelligence GetRateLimitIntelligence() const;

                    /**
                     * 设置智能客户端过滤。如果为null，默认使用历史配置。
                     * @param _rateLimitIntelligence 智能客户端过滤。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetRateLimitIntelligence(const RateLimitIntelligence& _rateLimitIntelligence);

                    /**
                     * 判断参数 RateLimitIntelligence 是否已赋值
                     * @return RateLimitIntelligence 是否已赋值
                     * 
                     */
                    bool RateLimitIntelligenceHasBeenSet() const;

                    /**
                     * 获取速率限制-托管定制规则。如果为null，默认使用历史配置。
                     * @return RateLimitCustomizes 速率限制-托管定制规则。如果为null，默认使用历史配置。
                     * 
                     */
                    std::vector<RateLimitUserRule> GetRateLimitCustomizes() const;

                    /**
                     * 设置速率限制-托管定制规则。如果为null，默认使用历史配置。
                     * @param _rateLimitCustomizes 速率限制-托管定制规则。如果为null，默认使用历史配置。
                     * 
                     */
                    void SetRateLimitCustomizes(const std::vector<RateLimitUserRule>& _rateLimitCustomizes);

                    /**
                     * 判断参数 RateLimitCustomizes 是否已赋值
                     * @return RateLimitCustomizes 是否已赋值
                     * 
                     */
                    bool RateLimitCustomizesHasBeenSet() const;

                private:

                    /**
                     * 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 速率限制-用户规则列表。如果为null，默认使用历史配置。
                     */
                    std::vector<RateLimitUserRule> m_rateLimitUserRules;
                    bool m_rateLimitUserRulesHasBeenSet;

                    /**
                     * 速率限制模板功能。如果为null，默认使用历史配置。
                     */
                    RateLimitTemplate m_rateLimitTemplate;
                    bool m_rateLimitTemplateHasBeenSet;

                    /**
                     * 智能客户端过滤。如果为null，默认使用历史配置。
                     */
                    RateLimitIntelligence m_rateLimitIntelligence;
                    bool m_rateLimitIntelligenceHasBeenSet;

                    /**
                     * 速率限制-托管定制规则。如果为null，默认使用历史配置。
                     */
                    std::vector<RateLimitUserRule> m_rateLimitCustomizes;
                    bool m_rateLimitCustomizesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITCONFIG_H_
