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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * TextToSpeechAsync请求参数结构体
                */
                class TextToSpeechAsyncRequest : public AbstractModel
                {
                public:
                    TextToSpeechAsyncRequest();
                    ~TextToSpeechAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>语音合成文本</p>
                     * @return Text <p>语音合成文本</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>语音合成文本</p>
                     * @param _text <p>语音合成文本</p>
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
                     * 获取<p>音色ID</p>
                     * @return VoiceId <p>音色ID</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色ID</p>
                     * @param _voiceId <p>音色ID</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>文本语言，默认中文</p>
                     * @return TextLang <p>文本语言，默认中文</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>文本语言，默认中文</p>
                     * @param _textLang <p>文本语言，默认中文</p>
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
                     * 获取<p>扩展参数，json字符串</p><p>synExt Object 语音合成扩展参数<br>  duration Float 合成音频时长，单位秒，示例：5.2<br>  sampleRate Integer 合成音频采样率，默认16000，支持[8000,16000,22050,32000,44100]<br>  pitch Integer 音调，默认0原音色输出，取值[-12, 12]</p><p>transExt Object 翻译扩展参数<br>  transInfo Object<br>   transDst String 目标语言，如en<br>  transRequirement String 翻译要求</p>
                     * @return ExtParam <p>扩展参数，json字符串</p><p>synExt Object 语音合成扩展参数<br>  duration Float 合成音频时长，单位秒，示例：5.2<br>  sampleRate Integer 合成音频采样率，默认16000，支持[8000,16000,22050,32000,44100]<br>  pitch Integer 音调，默认0原音色输出，取值[-12, 12]</p><p>transExt Object 翻译扩展参数<br>  transInfo Object<br>   transDst String 目标语言，如en<br>  transRequirement String 翻译要求</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p><p>synExt Object 语音合成扩展参数<br>  duration Float 合成音频时长，单位秒，示例：5.2<br>  sampleRate Integer 合成音频采样率，默认16000，支持[8000,16000,22050,32000,44100]<br>  pitch Integer 音调，默认0原音色输出，取值[-12, 12]</p><p>transExt Object 翻译扩展参数<br>  transInfo Object<br>   transDst String 目标语言，如en<br>  transRequirement String 翻译要求</p>
                     * @param _extParam <p>扩展参数，json字符串</p><p>synExt Object 语音合成扩展参数<br>  duration Float 合成音频时长，单位秒，示例：5.2<br>  sampleRate Integer 合成音频采样率，默认16000，支持[8000,16000,22050,32000,44100]<br>  pitch Integer 音调，默认0原音色输出，取值[-12, 12]</p><p>transExt Object 翻译扩展参数<br>  transInfo Object<br>   transDst String 目标语言，如en<br>  transRequirement String 翻译要求</p>
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
                     * <p>语音合成文本</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音色ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>文本语言，默认中文</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p><p>synExt Object 语音合成扩展参数<br>  duration Float 合成音频时长，单位秒，示例：5.2<br>  sampleRate Integer 合成音频采样率，默认16000，支持[8000,16000,22050,32000,44100]<br>  pitch Integer 音调，默认0原音色输出，取值[-12, 12]</p><p>transExt Object 翻译扩展参数<br>  transInfo Object<br>   transDst String 目标语言，如en<br>  transRequirement String 翻译要求</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
