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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VoiceSettings.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DesignVoiceAsync请求参数结构体
                */
                class DesignVoiceAsyncRequest : public AbstractModel
                {
                public:
                    DesignVoiceAsyncRequest();
                    ~DesignVoiceAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>音色描述</p>
                     * @return Prompt <p>音色描述</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>音色描述</p>
                     * @param _prompt <p>音色描述</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

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
                     * 获取<p>模型名，不填默认为MiniMax模型。</p> 枚举值： <ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * @return ModelName <p>模型名，不填默认为MiniMax模型。</p> 枚举值： <ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名，不填默认为MiniMax模型。</p> 枚举值： <ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     * @param _modelName <p>模型名，不填默认为MiniMax模型。</p> 枚举值： <ul><li>MiniMax</li><li>ElevenLabs</li></ul>
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
                     * 获取<p>音色设置</p>
                     * @return VoiceSettings <p>音色设置</p>
                     * 
                     */
                    VoiceSettings GetVoiceSettings() const;

                    /**
                     * 设置<p>音色设置</p>
                     * @param _voiceSettings <p>音色设置</p>
                     * 
                     */
                    void SetVoiceSettings(const VoiceSettings& _voiceSettings);

                    /**
                     * 判断参数 VoiceSettings 是否已赋值
                     * @return VoiceSettings 是否已赋值
                     * 
                     */
                    bool VoiceSettingsHasBeenSet() const;

                    /**
                     * 获取<p>试听合成文本，最大 500 字符</p>
                     * @return PreviewText <p>试听合成文本，最大 500 字符</p>
                     * 
                     */
                    std::string GetPreviewText() const;

                    /**
                     * 设置<p>试听合成文本，最大 500 字符</p>
                     * @param _previewText <p>试听合成文本，最大 500 字符</p>
                     * 
                     */
                    void SetPreviewText(const std::string& _previewText);

                    /**
                     * 判断参数 PreviewText 是否已赋值
                     * @return PreviewText 是否已赋值
                     * 
                     */
                    bool PreviewTextHasBeenSet() const;

                    /**
                     * 获取<p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级设计参数。</p><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>model_id（string）：TTV 模型，可选 eleven_multilingual_ttv_v2（默认）、eleven_ttv_v3</li><li>voice_name（string）：音色名称，用于设计完成后正式创建音色</li><li>labels（map&lt;string,string&gt;）：音色标签，最多 16 项，键值各不超过 256 字节</li><li>auto_generate_text（boolean）：是否自动生成与描述匹配的试听文本，默认 false</li><li>loudness（float）：音量，取值范围 [-1, 1]，默认 0.5</li><li>seed（integer）：采样种子，取值范围 [0, 2147483647]</li><li>guidance_scale（float）：提示词遵循程度，取值范围 [0, 100]，默认 5</li><li>quality（float）：输出质量，取值范围 [-1, 1]，越高质量越好但多样性越低</li><li>should_enhance（boolean）：是否用 AI 扩写音色描述，默认 false</li><li>reference_audio_base64（string）：参考音频 base64，仅 eleven_ttv_v3 支持</li><li>prompt_strength（float）：提示词与参考音频权重，取值范围 [0, 1]，仅 eleven_ttv_v3 支持</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，与 format 组合受限</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     * @return ExtParam <p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级设计参数。</p><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>model_id（string）：TTV 模型，可选 eleven_multilingual_ttv_v2（默认）、eleven_ttv_v3</li><li>voice_name（string）：音色名称，用于设计完成后正式创建音色</li><li>labels（map&lt;string,string&gt;）：音色标签，最多 16 项，键值各不超过 256 字节</li><li>auto_generate_text（boolean）：是否自动生成与描述匹配的试听文本，默认 false</li><li>loudness（float）：音量，取值范围 [-1, 1]，默认 0.5</li><li>seed（integer）：采样种子，取值范围 [0, 2147483647]</li><li>guidance_scale（float）：提示词遵循程度，取值范围 [0, 100]，默认 5</li><li>quality（float）：输出质量，取值范围 [-1, 1]，越高质量越好但多样性越低</li><li>should_enhance（boolean）：是否用 AI 扩写音色描述，默认 false</li><li>reference_audio_base64（string）：参考音频 base64，仅 eleven_ttv_v3 支持</li><li>prompt_strength（float）：提示词与参考音频权重，取值范围 [0, 1]，仅 eleven_ttv_v3 支持</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，与 format 组合受限</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级设计参数。</p><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>model_id（string）：TTV 模型，可选 eleven_multilingual_ttv_v2（默认）、eleven_ttv_v3</li><li>voice_name（string）：音色名称，用于设计完成后正式创建音色</li><li>labels（map&lt;string,string&gt;）：音色标签，最多 16 项，键值各不超过 256 字节</li><li>auto_generate_text（boolean）：是否自动生成与描述匹配的试听文本，默认 false</li><li>loudness（float）：音量，取值范围 [-1, 1]，默认 0.5</li><li>seed（integer）：采样种子，取值范围 [0, 2147483647]</li><li>guidance_scale（float）：提示词遵循程度，取值范围 [0, 100]，默认 5</li><li>quality（float）：输出质量，取值范围 [-1, 1]，越高质量越好但多样性越低</li><li>should_enhance（boolean）：是否用 AI 扩写音色描述，默认 false</li><li>reference_audio_base64（string）：参考音频 base64，仅 eleven_ttv_v3 支持</li><li>prompt_strength（float）：提示词与参考音频权重，取值范围 [0, 1]，仅 eleven_ttv_v3 支持</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，与 format 组合受限</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     * @param _extParam <p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级设计参数。</p><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>model_id（string）：TTV 模型，可选 eleven_multilingual_ttv_v2（默认）、eleven_ttv_v3</li><li>voice_name（string）：音色名称，用于设计完成后正式创建音色</li><li>labels（map&lt;string,string&gt;）：音色标签，最多 16 项，键值各不超过 256 字节</li><li>auto_generate_text（boolean）：是否自动生成与描述匹配的试听文本，默认 false</li><li>loudness（float）：音量，取值范围 [-1, 1]，默认 0.5</li><li>seed（integer）：采样种子，取值范围 [0, 2147483647]</li><li>guidance_scale（float）：提示词遵循程度，取值范围 [0, 100]，默认 5</li><li>quality（float）：输出质量，取值范围 [-1, 1]，越高质量越好但多样性越低</li><li>should_enhance（boolean）：是否用 AI 扩写音色描述，默认 false</li><li>reference_audio_base64（string）：参考音频 base64，仅 eleven_ttv_v3 支持</li><li>prompt_strength（float）：提示词与参考音频权重，取值范围 [0, 1]，仅 eleven_ttv_v3 支持</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，与 format 组合受限</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
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
                     * <p>音色描述</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>模型名，不填默认为MiniMax模型。</p> 枚举值： <ul><li>MiniMax</li><li>ElevenLabs</li></ul>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>音色设置</p>
                     */
                    VoiceSettings m_voiceSettings;
                    bool m_voiceSettingsHasBeenSet;

                    /**
                     * <p>试听合成文本，最大 500 字符</p>
                     */
                    std::string m_previewText;
                    bool m_previewTextHasBeenSet;

                    /**
                     * <p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级设计参数。</p><hr><h3 id="ElevenLabs">ElevenLabs</h3><ul><li>model_id（string）：TTV 模型，可选 eleven_multilingual_ttv_v2（默认）、eleven_ttv_v3</li><li>voice_name（string）：音色名称，用于设计完成后正式创建音色</li><li>labels（map&lt;string,string&gt;）：音色标签，最多 16 项，键值各不超过 256 字节</li><li>auto_generate_text（boolean）：是否自动生成与描述匹配的试听文本，默认 false</li><li>loudness（float）：音量，取值范围 [-1, 1]，默认 0.5</li><li>seed（integer）：采样种子，取值范围 [0, 2147483647]</li><li>guidance_scale（float）：提示词遵循程度，取值范围 [0, 100]，默认 5</li><li>quality（float）：输出质量，取值范围 [-1, 1]，越高质量越好但多样性越低</li><li>should_enhance（boolean）：是否用 AI 扩写音色描述，默认 false</li><li>reference_audio_base64（string）：参考音频 base64，仅 eleven_ttv_v3 支持</li><li>prompt_strength（float）：提示词与参考音频权重，取值范围 [0, 1]，仅 eleven_ttv_v3 支持</li><li>audio_setting.format（string）：音频格式，可选 mp3、opus、alaw、pcm</li><li>audio_setting.sample_rate（integer）：采样率，与 format 组合受限</li><li>audio_setting.bitrate（integer）：比特率，需与 format、sample_rate 匹配</li></ul><hr>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_
