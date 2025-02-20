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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGELIST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/MessageItem.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 历史消息列表
                */
                class MessageList : public AbstractModel
                {
                public:
                    MessageList();
                    ~MessageList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息时间戳
                     * @return Timestamp 消息时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置消息时间戳
                     * @param _timestamp 消息时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取消息发送者
                     * @return FromAccount 消息发送者
                     * 
                     */
                    std::string GetFromAccount() const;

                    /**
                     * 设置消息发送者
                     * @param _fromAccount 消息发送者
                     * 
                     */
                    void SetFromAccount(const std::string& _fromAccount);

                    /**
                     * 判断参数 FromAccount 是否已赋值
                     * @return FromAccount 是否已赋值
                     * 
                     */
                    bool FromAccountHasBeenSet() const;

                    /**
                     * 获取消息序列号，当前课堂内唯一且单调递增
                     * @return Seq 消息序列号，当前课堂内唯一且单调递增
                     * 
                     */
                    int64_t GetSeq() const;

                    /**
                     * 设置消息序列号，当前课堂内唯一且单调递增
                     * @param _seq 消息序列号，当前课堂内唯一且单调递增
                     * 
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取历史消息列表
                     * @return MessageBody 历史消息列表
                     * 
                     */
                    std::vector<MessageItem> GetMessageBody() const;

                    /**
                     * 设置历史消息列表
                     * @param _messageBody 历史消息列表
                     * 
                     */
                    void SetMessageBody(const std::vector<MessageItem>& _messageBody);

                    /**
                     * 判断参数 MessageBody 是否已赋值
                     * @return MessageBody 是否已赋值
                     * 
                     */
                    bool MessageBodyHasBeenSet() const;

                private:

                    /**
                     * 消息时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 消息发送者
                     */
                    std::string m_fromAccount;
                    bool m_fromAccountHasBeenSet;

                    /**
                     * 消息序列号，当前课堂内唯一且单调递增
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 历史消息列表
                     */
                    std::vector<MessageItem> m_messageBody;
                    bool m_messageBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MESSAGELIST_H_
