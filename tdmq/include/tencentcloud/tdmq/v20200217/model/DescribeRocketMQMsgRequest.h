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
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取命名空间
                     * @return EnvironmentId 命名空间
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间
                     * @param _environmentId 命名空间
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
                     * 获取主题，查询死信时传groupId
                     * @return TopicName 主题，查询死信时传groupId
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题，查询死信时传groupId
                     * @param _topicName 主题，查询死信时传groupId
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
                     * 获取消息id
                     * @return MsgId 消息id
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息id
                     * @param _msgId 消息id
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
                     * 获取pulsar消息id
                     * @return PulsarMsgId pulsar消息id
                     * 
                     */
                    std::string GetPulsarMsgId() const;

                    /**
                     * 设置pulsar消息id
                     * @param _pulsarMsgId pulsar消息id
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
                     * 获取查询死信时该值为true，只对Rocketmq有效
                     * @return QueryDlqMsg 查询死信时该值为true，只对Rocketmq有效
                     * @deprecated
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置查询死信时该值为true，只对Rocketmq有效
                     * @param _queryDlqMsg 查询死信时该值为true，只对Rocketmq有效
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
                     * 获取查询死信时该值为true，只对Rocketmq有效
                     * @return QueryDeadLetterMessage 查询死信时该值为true，只对Rocketmq有效
                     * 
                     */
                    bool GetQueryDeadLetterMessage() const;

                    /**
                     * 设置查询死信时该值为true，只对Rocketmq有效
                     * @param _queryDeadLetterMessage 查询死信时该值为true，只对Rocketmq有效
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
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
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
                     * 获取分页Limit
                     * @return Limit 分页Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit
                     * @param _limit 分页Limit
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
                     * 获取根据消费组名称过滤消费详情
                     * @return FilterTrackGroup 根据消费组名称过滤消费详情
                     * 
                     */
                    std::string GetFilterTrackGroup() const;

                    /**
                     * 设置根据消费组名称过滤消费详情
                     * @param _filterTrackGroup 根据消费组名称过滤消费详情
                     * 
                     */
                    void SetFilterTrackGroup(const std::string& _filterTrackGroup);

                    /**
                     * 判断参数 FilterTrackGroup 是否已赋值
                     * @return FilterTrackGroup 是否已赋值
                     * 
                     */
                    bool FilterTrackGroupHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题，查询死信时传groupId
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * pulsar消息id
                     */
                    std::string m_pulsarMsgId;
                    bool m_pulsarMsgIdHasBeenSet;

                    /**
                     * 查询死信时该值为true，只对Rocketmq有效
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * 查询死信时该值为true，只对Rocketmq有效
                     */
                    bool m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据消费组名称过滤消费详情
                     */
                    std::string m_filterTrackGroup;
                    bool m_filterTrackGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGREQUEST_H_
