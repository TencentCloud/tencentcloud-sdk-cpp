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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCE_H_

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
                * 智能客户端过滤
                */
                class RateLimitIntelligence : public AbstractModel
                {
                public:
                    RateLimitIntelligence();
                    ~RateLimitIntelligence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 功能开关，取值有：
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
                     * 获取执行动作，取值有：
<li>monitor：观察；</li>
<li>alg：挑战。</li>
                     * @return Action 执行动作，取值有：
<li>monitor：观察；</li>
<li>alg：挑战。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，取值有：
<li>monitor：观察；</li>
<li>alg：挑战。</li>
                     * @param _action 执行动作，取值有：
<li>monitor：观察；</li>
<li>alg：挑战。</li>
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
                     * 获取规则id，仅出参使用。
                     * @return RuleId 规则id，仅出参使用。
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id，仅出参使用。
                     * @param _ruleId 规则id，仅出参使用。
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 功能开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 执行动作，取值有：
<li>monitor：观察；</li>
<li>alg：挑战。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则id，仅出参使用。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCE_H_
