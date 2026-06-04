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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Conversation.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeConversationList返回参数结构体
                */
                class DescribeConversationListResponse : public AbstractModel
                {
                public:
                    DescribeConversationListResponse();
                    ~DescribeConversationListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话列表</p>
                     * @return ConversationList <p>会话列表</p>
                     * 
                     */
                    std::vector<Conversation> GetConversationList() const;

                    /**
                     * 判断参数 ConversationList 是否已赋值
                     * @return ConversationList 是否已赋值
                     * 
                     */
                    bool ConversationListHasBeenSet() const;

                    /**
                     * 获取<p>会话列表</p>
                     * @return Conversations <p>会话列表</p>
                     * 
                     */
                    std::vector<Conversation> GetConversations() const;

                    /**
                     * 判断参数 Conversations 是否已赋值
                     * @return Conversations 是否已赋值
                     * 
                     */
                    bool ConversationsHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>会话列表</p>
                     */
                    std::vector<Conversation> m_conversationList;
                    bool m_conversationListHasBeenSet;

                    /**
                     * <p>会话列表</p>
                     */
                    std::vector<Conversation> m_conversations;
                    bool m_conversationsHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONLISTRESPONSE_H_
