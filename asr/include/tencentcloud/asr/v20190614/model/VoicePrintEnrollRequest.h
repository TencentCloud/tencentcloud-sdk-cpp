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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTENROLLREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTENROLLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * VoicePrintEnroll请求参数结构体
                */
                class VoicePrintEnrollRequest : public AbstractModel
                {
                public:
                    VoicePrintEnrollRequest();
                    ~VoicePrintEnrollRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取音频格式 0: pcm, 1: wav
                     * @return VoiceFormat 音频格式 0: pcm, 1: wav
                     * 
                     */
                    int64_t GetVoiceFormat() const;

                    /**
                     * 设置音频格式 0: pcm, 1: wav
                     * @param _voiceFormat 音频格式 0: pcm, 1: wav
                     * 
                     */
                    void SetVoiceFormat(const int64_t& _voiceFormat);

                    /**
                     * 判断参数 VoiceFormat 是否已赋值
                     * @return VoiceFormat 是否已赋值
                     * 
                     */
                    bool VoiceFormatHasBeenSet() const;

                    /**
                     * 获取音频采样率，目前支持16000，单位：Hz，必填
                     * @return SampleRate 音频采样率，目前支持16000，单位：Hz，必填
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率，目前支持16000，单位：Hz，必填
                     * @param _sampleRate 音频采样率，目前支持16000，单位：Hz，必填
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
                     * 获取音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * @return Data 音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * @param _data 音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取说话人昵称  不超过32字节
                     * @return SpeakerNick 说话人昵称  不超过32字节
                     * 
                     */
                    std::string GetSpeakerNick() const;

                    /**
                     * 设置说话人昵称  不超过32字节
                     * @param _speakerNick 说话人昵称  不超过32字节
                     * 
                     */
                    void SetSpeakerNick(const std::string& _speakerNick);

                    /**
                     * 判断参数 SpeakerNick 是否已赋值
                     * @return SpeakerNick 是否已赋值
                     * 
                     */
                    bool SpeakerNickHasBeenSet() const;

                    /**
                     * 获取分组id, 仅支持大小写字母和下划线的组合，不超过128个字符
                     * @return GroupId 分组id, 仅支持大小写字母和下划线的组合，不超过128个字符
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组id, 仅支持大小写字母和下划线的组合，不超过128个字符
                     * @param _groupId 分组id, 仅支持大小写字母和下划线的组合，不超过128个字符
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 音频格式 0: pcm, 1: wav
                     */
                    int64_t m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * 音频采样率，目前支持16000，单位：Hz，必填
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 说话人昵称  不超过32字节
                     */
                    std::string m_speakerNick;
                    bool m_speakerNickHasBeenSet;

                    /**
                     * 分组id, 仅支持大小写字母和下划线的组合，不超过128个字符
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTENROLLREQUEST_H_
