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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_INTENTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_INTENTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/IntentionQuestion.h>
#include <tencentcloud/ess/v20201111/model/IntentionAction.h>
#include <tencentcloud/ess/v20201111/model/RuleIdConfig.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 视频核身意图配置，可指定问答模式或者点头模式的语音文本。

注: `视频认证为白名单功能，使用前请联系对接的客户经理沟通。`
                */
                class Intention : public AbstractModel
                {
                public:
                    Intention();
                    ~Intention() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频认证类型，支持以下类型</p><ul><li>1 : 问答模式</li><li>2 : 点头模式</li></ul><p>注: <code>视频认证为白名单功能，使用前请联系对接的客户经理沟通。</code></p>
                     * @return IntentionType <p>视频认证类型，支持以下类型</p><ul><li>1 : 问答模式</li><li>2 : 点头模式</li></ul><p>注: <code>视频认证为白名单功能，使用前请联系对接的客户经理沟通。</code></p>
                     * 
                     */
                    int64_t GetIntentionType() const;

                    /**
                     * 设置<p>视频认证类型，支持以下类型</p><ul><li>1 : 问答模式</li><li>2 : 点头模式</li></ul><p>注: <code>视频认证为白名单功能，使用前请联系对接的客户经理沟通。</code></p>
                     * @param _intentionType <p>视频认证类型，支持以下类型</p><ul><li>1 : 问答模式</li><li>2 : 点头模式</li></ul><p>注: <code>视频认证为白名单功能，使用前请联系对接的客户经理沟通。</code></p>
                     * 
                     */
                    void SetIntentionType(const int64_t& _intentionType);

                    /**
                     * 判断参数 IntentionType 是否已赋值
                     * @return IntentionType 是否已赋值
                     * 
                     */
                    bool IntentionTypeHasBeenSet() const;

                    /**
                     * 获取<p>意愿核身语音问答模式（即语音播报+语音回答）使用的文案，包括：系统语音播报的文本、需要核验的标准文本。支持传入1～9轮问答，最多为9轮。注：<code>选择问答模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可语音回复“同意”或“不同意”。</code></p>
                     * @return IntentionQuestions <p>意愿核身语音问答模式（即语音播报+语音回答）使用的文案，包括：系统语音播报的文本、需要核验的标准文本。支持传入1～9轮问答，最多为9轮。注：<code>选择问答模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可语音回复“同意”或“不同意”。</code></p>
                     * 
                     */
                    std::vector<IntentionQuestion> GetIntentionQuestions() const;

                    /**
                     * 设置<p>意愿核身语音问答模式（即语音播报+语音回答）使用的文案，包括：系统语音播报的文本、需要核验的标准文本。支持传入1～9轮问答，最多为9轮。注：<code>选择问答模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可语音回复“同意”或“不同意”。</code></p>
                     * @param _intentionQuestions <p>意愿核身语音问答模式（即语音播报+语音回答）使用的文案，包括：系统语音播报的文本、需要核验的标准文本。支持传入1～9轮问答，最多为9轮。注：<code>选择问答模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可语音回复“同意”或“不同意”。</code></p>
                     * 
                     */
                    void SetIntentionQuestions(const std::vector<IntentionQuestion>& _intentionQuestions);

                    /**
                     * 判断参数 IntentionQuestions 是否已赋值
                     * @return IntentionQuestions 是否已赋值
                     * 
                     */
                    bool IntentionQuestionsHasBeenSet() const;

                    /**
                     * 获取<p>意愿核身（点头确认模式）使用的文案，若未使用意愿核身（点头确认模式），则该字段无需传入。支持传入1～9轮点头确认文本，最多支持9轮。注：<code>选择点头模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可点头同意。</code></p>
                     * @return IntentionActions <p>意愿核身（点头确认模式）使用的文案，若未使用意愿核身（点头确认模式），则该字段无需传入。支持传入1～9轮点头确认文本，最多支持9轮。注：<code>选择点头模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可点头同意。</code></p>
                     * 
                     */
                    std::vector<IntentionAction> GetIntentionActions() const;

                    /**
                     * 设置<p>意愿核身（点头确认模式）使用的文案，若未使用意愿核身（点头确认模式），则该字段无需传入。支持传入1～9轮点头确认文本，最多支持9轮。注：<code>选择点头模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可点头同意。</code></p>
                     * @param _intentionActions <p>意愿核身（点头确认模式）使用的文案，若未使用意愿核身（点头确认模式），则该字段无需传入。支持传入1～9轮点头确认文本，最多支持9轮。注：<code>选择点头模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可点头同意。</code></p>
                     * 
                     */
                    void SetIntentionActions(const std::vector<IntentionAction>& _intentionActions);

                    /**
                     * 判断参数 IntentionActions 是否已赋值
                     * @return IntentionActions 是否已赋值
                     * 
                     */
                    bool IntentionActionsHasBeenSet() const;

                    /**
                     * 获取<p>视频核身相关配置</p>
                     * @return RuleIdConfig <p>视频核身相关配置</p>
                     * 
                     */
                    RuleIdConfig GetRuleIdConfig() const;

                    /**
                     * 设置<p>视频核身相关配置</p>
                     * @param _ruleIdConfig <p>视频核身相关配置</p>
                     * 
                     */
                    void SetRuleIdConfig(const RuleIdConfig& _ruleIdConfig);

                    /**
                     * 判断参数 RuleIdConfig 是否已赋值
                     * @return RuleIdConfig 是否已赋值
                     * 
                     */
                    bool RuleIdConfigHasBeenSet() const;

                private:

                    /**
                     * <p>视频认证类型，支持以下类型</p><ul><li>1 : 问答模式</li><li>2 : 点头模式</li></ul><p>注: <code>视频认证为白名单功能，使用前请联系对接的客户经理沟通。</code></p>
                     */
                    int64_t m_intentionType;
                    bool m_intentionTypeHasBeenSet;

                    /**
                     * <p>意愿核身语音问答模式（即语音播报+语音回答）使用的文案，包括：系统语音播报的文本、需要核验的标准文本。支持传入1～9轮问答，最多为9轮。注：<code>选择问答模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可语音回复“同意”或“不同意”。</code></p>
                     */
                    std::vector<IntentionQuestion> m_intentionQuestions;
                    bool m_intentionQuestionsHasBeenSet;

                    /**
                     * <p>意愿核身（点头确认模式）使用的文案，若未使用意愿核身（点头确认模式），则该字段无需传入。支持传入1～9轮点头确认文本，最多支持9轮。注：<code>选择点头模式时，此字段可不传，不传则使用默认语音文本：请问，您是否同意签署本协议？可点头同意。</code></p>
                     */
                    std::vector<IntentionAction> m_intentionActions;
                    bool m_intentionActionsHasBeenSet;

                    /**
                     * <p>视频核身相关配置</p>
                     */
                    RuleIdConfig m_ruleIdConfig;
                    bool m_ruleIdConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_INTENTION_H_
