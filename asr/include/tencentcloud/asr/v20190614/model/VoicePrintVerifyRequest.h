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
                     * 获取<p>音频格式 0: pcm, 1: wav</p>
                     * @return VoiceFormat <p>音频格式 0: pcm, 1: wav</p>
                     * 
                     */
                    int64_t GetVoiceFormat() const;

                    /**
                     * 设置<p>音频格式 0: pcm, 1: wav</p>
                     * @param _voiceFormat <p>音频格式 0: pcm, 1: wav</p>
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
                     * 获取<p>音频采样率，目前支持16000，单位：Hz，必填</p>
                     * @return SampleRate <p>音频采样率，目前支持16000，单位：Hz，必填</p>
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置<p>音频采样率，目前支持16000，单位：Hz，必填</p>
                     * @param _sampleRate <p>音频采样率，目前支持16000，单位：Hz，必填</p>
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
                     * 获取<p>说话人id, 说话人唯一标识</p>
                     * @return VoicePrintId <p>说话人id, 说话人唯一标识</p>
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置<p>说话人id, 说话人唯一标识</p>
                     * @param _voicePrintId <p>说话人id, 说话人唯一标识</p>
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取<p>音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M</p>
                     * @return Data <p>音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M</p>
                     * @param _data <p>音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M</p>
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
                     * 获取<p>声纹cos url 注意:仅支持腾讯云cos url 地址</p>
                     * @return AudioUrl <p>声纹cos url 注意:仅支持腾讯云cos url 地址</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>声纹cos url 注意:仅支持腾讯云cos url 地址</p>
                     * @param _audioUrl <p>声纹cos url 注意:仅支持腾讯云cos url 地址</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                private:

                    /**
                     * <p>音频格式 0: pcm, 1: wav</p>
                     */
                    int64_t m_voiceFormat;
                    bool m_voiceFormatHasBeenSet;

                    /**
                     * <p>音频采样率，目前支持16000，单位：Hz，必填</p>
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>说话人id, 说话人唯一标识</p>
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * <p>音频数据, base64 编码, 音频时长不能超过30s，数据大小不超过2M</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>声纹cos url 注意:仅支持腾讯云cos url 地址</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTVERIFYREQUEST_H_
