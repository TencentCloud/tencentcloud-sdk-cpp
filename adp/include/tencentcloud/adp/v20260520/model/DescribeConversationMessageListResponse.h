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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONMESSAGELISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONMESSAGELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationMessage.h>
#include <tencentcloud/adp/v20260520/model/ConversationResetInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeConversationMessageList返回参数结构体
                */
                class DescribeConversationMessageListResponse : public AbstractModel
                {
                public:
                    DescribeConversationMessageListResponse();
                    ~DescribeConversationMessageListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>第一个记录 ID</p>
                     * @return FirstRecordId <p>第一个记录 ID</p>
                     * 
                     */
                    std::string GetFirstRecordId() const;

                    /**
                     * 判断参数 FirstRecordId 是否已赋值
                     * @return FirstRecordId 是否已赋值
                     * 
                     */
                    bool FirstRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>更新消息方向是否还有更多</p>
                     * @return HasMoreAfter <p>更新消息方向是否还有更多</p>
                     * 
                     */
                    bool GetHasMoreAfter() const;

                    /**
                     * 判断参数 HasMoreAfter 是否已赋值
                     * @return HasMoreAfter 是否已赋值
                     * 
                     */
                    bool HasMoreAfterHasBeenSet() const;

                    /**
                     * 获取<p>更早消息方向是否还有更多</p>
                     * @return HasMoreBefore <p>更早消息方向是否还有更多</p>
                     * 
                     */
                    bool GetHasMoreBefore() const;

                    /**
                     * 判断参数 HasMoreBefore 是否已赋值
                     * @return HasMoreBefore 是否已赋值
                     * 
                     */
                    bool HasMoreBeforeHasBeenSet() const;

                    /**
                     * 获取<p>最后一个记录 ID</p>
                     * @return LastRecordId <p>最后一个记录 ID</p>
                     * 
                     */
                    std::string GetLastRecordId() const;

                    /**
                     * 判断参数 LastRecordId 是否已赋值
                     * @return LastRecordId 是否已赋值
                     * 
                     */
                    bool LastRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>消息列表</p>
                     * @return MessageList <p>消息列表</p>
                     * 
                     */
                    std::vector<ConversationMessage> GetMessageList() const;

                    /**
                     * 判断参数 MessageList 是否已赋值
                     * @return MessageList 是否已赋值
                     * 
                     */
                    bool MessageListHasBeenSet() const;

                    /**
                     * 获取<p>消息列表</p>
                     * @return Messages <p>消息列表</p>
                     * @deprecated
                     */
                    std::vector<ConversationMessage> GetMessages() const;

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * @deprecated
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取<p>最近一次重置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResetInfo <p>最近一次重置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConversationResetInfo GetResetInfo() const;

                    /**
                     * 判断参数 ResetInfo 是否已赋值
                     * @return ResetInfo 是否已赋值
                     * 
                     */
                    bool ResetInfoHasBeenSet() const;

                private:

                    /**
                     * <p>第一个记录 ID</p>
                     */
                    std::string m_firstRecordId;
                    bool m_firstRecordIdHasBeenSet;

                    /**
                     * <p>更新消息方向是否还有更多</p>
                     */
                    bool m_hasMoreAfter;
                    bool m_hasMoreAfterHasBeenSet;

                    /**
                     * <p>更早消息方向是否还有更多</p>
                     */
                    bool m_hasMoreBefore;
                    bool m_hasMoreBeforeHasBeenSet;

                    /**
                     * <p>最后一个记录 ID</p>
                     */
                    std::string m_lastRecordId;
                    bool m_lastRecordIdHasBeenSet;

                    /**
                     * <p>消息列表</p>
                     */
                    std::vector<ConversationMessage> m_messageList;
                    bool m_messageListHasBeenSet;

                    /**
                     * <p>消息列表</p>
                     */
                    std::vector<ConversationMessage> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>最近一次重置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationResetInfo m_resetInfo;
                    bool m_resetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONMESSAGELISTRESPONSE_H_
