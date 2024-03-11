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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACEREQUEST_H_

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
                * DescribeRocketMQMsgTrace请求参数结构体
                */
                class DescribeRocketMQMsgTraceRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQMsgTraceRequest();
                    ~DescribeRocketMQMsgTraceRequest() = default;
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
                     * 获取主题，rocketmq查询死信时值为groupId
                     * @return TopicName 主题，rocketmq查询死信时值为groupId
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题，rocketmq查询死信时值为groupId
                     * @param _topicName 主题，rocketmq查询死信时值为groupId
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
                     * 获取消费组、订阅
                     * @return GroupName 消费组、订阅
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置消费组、订阅
                     * @param _groupName 消费组、订阅
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取查询死信时该值为true
                     * @return QueryDLQMsg 查询死信时该值为true
                     * @deprecated
                     */
                    bool GetQueryDLQMsg() const;

                    /**
                     * 设置查询死信时该值为true
                     * @param _queryDLQMsg 查询死信时该值为true
                     * @deprecated
                     */
                    void SetQueryDLQMsg(const bool& _queryDLQMsg);

                    /**
                     * 判断参数 QueryDLQMsg 是否已赋值
                     * @return QueryDLQMsg 是否已赋值
                     * @deprecated
                     */
                    bool QueryDLQMsgHasBeenSet() const;

                    /**
                     * 获取查询死信时该值为true
                     * @return QueryDeadLetterMessage 查询死信时该值为true
                     * 
                     */
                    std::string GetQueryDeadLetterMessage() const;

                    /**
                     * 设置查询死信时该值为true
                     * @param _queryDeadLetterMessage 查询死信时该值为true
                     * 
                     */
                    void SetQueryDeadLetterMessage(const std::string& _queryDeadLetterMessage);

                    /**
                     * 判断参数 QueryDeadLetterMessage 是否已赋值
                     * @return QueryDeadLetterMessage 是否已赋值
                     * 
                     */
                    bool QueryDeadLetterMessageHasBeenSet() const;

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
                     * 主题，rocketmq查询死信时值为groupId
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 消费组、订阅
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 查询死信时该值为true
                     */
                    bool m_queryDLQMsg;
                    bool m_queryDLQMsgHasBeenSet;

                    /**
                     * 查询死信时该值为true
                     */
                    std::string m_queryDeadLetterMessage;
                    bool m_queryDeadLetterMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQMSGTRACEREQUEST_H_
