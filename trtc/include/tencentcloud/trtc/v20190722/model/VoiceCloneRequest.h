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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * VoiceClone请求参数结构体
                */
                class VoiceCloneRequest : public AbstractModel
                {
                public:
                    VoiceCloneRequest();
                    ~VoiceCloneRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>声音克隆的名称, 只允许使用数字、字母、下划线，不能超过36位</p>
                     * @return VoiceName <p>声音克隆的名称, 只允许使用数字、字母、下划线，不能超过36位</p>
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置<p>声音克隆的名称, 只允许使用数字、字母、下划线，不能超过36位</p>
                     * @param _voiceName <p>声音克隆的名称, 只允许使用数字、字母、下划线，不能超过36位</p>
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取<p>声音克隆的参考音频，base64字符串，支持wav、mp3、m4a格式，长度在6秒～180秒之间</p>
                     * @return PromptAudio <p>声音克隆的参考音频，base64字符串，支持wav、mp3、m4a格式，长度在6秒～180秒之间</p>
                     * 
                     */
                    std::string GetPromptAudio() const;

                    /**
                     * 设置<p>声音克隆的参考音频，base64字符串，支持wav、mp3、m4a格式，长度在6秒～180秒之间</p>
                     * @param _promptAudio <p>声音克隆的参考音频，base64字符串，支持wav、mp3、m4a格式，长度在6秒～180秒之间</p>
                     * 
                     */
                    void SetPromptAudio(const std::string& _promptAudio);

                    /**
                     * 判断参数 PromptAudio 是否已赋值
                     * @return PromptAudio 是否已赋值
                     * 
                     */
                    bool PromptAudioHasBeenSet() const;

                    /**
                     * 获取<p>TTS的API密钥</p>
                     * @return APIKey <p>TTS的API密钥</p>
                     * @deprecated
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置<p>TTS的API密钥</p>
                     * @param _aPIKey <p>TTS的API密钥</p>
                     * @deprecated
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * @deprecated
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取<p>声音克隆的参考文本，为参考音频对应的文字。</p>
                     * @return PromptText <p>声音克隆的参考文本，为参考音频对应的文字。</p>
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置<p>声音克隆的参考文本，为参考音频对应的文字。</p>
                     * @param _promptText <p>声音克隆的参考文本，为参考音频对应的文字。</p>
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                    /**
                     * 获取<p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     * @return Model <p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     * @param _model <p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
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
                     * 获取<p>语言参数，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * @return Language <p>语言参数，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>语言参数，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * @param _language <p>语言参数，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的SdkAppId</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>声音克隆的名称, 只允许使用数字、字母、下划线，不能超过36位</p>
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * <p>声音克隆的参考音频，base64字符串，支持wav、mp3、m4a格式，长度在6秒～180秒之间</p>
                     */
                    std::string m_promptAudio;
                    bool m_promptAudioHasBeenSet;

                    /**
                     * <p>TTS的API密钥</p>
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * <p>声音克隆的参考文本，为参考音频对应的文字。</p>
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                    /**
                     * <p>TTS的模型，支持flow_02_turbo，flow_01_ex，默认为flow_02_turbo</p><p>枚举值：</p><ul><li>flow_02_turbo： 高性价比模型，兼顾效果和成本</li><li>flow_01_ex： 高天花板模型，能力全面，在音色克隆上表现更优</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>语言参数，默认为空，表示自动识别</p><p>枚举值：</p><ul><li>zh： 中文</li><li>en： 英文</li><li>ja： 日语</li><li>ko： 韩语</li><li>yue： 粤语</li><li>ms： 马来语</li><li>ar： 阿拉伯语</li><li>id： 印尼语</li><li>th： 泰语</li><li>vi： 越南语</li></ul>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_
