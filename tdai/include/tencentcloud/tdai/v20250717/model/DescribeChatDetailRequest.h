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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeChatDetail请求参数结构体
                */
                class DescribeChatDetailRequest : public AbstractModel
                {
                public:
                    DescribeChatDetailRequest();
                    ~DescribeChatDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取智能体ID
                     * @return InstanceId 智能体ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置智能体ID
                     * @param _instanceId 智能体ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取会话Id
                     * @return ChatId 会话Id
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置会话Id
                     * @param _chatId 会话Id
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取最后一条流式TokenID
                     * @return LastStreamingTokenId 最后一条流式TokenID
                     * 
                     */
                    int64_t GetLastStreamingTokenId() const;

                    /**
                     * 设置最后一条流式TokenID
                     * @param _lastStreamingTokenId 最后一条流式TokenID
                     * 
                     */
                    void SetLastStreamingTokenId(const int64_t& _lastStreamingTokenId);

                    /**
                     * 判断参数 LastStreamingTokenId 是否已赋值
                     * @return LastStreamingTokenId 是否已赋值
                     * 
                     */
                    bool LastStreamingTokenIdHasBeenSet() const;

                private:

                    /**
                     * 智能体ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 会话Id
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 最后一条流式TokenID
                     */
                    int64_t m_lastStreamingTokenId;
                    bool m_lastStreamingTokenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILREQUEST_H_
