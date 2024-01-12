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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILREQUEST_H_

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
                * ExportRocketMQMessageDetail请求参数结构体
                */
                class ExportRocketMQMessageDetailRequest : public AbstractModel
                {
                public:
                    ExportRocketMQMessageDetailRequest();
                    ~ExportRocketMQMessageDetailRequest() = default;
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
                     * 获取应用命名空间
                     * @return EnvironmentId 应用命名空间
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置应用命名空间
                     * @param _environmentId 应用命名空间
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
                     * 获取Topic名称
如果是死信消息 isDlqMsg=true
                     * @return TopicName Topic名称
如果是死信消息 isDlqMsg=true
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic名称
如果是死信消息 isDlqMsg=true
                     * @param _topicName Topic名称
如果是死信消息 isDlqMsg=true
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
                     * 获取是否包含消息体
                     * @return IncludeMsgBody 是否包含消息体
                     * 
                     */
                    bool GetIncludeMsgBody() const;

                    /**
                     * 设置是否包含消息体
                     * @param _includeMsgBody 是否包含消息体
                     * 
                     */
                    void SetIncludeMsgBody(const bool& _includeMsgBody);

                    /**
                     * 判断参数 IncludeMsgBody 是否已赋值
                     * @return IncludeMsgBody 是否已赋值
                     * 
                     */
                    bool IncludeMsgBodyHasBeenSet() const;

                    /**
                     * 获取是否死信消息
                     * @return DeadLetterMsg 是否死信消息
                     * 
                     */
                    bool GetDeadLetterMsg() const;

                    /**
                     * 设置是否死信消息
                     * @param _deadLetterMsg 是否死信消息
                     * 
                     */
                    void SetDeadLetterMsg(const bool& _deadLetterMsg);

                    /**
                     * 判断参数 DeadLetterMsg 是否已赋值
                     * @return DeadLetterMsg 是否已赋值
                     * 
                     */
                    bool DeadLetterMsgHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 应用命名空间
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic名称
如果是死信消息 isDlqMsg=true
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 是否包含消息体
                     */
                    bool m_includeMsgBody;
                    bool m_includeMsgBodyHasBeenSet;

                    /**
                     * 是否死信消息
                     */
                    bool m_deadLetterMsg;
                    bool m_deadLetterMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILREQUEST_H_
