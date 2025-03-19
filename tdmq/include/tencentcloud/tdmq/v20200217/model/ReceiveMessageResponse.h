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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ReceiveMessage返回参数结构体
                */
                class ReceiveMessageResponse : public AbstractModel
                {
                public:
                    ReceiveMessageResponse();
                    ~ReceiveMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用作标识消息的唯一主键
                     * @return MessageID 用作标识消息的唯一主键
                     * 
                     */
                    std::string GetMessageID() const;

                    /**
                     * 判断参数 MessageID 是否已赋值
                     * @return MessageID 是否已赋值
                     * 
                     */
                    bool MessageIDHasBeenSet() const;

                    /**
                     * 获取接收消息的内容
                     * @return MessagePayload 接收消息的内容
                     * 
                     */
                    std::string GetMessagePayload() const;

                    /**
                     * 判断参数 MessagePayload 是否已赋值
                     * @return MessagePayload 是否已赋值
                     * 
                     */
                    bool MessagePayloadHasBeenSet() const;

                    /**
                     * 获取提供给 Ack 接口，用来Ack哪一个topic中的消息
                     * @return AckTopic 提供给 Ack 接口，用来Ack哪一个topic中的消息
                     * 
                     */
                    std::string GetAckTopic() const;

                    /**
                     * 判断参数 AckTopic 是否已赋值
                     * @return AckTopic 是否已赋值
                     * 
                     */
                    bool AckTopicHasBeenSet() const;

                    /**
                     * 获取返回的错误信息，如果为空，说明没有错误
                     * @return ErrorMsg 返回的错误信息，如果为空，说明没有错误
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取返回订阅者的名字，用来创建 ack consumer时使用
                     * @return SubName 返回订阅者的名字，用来创建 ack consumer时使用
                     * 
                     */
                    std::string GetSubName() const;

                    /**
                     * 判断参数 SubName 是否已赋值
                     * @return SubName 是否已赋值
                     * 
                     */
                    bool SubNameHasBeenSet() const;

                    /**
                     * 获取BatchReceivePolicy 一次性返回的多条消息的 MessageID，用 ‘###’ 来区分不同的 MessageID
                     * @return MessageIDList BatchReceivePolicy 一次性返回的多条消息的 MessageID，用 ‘###’ 来区分不同的 MessageID
                     * 
                     */
                    std::string GetMessageIDList() const;

                    /**
                     * 判断参数 MessageIDList 是否已赋值
                     * @return MessageIDList 是否已赋值
                     * 
                     */
                    bool MessageIDListHasBeenSet() const;

                    /**
                     * 获取BatchReceivePolicy 一次性返回的多条消息的消息内容，用 ‘###’ 来区分不同的消息内容
                     * @return MessagesPayload BatchReceivePolicy 一次性返回的多条消息的消息内容，用 ‘###’ 来区分不同的消息内容
                     * 
                     */
                    std::string GetMessagesPayload() const;

                    /**
                     * 判断参数 MessagesPayload 是否已赋值
                     * @return MessagesPayload 是否已赋值
                     * 
                     */
                    bool MessagesPayloadHasBeenSet() const;

                private:

                    /**
                     * 用作标识消息的唯一主键
                     */
                    std::string m_messageID;
                    bool m_messageIDHasBeenSet;

                    /**
                     * 接收消息的内容
                     */
                    std::string m_messagePayload;
                    bool m_messagePayloadHasBeenSet;

                    /**
                     * 提供给 Ack 接口，用来Ack哪一个topic中的消息
                     */
                    std::string m_ackTopic;
                    bool m_ackTopicHasBeenSet;

                    /**
                     * 返回的错误信息，如果为空，说明没有错误
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 返回订阅者的名字，用来创建 ack consumer时使用
                     */
                    std::string m_subName;
                    bool m_subNameHasBeenSet;

                    /**
                     * BatchReceivePolicy 一次性返回的多条消息的 MessageID，用 ‘###’ 来区分不同的 MessageID
                     */
                    std::string m_messageIDList;
                    bool m_messageIDListHasBeenSet;

                    /**
                     * BatchReceivePolicy 一次性返回的多条消息的消息内容，用 ‘###’ 来区分不同的消息内容
                     */
                    std::string m_messagesPayload;
                    bool m_messagesPayloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RECEIVEMESSAGERESPONSE_H_
