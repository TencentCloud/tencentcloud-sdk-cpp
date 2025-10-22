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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGELISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGELISTREQUEST_H_

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
                * DescribeMessageList请求参数结构体
                */
                class DescribeMessageListRequest : public AbstractModel
                {
                public:
                    DescribeMessageListRequest();
                    ~DescribeMessageListRequest() = default;
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
                     * 获取要查询消息的开始时间，**Unix时间戳（毫秒）**
                     * @return StartTime 要查询消息的开始时间，**Unix时间戳（毫秒）**
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置要查询消息的开始时间，**Unix时间戳（毫秒）**
                     * @param _startTime 要查询消息的开始时间，**Unix时间戳（毫秒）**
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取要查询消息的结束时间，**Unix时间戳（毫秒）**
                     * @return EndTime 要查询消息的结束时间，**Unix时间戳（毫秒）**
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置要查询消息的结束时间，**Unix时间戳（毫秒）**
                     * @param _endTime 要查询消息的结束时间，**Unix时间戳（毫秒）**
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取一次查询标识。第一次查询可传空字符串，当查询结果涉及分页，请求下一页数据时该入参的值取上一次请求响应中的出参TaskRequestId 值即可。
                     * @return TaskRequestId 一次查询标识。第一次查询可传空字符串，当查询结果涉及分页，请求下一页数据时该入参的值取上一次请求响应中的出参TaskRequestId 值即可。
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 设置一次查询标识。第一次查询可传空字符串，当查询结果涉及分页，请求下一页数据时该入参的值取上一次请求响应中的出参TaskRequestId 值即可。
                     * @param _taskRequestId 一次查询标识。第一次查询可传空字符串，当查询结果涉及分页，请求下一页数据时该入参的值取上一次请求响应中的出参TaskRequestId 值即可。
                     * 
                     */
                    void SetTaskRequestId(const std::string& _taskRequestId);

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                    /**
                     * 获取查询起始位置，默认为0。
                     * @return Offset 查询起始位置，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始位置，默认为0。
                     * @param _offset 查询起始位置，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询结果限制数量，默认20。
                     * @return Limit 查询结果限制数量，默认20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果限制数量，默认20。
                     * @param _limit 查询结果限制数量，默认20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。
                     * @return ConsumerGroup 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。
                     * @param _consumerGroup 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

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
                     * 获取消息 Key，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * @return MsgKey 消息 Key，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置消息 Key，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * @param _msgKey 消息 Key，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * 
                     */
                    void SetMsgKey(const std::string& _msgKey);

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * @return RecentMessageNum 查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * 
                     */
                    int64_t GetRecentMessageNum() const;

                    /**
                     * 设置查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * @param _recentMessageNum 查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     * 
                     */
                    void SetRecentMessageNum(const int64_t& _recentMessageNum);

                    /**
                     * 判断参数 RecentMessageNum 是否已赋值
                     * @return RecentMessageNum 是否已赋值
                     * 
                     */
                    bool RecentMessageNumHasBeenSet() const;

                    /**
                     * 获取是否查询死信消息，默认为false
                     * @return QueryDeadLetterMessage 是否查询死信消息，默认为false
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置是否查询死信消息，默认为false
                     * @param _queryDeadLetterMessage 是否查询死信消息，默认为false
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
                     * 获取消息 Tag，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * @return Tag 消息 Tag，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置消息 Tag，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * @param _tag 消息 Tag，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

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
                     * 要查询消息的开始时间，**Unix时间戳（毫秒）**
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 要查询消息的结束时间，**Unix时间戳（毫秒）**
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 一次查询标识。第一次查询可传空字符串，当查询结果涉及分页，请求下一页数据时该入参的值取上一次请求响应中的出参TaskRequestId 值即可。
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                    /**
                     * 查询起始位置，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制数量，默认20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 消费组名称，从 [DescribeConsumerGroupList](https://cloud.tencent.com/document/api/1493/101535) 接口返回的 [ConsumeGroupItem](https://cloud.tencent.com/document/api/1493/96031#ConsumeGroupItem) 或控制台获得。
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 消息 ID，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消息 Key，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * 查询最近N条消息 最大不超过1024，默认-1为其他查询条件
                     */
                    int64_t m_recentMessageNum;
                    bool m_recentMessageNumHasBeenSet;

                    /**
                     * 是否查询死信消息，默认为false
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * 消息 Tag，从 [DescribeMessageList](https://cloud.tencent.com/document/api/1493/114593) 接口返回的 [MessageItem](https://cloud.tencent.com/document/api/1493/96031#MessageItem) 或业务日志中获得。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMESSAGELISTREQUEST_H_
