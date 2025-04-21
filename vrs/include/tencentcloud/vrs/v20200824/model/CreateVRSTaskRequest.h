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
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置唯一请求 ID
                     * @param _sessionId 唯一请求 ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取音色名称
                     * @return VoiceName 音色名称
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置音色名称
                     * @param _voiceName 音色名称
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
                     * 获取音色性别:

1-male

2-female
                     * @return VoiceGender 音色性别:

1-male

2-female
                     * 
                     */
                    int64_t GetVoiceGender() const;

                    /**
                     * 设置音色性别:

1-male

2-female
                     * @param _voiceGender 音色性别:

1-male

2-female
                     * 
                     */
                    void SetVoiceGender(const int64_t& _voiceGender);

                    /**
                     * 判断参数 VoiceGender 是否已赋值
                     * @return VoiceGender 是否已赋值
                     * 
                     */
                    bool VoiceGenderHasBeenSet() const;

                    /**
                     * 获取语言类型：

1-中文
                     * @return VoiceLanguage 语言类型：

1-中文
                     * 
                     */
                    int64_t GetVoiceLanguage() const;

                    /**
                     * 设置语言类型：

1-中文
                     * @param _voiceLanguage 语言类型：

1-中文
                     * 
                     */
                    void SetVoiceLanguage(const int64_t& _voiceLanguage);

                    /**
                     * 判断参数 VoiceLanguage 是否已赋值
                     * @return VoiceLanguage 是否已赋值
                     * 
                     */
                    bool VoiceLanguageHasBeenSet() const;

                    /**
                     * 获取音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）
                     * @return AudioIdList 音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）
                     * 
                     */
                    std::vector<std::string> GetAudioIdList() const;

                    /**
                     * 设置音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）
                     * @param _audioIdList 音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）
                     * 
                     */
                    void SetAudioIdList(const std::vector<std::string>& _audioIdList);

                    /**
                     * 判断参数 AudioIdList 是否已赋值
                     * @return AudioIdList 是否已赋值
                     * 
                     */
                    bool AudioIdListHasBeenSet() const;

                    /**
                     * 获取音频采样率：

16000：16k
                     * @return SampleRate 音频采样率：

16000：16k
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率：

16000：16k
                     * @param _sampleRate 音频采样率：

16000：16k
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取音频格式，音频类型(wav,mp3,aac,m4a)
                     * @return Codec 音频格式，音频类型(wav,mp3,aac,m4a)
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频格式，音频类型(wav,mp3,aac,m4a)
                     * @param _codec 音频格式，音频类型(wav,mp3,aac,m4a)
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式目前仅支持轻量版声音复刻）
回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     * @return CallbackUrl 回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式目前仅支持轻量版声音复刻）
回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式目前仅支持轻量版声音复刻）
回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     * @param _callbackUrl 回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式目前仅支持轻量版声音复刻）
回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取模型类型 1:在线 2:离线  默认为1
                     * @return ModelType 模型类型 1:在线 2:离线  默认为1
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置模型类型 1:在线 2:离线  默认为1
                     * @param _modelType 模型类型 1:在线 2:离线  默认为1
                     * 
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取复刻类型。
0 - 轻量版声音复刻（默认）；
5 - 一句话声音复刻。
                     * @return TaskType 复刻类型。
0 - 轻量版声音复刻（默认）；
5 - 一句话声音复刻。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置复刻类型。
0 - 轻量版声音复刻（默认）；
5 - 一句话声音复刻。
                     * @param _taskType 复刻类型。
0 - 轻量版声音复刻（默认）；
5 - 一句话声音复刻。
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取校验音频ID。（仅基础版声音复刻使用）
                     * @return VPRAudioId 校验音频ID。（仅基础版声音复刻使用）
                     * 
                     */
                    std::string GetVPRAudioId() const;

                    /**
                     * 设置校验音频ID。（仅基础版声音复刻使用）
                     * @param _vPRAudioId 校验音频ID。（仅基础版声音复刻使用）
                     * 
                     */
                    void SetVPRAudioId(const std::string& _vPRAudioId);

                    /**
                     * 判断参数 VPRAudioId 是否已赋值
                     * @return VPRAudioId 是否已赋值
                     * 
                     */
                    bool VPRAudioIdHasBeenSet() const;

                    /**
                     * 获取是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭
语音增强仅适用于一句话复刻场景
                     * @return EnableVoiceEnhance 是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭
语音增强仅适用于一句话复刻场景
                     * 
                     */
                    uint64_t GetEnableVoiceEnhance() const;

                    /**
                     * 设置是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭
语音增强仅适用于一句话复刻场景
                     * @param _enableVoiceEnhance 是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭
语音增强仅适用于一句话复刻场景
                     * 
                     */
                    void SetEnableVoiceEnhance(const uint64_t& _enableVoiceEnhance);

                    /**
                     * 判断参数 EnableVoiceEnhance 是否已赋值
                     * @return EnableVoiceEnhance 是否已赋值
                     * 
                     */
                    bool EnableVoiceEnhanceHasBeenSet() const;

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
                     * 音色性别:

1-male

2-female
                     */
                    int64_t m_voiceGender;
                    bool m_voiceGenderHasBeenSet;

                    /**
                     * 语言类型：

1-中文
                     */
                    int64_t m_voiceLanguage;
                    bool m_voiceLanguageHasBeenSet;

                    /**
                     * 音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）
                     */
                    std::vector<std::string> m_audioIdList;
                    bool m_audioIdListHasBeenSet;

                    /**
                     * 音频采样率：

16000：16k
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频格式，音频类型(wav,mp3,aac,m4a)
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式目前仅支持轻量版声音复刻）
回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{"TaskId":"xxxxxxxxxxxxxx","Status":2,"StatusStr":"success","VoiceType":xxxxx,"ErrorMsg":""}
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 模型类型 1:在线 2:离线  默认为1
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * 复刻类型。
0 - 轻量版声音复刻（默认）；
5 - 一句话声音复刻。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 校验音频ID。（仅基础版声音复刻使用）
                     */
                    std::string m_vPRAudioId;
                    bool m_vPRAudioIdHasBeenSet;

                    /**
                     * 是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭
语音增强仅适用于一句话复刻场景
                     */
                    uint64_t m_enableVoiceEnhance;
                    bool m_enableVoiceEnhanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_CREATEVRSTASKREQUEST_H_
