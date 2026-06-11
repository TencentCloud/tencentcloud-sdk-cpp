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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TTSPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TTSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>
#include <tencentcloud/trtc/v20190722/model/TTSVoice.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 伴生转录TTS参数
                */
                class TTSParam : public AbstractModel
                {
                public:
                    TTSParam();
                    ~TTSParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>tts模型</p>
                     * @return Model <p>tts模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>tts模型</p>
                     * @param _model <p>tts模型</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>tts语言，必须在TranslationParam 的TargetLang列表中。</p>
                     * @return Language <p>tts语言，必须在TranslationParam 的TargetLang列表中。</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>tts语言，必须在TranslationParam 的TargetLang列表中。</p>
                     * @param _language <p>tts语言，必须在TranslationParam 的TargetLang列表中。</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>需要TTS播报的主播用户，该主播用户必须在订阅白名单里并且不在订阅黑名单里。</p>
                     * @return TargetUser <p>需要TTS播报的主播用户，该主播用户必须在订阅白名单里并且不在订阅黑名单里。</p>
                     * 
                     */
                    TranscriptionUserInfoParams GetTargetUser() const;

                    /**
                     * 设置<p>需要TTS播报的主播用户，该主播用户必须在订阅白名单里并且不在订阅黑名单里。</p>
                     * @param _targetUser <p>需要TTS播报的主播用户，该主播用户必须在订阅白名单里并且不在订阅黑名单里。</p>
                     * 
                     */
                    void SetTargetUser(const TranscriptionUserInfoParams& _targetUser);

                    /**
                     * 判断参数 TargetUser 是否已赋值
                     * @return TargetUser 是否已赋值
                     * 
                     */
                    bool TargetUserHasBeenSet() const;

                    /**
                     * 获取<p>TTS 音频回推到房间的机器人用户。</p>
                     * @return TTSRobotUser <p>TTS 音频回推到房间的机器人用户。</p>
                     * 
                     */
                    TranscriptionUserInfoParams GetTTSRobotUser() const;

                    /**
                     * 设置<p>TTS 音频回推到房间的机器人用户。</p>
                     * @param _tTSRobotUser <p>TTS 音频回推到房间的机器人用户。</p>
                     * 
                     */
                    void SetTTSRobotUser(const TranscriptionUserInfoParams& _tTSRobotUser);

                    /**
                     * 判断参数 TTSRobotUser 是否已赋值
                     * @return TTSRobotUser 是否已赋值
                     * 
                     */
                    bool TTSRobotUserHasBeenSet() const;

                    /**
                     * 获取<p>TTS的声音配置参数。</p>
                     * @return Voice <p>TTS的声音配置参数。</p>
                     * 
                     */
                    TTSVoice GetVoice() const;

                    /**
                     * 设置<p>TTS的声音配置参数。</p>
                     * @param _voice <p>TTS的声音配置参数。</p>
                     * 
                     */
                    void SetVoice(const TTSVoice& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                private:

                    /**
                     * <p>tts模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>tts语言，必须在TranslationParam 的TargetLang列表中。</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>需要TTS播报的主播用户，该主播用户必须在订阅白名单里并且不在订阅黑名单里。</p>
                     */
                    TranscriptionUserInfoParams m_targetUser;
                    bool m_targetUserHasBeenSet;

                    /**
                     * <p>TTS 音频回推到房间的机器人用户。</p>
                     */
                    TranscriptionUserInfoParams m_tTSRobotUser;
                    bool m_tTSRobotUserHasBeenSet;

                    /**
                     * <p>TTS的声音配置参数。</p>
                     */
                    TTSVoice m_voice;
                    bool m_voiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TTSPARAM_H_
