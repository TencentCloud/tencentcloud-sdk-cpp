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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncOutputOption.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取<p>文本合成语音（异步）拓展参数。ExtParam 支持的字段：</p><ul><li>model (string)：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo；默认 minimax-speech-2.8-hd。</li><li>text_lang (string)：文本语言，如 zh / en；与入参 LanguageBoost 同义，同时传入时以 ExtParam 为准。</li><li>audio_setting (object)：音频输出与音色微调参数（注意：异步接口的语速、音量、音调、情绪均在 audio_setting 下，与同步接口的 voice_setting 不同），可选字段：<ul><li>speed (float)：语速，[0.5, 2.0]，默认 1.0。</li><li>vol (float)：音量，(0, 10]，默认 1.0。</li><li>pitch (int)：音调，[-12, 12]，默认 0。</li><li>emotion (string)：情绪，可选 happy / sad / angry / fearful / disgusted / surprised / calm / fluent / whisper。</li><li>sample_rate (int)：采样率，可选 8000 / 16000 / 22050 / 24000 / 32000 / 44100，默认 16000。</li><li>format (string)：音频格式，可选 mp3 / wav，默认 wav。</li><li>duration (float)：目标时长（秒）。</li><li>cut_silence (bool)：是否裁剪静音段。</li></ul></li></ul>
                     * @return ExtParam <p>文本合成语音（异步）拓展参数。ExtParam 支持的字段：</p><ul><li>model (string)：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo；默认 minimax-speech-2.8-hd。</li><li>text_lang (string)：文本语言，如 zh / en；与入参 LanguageBoost 同义，同时传入时以 ExtParam 为准。</li><li>audio_setting (object)：音频输出与音色微调参数（注意：异步接口的语速、音量、音调、情绪均在 audio_setting 下，与同步接口的 voice_setting 不同），可选字段：<ul><li>speed (float)：语速，[0.5, 2.0]，默认 1.0。</li><li>vol (float)：音量，(0, 10]，默认 1.0。</li><li>pitch (int)：音调，[-12, 12]，默认 0。</li><li>emotion (string)：情绪，可选 happy / sad / angry / fearful / disgusted / surprised / calm / fluent / whisper。</li><li>sample_rate (int)：采样率，可选 8000 / 16000 / 22050 / 24000 / 32000 / 44100，默认 16000。</li><li>format (string)：音频格式，可选 mp3 / wav，默认 wav。</li><li>duration (float)：目标时长（秒）。</li><li>cut_silence (bool)：是否裁剪静音段。</li></ul></li></ul>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>文本合成语音（异步）拓展参数。ExtParam 支持的字段：</p><ul><li>model (string)：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo；默认 minimax-speech-2.8-hd。</li><li>text_lang (string)：文本语言，如 zh / en；与入参 LanguageBoost 同义，同时传入时以 ExtParam 为准。</li><li>audio_setting (object)：音频输出与音色微调参数（注意：异步接口的语速、音量、音调、情绪均在 audio_setting 下，与同步接口的 voice_setting 不同），可选字段：<ul><li>speed (float)：语速，[0.5, 2.0]，默认 1.0。</li><li>vol (float)：音量，(0, 10]，默认 1.0。</li><li>pitch (int)：音调，[-12, 12]，默认 0。</li><li>emotion (string)：情绪，可选 happy / sad / angry / fearful / disgusted / surprised / calm / fluent / whisper。</li><li>sample_rate (int)：采样率，可选 8000 / 16000 / 22050 / 24000 / 32000 / 44100，默认 16000。</li><li>format (string)：音频格式，可选 mp3 / wav，默认 wav。</li><li>duration (float)：目标时长（秒）。</li><li>cut_silence (bool)：是否裁剪静音段。</li></ul></li></ul>
                     * @param _extParam <p>文本合成语音（异步）拓展参数。ExtParam 支持的字段：</p><ul><li>model (string)：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo；默认 minimax-speech-2.8-hd。</li><li>text_lang (string)：文本语言，如 zh / en；与入参 LanguageBoost 同义，同时传入时以 ExtParam 为准。</li><li>audio_setting (object)：音频输出与音色微调参数（注意：异步接口的语速、音量、音调、情绪均在 audio_setting 下，与同步接口的 voice_setting 不同），可选字段：<ul><li>speed (float)：语速，[0.5, 2.0]，默认 1.0。</li><li>vol (float)：音量，(0, 10]，默认 1.0。</li><li>pitch (int)：音调，[-12, 12]，默认 0。</li><li>emotion (string)：情绪，可选 happy / sad / angry / fearful / disgusted / surprised / calm / fluent / whisper。</li><li>sample_rate (int)：采样率，可选 8000 / 16000 / 22050 / 24000 / 32000 / 44100，默认 16000。</li><li>format (string)：音频格式，可选 mp3 / wav，默认 wav。</li><li>duration (float)：目标时长（秒）。</li><li>cut_silence (bool)：是否裁剪静音段。</li></ul></li></ul>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                    /**
                     * 获取<p>输出相关参数</p><p>可以指定输出形式等。默认输出音频url。</p>
                     * @return Output <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频url。</p>
                     * 
                     */
                    TextToSpeechAsyncOutputOption GetOutput() const;

                    /**
                     * 设置<p>输出相关参数</p><p>可以指定输出形式等。默认输出音频url。</p>
                     * @param _output <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频url。</p>
                     * 
                     */
                    void SetOutput(const TextToSpeechAsyncOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>标识来源上下文，用于透传用户请求信息，在回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>标识来源上下文，用于透传用户请求信息，在回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>标识来源上下文，用于透传用户请求信息，在回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>标识来源上下文，用于透传用户请求信息，在回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

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
                     * <p>文本合成语音（异步）拓展参数。ExtParam 支持的字段：</p><ul><li>model (string)：合成模型，可选 minimax-speech-2.8-hd、minimax-speech-2.8-turbo、minimax-speech-2.6-hd、minimax-speech-2.6-turbo、minimax-speech-02-hd、minimax-speech-02-turbo；默认 minimax-speech-2.8-hd。</li><li>text_lang (string)：文本语言，如 zh / en；与入参 LanguageBoost 同义，同时传入时以 ExtParam 为准。</li><li>audio_setting (object)：音频输出与音色微调参数（注意：异步接口的语速、音量、音调、情绪均在 audio_setting 下，与同步接口的 voice_setting 不同），可选字段：<ul><li>speed (float)：语速，[0.5, 2.0]，默认 1.0。</li><li>vol (float)：音量，(0, 10]，默认 1.0。</li><li>pitch (int)：音调，[-12, 12]，默认 0。</li><li>emotion (string)：情绪，可选 happy / sad / angry / fearful / disgusted / surprised / calm / fluent / whisper。</li><li>sample_rate (int)：采样率，可选 8000 / 16000 / 22050 / 24000 / 32000 / 44100，默认 16000。</li><li>format (string)：音频格式，可选 mp3 / wav，默认 wav。</li><li>duration (float)：目标时长（秒）。</li><li>cut_silence (bool)：是否裁剪静音段。</li></ul></li></ul>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                    /**
                     * <p>输出相关参数</p><p>可以指定输出形式等。默认输出音频url。</p>
                     */
                    TextToSpeechAsyncOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>标识来源上下文，用于透传用户请求信息，在回调和任务流状态变更回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
