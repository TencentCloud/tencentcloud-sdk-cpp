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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AIROUNDMESSAGE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AIROUNDMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/UserReplyEvent.h>
#include <tencentcloud/ccc/v20200210/model/AISpeakEvent.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 表示一轮对话中的用户和 AI 消息
                */
                class AIRoundMessage : public AbstractModel
                {
                public:
                    AIRoundMessage();
                    ~AIRoundMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消息的毫秒级时间戳</p><p>单位：ms</p>
                     * @return Timestamp <p>消息的毫秒级时间戳</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>消息的毫秒级时间戳</p><p>单位：ms</p>
                     * @param _timestamp <p>消息的毫秒级时间戳</p><p>单位：ms</p>
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
                     * 获取<p>用户消息</p>
                     * @return UserReply <p>用户消息</p>
                     * 
                     */
                    UserReplyEvent GetUserReply() const;

                    /**
                     * 设置<p>用户消息</p>
                     * @param _userReply <p>用户消息</p>
                     * 
                     */
                    void SetUserReply(const UserReplyEvent& _userReply);

                    /**
                     * 判断参数 UserReply 是否已赋值
                     * @return UserReply 是否已赋值
                     * 
                     */
                    bool UserReplyHasBeenSet() const;

                    /**
                     * 获取<p>智能体响应消息</p>
                     * @return AISpeak <p>智能体响应消息</p>
                     * 
                     */
                    AISpeakEvent GetAISpeak() const;

                    /**
                     * 设置<p>智能体响应消息</p>
                     * @param _aISpeak <p>智能体响应消息</p>
                     * 
                     */
                    void SetAISpeak(const AISpeakEvent& _aISpeak);

                    /**
                     * 判断参数 AISpeak 是否已赋值
                     * @return AISpeak 是否已赋值
                     * 
                     */
                    bool AISpeakHasBeenSet() const;

                private:

                    /**
                     * <p>消息的毫秒级时间戳</p><p>单位：ms</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>用户消息</p>
                     */
                    UserReplyEvent m_userReply;
                    bool m_userReplyHasBeenSet;

                    /**
                     * <p>智能体响应消息</p>
                     */
                    AISpeakEvent m_aISpeak;
                    bool m_aISpeakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AIROUNDMESSAGE_H_
