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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechSyncOutputOption.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * TextToSpeechSync请求参数结构体
                */
                class TextToSpeechSyncRequest : public AbstractModel
                {
                public:
                    TextToSpeechSyncRequest();
                    ~TextToSpeechSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>合成文本，语音合成时必填，文本长度不超过2000字节</p>
                     * @return Text <p>合成文本，语音合成时必填，文本长度不超过2000字节</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>合成文本，语音合成时必填，文本长度不超过2000字节</p>
                     * @param _text <p>合成文本，语音合成时必填，文本长度不超过2000字节</p>
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
                     * 获取<p>音色Id，指定音色合成时填写，支持系统音色和设计、克隆音色。</p>
                     * @return VoiceId <p>音色Id，指定音色合成时填写，支持系统音色和设计、克隆音色。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>音色Id，指定音色合成时填写，支持系统音色和设计、克隆音色。</p>
                     * @param _voiceId <p>音色Id，指定音色合成时填写，支持系统音色和设计、克隆音色。</p>
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
                     * 获取<p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * @return SubAppId <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * @param _subAppId <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>语言增强，如 "zh" "en" "auto"，默认 "auto"</p>
                     * @return LanguageBoost <p>语言增强，如 "zh" "en" "auto"，默认 "auto"</p>
                     * 
                     */
                    std::string GetLanguageBoost() const;

                    /**
                     * 设置<p>语言增强，如 "zh" "en" "auto"，默认 "auto"</p>
                     * @param _languageBoost <p>语言增强，如 "zh" "en" "auto"，默认 "auto"</p>
                     * 
                     */
                    void SetLanguageBoost(const std::string& _languageBoost);

                    /**
                     * 判断参数 LanguageBoost 是否已赋值
                     * @return LanguageBoost 是否已赋值
                     * 
                     */
                    bool LanguageBoostHasBeenSet() const;

                    /**
                     * 获取<p>输出相关参数</p><p>可以指定输出形式等。默认输出音频base64。</p>
                     * @return Output <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频base64。</p>
                     * 
                     */
                    TextToSpeechSyncOutputOption GetOutput() const;

                    /**
                     * 设置<p>输出相关参数</p><p>可以指定输出形式等。默认输出音频base64。</p>
                     * @param _output <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频base64。</p>
                     * 
                     */
                    void SetOutput(const TextToSpeechSyncOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>同步语音合成拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>model</code> (string)：合成模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；默认 <code>minimax-speech-2.8-hd</code>。</li>  <li><code>voice_setting</code> (object)：音色微调，可选字段：    <ul>      <li><code>speed</code> (float)：语速，<code>[0.5, 2.0]</code>，默认 <code>1.0</code>。</li>      <li><code>vol</code> (float)：音量，<code>(0, 10]</code>，默认 <code>1.0</code>。</li>      <li><code>pitch</code> (int)：音调，<code>[-12, 12]</code>，默认 <code>0</code>。</li>      <li><code>emotion</code> (string)：情绪，可选 <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>。</li>    </ul>  </li>  <li><code>audio_setting</code> (object)：音频输出参数，可选字段：    <ul>      <li><code>sample_rate</code> (int)：采样率，可选 <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>，默认 <code>16000</code>。</li>      <li><code>format</code> (string)：音频格式，可选 <code>mp3</code> / <code>wav</code>，默认 <code>wav</code>。</li>      <li><code>duration</code> (float)：目标时长（秒）。</li>      <li><code>cut_silence</code> (bool)：是否裁剪静音段。</li>    </ul>  </li></ul>
                     * @return ExtParam <p>同步语音合成拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>model</code> (string)：合成模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；默认 <code>minimax-speech-2.8-hd</code>。</li>  <li><code>voice_setting</code> (object)：音色微调，可选字段：    <ul>      <li><code>speed</code> (float)：语速，<code>[0.5, 2.0]</code>，默认 <code>1.0</code>。</li>      <li><code>vol</code> (float)：音量，<code>(0, 10]</code>，默认 <code>1.0</code>。</li>      <li><code>pitch</code> (int)：音调，<code>[-12, 12]</code>，默认 <code>0</code>。</li>      <li><code>emotion</code> (string)：情绪，可选 <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>。</li>    </ul>  </li>  <li><code>audio_setting</code> (object)：音频输出参数，可选字段：    <ul>      <li><code>sample_rate</code> (int)：采样率，可选 <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>，默认 <code>16000</code>。</li>      <li><code>format</code> (string)：音频格式，可选 <code>mp3</code> / <code>wav</code>，默认 <code>wav</code>。</li>      <li><code>duration</code> (float)：目标时长（秒）。</li>      <li><code>cut_silence</code> (bool)：是否裁剪静音段。</li>    </ul>  </li></ul>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>同步语音合成拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>model</code> (string)：合成模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；默认 <code>minimax-speech-2.8-hd</code>。</li>  <li><code>voice_setting</code> (object)：音色微调，可选字段：    <ul>      <li><code>speed</code> (float)：语速，<code>[0.5, 2.0]</code>，默认 <code>1.0</code>。</li>      <li><code>vol</code> (float)：音量，<code>(0, 10]</code>，默认 <code>1.0</code>。</li>      <li><code>pitch</code> (int)：音调，<code>[-12, 12]</code>，默认 <code>0</code>。</li>      <li><code>emotion</code> (string)：情绪，可选 <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>。</li>    </ul>  </li>  <li><code>audio_setting</code> (object)：音频输出参数，可选字段：    <ul>      <li><code>sample_rate</code> (int)：采样率，可选 <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>，默认 <code>16000</code>。</li>      <li><code>format</code> (string)：音频格式，可选 <code>mp3</code> / <code>wav</code>，默认 <code>wav</code>。</li>      <li><code>duration</code> (float)：目标时长（秒）。</li>      <li><code>cut_silence</code> (bool)：是否裁剪静音段。</li>    </ul>  </li></ul>
                     * @param _extParam <p>同步语音合成拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>model</code> (string)：合成模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；默认 <code>minimax-speech-2.8-hd</code>。</li>  <li><code>voice_setting</code> (object)：音色微调，可选字段：    <ul>      <li><code>speed</code> (float)：语速，<code>[0.5, 2.0]</code>，默认 <code>1.0</code>。</li>      <li><code>vol</code> (float)：音量，<code>(0, 10]</code>，默认 <code>1.0</code>。</li>      <li><code>pitch</code> (int)：音调，<code>[-12, 12]</code>，默认 <code>0</code>。</li>      <li><code>emotion</code> (string)：情绪，可选 <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>。</li>    </ul>  </li>  <li><code>audio_setting</code> (object)：音频输出参数，可选字段：    <ul>      <li><code>sample_rate</code> (int)：采样率，可选 <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>，默认 <code>16000</code>。</li>      <li><code>format</code> (string)：音频格式，可选 <code>mp3</code> / <code>wav</code>，默认 <code>wav</code>。</li>      <li><code>duration</code> (float)：目标时长（秒）。</li>      <li><code>cut_silence</code> (bool)：是否裁剪静音段。</li>    </ul>  </li></ul>
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
                     * <p>合成文本，语音合成时必填，文本长度不超过2000字节</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>音色Id，指定音色合成时填写，支持系统音色和设计、克隆音色。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>语言增强，如 "zh" "en" "auto"，默认 "auto"</p>
                     */
                    std::string m_languageBoost;
                    bool m_languageBoostHasBeenSet;

                    /**
                     * <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频base64。</p>
                     */
                    TextToSpeechSyncOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>同步语音合成拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>model</code> (string)：合成模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；默认 <code>minimax-speech-2.8-hd</code>。</li>  <li><code>voice_setting</code> (object)：音色微调，可选字段：    <ul>      <li><code>speed</code> (float)：语速，<code>[0.5, 2.0]</code>，默认 <code>1.0</code>。</li>      <li><code>vol</code> (float)：音量，<code>(0, 10]</code>，默认 <code>1.0</code>。</li>      <li><code>pitch</code> (int)：音调，<code>[-12, 12]</code>，默认 <code>0</code>。</li>      <li><code>emotion</code> (string)：情绪，可选 <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>。</li>    </ul>  </li>  <li><code>audio_setting</code> (object)：音频输出参数，可选字段：    <ul>      <li><code>sample_rate</code> (int)：采样率，可选 <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>，默认 <code>16000</code>。</li>      <li><code>format</code> (string)：音频格式，可选 <code>mp3</code> / <code>wav</code>，默认 <code>wav</code>。</li>      <li><code>duration</code> (float)：目标时长（秒）。</li>      <li><code>cut_silence</code> (bool)：是否裁剪静音段。</li>    </ul>  </li></ul>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_
