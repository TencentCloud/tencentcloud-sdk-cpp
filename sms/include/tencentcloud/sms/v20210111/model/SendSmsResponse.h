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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDSMSRESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDSMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/SendStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * SendSms返回参数结构体
                */
                class SendSmsResponse : public AbstractModel
                {
                public:
                    SendSmsResponse();
                    ~SendSmsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取短信发送状态。
注：可参考 <a href="#4.-.E7.A4.BA.E4.BE.8B">示例</a> ，包含短信发送成功和发送失败的输出示例。
                     * @return SendStatusSet 短信发送状态。
注：可参考 <a href="#4.-.E7.A4.BA.E4.BE.8B">示例</a> ，包含短信发送成功和发送失败的输出示例。
                     * 
                     */
                    std::vector<SendStatus> GetSendStatusSet() const;

                    /**
                     * 判断参数 SendStatusSet 是否已赋值
                     * @return SendStatusSet 是否已赋值
                     * 
                     */
                    bool SendStatusSetHasBeenSet() const;

                private:

                    /**
                     * 短信发送状态。
注：可参考 <a href="#4.-.E7.A4.BA.E4.BE.8B">示例</a> ，包含短信发送成功和发送失败的输出示例。
                     */
                    std::vector<SendStatus> m_sendStatusSet;
                    bool m_sendStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSMSRESPONSE_H_
