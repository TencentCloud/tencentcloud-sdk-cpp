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
                     * 获取<p>模型系列，区分大小写，默认 MiniMax。</p><p>枚举值：</p><ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * @return ModelName <p>模型系列，区分大小写，默认 MiniMax。</p><p>枚举值：</p><ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型系列，区分大小写，默认 MiniMax。</p><p>枚举值：</p><ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * @param _modelName <p>模型系列，区分大小写，默认 MiniMax。</p><p>枚举值：</p><ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>模型版本，不填时使用该模型系列的默认版本。</p><p>各模型支持版本：</p><ul><li><p>MiniMax：minimax-speech-2.8-hd（默认）、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo</p></li><li><p>ElevenLabs：custom-model-ll-v3（默认）、custom-model-ll-mlv2、custom-model-ll-fv2.5、custom-model-ll-fv2、custom-model-ll-v4、custom-model-ll-v4tb</p></li></ul>
                     * @return ModelVersion <p>模型版本，不填时使用该模型系列的默认版本。</p><p>各模型支持版本：</p><ul><li><p>MiniMax：minimax-speech-2.8-hd（默认）、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo</p></li><li><p>ElevenLabs：custom-model-ll-v3（默认）、custom-model-ll-mlv2、custom-model-ll-fv2.5、custom-model-ll-fv2、custom-model-ll-v4、custom-model-ll-v4tb</p></li></ul>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>模型版本，不填时使用该模型系列的默认版本。</p><p>各模型支持版本：</p><ul><li><p>MiniMax：minimax-speech-2.8-hd（默认）、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo</p></li><li><p>ElevenLabs：custom-model-ll-v3（默认）、custom-model-ll-mlv2、custom-model-ll-fv2.5、custom-model-ll-fv2、custom-model-ll-v4、custom-model-ll-v4tb</p></li></ul>
                     * @param _modelVersion <p>模型版本，不填时使用该模型系列的默认版本。</p><p>各模型支持版本：</p><ul><li><p>MiniMax：minimax-speech-2.8-hd（默认）、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo</p></li><li><p>ElevenLabs：custom-model-ll-v3（默认）、custom-model-ll-mlv2、custom-model-ll-fv2.5、custom-model-ll-fv2、custom-model-ll-v4、custom-model-ll-v4tb</p></li></ul>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

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
                     * 获取<p>输出相关参数</p><p>可以指定输出形式等。默认输出音频URL。</p>
                     * @return Output <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频URL。</p>
                     * 
                     */
                    TextToSpeechSyncOutputOption GetOutput() const;

                    /**
                     * 设置<p>输出相关参数</p><p>可以指定输出形式等。默认输出音频URL。</p>
                     * @param _output <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频URL。</p>
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
                     * 获取<p><strong>ExtParam</strong> 是 JSON 字符串字段，用于指定各模型的高级合成参数。字段名中的 . 表示嵌套对象，如 req_params.audio_params.speech_rate，需按层级组成本地 JSON 对象后整体转义传入。未列出的字段不生效。</p><hr><h3 id="MiniMax">MiniMax</h3><ul><li>model（string）：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo，默认 minimax-speech-2.8-hd</li><li>voice_setting.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>voice_setting.vol（float）：音量，取值范围 (0, 10]，默认 1.0</li><li>voice_setting.pitch（integer）：音调，取值范围 [-12, 12]，默认 0</li><li>voice_setting.emotion（string）：情绪，可选 happy、sad、angry、fearful、disgusted、surprised、calm、fluent、whisper</li><li>audio_setting.format（string）：音频格式，可选 mp3、wav，默认 wav</li><li>audio_setting.sample_rate（integer）：采样率，可选 8000、16000、22050、24000、32000、44100，默认 16000</li><li>audio_setting.duration（float）：目标时长，单位秒</li><li>audio_setting.cut_silence（boolean）：是否裁剪静音段</li></ul><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>language_code（string）：语言代码（ISO 639-1），用于强制语种与文本归一化</li><li>previous_text（string）：上一段文本（衔接上下文）</li><li>next_text（string）：下一段文本</li><li>seed（integer）：确定性采样种子，范围 [0, 4294967295]</li><li>apply_text_normalization（string）：文本规范化，可选 auto、on、off</li><li>apply_language_text_normalization（boolean）：是否启用语种相关的文本规范化</li><li>voice_settings.stability（float）：稳定性，默认 0.5</li><li>voice_settings.similarity_boost（float）：音色相似度，默认 0.75</li><li>voice_settings.style（float）：风格夸张度，默认 0</li><li>voice_settings.use_speaker_boost（boolean）：是否增强音色相似度，默认 true</li><li>voice_settings.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，需与 format 匹配</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     * @return ExtParam <p><strong>ExtParam</strong> 是 JSON 字符串字段，用于指定各模型的高级合成参数。字段名中的 . 表示嵌套对象，如 req_params.audio_params.speech_rate，需按层级组成本地 JSON 对象后整体转义传入。未列出的字段不生效。</p><hr><h3 id="MiniMax">MiniMax</h3><ul><li>model（string）：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo，默认 minimax-speech-2.8-hd</li><li>voice_setting.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>voice_setting.vol（float）：音量，取值范围 (0, 10]，默认 1.0</li><li>voice_setting.pitch（integer）：音调，取值范围 [-12, 12]，默认 0</li><li>voice_setting.emotion（string）：情绪，可选 happy、sad、angry、fearful、disgusted、surprised、calm、fluent、whisper</li><li>audio_setting.format（string）：音频格式，可选 mp3、wav，默认 wav</li><li>audio_setting.sample_rate（integer）：采样率，可选 8000、16000、22050、24000、32000、44100，默认 16000</li><li>audio_setting.duration（float）：目标时长，单位秒</li><li>audio_setting.cut_silence（boolean）：是否裁剪静音段</li></ul><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>language_code（string）：语言代码（ISO 639-1），用于强制语种与文本归一化</li><li>previous_text（string）：上一段文本（衔接上下文）</li><li>next_text（string）：下一段文本</li><li>seed（integer）：确定性采样种子，范围 [0, 4294967295]</li><li>apply_text_normalization（string）：文本规范化，可选 auto、on、off</li><li>apply_language_text_normalization（boolean）：是否启用语种相关的文本规范化</li><li>voice_settings.stability（float）：稳定性，默认 0.5</li><li>voice_settings.similarity_boost（float）：音色相似度，默认 0.75</li><li>voice_settings.style（float）：风格夸张度，默认 0</li><li>voice_settings.use_speaker_boost（boolean）：是否增强音色相似度，默认 true</li><li>voice_settings.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，需与 format 匹配</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p><strong>ExtParam</strong> 是 JSON 字符串字段，用于指定各模型的高级合成参数。字段名中的 . 表示嵌套对象，如 req_params.audio_params.speech_rate，需按层级组成本地 JSON 对象后整体转义传入。未列出的字段不生效。</p><hr><h3 id="MiniMax">MiniMax</h3><ul><li>model（string）：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo，默认 minimax-speech-2.8-hd</li><li>voice_setting.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>voice_setting.vol（float）：音量，取值范围 (0, 10]，默认 1.0</li><li>voice_setting.pitch（integer）：音调，取值范围 [-12, 12]，默认 0</li><li>voice_setting.emotion（string）：情绪，可选 happy、sad、angry、fearful、disgusted、surprised、calm、fluent、whisper</li><li>audio_setting.format（string）：音频格式，可选 mp3、wav，默认 wav</li><li>audio_setting.sample_rate（integer）：采样率，可选 8000、16000、22050、24000、32000、44100，默认 16000</li><li>audio_setting.duration（float）：目标时长，单位秒</li><li>audio_setting.cut_silence（boolean）：是否裁剪静音段</li></ul><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>language_code（string）：语言代码（ISO 639-1），用于强制语种与文本归一化</li><li>previous_text（string）：上一段文本（衔接上下文）</li><li>next_text（string）：下一段文本</li><li>seed（integer）：确定性采样种子，范围 [0, 4294967295]</li><li>apply_text_normalization（string）：文本规范化，可选 auto、on、off</li><li>apply_language_text_normalization（boolean）：是否启用语种相关的文本规范化</li><li>voice_settings.stability（float）：稳定性，默认 0.5</li><li>voice_settings.similarity_boost（float）：音色相似度，默认 0.75</li><li>voice_settings.style（float）：风格夸张度，默认 0</li><li>voice_settings.use_speaker_boost（boolean）：是否增强音色相似度，默认 true</li><li>voice_settings.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，需与 format 匹配</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     * @param _extParam <p><strong>ExtParam</strong> 是 JSON 字符串字段，用于指定各模型的高级合成参数。字段名中的 . 表示嵌套对象，如 req_params.audio_params.speech_rate，需按层级组成本地 JSON 对象后整体转义传入。未列出的字段不生效。</p><hr><h3 id="MiniMax">MiniMax</h3><ul><li>model（string）：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo，默认 minimax-speech-2.8-hd</li><li>voice_setting.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>voice_setting.vol（float）：音量，取值范围 (0, 10]，默认 1.0</li><li>voice_setting.pitch（integer）：音调，取值范围 [-12, 12]，默认 0</li><li>voice_setting.emotion（string）：情绪，可选 happy、sad、angry、fearful、disgusted、surprised、calm、fluent、whisper</li><li>audio_setting.format（string）：音频格式，可选 mp3、wav，默认 wav</li><li>audio_setting.sample_rate（integer）：采样率，可选 8000、16000、22050、24000、32000、44100，默认 16000</li><li>audio_setting.duration（float）：目标时长，单位秒</li><li>audio_setting.cut_silence（boolean）：是否裁剪静音段</li></ul><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>language_code（string）：语言代码（ISO 639-1），用于强制语种与文本归一化</li><li>previous_text（string）：上一段文本（衔接上下文）</li><li>next_text（string）：下一段文本</li><li>seed（integer）：确定性采样种子，范围 [0, 4294967295]</li><li>apply_text_normalization（string）：文本规范化，可选 auto、on、off</li><li>apply_language_text_normalization（boolean）：是否启用语种相关的文本规范化</li><li>voice_settings.stability（float）：稳定性，默认 0.5</li><li>voice_settings.similarity_boost（float）：音色相似度，默认 0.75</li><li>voice_settings.style（float）：风格夸张度，默认 0</li><li>voice_settings.use_speaker_boost（boolean）：是否增强音色相似度，默认 true</li><li>voice_settings.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，需与 format 匹配</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
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
                     * <p>模型系列，区分大小写，默认 MiniMax。</p><p>枚举值：</p><ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型版本，不填时使用该模型系列的默认版本。</p><p>各模型支持版本：</p><ul><li><p>MiniMax：minimax-speech-2.8-hd（默认）、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo</p></li><li><p>ElevenLabs：custom-model-ll-v3（默认）、custom-model-ll-mlv2、custom-model-ll-fv2.5、custom-model-ll-fv2、custom-model-ll-v4、custom-model-ll-v4tb</p></li></ul>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

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
                     * <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频URL。</p>
                     */
                    TextToSpeechSyncOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p><strong>ExtParam</strong> 是 JSON 字符串字段，用于指定各模型的高级合成参数。字段名中的 . 表示嵌套对象，如 req_params.audio_params.speech_rate，需按层级组成本地 JSON 对象后整体转义传入。未列出的字段不生效。</p><hr><h3 id="MiniMax">MiniMax</h3><ul><li>model（string）：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo，默认 minimax-speech-2.8-hd</li><li>voice_setting.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>voice_setting.vol（float）：音量，取值范围 (0, 10]，默认 1.0</li><li>voice_setting.pitch（integer）：音调，取值范围 [-12, 12]，默认 0</li><li>voice_setting.emotion（string）：情绪，可选 happy、sad、angry、fearful、disgusted、surprised、calm、fluent、whisper</li><li>audio_setting.format（string）：音频格式，可选 mp3、wav，默认 wav</li><li>audio_setting.sample_rate（integer）：采样率，可选 8000、16000、22050、24000、32000、44100，默认 16000</li><li>audio_setting.duration（float）：目标时长，单位秒</li><li>audio_setting.cut_silence（boolean）：是否裁剪静音段</li></ul><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>language_code（string）：语言代码（ISO 639-1），用于强制语种与文本归一化</li><li>previous_text（string）：上一段文本（衔接上下文）</li><li>next_text（string）：下一段文本</li><li>seed（integer）：确定性采样种子，范围 [0, 4294967295]</li><li>apply_text_normalization（string）：文本规范化，可选 auto、on、off</li><li>apply_language_text_normalization（boolean）：是否启用语种相关的文本规范化</li><li>voice_settings.stability（float）：稳定性，默认 0.5</li><li>voice_settings.similarity_boost（float）：音色相似度，默认 0.75</li><li>voice_settings.style（float）：风格夸张度，默认 0</li><li>voice_settings.use_speaker_boost（boolean）：是否增强音色相似度，默认 true</li><li>voice_settings.speed（float）：语速，取值范围 [0.5, 2.0]，默认 1.0</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，需与 format 匹配</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_
