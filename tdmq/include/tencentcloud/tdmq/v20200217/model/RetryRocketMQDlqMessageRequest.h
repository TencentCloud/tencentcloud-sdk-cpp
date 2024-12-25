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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RETRYROCKETMQDLQMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RETRYROCKETMQDLQMESSAGEREQUEST_H_

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
                * RetryRocketMQDlqMessage请求参数结构体
                */
                class RetryRocketMQDlqMessageRequest : public AbstractModel
                {
                public:
                    RetryRocketMQDlqMessageRequest();
                    ~RetryRocketMQDlqMessageRequest() = default;
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
                     * 获取命名空间名称
                     * @return NamespaceId 命名空间名称
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceId 命名空间名称
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
                     * 获取group名称
                     * @return GroupName group名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置group名称
                     * @param _groupName group名称
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
                     * 获取死信消息ID
                     * @return MessageIds 死信消息ID
                     * 
                     */
                    std::vector<std::string> GetMessageIds() const;

                    /**
                     * 设置死信消息ID
                     * @param _messageIds 死信消息ID
                     * 
                     */
                    void SetMessageIds(const std::vector<std::string>& _messageIds);

                    /**
                     * 判断参数 MessageIds 是否已赋值
                     * @return MessageIds 是否已赋值
                     * 
                     */
                    bool MessageIdsHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * group名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 死信消息ID
                     */
                    std::vector<std::string> m_messageIds;
                    bool m_messageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RETRYROCKETMQDLQMESSAGEREQUEST_H_
