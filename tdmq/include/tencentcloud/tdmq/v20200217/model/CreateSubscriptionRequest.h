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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATESUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATESUBSCRIPTIONREQUEST_H_

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
                * CreateSubscription请求参数结构体
                */
                class CreateSubscriptionRequest : public AbstractModel
                {
                public:
                    CreateSubscriptionRequest();
                    ~CreateSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
                     * @param _environmentId 环境（命名空间）名称。
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
                     * 获取订阅者名称，不超过128个字符。
                     * @return SubscriptionName 订阅者名称，不超过128个字符。
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置订阅者名称，不超过128个字符。
                     * @param _subscriptionName 订阅者名称，不超过128个字符。
                     * 
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     * 
                     */
                    bool SubscriptionNameHasBeenSet() const;

                    /**
                     * 获取是否幂等创建，若否不允许创建同名的订阅关系。
                     * @return IsIdempotent 是否幂等创建，若否不允许创建同名的订阅关系。
                     * 
                     */
                    bool GetIsIdempotent() const;

                    /**
                     * 设置是否幂等创建，若否不允许创建同名的订阅关系。
                     * @param _isIdempotent 是否幂等创建，若否不允许创建同名的订阅关系。
                     * 
                     */
                    void SetIsIdempotent(const bool& _isIdempotent);

                    /**
                     * 判断参数 IsIdempotent 是否已赋值
                     * @return IsIdempotent 是否已赋值
                     * 
                     */
                    bool IsIdempotentHasBeenSet() const;

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

                    /**
                     * 获取备注，128个字符以内。
                     * @return Remark 备注，128个字符以内。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，128个字符以内。
                     * @param _remark 备注，128个字符以内。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否自动创建死信和重试主题，True 表示创建，False表示不创建，默认自动创建死信和重试主题。
                     * @return AutoCreatePolicyTopic 是否自动创建死信和重试主题，True 表示创建，False表示不创建，默认自动创建死信和重试主题。
                     * 
                     */
                    bool GetAutoCreatePolicyTopic() const;

                    /**
                     * 设置是否自动创建死信和重试主题，True 表示创建，False表示不创建，默认自动创建死信和重试主题。
                     * @param _autoCreatePolicyTopic 是否自动创建死信和重试主题，True 表示创建，False表示不创建，默认自动创建死信和重试主题。
                     * 
                     */
                    void SetAutoCreatePolicyTopic(const bool& _autoCreatePolicyTopic);

                    /**
                     * 判断参数 AutoCreatePolicyTopic 是否已赋值
                     * @return AutoCreatePolicyTopic 是否已赋值
                     * 
                     */
                    bool AutoCreatePolicyTopicHasBeenSet() const;

                    /**
                     * 获取指定死信和重试主题名称规范，LEGACY表示历史命名规则，COMMUNITY表示Pulsar社区命名规范
                     * @return PostFixPattern 指定死信和重试主题名称规范，LEGACY表示历史命名规则，COMMUNITY表示Pulsar社区命名规范
                     * 
                     */
                    std::string GetPostFixPattern() const;

                    /**
                     * 设置指定死信和重试主题名称规范，LEGACY表示历史命名规则，COMMUNITY表示Pulsar社区命名规范
                     * @param _postFixPattern 指定死信和重试主题名称规范，LEGACY表示历史命名规则，COMMUNITY表示Pulsar社区命名规范
                     * 
                     */
                    void SetPostFixPattern(const std::string& _postFixPattern);

                    /**
                     * 判断参数 PostFixPattern 是否已赋值
                     * @return PostFixPattern 是否已赋值
                     * 
                     */
                    bool PostFixPatternHasBeenSet() const;

                private:

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 订阅者名称，不超过128个字符。
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * 是否幂等创建，若否不允许创建同名的订阅关系。
                     */
                    bool m_isIdempotent;
                    bool m_isIdempotentHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 备注，128个字符以内。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否自动创建死信和重试主题，True 表示创建，False表示不创建，默认自动创建死信和重试主题。
                     */
                    bool m_autoCreatePolicyTopic;
                    bool m_autoCreatePolicyTopicHasBeenSet;

                    /**
                     * 指定死信和重试主题名称规范，LEGACY表示历史命名规则，COMMUNITY表示Pulsar社区命名规范
                     */
                    std::string m_postFixPattern;
                    bool m_postFixPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATESUBSCRIPTIONREQUEST_H_
