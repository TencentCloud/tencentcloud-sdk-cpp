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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPREQUEST_H_

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
                * ResetMsgSubOffsetByTimestamp请求参数结构体
                */
                class ResetMsgSubOffsetByTimestampRequest : public AbstractModel
                {
                public:
                    ResetMsgSubOffsetByTimestampRequest();
                    ~ResetMsgSubOffsetByTimestampRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间名称。
                     * @return EnvironmentId 命名空间名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间名称。
                     * @param _environmentId 命名空间名称。
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
                     * 获取主题名称。
                     * @return TopicName 主题名称。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称。
                     * @param _topicName 主题名称。
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
                     * 获取订阅者名称。
                     * @return Subscription 订阅者名称。
                     * 
                     */
                    std::string GetSubscription() const;

                    /**
                     * 设置订阅者名称。
                     * @param _subscription 订阅者名称。
                     * 
                     */
                    void SetSubscription(const std::string& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

                    /**
                     * 获取时间戳，精确到毫秒。
                     * @return ToTimestamp 时间戳，精确到毫秒。
                     * 
                     */
                    uint64_t GetToTimestamp() const;

                    /**
                     * 设置时间戳，精确到毫秒。
                     * @param _toTimestamp 时间戳，精确到毫秒。
                     * 
                     */
                    void SetToTimestamp(const uint64_t& _toTimestamp);

                    /**
                     * 判断参数 ToTimestamp 是否已赋值
                     * @return ToTimestamp 是否已赋值
                     * 
                     */
                    bool ToTimestampHasBeenSet() const;

                    /**
                     * 获取Pulsar 集群的ID
                     * @return ClusterId Pulsar 集群的ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID
                     * @param _clusterId Pulsar 集群的ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 订阅者名称。
                     */
                    std::string m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * 时间戳，精确到毫秒。
                     */
                    uint64_t m_toTimestamp;
                    bool m_toTimestampHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPREQUEST_H_
