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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMQMSGTRACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMQMSGTRACEREQUEST_H_

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
                * DescribeMqMsgTrace请求参数结构体
                */
                class DescribeMqMsgTraceRequest : public AbstractModel
                {
                public:
                    DescribeMqMsgTraceRequest();
                    ~DescribeMqMsgTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取pulsar、rocketmq、rabbitmq、cmq
                     * @return Protocol pulsar、rocketmq、rabbitmq、cmq
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置pulsar、rocketmq、rabbitmq、cmq
                     * @param _protocol pulsar、rocketmq、rabbitmq、cmq
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

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
                     * 获取集群id，cmq为空
                     * @return ClusterId 集群id，cmq为空
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id，cmq为空
                     * @param _clusterId 集群id，cmq为空
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
                     * 获取命名空间，cmq为空
                     * @return EnvironmentId 命名空间，cmq为空
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间，cmq为空
                     * @param _environmentId 命名空间，cmq为空
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
                     * 获取主题，cmq为空，rocketmq查询死信时值为groupId
                     * @return TopicName 主题，cmq为空，rocketmq查询死信时值为groupId
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题，cmq为空，rocketmq查询死信时值为groupId
                     * @param _topicName 主题，cmq为空，rocketmq查询死信时值为groupId
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
                     * 获取cmq必填，其他协议填空
                     * @return QueueName cmq必填，其他协议填空
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置cmq必填，其他协议填空
                     * @param _queueName cmq必填，其他协议填空
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

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
                     * 获取查询死信时该值为true，只对Rocketmq有效
                     * @return QueryDlqMsg 查询死信时该值为true，只对Rocketmq有效
                     * 
                     */
                    bool GetQueryDlqMsg() const;

                    /**
                     * 设置查询死信时该值为true，只对Rocketmq有效
                     * @param _queryDlqMsg 查询死信时该值为true，只对Rocketmq有效
                     * 
                     */
                    void SetQueryDlqMsg(const bool& _queryDlqMsg);

                    /**
                     * 判断参数 QueryDlqMsg 是否已赋值
                     * @return QueryDlqMsg 是否已赋值
                     * 
                     */
                    bool QueryDlqMsgHasBeenSet() const;

                    /**
                     * 获取生产时间
                     * @return ProduceTime 生产时间
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置生产时间
                     * @param _produceTime 生产时间
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                private:

                    /**
                     * pulsar、rocketmq、rabbitmq、cmq
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 集群id，cmq为空
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间，cmq为空
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题，cmq为空，rocketmq查询死信时值为groupId
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * cmq必填，其他协议填空
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 消费组、订阅
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 查询死信时该值为true，只对Rocketmq有效
                     */
                    bool m_queryDlqMsg;
                    bool m_queryDlqMsgHasBeenSet;

                    /**
                     * 生产时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMQMSGTRACEREQUEST_H_
