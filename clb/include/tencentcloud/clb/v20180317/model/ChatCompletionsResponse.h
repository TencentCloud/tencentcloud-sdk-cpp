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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CHATCOMPLETIONSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CHATCOMPLETIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ChatCompletions返回参数结构体
                */
                class ChatCompletionsResponse : public AbstractModel
                {
                public:
                    ChatCompletionsResponse();
                    ~ChatCompletionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>聊天的返回信息</p>
                     * @return ChatResponseMessage <p>聊天的返回信息</p>
                     * 
                     */
                    std::string GetChatResponseMessage() const;

                    /**
                     * 判断参数 ChatResponseMessage 是否已赋值
                     * @return ChatResponseMessage 是否已赋值
                     * 
                     */
                    bool ChatResponseMessageHasBeenSet() const;

                    /**
                     * 获取<p>聊天请求发送过程中的失败信息</p>
                     * @return ErrorInChat <p>聊天请求发送过程中的失败信息</p>
                     * 
                     */
                    std::string GetErrorInChat() const;

                    /**
                     * 判断参数 ErrorInChat 是否已赋值
                     * @return ErrorInChat 是否已赋值
                     * 
                     */
                    bool ErrorInChatHasBeenSet() const;

                private:

                    /**
                     * <p>聊天的返回信息</p>
                     */
                    std::string m_chatResponseMessage;
                    bool m_chatResponseMessageHasBeenSet;

                    /**
                     * <p>聊天请求发送过程中的失败信息</p>
                     */
                    std::string m_errorInChat;
                    bool m_errorInChatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CHATCOMPLETIONSRESPONSE_H_
