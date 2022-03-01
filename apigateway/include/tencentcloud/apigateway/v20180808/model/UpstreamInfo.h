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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamNode.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamHealthChecker.h>
#include <tencentcloud/apigateway/v20180808/model/K8sService.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * VPC通道信息集合
                */
                class UpstreamInfo : public AbstractModel
                {
                public:
                    UpstreamInfo();
                    ~UpstreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC通道唯一ID
                     * @return UpstreamId VPC通道唯一ID
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置VPC通道唯一ID
                     * @param UpstreamId VPC通道唯一ID
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     */
                    bool UpstreamIdHasBeenSet() const;

                    /**
                     * 获取VPC通道名字
                     * @return UpstreamName VPC通道名字
                     */
                    std::string GetUpstreamName() const;

                    /**
                     * 设置VPC通道名字
                     * @param UpstreamName VPC通道名字
                     */
                    void SetUpstreamName(const std::string& _upstreamName);

                    /**
                     * 判断参数 UpstreamName 是否已赋值
                     * @return UpstreamName 是否已赋值
                     */
                    bool UpstreamNameHasBeenSet() const;

                    /**
                     * 获取VPC通道描述
                     * @return UpstreamDescription VPC通道描述
                     */
                    std::string GetUpstreamDescription() const;

                    /**
                     * 设置VPC通道描述
                     * @param UpstreamDescription VPC通道描述
                     */
                    void SetUpstreamDescription(const std::string& _upstreamDescription);

                    /**
                     * 判断参数 UpstreamDescription 是否已赋值
                     * @return UpstreamDescription 是否已赋值
                     */
                    bool UpstreamDescriptionHasBeenSet() const;

                    /**
                     * 获取写意
                     * @return Scheme 写意
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置写意
                     * @param Scheme 写意
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取负载均衡算法
                     * @return Algorithm 负载均衡算法
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置负载均衡算法
                     * @param Algorithm 负载均衡算法
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取vpc唯一ID
                     * @return UniqVpcId vpc唯一ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc唯一ID
                     * @param UniqVpcId vpc唯一ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取请求重拾次数
                     * @return Retries 请求重拾次数
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置请求重拾次数
                     * @param Retries 请求重拾次数
                     */
                    void SetRetries(const uint64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取后端节点
                     * @return Nodes 后端节点
                     */
                    std::vector<UpstreamNode> GetNodes() const;

                    /**
                     * 设置后端节点
                     * @param Nodes 后端节点
                     */
                    void SetNodes(const std::vector<UpstreamNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param CreatedTime 创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthChecker 健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHealthChecker GetHealthChecker() const;

                    /**
                     * 设置健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthChecker 健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthChecker(const UpstreamHealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取Upstream的类型
                     * @return UpstreamType Upstream的类型
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置Upstream的类型
                     * @param UpstreamType Upstream的类型
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取k8s服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return K8sServices k8s服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<K8sService> GetK8sServices() const;

                    /**
                     * 设置k8s服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param K8sServices k8s服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetK8sServices(const std::vector<K8sService>& _k8sServices);

                    /**
                     * 判断参数 K8sServices 是否已赋值
                     * @return K8sServices 是否已赋值
                     */
                    bool K8sServicesHasBeenSet() const;

                    /**
                     * 获取vpc通道的Host
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamHost vpc通道的Host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置vpc通道的Host
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpstreamHost vpc通道的Host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     */
                    bool UpstreamHostHasBeenSet() const;

                private:

                    /**
                     * VPC通道唯一ID
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                    /**
                     * VPC通道名字
                     */
                    std::string m_upstreamName;
                    bool m_upstreamNameHasBeenSet;

                    /**
                     * VPC通道描述
                     */
                    std::string m_upstreamDescription;
                    bool m_upstreamDescriptionHasBeenSet;

                    /**
                     * 写意
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 负载均衡算法
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * vpc唯一ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 请求重拾次数
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * 后端节点
                     */
                    std::vector<UpstreamNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 健康检查配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * Upstream的类型
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * k8s服务配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<K8sService> m_k8sServices;
                    bool m_k8sServicesHasBeenSet;

                    /**
                     * vpc通道的Host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMINFO_H_
