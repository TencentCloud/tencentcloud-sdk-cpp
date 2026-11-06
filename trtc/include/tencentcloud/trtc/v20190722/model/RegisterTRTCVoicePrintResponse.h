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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERTRTCVOICEPRINTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERTRTCVOICEPRINTRESPONSE_H_

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
                * RegisterTRTCVoicePrint返回参数结构体
                */
                class RegisterTRTCVoicePrintResponse : public AbstractModel
                {
                public:
                    RegisterTRTCVoicePrintResponse();
                    ~RegisterTRTCVoicePrintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次注册生成的声纹 ID，后续 Update/Delete/Verify 均以此为准
                     * @return VoicePrintId 本次注册生成的声纹 ID，后续 Update/Delete/Verify 均以此为准
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取回显的业务方 SpeakerId
                     * @return SpeakerId 回显的业务方 SpeakerId
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取本次注册音频中有效人声时长（秒）
                     * @return EffectiveAudioDuration 本次注册音频中有效人声时长（秒）
                     * 
                     */
                    double GetEffectiveAudioDuration() const;

                    /**
                     * 判断参数 EffectiveAudioDuration 是否已赋值
                     * @return EffectiveAudioDuration 是否已赋值
                     * 
                     */
                    bool EffectiveAudioDurationHasBeenSet() const;

                    /**
                     * 获取音频信噪比（dB），由声纹服务端评估给出
                     * @return SNR 音频信噪比（dB），由声纹服务端评估给出
                     * 
                     */
                    double GetSNR() const;

                    /**
                     * 判断参数 SNR 是否已赋值
                     * @return SNR 是否已赋值
                     * 
                     */
                    bool SNRHasBeenSet() const;

                    /**
                     * 获取结果描述，成功时为 voiceprint enrolled successfully
                     * @return Message 结果描述，成功时为 voiceprint enrolled successfully
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 本次注册生成的声纹 ID，后续 Update/Delete/Verify 均以此为准
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 回显的业务方 SpeakerId
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * 本次注册音频中有效人声时长（秒）
                     */
                    double m_effectiveAudioDuration;
                    bool m_effectiveAudioDurationHasBeenSet;

                    /**
                     * 音频信噪比（dB），由声纹服务端评估给出
                     */
                    double m_sNR;
                    bool m_sNRHasBeenSet;

                    /**
                     * 结果描述，成功时为 voiceprint enrolled successfully
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERTRTCVOICEPRINTRESPONSE_H_
