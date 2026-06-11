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
                     * 获取<p>需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符</p>
                     * @return Text <p>需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符</p>
                     * @param _text <p>需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符</p>
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
                     * 获取<p>文本转语音的声音配置</p>
                     * @return Voice <p>文本转语音的声音配置</p>
                     * 
                     */
                    Voice GetVoice() const;

                    /**
                     * 设置<p>文本转语音的声音配置</p>
                     * @param _voice <p>文本转语音的声音配置</p>
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
                     * 获取<p>TRTC的SdkAppId</p>
                     * @return SdkAppId <p>TRTC的SdkAppId</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的SdkAppId</p>
                     * @param _sdkAppId <p>TRTC的SdkAppId</p>
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
                     * 获取<p>文本转语音的输出音频的格式</p>
                     * @return AudioFormat <p>文本转语音的输出音频的格式</p>
                     * 
                     */
                    AudioFormat GetAudioFormat() const;

                    /**
                     * 设置<p>文本转语音的输出音频的格式</p>
                     * @param _audioFormat <p>文本转语音的输出音频的格式</p>
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
                     * 获取<p>TTS的模型，当前固定为：flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： flow_02_turbo</li></ul>
                     * @return Model <p>TTS的模型，当前固定为：flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： flow_02_turbo</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>TTS的模型，当前固定为：flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： flow_02_turbo</li></ul>
                     * @param _model <p>TTS的模型，当前固定为：flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： flow_02_turbo</li></ul>
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
                     * 获取<p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * @return PronunciationDict <p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * 
                     */
                    std::vector<PronunciationDict> GetPronunciationDict() const;

                    /**
                     * 设置<p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     * @param _pronunciationDict <p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
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
                     * 获取<p>默认为0，0表示不生成字幕，1表示生成字幕</p>
                     * @return AlignmentMode <p>默认为0，0表示不生成字幕，1表示生成字幕</p>
                     * 
                     */
                    uint64_t GetAlignmentMode() const;

                    /**
                     * 设置<p>默认为0，0表示不生成字幕，1表示生成字幕</p>
                     * @param _alignmentMode <p>默认为0，0表示不生成字幕，1表示生成字幕</p>
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
                     * 获取<p>需要合成的语言，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * @return LanguageCode <p>需要合成的语言，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * 
                     */
                    std::string GetLanguageCode() const;

                    /**
                     * 设置<p>需要合成的语言，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * @param _languageCode <p>需要合成的语言，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
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
                     * <p>需要转语音的文字内容，最大允许50000字符，注意 1汉字=2字符</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>文本转语音的声音配置</p>
                     */
                    Voice m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * <p>TRTC的SdkAppId</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>文本转语音的输出音频的格式</p>
                     */
                    AudioFormat m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * <p>TTS的模型，当前固定为：flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： flow_02_turbo</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>多音字/生僻字发音纠正词典条目。指定特定词语在本次请求中使用的发音。</p>
                     */
                    std::vector<PronunciationDict> m_pronunciationDict;
                    bool m_pronunciationDictHasBeenSet;

                    /**
                     * <p>默认为0，0表示不生成字幕，1表示生成字幕</p>
                     */
                    uint64_t m_alignmentMode;
                    bool m_alignmentModeHasBeenSet;

                    /**
                     * <p>需要合成的语言，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     */
                    std::string m_languageCode;
                    bool m_languageCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ASYNCTEXTTOSPEECHREQUEST_H_
