/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_CREATEVRSTASKREQUEST_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_CREATEVRSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * CreateVRSTask请求参数结构体
                */
                class CreateVRSTaskRequest : public AbstractModel
                {
                public:
                    CreateVRSTaskRequest();
                    ~CreateVRSTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一请求 ID
                     * @return SessionId 唯一请求 ID
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置唯一请求 ID
                     * @param SessionId 唯一请求 ID
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取音色名称
                     * @return VoiceName 音色名称
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置音色名称
                     * @param VoiceName 音色名称
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取音频采样率：

16000：16k（默认）
                     * @return SampleRate 音频采样率：

16000：16k（默认）
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率：

16000：16k（默认）
                     * @param SampleRate 音频采样率：

16000：16k（默认）
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取音色性别:

1-male

2-female
                     * @return VoiceGender 音色性别:

1-male

2-female
                     */
                    int64_t GetVoiceGender() const;

                    /**
                     * 设置音色性别:

1-male

2-female
                     * @param VoiceGender 音色性别:

1-male

2-female
                     */
                    void SetVoiceGender(const int64_t& _voiceGender);

                    /**
                     * 判断参数 VoiceGender 是否已赋值
                     * @return VoiceGender 是否已赋值
                     */
                    bool VoiceGenderHasBeenSet() const;

                    /**
                     * 获取语言类型：

1-中文（默认）
                     * @return VoiceLanguage 语言类型：

1-中文（默认）
                     */
                    int64_t GetVoiceLanguage() const;

                    /**
                     * 设置语言类型：

1-中文（默认）
                     * @param VoiceLanguage 语言类型：

1-中文（默认）
                     */
                    void SetVoiceLanguage(const int64_t& _voiceLanguage);

                    /**
                     * 判断参数 VoiceLanguage 是否已赋值
                     * @return VoiceLanguage 是否已赋值
                     */
                    bool VoiceLanguageHasBeenSet() const;

                    /**
                     * 获取音频格式，音频类型(wav,mp3,aac,m4a)
                     * @return Codec 音频格式，音频类型(wav,mp3,aac,m4a)
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频格式，音频类型(wav,mp3,aac,m4a)
                     * @param Codec 音频格式，音频类型(wav,mp3,aac,m4a)
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取音频ID集合
                     * @return AudioIdList 音频ID集合
                     */
                    std::vector<std::string> GetAudioIdList() const;

                    /**
                     * 设置音频ID集合
                     * @param AudioIdList 音频ID集合
                     */
                    void SetAudioIdList(const std::vector<std::string>& _audioIdList);

                    /**
                     * 判断参数 AudioIdList 是否已赋值
                     * @return AudioIdList 是否已赋值
                     */
                    bool AudioIdListHasBeenSet() const;

                    /**
                     * 获取回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。
回调采用POST请求方式，Content-Type为application/x-www-form-urlencoded，回调数据格式如下:callback_body=checksum=&data={"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     * @return CallbackUrl 回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。
回调采用POST请求方式，Content-Type为application/x-www-form-urlencoded，回调数据格式如下:callback_body=checksum=&data={"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。
回调采用POST请求方式，Content-Type为application/x-www-form-urlencoded，回调数据格式如下:callback_body=checksum=&data={"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     * @param CallbackUrl 回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。
回调采用POST请求方式，Content-Type为application/x-www-form-urlencoded，回调数据格式如下:callback_body=checksum=&data={"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 唯一请求 ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 音色名称
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * 音频采样率：

16000：16k（默认）
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音色性别:

1-male

2-female
                     */
                    int64_t m_voiceGender;
                    bool m_voiceGenderHasBeenSet;

                    /**
                     * 语言类型：

1-中文（默认）
                     */
                    int64_t m_voiceLanguage;
                    bool m_voiceLanguageHasBeenSet;

                    /**
                     * 音频格式，音频类型(wav,mp3,aac,m4a)
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音频ID集合
                     */
                    std::vector<std::string> m_audioIdList;
                    bool m_audioIdListHasBeenSet;

                    /**
                     * 回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。
回调采用POST请求方式，Content-Type为application/x-www-form-urlencoded，回调数据格式如下:callback_body=checksum=&data={"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_CREATEVRSTASKREQUEST_H_
