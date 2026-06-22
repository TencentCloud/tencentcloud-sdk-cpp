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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_

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
                * DescribeRocketMQMsg请求参数结构体
                */
                class DescribeRocketMQMsgRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgRequest();
                    ~DescribeRocketMQMsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间，4.x 通用集群命名空间固定为: tdmq_default</p>
                     * @return EnvironmentId <p>命名空间，4.x 通用集群命名空间固定为: tdmq_default</p>
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置<p>命名空间，4.x 通用集群命名空间固定为: tdmq_default</p>
                     * @param _environmentId <p>命名空间，4.x 通用集群命名空间固定为: tdmq_default</p>
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取<p>主题，查询死信时传groupId</p>
                     * @return TopicName <p>主题，查询死信时传groupId</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题，查询死信时传groupId</p>
                     * @param _topicName <p>主题，查询死信时传groupId</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>消息id</p>
                     * @return MsgId <p>消息id</p>
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置<p>消息id</p>
                     * @param _msgId <p>消息id</p>
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
                     * 获取<p>pulsar消息id</p>
                     * @return PulsarMsgId <p>pulsar消息id</p>
                     * 
                     */
                    std::string GetPulsarMsgId() const;

                    /**
                     * 设置<p>pulsar消息id</p>
                     * @param _pulsarMsgId <p>pulsar消息id</p>
                     * 
                     */
                    void SetPulsarMsgId(const std::string& _pulsarMsgId);

                    /**
                     * 判断参数 PulsarMsgId 是否已赋值
                     * @return PulsarMsgId 是否已赋值
                     * 
                     */
                    bool PulsarMsgIdHasBeenSet() const;

                    /**
                     * 获取<p>查询死信时该值为true，只对Rocketmq有效</p>
                     * @return QueryDlqMsg <p>查询死信时该值为true，只对Rocketmq有效</p>
                     * @deprecated
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置<p>查询死信时该值为true，只对Rocketmq有效</p>
                     * @param _queryDlqMsg <p>查询死信时该值为true，只对Rocketmq有效</p>
                     * @deprecated
                     */
                    void SetQueryDlqMsg(const bool& _queryDlqMsg);

                    /**
                     * 判断参数 QueryDlqMsg 是否已赋值
                     * @return QueryDlqMsg 是否已赋值
                     * @deprecated
                     */
                    bool QueryDlqMsgHasBeenSet() const;

                    /**
                     * 获取<p>查询死信时该值为true，只对Rocketmq有效</p>
                     * @return QueryDeadLetterMessage <p>查询死信时该值为true，只对Rocketmq有效</p>
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置<p>查询死信时该值为true，只对Rocketmq有效</p>
                     * @param _queryDeadLetterMessage <p>查询死信时该值为true，只对Rocketmq有效</p>
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
                     * 获取<p>分页Offset</p>
                     * @return Offset <p>分页Offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页Offset</p>
                     * @param _offset <p>分页Offset</p>
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
                     * 获取<p>分页Limit</p>
                     * @return Limit <p>分页Limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页Limit</p>
                     * @param _limit <p>分页Limit</p>
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
                     * 获取<p>根据消费组名称过滤消费详情</p>
                     * @return FilterTrackGroup <p>根据消费组名称过滤消费详情</p>
                     * 
                     */
                    std::string GetFilterTrackGroup() const;

                    /**
                     * 设置<p>根据消费组名称过滤消费详情</p>
                     * @param _filterTrackGroup <p>根据消费组名称过滤消费详情</p>
                     * 
                     */
                    void SetFilterTrackGroup(const std::string& _filterTrackGroup);

                    /**
                     * 判断参数 FilterTrackGroup 是否已赋值
                     * @return FilterTrackGroup 是否已赋值
                     * 
                     */
                    bool FilterTrackGroupHasBeenSet() const;

                    /**
                     * 获取<p>查询延迟消息或定时消息时，该值为true</p>
                     * @return QueryDelayMessage <p>查询延迟消息或定时消息时，该值为true</p>
                     * 
                     */
                    bool GetQueryDelayMessage() const;

                    /**
                     * 设置<p>查询延迟消息或定时消息时，该值为true</p>
                     * @param _queryDelayMessage <p>查询延迟消息或定时消息时，该值为true</p>
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
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>命名空间，4.x 通用集群命名空间固定为: tdmq_default</p>
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * <p>主题，查询死信时传groupId</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>消息id</p>
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * <p>pulsar消息id</p>
                     */
                    std::string m_pulsarMsgId;
                    bool m_pulsarMsgIdHasBeenSet;

                    /**
                     * <p>查询死信时该值为true，只对Rocketmq有效</p>
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * <p>查询死信时该值为true，只对Rocketmq有效</p>
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * <p>分页Offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页Limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>根据消费组名称过滤消费详情</p>
                     */
                    std::string m_filterTrackGroup;
                    bool m_filterTrackGroupHasBeenSet;

                    /**
                     * <p>查询延迟消息或定时消息时，该值为true</p>
                     */
                    bool m_queryDelayMessage;
                    bool m_queryDelayMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_
