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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUPSTREAMREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUPSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamNode.h>
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
                * ModifyUpstream请求参数结构体
                */
                class ModifyUpstreamRequest : public AbstractModel
                {
                public:
                    ModifyUpstreamRequest();
                    ~ModifyUpstreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取后端通道唯一ID
                     * @return UpstreamId 后端通道唯一ID
                     * 
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置后端通道唯一ID
                     * @param _upstreamId 后端通道唯一ID
                     * 
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     * 
                     */
                    bool UpstreamIdHasBeenSet() const;

                    /**
                     * 获取后端通道名字
                     * @return UpstreamName 后端通道名字
                     * 
                     */
                    std::string GetUpstreamName() const;

                    /**
                     * 设置后端通道名字
                     * @param _upstreamName 后端通道名字
                     * 
                     */
                    void SetUpstreamName(const std::string& _upstreamName);

                    /**
                     * 判断参数 UpstreamName 是否已赋值
                     * @return UpstreamName 是否已赋值
                     * 
                     */
                    bool UpstreamNameHasBeenSet() const;

                    /**
                     * 获取后端通道描述
                     * @return UpstreamDescription 后端通道描述
                     * 
                     */
                    std::string GetUpstreamDescription() const;

                    /**
                     * 设置后端通道描述
                     * @param _upstreamDescription 后端通道描述
                     * 
                     */
                    void SetUpstreamDescription(const std::string& _upstreamDescription);

                    /**
                     * 判断参数 UpstreamDescription 是否已赋值
                     * @return UpstreamDescription 是否已赋值
                     * 
                     */
                    bool UpstreamDescriptionHasBeenSet() const;

                    /**
                     * 获取后端协议，取值范围：HTTP, HTTPS
                     * @return Scheme 后端协议，取值范围：HTTP, HTTPS
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置后端协议，取值范围：HTTP, HTTPS
                     * @param _scheme 后端协议，取值范围：HTTP, HTTPS
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取后端访问类型，取值范围：IP_PORT, K8S
                     * @return UpstreamType 后端访问类型，取值范围：IP_PORT, K8S
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置后端访问类型，取值范围：IP_PORT, K8S
                     * @param _upstreamType 后端访问类型，取值范围：IP_PORT, K8S
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡算法，取值范围：ROUND_ROBIN
                     * @return Algorithm 负载均衡算法，取值范围：ROUND_ROBIN
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置负载均衡算法，取值范围：ROUND_ROBIN
                     * @param _algorithm 负载均衡算法，取值范围：ROUND_ROBIN
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取VPC唯一ID
                     * @return UniqVpcId VPC唯一ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置VPC唯一ID
                     * @param _uniqVpcId VPC唯一ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取请求重试次数，默认3次
                     * @return Retries 请求重试次数，默认3次
                     * 
                     */
                    uint64_t GetRetries() const;

                    /**
                     * 设置请求重试次数，默认3次
                     * @param _retries 请求重试次数，默认3次
                     * 
                     */
                    void SetRetries(const uint64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     * 
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取网关转发到后端的 Host 请求头
                     * @return UpstreamHost 网关转发到后端的 Host 请求头
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置网关转发到后端的 Host 请求头
                     * @param _upstreamHost 网关转发到后端的 Host 请求头
                     * 
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     * 
                     */
                    bool UpstreamHostHasBeenSet() const;

                    /**
                     * 获取后端节点列表
                     * @return Nodes 后端节点列表
                     * 
                     */
                    std::vector<UpstreamNode> GetNodes() const;

                    /**
                     * 设置后端节点列表
                     * @param _nodes 后端节点列表
                     * 
                     */
                    void SetNodes(const std::vector<UpstreamNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取健康检查配置，目前只支持VPC通道
                     * @return HealthChecker 健康检查配置，目前只支持VPC通道
                     * 
                     */
                    UpstreamHealthChecker GetHealthChecker() const;

                    /**
                     * 设置健康检查配置，目前只支持VPC通道
                     * @param _healthChecker 健康检查配置，目前只支持VPC通道
                     * 
                     */
                    void SetHealthChecker(const UpstreamHealthChecker& _healthChecker);

                    /**
                     * 判断参数 HealthChecker 是否已赋值
                     * @return HealthChecker 是否已赋值
                     * 
                     */
                    bool HealthCheckerHasBeenSet() const;

                    /**
                     * 获取容器服务配置
                     * @return K8sService 容器服务配置
                     * 
                     */
                    std::vector<K8sService> GetK8sService() const;

                    /**
                     * 设置容器服务配置
                     * @param _k8sService 容器服务配置
                     * 
                     */
                    void SetK8sService(const std::vector<K8sService>& _k8sService);

                    /**
                     * 判断参数 K8sService 是否已赋值
                     * @return K8sService 是否已赋值
                     * 
                     */
                    bool K8sServiceHasBeenSet() const;

                private:

                    /**
                     * 后端通道唯一ID
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                    /**
                     * 后端通道名字
                     */
                    std::string m_upstreamName;
                    bool m_upstreamNameHasBeenSet;

                    /**
                     * 后端通道描述
                     */
                    std::string m_upstreamDescription;
                    bool m_upstreamDescriptionHasBeenSet;

                    /**
                     * 后端协议，取值范围：HTTP, HTTPS
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 后端访问类型，取值范围：IP_PORT, K8S
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * 负载均衡算法，取值范围：ROUND_ROBIN
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * VPC唯一ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 请求重试次数，默认3次
                     */
                    uint64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * 网关转发到后端的 Host 请求头
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * 后端节点列表
                     */
                    std::vector<UpstreamNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 健康检查配置，目前只支持VPC通道
                     */
                    UpstreamHealthChecker m_healthChecker;
                    bool m_healthCheckerHasBeenSet;

                    /**
                     * 容器服务配置
                     */
                    std::vector<K8sService> m_k8sService;
                    bool m_k8sServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYUPSTREAMREQUEST_H_
