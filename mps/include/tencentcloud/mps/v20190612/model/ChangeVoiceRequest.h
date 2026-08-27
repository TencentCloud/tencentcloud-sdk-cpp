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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CHANGEVOICEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CHANGEVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingOutputOption.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ChangeVoice请求参数结构体
                */
                class ChangeVoiceRequest : public AbstractModel
                {
                public:
                    ChangeVoiceRequest();
                    ~ChangeVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待转换音频base64编码</p>
                     * @return AudioData <p>待转换音频base64编码</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>待转换音频base64编码</p>
                     * @param _audioData <p>待转换音频base64编码</p>
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
                     * 获取<p>待转换音频Url，AudioData为空时有效</p>
                     * @return AudioUrl <p>待转换音频Url，AudioData为空时有效</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>待转换音频Url，AudioData为空时有效</p>
                     * @param _audioUrl <p>待转换音频Url，AudioData为空时有效</p>
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
                     * 获取<p>输出相关参数</p>
                     * @return Output <p>输出相关参数</p>
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置<p>输出相关参数</p>
                     * @param _output <p>输出相关参数</p>
                     * 
                     */
                    void SetOutput(const SyncDubbingOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，json字符串</p>
                     * @return ExtParam <p>扩展参数，json字符串</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p>
                     * @param _extParam <p>扩展参数，json字符串</p>
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
                     * <p>待转换音频base64编码</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>待转换音频Url，AudioData为空时有效</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>音色ID</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>输出相关参数</p>
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CHANGEVOICEREQUEST_H_
