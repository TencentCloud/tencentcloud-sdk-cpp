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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILRESPONSE_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/ChatDetail.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeChatDetail返回参数结构体
                */
                class DescribeChatDetailResponse : public AbstractModel
                {
                public:
                    DescribeChatDetailResponse();
                    ~DescribeChatDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主账号ID
                     * @return AppId 主账号ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账号Uin
                     * @return Uin 主账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子账号Uin
                     * @return OwnerUin 子账号Uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取智能体实例ID
                     * @return InstanceId 智能体实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return ChatId 会话ID
                     * 
                     */
                    std::string GetChatId() const;

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
                     * 判断参数 LastStreamingTokenId 是否已赋值
                     * @return LastStreamingTokenId 是否已赋值
                     * 
                     */
                    bool LastStreamingTokenIdHasBeenSet() const;

                    /**
                     * 获取Streaming数量
                     * @return StreamingCount Streaming数量
                     * 
                     */
                    int64_t GetStreamingCount() const;

                    /**
                     * 判断参数 StreamingCount 是否已赋值
                     * @return StreamingCount 是否已赋值
                     * 
                     */
                    bool StreamingCountHasBeenSet() const;

                    /**
                     * 获取对话流列表
                     * @return Streamings 对话流列表
                     * 
                     */
                    std::vector<ChatDetail> GetStreamings() const;

                    /**
                     * 判断参数 Streamings 是否已赋值
                     * @return Streamings 是否已赋值
                     * 
                     */
                    bool StreamingsHasBeenSet() const;

                private:

                    /**
                     * 主账号ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号Uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 智能体实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 最后一条流式TokenID
                     */
                    int64_t m_lastStreamingTokenId;
                    bool m_lastStreamingTokenIdHasBeenSet;

                    /**
                     * Streaming数量
                     */
                    int64_t m_streamingCount;
                    bool m_streamingCountHasBeenSet;

                    /**
                     * 对话流列表
                     */
                    std::vector<ChatDetail> m_streamings;
                    bool m_streamingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBECHATDETAILRESPONSE_H_
