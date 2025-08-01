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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * SendEmail返回参数结构体
                */
                class SendEmailResponse : public AbstractModel
                {
                public:
                    SendEmailResponse();
                    ~SendEmailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接受消息生成的唯一消息标识符。
                     * @return MessageId 接受消息生成的唯一消息标识符。
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                private:

                    /**
                     * 接受消息生成的唯一消息标识符。
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILRESPONSE_H_
