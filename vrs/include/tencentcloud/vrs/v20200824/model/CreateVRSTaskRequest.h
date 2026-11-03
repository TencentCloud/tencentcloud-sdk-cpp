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
                     * 获取<p>唯一请求 ID</p>
                     * @return SessionId <p>唯一请求 ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>唯一请求 ID</p>
                     * @param _sessionId <p>唯一请求 ID</p>
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
                     * 获取<p>音色名称</p>
                     * @return VoiceName <p>音色名称</p>
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置<p>音色名称</p>
                     * @param _voiceName <p>音色名称</p>
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
                     * 获取<p>音色性别:</p><p>1-male</p><p>2-female</p>
                     * @return VoiceGender <p>音色性别:</p><p>1-male</p><p>2-female</p>
                     * 
                     */
                    int64_t GetVoiceGender() const;

                    /**
                     * 设置<p>音色性别:</p><p>1-male</p><p>2-female</p>
                     * @param _voiceGender <p>音色性别:</p><p>1-male</p><p>2-female</p>
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
                     * 获取<p>语言类型：</p><p>1-中文</p>
                     * @return VoiceLanguage <p>语言类型：</p><p>1-中文</p>
                     * 
                     */
                    int64_t GetVoiceLanguage() const;

                    /**
                     * 设置<p>语言类型：</p><p>1-中文</p>
                     * @param _voiceLanguage <p>语言类型：</p><p>1-中文</p>
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
                     * 获取<p>音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）</p>
                     * @return AudioIdList <p>音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）</p>
                     * 
                     */
                    std::vector<std::string> GetAudioIdList() const;

                    /**
                     * 设置<p>音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）</p>
                     * @param _audioIdList <p>音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）</p>
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
                     * 获取<p>音频采样率：</p><p>16000：16k</p>
                     * @return SampleRate <p>音频采样率：</p><p>16000：16k</p>
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置<p>音频采样率：</p><p>16000：16k</p>
                     * @param _sampleRate <p>音频采样率：</p><p>16000：16k</p>
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
                     * 获取<p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     * @return Codec <p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     * @param _codec <p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
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
                     * 获取<p>回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式暂不支持一句话版声音复刻）<br>回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{&quot;TaskId&quot;:&quot;xxxxxxxxxxxxxx&quot;,&quot;Status&quot;:2,&quot;StatusStr&quot;:&quot;success&quot;,&quot;VoiceType&quot;:xxxxx,&quot;ErrorMsg&quot;:&quot;&quot;}</p>
                     * @return CallbackUrl <p>回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式暂不支持一句话版声音复刻）<br>回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{&quot;TaskId&quot;:&quot;xxxxxxxxxxxxxx&quot;,&quot;Status&quot;:2,&quot;StatusStr&quot;:&quot;success&quot;,&quot;VoiceType&quot;:xxxxx,&quot;ErrorMsg&quot;:&quot;&quot;}</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式暂不支持一句话版声音复刻）<br>回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{&quot;TaskId&quot;:&quot;xxxxxxxxxxxxxx&quot;,&quot;Status&quot;:2,&quot;StatusStr&quot;:&quot;success&quot;,&quot;VoiceType&quot;:xxxxx,&quot;ErrorMsg&quot;:&quot;&quot;}</p>
                     * @param _callbackUrl <p>回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式暂不支持一句话版声音复刻）<br>回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{&quot;TaskId&quot;:&quot;xxxxxxxxxxxxxx&quot;,&quot;Status&quot;:2,&quot;StatusStr&quot;:&quot;success&quot;,&quot;VoiceType&quot;:xxxxx,&quot;ErrorMsg&quot;:&quot;&quot;}</p>
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
                     * 获取<p>模型类型 1:在线 2:离线  默认为1</p>
                     * @return ModelType <p>模型类型 1:在线 2:离线  默认为1</p>
                     * 
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置<p>模型类型 1:在线 2:离线  默认为1</p>
                     * @param _modelType <p>模型类型 1:在线 2:离线  默认为1</p>
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
                     * 获取<p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * @return TaskType <p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * @param _taskType <p>复刻类型。<br>5 - 一句话声音复刻。</p>
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
                     * 获取<p>校验音频ID。（仅基础版声音复刻使用）</p>
                     * @return VPRAudioId <p>校验音频ID。（仅基础版声音复刻使用）</p>
                     * 
                     */
                    std::string GetVPRAudioId() const;

                    /**
                     * 设置<p>校验音频ID。（仅基础版声音复刻使用）</p>
                     * @param _vPRAudioId <p>校验音频ID。（仅基础版声音复刻使用）</p>
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
                     * 获取<p>是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭<br>语音增强仅适用于一句话复刻场景</p>
                     * @return EnableVoiceEnhance <p>是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭<br>语音增强仅适用于一句话复刻场景</p>
                     * 
                     */
                    uint64_t GetEnableVoiceEnhance() const;

                    /**
                     * 设置<p>是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭<br>语音增强仅适用于一句话复刻场景</p>
                     * @param _enableVoiceEnhance <p>是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭<br>语音增强仅适用于一句话复刻场景</p>
                     * 
                     */
                    void SetEnableVoiceEnhance(const uint64_t& _enableVoiceEnhance);

                    /**
                     * 判断参数 EnableVoiceEnhance 是否已赋值
                     * @return EnableVoiceEnhance 是否已赋值
                     * 
                     */
                    bool EnableVoiceEnhanceHasBeenSet() const;

                    /**
                     * 获取<p>模型引擎，可选值：</p><ul><li><p>WXZL（默认）</p></li><li><p>YTLX_V2（新版）</p></li></ul><p>示例：YTLX_V2</p>
                     * @return EngineType <p>模型引擎，可选值：</p><ul><li><p>WXZL（默认）</p></li><li><p>YTLX_V2（新版）</p></li></ul><p>示例：YTLX_V2</p>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>模型引擎，可选值：</p><ul><li><p>WXZL（默认）</p></li><li><p>YTLX_V2（新版）</p></li></ul><p>示例：YTLX_V2</p>
                     * @param _engineType <p>模型引擎，可选值：</p><ul><li><p>WXZL（默认）</p></li><li><p>YTLX_V2（新版）</p></li></ul><p>示例：YTLX_V2</p>
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * <p>唯一请求 ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>音色名称</p>
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * <p>音色性别:</p><p>1-male</p><p>2-female</p>
                     */
                    int64_t m_voiceGender;
                    bool m_voiceGenderHasBeenSet;

                    /**
                     * <p>语言类型：</p><p>1-中文</p>
                     */
                    int64_t m_voiceLanguage;
                    bool m_voiceLanguageHasBeenSet;

                    /**
                     * <p>音频ID集合。（一句话声音复刻仅需填写一个音质检测接口返回的AudioId）</p>
                     */
                    std::vector<std::string> m_audioIdList;
                    bool m_audioIdListHasBeenSet;

                    /**
                     * <p>音频采样率：</p><p>16000：16k</p>
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>音频格式，音频类型(wav,mp3,aac,m4a)</p>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>回调 URL，用户自行搭建的用于接收结果的服务URL。如果用户使用轮询方式获取识别结果，则无需提交该参数。（注意：回调方式暂不支持一句话版声音复刻）<br>回调采用POST请求方式，Content-Type为application/json，回调数据格式如下:{&quot;TaskId&quot;:&quot;xxxxxxxxxxxxxx&quot;,&quot;Status&quot;:2,&quot;StatusStr&quot;:&quot;success&quot;,&quot;VoiceType&quot;:xxxxx,&quot;ErrorMsg&quot;:&quot;&quot;}</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>模型类型 1:在线 2:离线  默认为1</p>
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>校验音频ID。（仅基础版声音复刻使用）</p>
                     */
                    std::string m_vPRAudioId;
                    bool m_vPRAudioIdHasBeenSet;

                    /**
                     * <p>是否开启语音增强，0 - 关闭，1 - 开启 。默认关闭<br>语音增强仅适用于一句话复刻场景</p>
                     */
                    uint64_t m_enableVoiceEnhance;
                    bool m_enableVoiceEnhanceHasBeenSet;

                    /**
                     * <p>模型引擎，可选值：</p><ul><li><p>WXZL（默认）</p></li><li><p>YTLX_V2（新版）</p></li></ul><p>示例：YTLX_V2</p>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_CREATEVRSTASKREQUEST_H_
