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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSRESPONSE_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20190711/model/SendStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
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
                     * @return SendStatusSet 短信发送状态。
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
                     */
                    std::vector<SendStatus> m_sendStatusSet;
                    bool m_sendStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SENDSMSRESPONSE_H_
