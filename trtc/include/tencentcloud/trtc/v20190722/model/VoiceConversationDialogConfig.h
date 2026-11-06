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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONDIALOGCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONDIALOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AI对话相关配置。
                */
                class VoiceConversationDialogConfig : public AbstractModel
                {
                public:
                    VoiceConversationDialogConfig();
                    ~VoiceConversationDialogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>打断模式。</p><p>枚举值：</p><ul><li>0： 自动打断（ASR 出文本打断 TTS，配合InterruptSpeechDuration 使用，默认）</li><li>1： 手动打断（仅服务端/客户端接口 Interrupt 命令打断）</li><li>2： 关键词打断</li></ul>
                     * @return InterruptMode <p>打断模式。</p><p>枚举值：</p><ul><li>0： 自动打断（ASR 出文本打断 TTS，配合InterruptSpeechDuration 使用，默认）</li><li>1： 手动打断（仅服务端/客户端接口 Interrupt 命令打断）</li><li>2： 关键词打断</li></ul>
                     * 
                     */
                    uint64_t GetInterruptMode() const;

                    /**
                     * 设置<p>打断模式。</p><p>枚举值：</p><ul><li>0： 自动打断（ASR 出文本打断 TTS，配合InterruptSpeechDuration 使用，默认）</li><li>1： 手动打断（仅服务端/客户端接口 Interrupt 命令打断）</li><li>2： 关键词打断</li></ul>
                     * @param _interruptMode <p>打断模式。</p><p>枚举值：</p><ul><li>0： 自动打断（ASR 出文本打断 TTS，配合InterruptSpeechDuration 使用，默认）</li><li>1： 手动打断（仅服务端/客户端接口 Interrupt 命令打断）</li><li>2： 关键词打断</li></ul>
                     * 
                     */
                    void SetInterruptMode(const uint64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取<p>自动打断的最小用户语音持续时长（毫秒），默认 200</p><p>单位：毫秒</p>
                     * @return InterruptSpeechDuration <p>自动打断的最小用户语音持续时长（毫秒），默认 200</p><p>单位：毫秒</p>
                     * 
                     */
                    uint64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置<p>自动打断的最小用户语音持续时长（毫秒），默认 200</p><p>单位：毫秒</p>
                     * @param _interruptSpeechDuration <p>自动打断的最小用户语音持续时长（毫秒），默认 200</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

                    /**
                     * 获取<p>预设的关键词，关键词打断，适用于需要用户明确表达意图才能打断的场景。最多支持128个关键词，InterruptMode 为2时生效，</p>
                     * @return InterruptKeywords <p>预设的关键词，关键词打断，适用于需要用户明确表达意图才能打断的场景。最多支持128个关键词，InterruptMode 为2时生效，</p>
                     * 
                     */
                    std::vector<std::string> GetInterruptKeywords() const;

                    /**
                     * 设置<p>预设的关键词，关键词打断，适用于需要用户明确表达意图才能打断的场景。最多支持128个关键词，InterruptMode 为2时生效，</p>
                     * @param _interruptKeywords <p>预设的关键词，关键词打断，适用于需要用户明确表达意图才能打断的场景。最多支持128个关键词，InterruptMode 为2时生效，</p>
                     * 
                     */
                    void SetInterruptKeywords(const std::vector<std::string>& _interruptKeywords);

                    /**
                     * 判断参数 InterruptKeywords 是否已赋值
                     * @return InterruptKeywords 是否已赋值
                     * 
                     */
                    bool InterruptKeywordsHasBeenSet() const;

                    /**
                     * 获取<p>用户静音多久后 Bot 主动追问，范围 0~300，0 表示关闭（默认）。</p><p>单位：秒</p>
                     * @return SilenceFollowUp <p>用户静音多久后 Bot 主动追问，范围 0~300，0 表示关闭（默认）。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetSilenceFollowUp() const;

                    /**
                     * 设置<p>用户静音多久后 Bot 主动追问，范围 0~300，0 表示关闭（默认）。</p><p>单位：秒</p>
                     * @param _silenceFollowUp <p>用户静音多久后 Bot 主动追问，范围 0~300，0 表示关闭（默认）。</p><p>单位：秒</p>
                     * 
                     */
                    void SetSilenceFollowUp(const uint64_t& _silenceFollowUp);

                    /**
                     * 判断参数 SilenceFollowUp 是否已赋值
                     * @return SilenceFollowUp 是否已赋值
                     * 
                     */
                    bool SilenceFollowUpHasBeenSet() const;

                    /**
                     * 获取<p>主动追问的文本。</p>
                     * @return SilenceFollowUpText <p>主动追问的文本。</p>
                     * 
                     */
                    std::string GetSilenceFollowUpText() const;

                    /**
                     * 设置<p>主动追问的文本。</p>
                     * @param _silenceFollowUpText <p>主动追问的文本。</p>
                     * 
                     */
                    void SetSilenceFollowUpText(const std::string& _silenceFollowUpText);

                    /**
                     * 判断参数 SilenceFollowUpText 是否已赋值
                     * @return SilenceFollowUpText 是否已赋值
                     * 
                     */
                    bool SilenceFollowUpTextHasBeenSet() const;

                    /**
                     * 获取<p>主播首次进房主动播报的欢迎语，主播退房后再次进房也会播报。</p>
                     * @return WelcomeMessage <p>主播首次进房主动播报的欢迎语，主播退房后再次进房也会播报。</p>
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置<p>主播首次进房主动播报的欢迎语，主播退房后再次进房也会播报。</p>
                     * @param _welcomeMessage <p>主播首次进房主动播报的欢迎语，主播退房后再次进房也会播报。</p>
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                private:

                    /**
                     * <p>打断模式。</p><p>枚举值：</p><ul><li>0： 自动打断（ASR 出文本打断 TTS，配合InterruptSpeechDuration 使用，默认）</li><li>1： 手动打断（仅服务端/客户端接口 Interrupt 命令打断）</li><li>2： 关键词打断</li></ul>
                     */
                    uint64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * <p>自动打断的最小用户语音持续时长（毫秒），默认 200</p><p>单位：毫秒</p>
                     */
                    uint64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * <p>预设的关键词，关键词打断，适用于需要用户明确表达意图才能打断的场景。最多支持128个关键词，InterruptMode 为2时生效，</p>
                     */
                    std::vector<std::string> m_interruptKeywords;
                    bool m_interruptKeywordsHasBeenSet;

                    /**
                     * <p>用户静音多久后 Bot 主动追问，范围 0~300，0 表示关闭（默认）。</p><p>单位：秒</p>
                     */
                    uint64_t m_silenceFollowUp;
                    bool m_silenceFollowUpHasBeenSet;

                    /**
                     * <p>主动追问的文本。</p>
                     */
                    std::string m_silenceFollowUpText;
                    bool m_silenceFollowUpTextHasBeenSet;

                    /**
                     * <p>主播首次进房主动播报的欢迎语，主播退房后再次进房也会播报。</p>
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONDIALOGCONFIG_H_
