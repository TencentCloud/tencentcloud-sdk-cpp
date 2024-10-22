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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_VERIFYROCKETMQCONSUMEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_VERIFYROCKETMQCONSUMEREQUEST_H_

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
                * VerifyRocketMQConsume请求参数结构体
                */
                class VerifyRocketMQConsumeRequest : public AbstractModel
                {
                public:
                    VerifyRocketMQConsumeRequest();
                    ~VerifyRocketMQConsumeRequest() = default;
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
                     * @return NamespaceId 命名空间
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间
                     * @param _namespaceId 命名空间
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取消费组ID
                     * @return GroupId 消费组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置消费组ID
                     * @param _groupId 消费组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

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
                     * 获取客户端ID
                     * @return ClientId 客户端ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID
                     * @param _clientId 客户端ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取主题名称
                     * @return TopicName 主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
                     * @param _topicName 主题名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 消费组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_VERIFYROCKETMQCONSUMEREQUEST_H_
