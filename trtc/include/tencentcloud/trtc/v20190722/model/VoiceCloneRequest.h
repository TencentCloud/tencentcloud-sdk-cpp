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
                     * 获取TTS的API密钥
                     * @return APIKey TTS的API密钥
                     * 
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置TTS的API密钥
                     * @param _aPIKey TTS的API密钥
                     * 
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * 
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取声音克隆的名字
                     * @return VoiceName 声音克隆的名字
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置声音克隆的名字
                     * @param _voiceName 声音克隆的名字
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
                     * 获取声音克隆的参考音频，必须为16k单声道的wav的base64字符串， 长度在5秒～12秒之间
                     * @return PromptAudio 声音克隆的参考音频，必须为16k单声道的wav的base64字符串， 长度在5秒～12秒之间
                     * 
                     */
                    std::string GetPromptAudio() const;

                    /**
                     * 设置声音克隆的参考音频，必须为16k单声道的wav的base64字符串， 长度在5秒～12秒之间
                     * @param _promptAudio 声音克隆的参考音频，必须为16k单声道的wav的base64字符串， 长度在5秒～12秒之间
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
                     * 获取声音克隆的参考文本，为参考音频对应的文字。
                     * @return PromptText 声音克隆的参考文本，为参考音频对应的文字。
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置声音克隆的参考文本，为参考音频对应的文字。
                     * @param _promptText 声音克隆的参考文本，为参考音频对应的文字。
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                private:

                    /**
                     * TRTC的SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TTS的API密钥
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * 声音克隆的名字
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * 声音克隆的参考音频，必须为16k单声道的wav的base64字符串， 长度在5秒～12秒之间
                     */
                    std::string m_promptAudio;
                    bool m_promptAudioHasBeenSet;

                    /**
                     * 声音克隆的参考文本，为参考音频对应的文字。
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_
