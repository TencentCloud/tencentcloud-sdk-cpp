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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICESYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICESYNCREQUEST_H_

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
                * CloneVoiceSync请求参数结构体
                */
                class CloneVoiceSyncRequest : public AbstractModel
                {
                public:
                    CloneVoiceSyncRequest();
                    ~CloneVoiceSyncRequest() = default;
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
                     * 获取<p>同步音色克隆拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>text</code> (string)：试听合成文本，最大 <code>1000</code> 字符；非空时必须同时传 <code>tts_model</code>，克隆成功后返回试听音频 <code>DemoAudio</code>。</li>  <li><code>model</code> (string)：克隆模型，缺省 <code>minimax-voice-clone</code>。</li>  <li><code>tts_model</code> (string)：合成试听音频用的模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；<code>text</code> 非空时必填。</li>  <li><code>text_lang</code> (string)：试听文本语言。</li>  <li><code>voice_profile</code> (object)：音色画像，可选字段：    <ul>      <li><code>name</code> (string)：音色名称。</li>      <li><code>description</code> (string)：音色描述。</li>      <li><code>gender</code> (string)：性别，可选 <code>male</code> / <code>female</code> / <code>unknown</code>。</li>      <li><code>age</code> (string)：年龄段，可选 <code>child</code> / <code>teenager</code> / <code>youth</code> / <code>middle_aged</code> / <code>senior</code> / <code>unknown</code>。</li>      <li><code>languages</code> (string[])：支持语言，如 <code>["zh", "en"]</code>。</li>      <li><code>labels</code> (string[])：音色标签，如 <code>["磁性"]</code>。</li>      <li><code>scenes</code> (string[])：适用场景，如 <code>["解说"]</code>。</li>    </ul>  </li></ul>
                     * @return ExtParam <p>同步音色克隆拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>text</code> (string)：试听合成文本，最大 <code>1000</code> 字符；非空时必须同时传 <code>tts_model</code>，克隆成功后返回试听音频 <code>DemoAudio</code>。</li>  <li><code>model</code> (string)：克隆模型，缺省 <code>minimax-voice-clone</code>。</li>  <li><code>tts_model</code> (string)：合成试听音频用的模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；<code>text</code> 非空时必填。</li>  <li><code>text_lang</code> (string)：试听文本语言。</li>  <li><code>voice_profile</code> (object)：音色画像，可选字段：    <ul>      <li><code>name</code> (string)：音色名称。</li>      <li><code>description</code> (string)：音色描述。</li>      <li><code>gender</code> (string)：性别，可选 <code>male</code> / <code>female</code> / <code>unknown</code>。</li>      <li><code>age</code> (string)：年龄段，可选 <code>child</code> / <code>teenager</code> / <code>youth</code> / <code>middle_aged</code> / <code>senior</code> / <code>unknown</code>。</li>      <li><code>languages</code> (string[])：支持语言，如 <code>["zh", "en"]</code>。</li>      <li><code>labels</code> (string[])：音色标签，如 <code>["磁性"]</code>。</li>      <li><code>scenes</code> (string[])：适用场景，如 <code>["解说"]</code>。</li>    </ul>  </li></ul>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>同步音色克隆拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>text</code> (string)：试听合成文本，最大 <code>1000</code> 字符；非空时必须同时传 <code>tts_model</code>，克隆成功后返回试听音频 <code>DemoAudio</code>。</li>  <li><code>model</code> (string)：克隆模型，缺省 <code>minimax-voice-clone</code>。</li>  <li><code>tts_model</code> (string)：合成试听音频用的模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；<code>text</code> 非空时必填。</li>  <li><code>text_lang</code> (string)：试听文本语言。</li>  <li><code>voice_profile</code> (object)：音色画像，可选字段：    <ul>      <li><code>name</code> (string)：音色名称。</li>      <li><code>description</code> (string)：音色描述。</li>      <li><code>gender</code> (string)：性别，可选 <code>male</code> / <code>female</code> / <code>unknown</code>。</li>      <li><code>age</code> (string)：年龄段，可选 <code>child</code> / <code>teenager</code> / <code>youth</code> / <code>middle_aged</code> / <code>senior</code> / <code>unknown</code>。</li>      <li><code>languages</code> (string[])：支持语言，如 <code>["zh", "en"]</code>。</li>      <li><code>labels</code> (string[])：音色标签，如 <code>["磁性"]</code>。</li>      <li><code>scenes</code> (string[])：适用场景，如 <code>["解说"]</code>。</li>    </ul>  </li></ul>
                     * @param _extParam <p>同步音色克隆拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>text</code> (string)：试听合成文本，最大 <code>1000</code> 字符；非空时必须同时传 <code>tts_model</code>，克隆成功后返回试听音频 <code>DemoAudio</code>。</li>  <li><code>model</code> (string)：克隆模型，缺省 <code>minimax-voice-clone</code>。</li>  <li><code>tts_model</code> (string)：合成试听音频用的模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；<code>text</code> 非空时必填。</li>  <li><code>text_lang</code> (string)：试听文本语言。</li>  <li><code>voice_profile</code> (object)：音色画像，可选字段：    <ul>      <li><code>name</code> (string)：音色名称。</li>      <li><code>description</code> (string)：音色描述。</li>      <li><code>gender</code> (string)：性别，可选 <code>male</code> / <code>female</code> / <code>unknown</code>。</li>      <li><code>age</code> (string)：年龄段，可选 <code>child</code> / <code>teenager</code> / <code>youth</code> / <code>middle_aged</code> / <code>senior</code> / <code>unknown</code>。</li>      <li><code>languages</code> (string[])：支持语言，如 <code>["zh", "en"]</code>。</li>      <li><code>labels</code> (string[])：音色标签，如 <code>["磁性"]</code>。</li>      <li><code>scenes</code> (string[])：适用场景，如 <code>["解说"]</code>。</li>    </ul>  </li></ul>
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
                     * <p>点播应用 ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

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
                     * <p>同步音色克隆拓展参数。<code>ExtParam</code> 支持的字段：</p><ul>  <li><code>text</code> (string)：试听合成文本，最大 <code>1000</code> 字符；非空时必须同时传 <code>tts_model</code>，克隆成功后返回试听音频 <code>DemoAudio</code>。</li>  <li><code>model</code> (string)：克隆模型，缺省 <code>minimax-voice-clone</code>。</li>  <li><code>tts_model</code> (string)：合成试听音频用的模型，可选 <code>minimax-speech-2.8-hd</code>、<code>minimax-speech-2.8-turbo</code>、<code>minimax-speech-2.6-hd</code>、<code>minimax-speech-2.6-turbo</code>、<code>minimax-speech-02-hd</code>、<code>minimax-speech-02-turbo</code>；<code>text</code> 非空时必填。</li>  <li><code>text_lang</code> (string)：试听文本语言。</li>  <li><code>voice_profile</code> (object)：音色画像，可选字段：    <ul>      <li><code>name</code> (string)：音色名称。</li>      <li><code>description</code> (string)：音色描述。</li>      <li><code>gender</code> (string)：性别，可选 <code>male</code> / <code>female</code> / <code>unknown</code>。</li>      <li><code>age</code> (string)：年龄段，可选 <code>child</code> / <code>teenager</code> / <code>youth</code> / <code>middle_aged</code> / <code>senior</code> / <code>unknown</code>。</li>      <li><code>languages</code> (string[])：支持语言，如 <code>["zh", "en"]</code>。</li>      <li><code>labels</code> (string[])：音色标签，如 <code>["磁性"]</code>。</li>      <li><code>scenes</code> (string[])：适用场景，如 <code>["解说"]</code>。</li>    </ul>  </li></ul>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICESYNCREQUEST_H_
