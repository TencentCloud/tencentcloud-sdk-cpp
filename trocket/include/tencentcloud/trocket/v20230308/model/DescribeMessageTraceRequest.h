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
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
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
                     * 获取主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * @return Topic 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * @param _topic 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
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
                     * 获取消息 ID，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * @return MsgId 消息 ID，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息 ID，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * @param _msgId 消息 ID，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
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
                     * 获取是否是死信消息，默认为false
                     * @return QueryDeadLetterMessage 是否是死信消息，默认为false
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置是否是死信消息，默认为false
                     * @param _queryDeadLetterMessage 是否是死信消息，默认为false
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
                     * 获取是否是延时消息，默认为false
                     * @return QueryDelayMessage 是否是延时消息，默认为false
                     * 
                     */
                    bool GetQueryDelayMessage() const;

                    /**
                     * 设置是否是延时消息，默认为false
                     * @param _queryDelayMessage 是否是延时消息，默认为false
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
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 消息 ID，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 是否是死信消息，默认为false
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * 是否是延时消息，默认为false
                     */
                    bool m_queryDelayMessage;
                    bool m_queryDelayMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGETRACEREQUEST_H_
