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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VoiceInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeVoices返回参数结构体
                */
                class DescribeVoicesResponse : public AbstractModel
                {
                public:
                    DescribeVoicesResponse();
                    ~DescribeVoicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>错误码，成功时返回0</p>
                     * @return ErrorCode <p>错误码，成功时返回0</p>
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
                     * 获取<p>错误信息，成功时返回success</p>
                     * @return Msg <p>错误信息，成功时返回success</p>
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
                     * 获取<p>可用音色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Voices <p>可用音色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VoiceInfo> GetVoices() const;

                    /**
                     * 判断参数 Voices 是否已赋值
                     * @return Voices 是否已赋值
                     * 
                     */
                    bool VoicesHasBeenSet() const;

                private:

                    /**
                     * <p>错误码，成功时返回0</p>
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>错误信息，成功时返回success</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * <p>可用音色列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VoiceInfo> m_voices;
                    bool m_voicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESRESPONSE_H_
