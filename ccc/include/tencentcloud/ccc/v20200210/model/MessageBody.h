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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_MESSAGEBODY_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_MESSAGEBODY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Message.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 聊天消息
                */
                class MessageBody : public AbstractModel
                {
                public:
                    MessageBody();
                    ~MessageBody() = default;
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
                     * 获取发消息的用户ID
                     * @return From 发消息的用户ID
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置发消息的用户ID
                     * @param _from 发消息的用户ID
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取消息列表
                     * @return Messages 消息列表
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置消息列表
                     * @param _messages 消息列表
                     * 
                     */
                    void SetMessages(const std::vector<Message>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                private:

                    /**
                     * 消息时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 发消息的用户ID
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 消息列表
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MESSAGEBODY_H_
