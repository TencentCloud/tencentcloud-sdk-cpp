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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VERIFYTRTCVOICEPRINTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VERIFYTRTCVOICEPRINTRESPONSE_H_

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
                * VerifyTRTCVoicePrint返回参数结构体
                */
                class VerifyTRTCVoicePrintResponse : public AbstractModel
                {
                public:
                    VerifyTRTCVoicePrintResponse();
                    ~VerifyTRTCVoicePrintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取被验证的目标声纹 ID
                     * @return VoicePrintId 被验证的目标声纹 ID
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
                     * 获取注册时写入的业务方 SpeakerId（以服务端记录为准）
                     * @return SpeakerId 注册时写入的业务方 SpeakerId（以服务端记录为准）
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
                     * 获取相似度分值（字符串形式，保留两位小数，范围约 0~100，越大越相似）
                     * @return Score 相似度分值（字符串形式，保留两位小数，范围约 0~100，越大越相似）
                     * 
                     */
                    std::string GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取服务端阈值判决结果，0=不通过，1=通过（默认阈值 60 分，由服务端统一维护）
                     * @return Decision 服务端阈值判决结果，0=不通过，1=通过（默认阈值 60 分，由服务端统一维护）
                     * 
                     */
                    int64_t GetDecision() const;

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取结果描述，成功时为 voiceprint verify success
                     * @return Message 结果描述，成功时为 voiceprint verify success
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
                     * 被验证的目标声纹 ID
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 注册时写入的业务方 SpeakerId（以服务端记录为准）
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * 相似度分值（字符串形式，保留两位小数，范围约 0~100，越大越相似）
                     */
                    std::string m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 服务端阈值判决结果，0=不通过，1=通过（默认阈值 60 分，由服务端统一维护）
                     */
                    int64_t m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * 结果描述，成功时为 voiceprint verify success
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VERIFYTRTCVOICEPRINTRESPONSE_H_
