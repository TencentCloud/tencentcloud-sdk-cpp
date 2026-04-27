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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GENERATELLMSECANSWERREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GENERATELLMSECANSWERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SSEClientMessage.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * GenerateLLMSecAnswer请求参数结构体
                */
                class GenerateLLMSecAnswerRequest : public AbstractModel
                {
                public:
                    GenerateLLMSecAnswerRequest();
                    ~GenerateLLMSecAnswerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>消息结构体内容</p>
                     * @return Message <p>消息结构体内容</p>
                     * 
                     */
                    SSEClientMessage GetMessage() const;

                    /**
                     * 设置<p>消息结构体内容</p>
                     * @param _message <p>消息结构体内容</p>
                     * 
                     */
                    void SetMessage(const SSEClientMessage& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>消息id，传入 要回答的MsgID ，用于匹配自定义回答模板，最终可得到优化的代答结果</p>
                     * @return MsgID <p>消息id，传入 要回答的MsgID ，用于匹配自定义回答模板，最终可得到优化的代答结果</p>
                     * 
                     */
                    std::string GetMsgID() const;

                    /**
                     * 设置<p>消息id，传入 要回答的MsgID ，用于匹配自定义回答模板，最终可得到优化的代答结果</p>
                     * @param _msgID <p>消息id，传入 要回答的MsgID ，用于匹配自定义回答模板，最终可得到优化的代答结果</p>
                     * 
                     */
                    void SetMsgID(const std::string& _msgID);

                    /**
                     * 判断参数 MsgID 是否已赋值
                     * @return MsgID 是否已赋值
                     * 
                     */
                    bool MsgIDHasBeenSet() const;

                private:

                    /**
                     * <p>消息结构体内容</p>
                     */
                    SSEClientMessage m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>消息id，传入 要回答的MsgID ，用于匹配自定义回答模板，最终可得到优化的代答结果</p>
                     */
                    std::string m_msgID;
                    bool m_msgIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GENERATELLMSECANSWERREQUEST_H_
