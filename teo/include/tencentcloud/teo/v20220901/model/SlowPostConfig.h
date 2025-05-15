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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SLOWPOSTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SLOWPOSTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FirstPartConfig.h>
#include <tencentcloud/teo/v20220901/model/SlowRateConfig.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 慢速攻击配置。
                */
                class SlowPostConfig : public AbstractModel
                {
                public:
                    SlowPostConfig();
                    ~SlowPostConfig() = default;
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
                     * 获取首包配置。
                     * @return FirstPartConfig 首包配置。
                     * 
                     */
                    FirstPartConfig GetFirstPartConfig() const;

                    /**
                     * 设置首包配置。
                     * @param _firstPartConfig 首包配置。
                     * 
                     */
                    void SetFirstPartConfig(const FirstPartConfig& _firstPartConfig);

                    /**
                     * 判断参数 FirstPartConfig 是否已赋值
                     * @return FirstPartConfig 是否已赋值
                     * 
                     */
                    bool FirstPartConfigHasBeenSet() const;

                    /**
                     * 获取基础配置。
                     * @return SlowRateConfig 基础配置。
                     * 
                     */
                    SlowRateConfig GetSlowRateConfig() const;

                    /**
                     * 设置基础配置。
                     * @param _slowRateConfig 基础配置。
                     * 
                     */
                    void SetSlowRateConfig(const SlowRateConfig& _slowRateConfig);

                    /**
                     * 判断参数 SlowRateConfig 是否已赋值
                     * @return SlowRateConfig 是否已赋值
                     * 
                     */
                    bool SlowRateConfigHasBeenSet() const;

                    /**
                     * 获取慢速攻击的处置动作，取值有：
<li>monitor：观察；</li>
<li>drop：拦截。</li>
                     * @return Action 慢速攻击的处置动作，取值有：
<li>monitor：观察；</li>
<li>drop：拦截。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置慢速攻击的处置动作，取值有：
<li>monitor：观察；</li>
<li>drop：拦截。</li>
                     * @param _action 慢速攻击的处置动作，取值有：
<li>monitor：观察；</li>
<li>drop：拦截。</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取本规则的Id。
                     * @return RuleId 本规则的Id。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置本规则的Id。
                     * @param _ruleId 本规则的Id。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 首包配置。
                     */
                    FirstPartConfig m_firstPartConfig;
                    bool m_firstPartConfigHasBeenSet;

                    /**
                     * 基础配置。
                     */
                    SlowRateConfig m_slowRateConfig;
                    bool m_slowRateConfigHasBeenSet;

                    /**
                     * 慢速攻击的处置动作，取值有：
<li>monitor：观察；</li>
<li>drop：拦截。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 本规则的Id。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SLOWPOSTCONFIG_H_
