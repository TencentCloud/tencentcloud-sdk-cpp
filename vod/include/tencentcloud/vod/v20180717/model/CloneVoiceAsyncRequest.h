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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CloneVoiceAsync请求参数结构体
                */
                class CloneVoiceAsyncRequest : public AbstractModel
                {
                public:
                    CloneVoiceAsyncRequest();
                    ~CloneVoiceAsyncRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>克隆音频base64编码。</p>
                     * @return AudioData <p>克隆音频base64编码。</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>克隆音频base64编码。</p>
                     * @param _audioData <p>克隆音频base64编码。</p>
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
                     * 获取<p>克隆文件FileID，AudioData及AudioUrl为空时有效</p>
                     * @return AudioFileId <p>克隆文件FileID，AudioData及AudioUrl为空时有效</p>
                     * 
                     */
                    std::string GetAudioFileId() const;

                    /**
                     * 设置<p>克隆文件FileID，AudioData及AudioUrl为空时有效</p>
                     * @param _audioFileId <p>克隆文件FileID，AudioData及AudioUrl为空时有效</p>
                     * 
                     */
                    void SetAudioFileId(const std::string& _audioFileId);

                    /**
                     * 判断参数 AudioFileId 是否已赋值
                     * @return AudioFileId 是否已赋值
                     * 
                     */
                    bool AudioFileIdHasBeenSet() const;

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
                     * 获取<p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级音色参数。</p><hr><h3 id="Clone">通用参数</h3><ul><li>text（string）：试听文本，最大 1000 字符；传入后返回试听音频 DemoAudio</li><li>tts_model（string）：试听文本合成模型，text 非空时必填；按 ModelName 模型系列白名单校验</li><li>text_lang（string）：试听文本语言，如 zh</li><li>voice_profile.name（string）：音色名称</li><li>voice_profile.description（string）：音色描述</li><li>voice_profile.gender（string）：性别，可选 male、female、unknown</li><li>voice_profile.age（string）：年龄段，可选 child、teenager、youth、middle_aged、senior、unknown</li><li>voice_profile.languages（array of string）：语言，如 ["zh"]</li><li>voice_profile.labels（array of string）：标签，如 ["磁性"]</li><li>voice_profile.scenes（array of string）：场景，如 ["解说"]</li></ul><hr><h3 id="CloneElevenLabs">ElevenLabs</h3><ul><li>voice_name（string）：音色名称；未传时回退取 voice_profile.name，两者都缺时使用默认名称</li><li>description（string）：音色描述；未传时回退取 voice_profile.description</li><li>labels（map&lt;string,string&gt;）：音色标签，官方推荐键 language、accent、gender、age；最多 16 项，键值各不超过 256 字节</li><li>remove_background_noise（boolean）：是否用音频隔离模型去除背景噪声，默认 false；样本本身无噪声时开启可能降低质量</li></ul><hr>
                     * @return ExtParam <p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级音色参数。</p><hr><h3 id="Clone">通用参数</h3><ul><li>text（string）：试听文本，最大 1000 字符；传入后返回试听音频 DemoAudio</li><li>tts_model（string）：试听文本合成模型，text 非空时必填；按 ModelName 模型系列白名单校验</li><li>text_lang（string）：试听文本语言，如 zh</li><li>voice_profile.name（string）：音色名称</li><li>voice_profile.description（string）：音色描述</li><li>voice_profile.gender（string）：性别，可选 male、female、unknown</li><li>voice_profile.age（string）：年龄段，可选 child、teenager、youth、middle_aged、senior、unknown</li><li>voice_profile.languages（array of string）：语言，如 ["zh"]</li><li>voice_profile.labels（array of string）：标签，如 ["磁性"]</li><li>voice_profile.scenes（array of string）：场景，如 ["解说"]</li></ul><hr><h3 id="CloneElevenLabs">ElevenLabs</h3><ul><li>voice_name（string）：音色名称；未传时回退取 voice_profile.name，两者都缺时使用默认名称</li><li>description（string）：音色描述；未传时回退取 voice_profile.description</li><li>labels（map&lt;string,string&gt;）：音色标签，官方推荐键 language、accent、gender、age；最多 16 项，键值各不超过 256 字节</li><li>remove_background_noise（boolean）：是否用音频隔离模型去除背景噪声，默认 false；样本本身无噪声时开启可能降低质量</li></ul><hr>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级音色参数。</p><hr><h3 id="Clone">通用参数</h3><ul><li>text（string）：试听文本，最大 1000 字符；传入后返回试听音频 DemoAudio</li><li>tts_model（string）：试听文本合成模型，text 非空时必填；按 ModelName 模型系列白名单校验</li><li>text_lang（string）：试听文本语言，如 zh</li><li>voice_profile.name（string）：音色名称</li><li>voice_profile.description（string）：音色描述</li><li>voice_profile.gender（string）：性别，可选 male、female、unknown</li><li>voice_profile.age（string）：年龄段，可选 child、teenager、youth、middle_aged、senior、unknown</li><li>voice_profile.languages（array of string）：语言，如 ["zh"]</li><li>voice_profile.labels（array of string）：标签，如 ["磁性"]</li><li>voice_profile.scenes（array of string）：场景，如 ["解说"]</li></ul><hr><h3 id="CloneElevenLabs">ElevenLabs</h3><ul><li>voice_name（string）：音色名称；未传时回退取 voice_profile.name，两者都缺时使用默认名称</li><li>description（string）：音色描述；未传时回退取 voice_profile.description</li><li>labels（map&lt;string,string&gt;）：音色标签，官方推荐键 language、accent、gender、age；最多 16 项，键值各不超过 256 字节</li><li>remove_background_noise（boolean）：是否用音频隔离模型去除背景噪声，默认 false；样本本身无噪声时开启可能降低质量</li></ul><hr>
                     * @param _extParam <p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级音色参数。</p><hr><h3 id="Clone">通用参数</h3><ul><li>text（string）：试听文本，最大 1000 字符；传入后返回试听音频 DemoAudio</li><li>tts_model（string）：试听文本合成模型，text 非空时必填；按 ModelName 模型系列白名单校验</li><li>text_lang（string）：试听文本语言，如 zh</li><li>voice_profile.name（string）：音色名称</li><li>voice_profile.description（string）：音色描述</li><li>voice_profile.gender（string）：性别，可选 male、female、unknown</li><li>voice_profile.age（string）：年龄段，可选 child、teenager、youth、middle_aged、senior、unknown</li><li>voice_profile.languages（array of string）：语言，如 ["zh"]</li><li>voice_profile.labels（array of string）：标签，如 ["磁性"]</li><li>voice_profile.scenes（array of string）：场景，如 ["解说"]</li></ul><hr><h3 id="CloneElevenLabs">ElevenLabs</h3><ul><li>voice_name（string）：音色名称；未传时回退取 voice_profile.name，两者都缺时使用默认名称</li><li>description（string）：音色描述；未传时回退取 voice_profile.description</li><li>labels（map&lt;string,string&gt;）：音色标签，官方推荐键 language、accent、gender、age；最多 16 项，键值各不超过 256 字节</li><li>remove_background_noise（boolean）：是否用音频隔离模型去除背景噪声，默认 false；样本本身无噪声时开启可能降低质量</li></ul><hr>
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
                     * <p>克隆音频base64编码。</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>克隆音频Url，AudioData为空时有效</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>克隆文件FileID，AudioData及AudioUrl为空时有效</p>
                     */
                    std::string m_audioFileId;
                    bool m_audioFileIdHasBeenSet;

                    /**
                     * <p>语言增强，如 "zh" "en" "auto"，默认 "auto"</p>
                     */
                    std::string m_languageBoost;
                    bool m_languageBoostHasBeenSet;

                    /**
                     * <p><strong>ExtParam</strong> JSON 字符串字段，用于指定各模型的高级音色参数。</p><hr><h3 id="Clone">通用参数</h3><ul><li>text（string）：试听文本，最大 1000 字符；传入后返回试听音频 DemoAudio</li><li>tts_model（string）：试听文本合成模型，text 非空时必填；按 ModelName 模型系列白名单校验</li><li>text_lang（string）：试听文本语言，如 zh</li><li>voice_profile.name（string）：音色名称</li><li>voice_profile.description（string）：音色描述</li><li>voice_profile.gender（string）：性别，可选 male、female、unknown</li><li>voice_profile.age（string）：年龄段，可选 child、teenager、youth、middle_aged、senior、unknown</li><li>voice_profile.languages（array of string）：语言，如 ["zh"]</li><li>voice_profile.labels（array of string）：标签，如 ["磁性"]</li><li>voice_profile.scenes（array of string）：场景，如 ["解说"]</li></ul><hr><h3 id="CloneElevenLabs">ElevenLabs</h3><ul><li>voice_name（string）：音色名称；未传时回退取 voice_profile.name，两者都缺时使用默认名称</li><li>description（string）：音色描述；未传时回退取 voice_profile.description</li><li>labels（map&lt;string,string&gt;）：音色标签，官方推荐键 language、accent、gender、age；最多 16 项，键值各不超过 256 字节</li><li>remove_background_noise（boolean）：是否用音频隔离模型去除背景噪声，默认 false；样本本身无噪声时开启可能降低质量</li></ul><hr>
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCREQUEST_H_
