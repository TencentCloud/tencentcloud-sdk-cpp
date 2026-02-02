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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AICRAWLERDETECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AICRAWLERDETECTION_H_

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
                * AI 爬虫检测的具体配置。
                */
                class AICrawlerDetection : public AbstractModel
                {
                public:
                    AICrawlerDetection();
                    ~AICrawlerDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI 爬虫检测是否开启。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * @return Enabled AI 爬虫检测是否开启。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置AI 爬虫检测是否开启。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>

                     * @param _enabled AI 爬虫检测是否开启。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>

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
                     * 获取AI 爬虫检测的执行动作，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值仅支持：
<li>Deny：拦截；</li>
<li>Monitor：观察；</li>
<li>Allow：放行；</li>
<li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 仅支持 JSChallenge 和 ManagedChallenge。</li>
                     * @return Action AI 爬虫检测的执行动作，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值仅支持：
<li>Deny：拦截；</li>
<li>Monitor：观察；</li>
<li>Allow：放行；</li>
<li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 仅支持 JSChallenge 和 ManagedChallenge。</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置AI 爬虫检测的执行动作，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值仅支持：
<li>Deny：拦截；</li>
<li>Monitor：观察；</li>
<li>Allow：放行；</li>
<li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 仅支持 JSChallenge 和 ManagedChallenge。</li>
                     * @param _action AI 爬虫检测的执行动作，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值仅支持：
<li>Deny：拦截；</li>
<li>Monitor：观察；</li>
<li>Allow：放行；</li>
<li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 仅支持 JSChallenge 和 ManagedChallenge。</li>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * AI 爬虫检测是否开启。取值有：
<li>on：开启；</li>
<li>off：关闭。</li>

                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * AI 爬虫检测的执行动作，当 Enabled 为 on 时，此字段必填。SecurityAction 的 Name 取值仅支持：
<li>Deny：拦截；</li>
<li>Monitor：观察；</li>
<li>Allow：放行；</li>
<li>Challenge：挑战，其中 ChallengeActionParameters 中的 ChallengeOption 仅支持 JSChallenge 和 ManagedChallenge。</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AICRAWLERDETECTION_H_
