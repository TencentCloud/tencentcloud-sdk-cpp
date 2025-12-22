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
                     * 获取流ID
                     * @return StreamingId 流ID
                     * 
                     */
                    std::string GetStreamingId() const;

                    /**
                     * 设置流ID
                     * @param _streamingId 流ID
                     * 
                     */
                    void SetStreamingId(const std::string& _streamingId);

                    /**
                     * 判断参数 StreamingId 是否已赋值
                     * @return StreamingId 是否已赋值
                     * 
                     */
                    bool StreamingIdHasBeenSet() const;

                    /**
                     * 获取开始拉取的流式TokenID。0表示从该流最早的TokenID开始获取
                     * @return BeginStreamingTokenId 开始拉取的流式TokenID。0表示从该流最早的TokenID开始获取
                     * 
                     */
                    int64_t GetBeginStreamingTokenId() const;

                    /**
                     * 设置开始拉取的流式TokenID。0表示从该流最早的TokenID开始获取
                     * @param _beginStreamingTokenId 开始拉取的流式TokenID。0表示从该流最早的TokenID开始获取
                     * 
                     */
                    void SetBeginStreamingTokenId(const int64_t& _beginStreamingTokenId);

                    /**
                     * 判断参数 BeginStreamingTokenId 是否已赋值
                     * @return BeginStreamingTokenId 是否已赋值
                     * 
                     */
                    bool BeginStreamingTokenIdHasBeenSet() const;

                    /**
                     * 获取单次获取的token数量，默认2000
                     * @return TokenLimit 单次获取的token数量，默认2000
                     * 
                     */
                    int64_t GetTokenLimit() const;

                    /**
                     * 设置单次获取的token数量，默认2000
                     * @param _tokenLimit 单次获取的token数量，默认2000
                     * 
                     */
                    void SetTokenLimit(const int64_t& _tokenLimit);

                    /**
                     * 判断参数 TokenLimit 是否已赋值
                     * @return TokenLimit 是否已赋值
                     * 
                     */
                    bool TokenLimitHasBeenSet() const;

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
                     * 流ID
                     */
                    std::string m_streamingId;
                    bool m_streamingIdHasBeenSet;

                    /**
                     * 开始拉取的流式TokenID。0表示从该流最早的TokenID开始获取
                     */
                    int64_t m_beginStreamingTokenId;
                    bool m_beginStreamingTokenIdHasBeenSet;

                    /**
                     * 单次获取的token数量，默认2000
                     */
                    int64_t m_tokenLimit;
                    bool m_tokenLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILREQUEST_H_
