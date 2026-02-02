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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SyncDubbing返回参数结构体
                */
                class SyncDubbingResponse : public AbstractModel
                {
                public:
                    SyncDubbingResponse();
                    ~SyncDubbingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误码，成功时返回0
                     * @return ErrorCode 错误码，成功时返回0
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误信息，成功时返回success
                     * @return Msg 错误信息，成功时返回success
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取合成音频的base64编码，wav格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioData 合成音频的base64编码，wav格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取克隆的音色Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceId 克隆的音色Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                private:

                    /**
                     * 错误码，成功时返回0
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息，成功时返回success
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 合成音频的base64编码，wav格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * 克隆的音色Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGRESPONSE_H_
