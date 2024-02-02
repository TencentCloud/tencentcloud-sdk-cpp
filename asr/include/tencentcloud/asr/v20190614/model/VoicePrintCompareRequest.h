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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPAREREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPAREREQUEST_H_

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
                * VoicePrintCompare请求参数结构体
                */
                class VoicePrintCompareRequest : public AbstractModel
                {
                public:
                    VoicePrintCompareRequest();
                    ~VoicePrintCompareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取音频格式 0: pcm, 1: wav；pcm和wav音频无损压缩，识别准确度更高
                     * @return VoiceFormat 音频格式 0: pcm, 1: wav；pcm和wav音频无损压缩，识别准确度更高
                     * 
                     */
                    int64_t GetVoiceFormat() const;

                    /**
                     * 设置音频格式 0: pcm, 1: wav；pcm和wav音频无损压缩，识别准确度更高
                     * @param _voiceFormat 音频格式 0: pcm, 1: wav；pcm和wav音频无损压缩，识别准确度更高
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
                     * 获取音频采样率，目前仅支持16k，请填写16000
                     * @return SampleRate 音频采样率，目前仅支持16k，请填写16000
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率，目前仅支持16k，请填写16000
                     * @param _sampleRate 音频采样率，目前仅支持16k，请填写16000
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
                     * 获取对比源音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * @return SrcAudioData 对比源音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * 
                     */
                    std::string GetSrcAudioData() const;

                    /**
                     * 设置对比源音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * @param _srcAudioData 对比源音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * 
                     */
                    void SetSrcAudioData(const std::string& _srcAudioData);

                    /**
                     * 判断参数 SrcAudioData 是否已赋值
                     * @return SrcAudioData 是否已赋值
                     * 
                     */
                    bool SrcAudioDataHasBeenSet() const;

                    /**
                     * 获取对比目标音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * @return DestAudioData 对比目标音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * 
                     */
                    std::string GetDestAudioData() const;

                    /**
                     * 设置对比目标音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * @param _destAudioData 对比目标音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     * 
                     */
                    void SetDestAudioData(const std::string& _destAudioData);

                    /**
                     * 判断参数 DestAudioData 是否已赋值
                     * @return DestAudioData 是否已赋值
                     * 
                     */
                    bool DestAudioDataHasBeenSet() const;

                private:

                    /**
                     * 音频格式 0: pcm, 1: wav；pcm和wav音频无损压缩，识别准确度更高
                     */
                    int64_t m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * 音频采样率，目前仅支持16k，请填写16000
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 对比源音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     */
                    std::string m_srcAudioData;
                    bool m_srcAudioDataHasBeenSet;

                    /**
                     * 对比目标音频数据, 音频要求：base64 编码,16k采样率， 16bit位深，pcm或者wav格式， 单声道，音频时长不超过30秒的音频，base64编码数据大小不超过2M
                     */
                    std::string m_destAudioData;
                    bool m_destAudioDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOMPAREREQUEST_H_
