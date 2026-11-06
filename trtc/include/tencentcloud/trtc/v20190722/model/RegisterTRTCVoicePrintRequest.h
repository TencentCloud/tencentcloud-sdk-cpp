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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERTRTCVOICEPRINTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERTRTCVOICEPRINTREQUEST_H_

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
                * RegisterTRTCVoicePrint请求参数结构体
                */
                class RegisterTRTCVoicePrintRequest : public AbstractModel
                {
                public:
                    RegisterTRTCVoicePrintRequest();
                    ~RegisterTRTCVoicePrintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务方自定义的说话人唯一标识，同一 (AppId, SdkAppId, SpeakerId) 重复调用会覆盖旧声纹（软删旧记录 + 新建一行，返回新的 VoicePrintId）
                     * @return SpeakerId 业务方自定义的说话人唯一标识，同一 (AppId, SdkAppId, SpeakerId) 重复调用会覆盖旧声纹（软删旧记录 + 新建一行，返回新的 VoicePrintId）
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置业务方自定义的说话人唯一标识，同一 (AppId, SdkAppId, SpeakerId) 重复调用会覆盖旧声纹（软删旧记录 + 新建一行，返回新的 VoicePrintId）
                     * @param _speakerId 业务方自定义的说话人唯一标识，同一 (AppId, SdkAppId, SpeakerId) 重复调用会覆盖旧声纹（软删旧记录 + 新建一行，返回新的 VoicePrintId）
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取音频数据的 Base64 字符串。要求：16kHz/16bit/单声道 PCM 或 WAV；Base64 解码后大小 ≤ 2MB；PCM 裸数据时长 10s ≤ 时长 ≤ 45s（WAV 去掉 header 后按相同标准校验）
                     * @return Data 音频数据的 Base64 字符串。要求：16kHz/16bit/单声道 PCM 或 WAV；Base64 解码后大小 ≤ 2MB；PCM 裸数据时长 10s ≤ 时长 ≤ 45s（WAV 去掉 header 后按相同标准校验）
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置音频数据的 Base64 字符串。要求：16kHz/16bit/单声道 PCM 或 WAV；Base64 解码后大小 ≤ 2MB；PCM 裸数据时长 10s ≤ 时长 ≤ 45s（WAV 去掉 header 后按相同标准校验）
                     * @param _data 音频数据的 Base64 字符串。要求：16kHz/16bit/单声道 PCM 或 WAV；Base64 解码后大小 ≤ 2MB；PCM 裸数据时长 10s ≤ 时长 ≤ 45s（WAV 去掉 header 后按相同标准校验）
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
                     * 获取SdkAppId
                     * @return SdkAppId SdkAppId
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置SdkAppId
                     * @param _sdkAppId SdkAppId
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取音频格式，可选 pcm 或 wav，大小写不敏感，不传默认为 pcm
                     * @return AudioFormat 音频格式，可选 pcm 或 wav，大小写不敏感，不传默认为 pcm
                     * 
                     */
                    std::string GetAudioFormat() const;

                    /**
                     * 设置音频格式，可选 pcm 或 wav，大小写不敏感，不传默认为 pcm
                     * @param _audioFormat 音频格式，可选 pcm 或 wav，大小写不敏感，不传默认为 pcm
                     * 
                     */
                    void SetAudioFormat(const std::string& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                private:

                    /**
                     * 业务方自定义的说话人唯一标识，同一 (AppId, SdkAppId, SpeakerId) 重复调用会覆盖旧声纹（软删旧记录 + 新建一行，返回新的 VoicePrintId）
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * 音频数据的 Base64 字符串。要求：16kHz/16bit/单声道 PCM 或 WAV；Base64 解码后大小 ≤ 2MB；PCM 裸数据时长 10s ≤ 时长 ≤ 45s（WAV 去掉 header 后按相同标准校验）
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * SdkAppId
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 音频格式，可选 pcm 或 wav，大小写不敏感，不传默认为 pcm
                     */
                    std::string m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERTRTCVOICEPRINTREQUEST_H_
