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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ACKNOWLEDGEMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ACKNOWLEDGEMESSAGEREQUEST_H_

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
                * AcknowledgeMessage请求参数结构体
                */
                class AcknowledgeMessageRequest : public AbstractModel
                {
                public:
                    AcknowledgeMessageRequest();
                    ~AcknowledgeMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用作标识消息的唯一的ID（可从 receiveMessage 的返回值中获得）
                     * @return MessageId 用作标识消息的唯一的ID（可从 receiveMessage 的返回值中获得）
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置用作标识消息的唯一的ID（可从 receiveMessage 的返回值中获得）
                     * @param _messageId 用作标识消息的唯一的ID（可从 receiveMessage 的返回值中获得）
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Topic 名字（可从 receiveMessage 的返回值中获得）这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * @return AckTopic Topic 名字（可从 receiveMessage 的返回值中获得）这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * 
                     */
                    std::string GetAckTopic() const;

                    /**
                     * 设置Topic 名字（可从 receiveMessage 的返回值中获得）这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * @param _ackTopic Topic 名字（可从 receiveMessage 的返回值中获得）这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     * 
                     */
                    void SetAckTopic(const std::string& _ackTopic);

                    /**
                     * 判断参数 AckTopic 是否已赋值
                     * @return AckTopic 是否已赋值
                     * 
                     */
                    bool AckTopicHasBeenSet() const;

                    /**
                     * 获取订阅者的名字，可以从receiveMessage的返回值中获取到。这里尽量与receiveMessage中的订阅者保持一致，否则没办法正确ack 接收回来的消息。
                     * @return SubName 订阅者的名字，可以从receiveMessage的返回值中获取到。这里尽量与receiveMessage中的订阅者保持一致，否则没办法正确ack 接收回来的消息。
                     * 
                     */
                    std::string GetSubName() const;

                    /**
                     * 设置订阅者的名字，可以从receiveMessage的返回值中获取到。这里尽量与receiveMessage中的订阅者保持一致，否则没办法正确ack 接收回来的消息。
                     * @param _subName 订阅者的名字，可以从receiveMessage的返回值中获取到。这里尽量与receiveMessage中的订阅者保持一致，否则没办法正确ack 接收回来的消息。
                     * 
                     */
                    void SetSubName(const std::string& _subName);

                    /**
                     * 判断参数 SubName 是否已赋值
                     * @return SubName 是否已赋值
                     * 
                     */
                    bool SubNameHasBeenSet() const;

                private:

                    /**
                     * 用作标识消息的唯一的ID（可从 receiveMessage 的返回值中获得）
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Topic 名字（可从 receiveMessage 的返回值中获得）这里尽量需要使用topic的全路径，即：tenant/namespace/topic。如果不指定，默认使用的是：public/default
                     */
                    std::string m_ackTopic;
                    bool m_ackTopicHasBeenSet;

                    /**
                     * 订阅者的名字，可以从receiveMessage的返回值中获取到。这里尽量与receiveMessage中的订阅者保持一致，否则没办法正确ack 接收回来的消息。
                     */
                    std::string m_subName;
                    bool m_subNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ACKNOWLEDGEMESSAGEREQUEST_H_
