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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RetentionPolicy.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateEnvironment请求参数结构体
                */
                class CreateEnvironmentRequest : public AbstractModel
                {
                public:
                    CreateEnvironmentRequest();
                    ~CreateEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境（命名空间）名称，不支持中字以及除了短线和下划线外的特殊字符且不超过16个字符。
                     * @return EnvironmentId 环境（命名空间）名称，不支持中字以及除了短线和下划线外的特殊字符且不超过16个字符。
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称，不支持中字以及除了短线和下划线外的特殊字符且不超过16个字符。
                     * @param EnvironmentId 环境（命名空间）名称，不支持中字以及除了短线和下划线外的特殊字符且不超过16个字符。
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取未消费消息过期时间，单位：秒，最小60，最大1296000，（15天）。
                     * @return MsgTTL 未消费消息过期时间，单位：秒，最小60，最大1296000，（15天）。
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 设置未消费消息过期时间，单位：秒，最小60，最大1296000，（15天）。
                     * @param MsgTTL 未消费消息过期时间，单位：秒，最小60，最大1296000，（15天）。
                     */
                    void SetMsgTTL(const uint64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取说明，128个字符以内。
                     * @return Remark 说明，128个字符以内。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，128个字符以内。
                     * @param Remark 说明，128个字符以内。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Pulsar 集群的ID
                     * @return ClusterId Pulsar 集群的ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID
                     * @param ClusterId Pulsar 集群的ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取消息保留策略
                     * @return RetentionPolicy 消息保留策略
                     */
                    RetentionPolicy GetRetentionPolicy() const;

                    /**
                     * 设置消息保留策略
                     * @param RetentionPolicy 消息保留策略
                     */
                    void SetRetentionPolicy(const RetentionPolicy& _retentionPolicy);

                    /**
                     * 判断参数 RetentionPolicy 是否已赋值
                     * @return RetentionPolicy 是否已赋值
                     */
                    bool RetentionPolicyHasBeenSet() const;

                private:

                    /**
                     * 环境（命名空间）名称，不支持中字以及除了短线和下划线外的特殊字符且不超过16个字符。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 未消费消息过期时间，单位：秒，最小60，最大1296000，（15天）。
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * 说明，128个字符以内。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 消息保留策略
                     */
                    RetentionPolicy m_retentionPolicy;
                    bool m_retentionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEENVIRONMENTREQUEST_H_
