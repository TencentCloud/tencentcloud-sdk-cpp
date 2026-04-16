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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/Voice.h>
#include <tencentcloud/trtc/v20190722/model/AudioFormat.h>
#include <tencentcloud/trtc/v20190722/model/PronunciationDict.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AsyncTextToSpeech请求参数结构体
                */
                class AsyncTextToSpeechRequest : public AbstractModel
                {
                public:
                    AsyncTextToSpeechRequest();
                    ~AsyncTextToSpeechRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符
                     * @return Text 需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符
                     * @param _text 需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符
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
                     * 获取文本转语音的声音配置
                     * @return Voice 文本转语音的声音配置
                     * 
                     */
                    Voice GetVoice() const;

                    /**
                     * 设置文本转语音的声音配置
                     * @param _voice 文本转语音的声音配置
                     * 
                     */
                    void SetVoice(const Voice& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取TRTC的SdkAppId
                     * @return SdkAppId TRTC的SdkAppId
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的SdkAppId
                     * @param _sdkAppId TRTC的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取文本转语音的输出音频的格式
                     * @return AudioFormat 文本转语音的输出音频的格式
                     * 
                     */
                    AudioFormat GetAudioFormat() const;

                    /**
                     * 设置文本转语音的输出音频的格式
                     * @param _audioFormat 文本转语音的输出音频的格式
                     * 
                     */
                    void SetAudioFormat(const AudioFormat& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取TTS的模型，当前固定为：flow_01_turbo
                     * @return Model TTS的模型，当前固定为：flow_01_turbo
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置TTS的模型，当前固定为：flow_01_turbo
                     * @param _model TTS的模型，当前固定为：flow_01_turbo
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
                     * 获取多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。
                     * @return PronunciationDict 多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。
                     * 
                     */
                    std::vector<PronunciationDict> GetPronunciationDict() const;

                    /**
                     * 设置多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。
                     * @param _pronunciationDict 多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。
                     * 
                     */
                    void SetPronunciationDict(const std::vector<PronunciationDict>& _pronunciationDict);

                    /**
                     * 判断参数 PronunciationDict 是否已赋值
                     * @return PronunciationDict 是否已赋值
                     * 
                     */
                    bool PronunciationDictHasBeenSet() const;

                    /**
                     * 获取默认为0，0表示不生成字幕，1表示生成字幕
                     * @return AlignmentMode 默认为0，0表示不生成字幕，1表示生成字幕
                     * 
                     */
                    uint64_t GetAlignmentMode() const;

                    /**
                     * 设置默认为0，0表示不生成字幕，1表示生成字幕
                     * @param _alignmentMode 默认为0，0表示不生成字幕，1表示生成字幕
                     * 
                     */
                    void SetAlignmentMode(const uint64_t& _alignmentMode);

                    /**
                     * 判断参数 AlignmentMode 是否已赋值
                     * @return AlignmentMode 是否已赋值
                     * 
                     */
                    bool AlignmentModeHasBeenSet() const;

                    /**
                     * 获取需要合成的语言（ISO 639-1），默认自动识别，支持的语言如下：  zh（中文） en（英文） yue（粤语） ja（日语） ko（韩语） ar（阿拉伯语） id（印尼语） th（泰语）
                     * @return LanguageCode 需要合成的语言（ISO 639-1），默认自动识别，支持的语言如下：  zh（中文） en（英文） yue（粤语） ja（日语） ko（韩语） ar（阿拉伯语） id（印尼语） th（泰语）
                     * 
                     */
                    std::string GetLanguageCode() const;

                    /**
                     * 设置需要合成的语言（ISO 639-1），默认自动识别，支持的语言如下：  zh（中文） en（英文） yue（粤语） ja（日语） ko（韩语） ar（阿拉伯语） id（印尼语） th（泰语）
                     * @param _languageCode 需要合成的语言（ISO 639-1），默认自动识别，支持的语言如下：  zh（中文） en（英文） yue（粤语） ja（日语） ko（韩语） ar（阿拉伯语） id（印尼语） th（泰语）
                     * 
                     */
                    void SetLanguageCode(const std::string& _languageCode);

                    /**
                     * 判断参数 LanguageCode 是否已赋值
                     * @return LanguageCode 是否已赋值
                     * 
                     */
                    bool LanguageCodeHasBeenSet() const;

                private:

                    /**
                     * 需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 文本转语音的声音配置
                     */
                    Voice m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * TRTC的SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 文本转语音的输出音频的格式
                     */
                    AudioFormat m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * TTS的模型，当前固定为：flow_01_turbo
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。
                     */
                    std::vector<PronunciationDict> m_pronunciationDict;
                    bool m_pronunciationDictHasBeenSet;

                    /**
                     * 默认为0，0表示不生成字幕，1表示生成字幕
                     */
                    uint64_t m_alignmentMode;
                    bool m_alignmentModeHasBeenSet;

                    /**
                     * 需要合成的语言（ISO 639-1），默认自动识别，支持的语言如下：  zh（中文） en（英文） yue（粤语） ja（日语） ko（韩语） ar（阿拉伯语） id（印尼语） th（泰语）
                     */
                    std::string m_languageCode;
                    bool m_languageCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHREQUEST_H_
