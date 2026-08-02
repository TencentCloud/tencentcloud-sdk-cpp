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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VoiceProfile.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingOutputOption.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CloneVoice请求参数结构体
                */
                class CloneVoiceRequest : public AbstractModel
                {
                public:
                    CloneVoiceRequest();
                    ~CloneVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>克隆音频base64编码</p>
                     * @return AudioData <p>克隆音频base64编码</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>克隆音频base64编码</p>
                     * @param _audioData <p>克隆音频base64编码</p>
                     * 
                     */
                    void SetAudioData(const std::string& _audioData);

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取<p>克隆音频Url，AudioData为空时有效</p>
                     * @return AudioUrl <p>克隆音频Url，AudioData为空时有效</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>克隆音频Url，AudioData为空时有效</p>
                     * @param _audioUrl <p>克隆音频Url，AudioData为空时有效</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>克隆音频语言，默认中文。 当前支持语言同语音合成TextLang</p>
                     * @return AudioLang <p>克隆音频语言，默认中文。 当前支持语言同语音合成TextLang</p>
                     * 
                     */
                    std::string GetAudioLang() const;

                    /**
                     * 设置<p>克隆音频语言，默认中文。 当前支持语言同语音合成TextLang</p>
                     * @param _audioLang <p>克隆音频语言，默认中文。 当前支持语言同语音合成TextLang</p>
                     * 
                     */
                    void SetAudioLang(const std::string& _audioLang);

                    /**
                     * 判断参数 AudioLang 是否已赋值
                     * @return AudioLang 是否已赋值
                     * 
                     */
                    bool AudioLangHasBeenSet() const;

                    /**
                     * 获取<p>音色属性。音色查询和匹配使用</p>
                     * @return VoiceProfile <p>音色属性。音色查询和匹配使用</p>
                     * 
                     */
                    VoiceProfile GetVoiceProfile() const;

                    /**
                     * 设置<p>音色属性。音色查询和匹配使用</p>
                     * @param _voiceProfile <p>音色属性。音色查询和匹配使用</p>
                     * 
                     */
                    void SetVoiceProfile(const VoiceProfile& _voiceProfile);

                    /**
                     * 判断参数 VoiceProfile 是否已赋值
                     * @return VoiceProfile 是否已赋值
                     * 
                     */
                    bool VoiceProfileHasBeenSet() const;

                    /**
                     * 获取<p>试听文本</p>
                     * @return Text <p>试听文本</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>试听文本</p>
                     * @param _text <p>试听文本</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>试听文本语言，不填默认自动检测。当前支持语言同语音合成</p>
                     * @return TextLang <p>试听文本语言，不填默认自动检测。当前支持语言同语音合成</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>试听文本语言，不填默认自动检测。当前支持语言同语音合成</p>
                     * @param _textLang <p>试听文本语言，不填默认自动检测。当前支持语言同语音合成</p>
                     * 
                     */
                    void SetTextLang(const std::string& _textLang);

                    /**
                     * 判断参数 TextLang 是否已赋值
                     * @return TextLang 是否已赋值
                     * 
                     */
                    bool TextLangHasBeenSet() const;

                    /**
                     * 获取<p>输出相关参数，可以指定输出音频形式等。默认输出音频base64。</p>
                     * @return Output <p>输出相关参数，可以指定输出音频形式等。默认输出音频base64。</p>
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置<p>输出相关参数，可以指定输出音频形式等。默认输出音频base64。</p>
                     * @param _output <p>输出相关参数，可以指定输出音频形式等。默认输出音频base64。</p>
                     * 
                     */
                    void SetOutput(const SyncDubbingOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，json字符串</p>
                     * @return ExtParam <p>扩展参数，json字符串</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p>
                     * @param _extParam <p>扩展参数，json字符串</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>克隆音频base64编码</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>克隆音频Url，AudioData为空时有效</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>克隆音频语言，默认中文。 当前支持语言同语音合成TextLang</p>
                     */
                    std::string m_audioLang;
                    bool m_audioLangHasBeenSet;

                    /**
                     * <p>音色属性。音色查询和匹配使用</p>
                     */
                    VoiceProfile m_voiceProfile;
                    bool m_voiceProfileHasBeenSet;

                    /**
                     * <p>试听文本</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>试听文本语言，不填默认自动检测。当前支持语言同语音合成</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>输出相关参数，可以指定输出音频形式等。默认输出音频base64。</p>
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_
