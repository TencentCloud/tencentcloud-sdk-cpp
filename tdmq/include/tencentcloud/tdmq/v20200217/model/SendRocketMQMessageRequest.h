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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDROCKETMQMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDROCKETMQMESSAGEREQUEST_H_

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
                * SendRocketMQMessage请求参数结构体
                */
                class SendRocketMQMessageRequest : public AbstractModel
                {
                public:
                    SendRocketMQMessageRequest();
                    ~SendRocketMQMessageRequest() = default;
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
                     * 获取topic名称
                     * @return TopicName topic名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置topic名称
                     * @param _topicName topic名称
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
                     * 获取信息内容
                     * @return MsgBody 信息内容
                     * 
                     */
                    std::string GetMsgBody() const;

                    /**
                     * 设置信息内容
                     * @param _msgBody 信息内容
                     * 
                     */
                    void SetMsgBody(const std::string& _msgBody);

                    /**
                     * 判断参数 MsgBody 是否已赋值
                     * @return MsgBody 是否已赋值
                     * 
                     */
                    bool MsgBodyHasBeenSet() const;

                    /**
                     * 获取消息key信息
                     * @return MsgKey 消息key信息
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置消息key信息
                     * @param _msgKey 消息key信息
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
                     * 获取消息tag信息
                     * @return MsgTag 消息tag信息
                     * 
                     */
                    std::string GetMsgTag() const;

                    /**
                     * 设置消息tag信息
                     * @param _msgTag 消息tag信息
                     * 
                     */
                    void SetMsgTag(const std::string& _msgTag);

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     * 
                     */
                    bool MsgTagHasBeenSet() const;

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
                     * topic名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 信息内容
                     */
                    std::string m_msgBody;
                    bool m_msgBodyHasBeenSet;

                    /**
                     * 消息key信息
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * 消息tag信息
                     */
                    std::string m_msgTag;
                    bool m_msgTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDROCKETMQMESSAGEREQUEST_H_
