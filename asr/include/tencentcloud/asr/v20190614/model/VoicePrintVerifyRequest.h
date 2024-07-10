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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYREQUEST_H_

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
                * VoicePrintVerify请求参数结构体
                */
                class VoicePrintVerifyRequest : public AbstractModel
                {
                public:
                    VoicePrintVerifyRequest();
                    ~VoicePrintVerifyRequest() = default;
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
                     * 获取说话人id, 说话人唯一标识
                     * @return VoicePrintId 说话人id, 说话人唯一标识
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置说话人id, 说话人唯一标识
                     * @param _voicePrintId 说话人id, 说话人唯一标识
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

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
                     * 说话人id, 说话人唯一标识
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYREQUEST_H_
