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

#ifndef TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_SENDMESSAGERESPONSE_H_
#define TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_SENDMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataintegration
    {
        namespace V20220613
        {
            namespace Model
            {
                /**
                * SendMessage返回参数结构体
                */
                class SendMessageResponse : public AbstractModel
                {
                public:
                    SendMessageResponse();
                    ~SendMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取消息ID
                     * @return MessageId 消息ID
                     * 
                     */
                    std::vector<std::string> GetMessageId() const;

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                private:

                    /**
                     * 消息ID
                     */
                    std::vector<std::string> m_messageId;
                    bool m_messageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_SENDMESSAGERESPONSE_H_
