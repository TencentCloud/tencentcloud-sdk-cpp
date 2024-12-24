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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMessageTrace请求参数结构体
                */
                class DescribeMessageTraceRequest : public AbstractModel
                {
                public:
                    DescribeMessageTraceRequest();
                    ~DescribeMessageTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取消息ID
                     * @return MsgId 消息ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息ID
                     * @param _msgId 消息ID
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取是否是死信消息
                     * @return QueryDeadLetterMessage 是否是死信消息
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置是否是死信消息
                     * @param _queryDeadLetterMessage 是否是死信消息
                     * 
                     */
                    void SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage);

                    /**
                     * 判断参数 QueryDeadLetterMessage 是否已赋值
                     * @return QueryDeadLetterMessage 是否已赋值
                     * 
                     */
                    bool QueryDeadLetterMessageHasBeenSet() const;

                    /**
                     * 获取是否是延时消息
                     * @return QueryDelayMessage 是否是延时消息
                     * 
                     */
                    bool GetQueryDelayMessage() const;

                    /**
                     * 设置是否是延时消息
                     * @param _queryDelayMessage 是否是延时消息
                     * 
                     */
                    void SetQueryDelayMessage(const bool& _queryDelayMessage);

                    /**
                     * 判断参数 QueryDelayMessage 是否已赋值
                     * @return QueryDelayMessage 是否已赋值
                     * 
                     */
                    bool QueryDelayMessageHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 消息ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 是否是死信消息
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * 是否是延时消息
                     */
                    bool m_queryDelayMessage;
                    bool m_queryDelayMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_
