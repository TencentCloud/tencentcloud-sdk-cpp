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

#ifndef TENCENTCLOUD_VMS_V20200902_MODEL_SENDCODEVOICERESPONSE_H_
#define TENCENTCLOUD_VMS_V20200902_MODEL_SENDCODEVOICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vms/v20200902/model/SendStatus.h>


namespace TencentCloud
{
    namespace Vms
    {
        namespace V20200902
        {
            namespace Model
            {
                /**
                * SendCodeVoice返回参数结构体
                */
                class SendCodeVoiceResponse : public AbstractModel
                {
                public:
                    SendCodeVoiceResponse();
                    ~SendCodeVoiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取语音验证码发送状态。
                     * @return SendStatus 语音验证码发送状态。
                     * 
                     */
                    SendStatus GetSendStatus() const;

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     * 
                     */
                    bool SendStatusHasBeenSet() const;

                private:

                    /**
                     * 语音验证码发送状态。
                     */
                    SendStatus m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VMS_V20200902_MODEL_SENDCODEVOICERESPONSE_H_
