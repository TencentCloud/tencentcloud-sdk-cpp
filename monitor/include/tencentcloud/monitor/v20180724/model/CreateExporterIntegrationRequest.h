/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEEXPORTERINTEGRATIONREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEEXPORTERINTEGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreateExporterIntegration请求参数结构体
                */
                class CreateExporterIntegrationRequest : public AbstractModel
                {
                public:
                    CreateExporterIntegrationRequest();
                    ~CreateExporterIntegrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取类型(可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)
                     * @return Kind 类型(可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置类型(可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)
                     * @param _kind 类型(可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取集成配置
                     * @return Content 集成配置
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置集成配置
                     * @param _content 集成配置
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Kubernetes 集群类型，可不填，取值如下：
<li> 1= 容器集群(TKE) </li>
<li> 2=弹性集群(EKS) </li>
<li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * @return KubeType Kubernetes 集群类型，可不填，取值如下：
<li> 1= 容器集群(TKE) </li>
<li> 2=弹性集群(EKS) </li>
<li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * 
                     */
                    int64_t GetKubeType() const;

                    /**
                     * 设置Kubernetes 集群类型，可不填，取值如下：
<li> 1= 容器集群(TKE) </li>
<li> 2=弹性集群(EKS) </li>
<li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * @param _kubeType Kubernetes 集群类型，可不填，取值如下：
<li> 1= 容器集群(TKE) </li>
<li> 2=弹性集群(EKS) </li>
<li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * 
                     */
                    void SetKubeType(const int64_t& _kubeType);

                    /**
                     * 判断参数 KubeType 是否已赋值
                     * @return KubeType 是否已赋值
                     * 
                     */
                    bool KubeTypeHasBeenSet() const;

                    /**
                     * 获取集群 ID，可不填
                     * @return ClusterId 集群 ID，可不填
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID，可不填
                     * @param _clusterId 集群 ID，可不填
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
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 类型(可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 集成配置
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Kubernetes 集群类型，可不填，取值如下：
<li> 1= 容器集群(TKE) </li>
<li> 2=弹性集群(EKS) </li>
<li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     */
                    int64_t m_kubeType;
                    bool m_kubeTypeHasBeenSet;

                    /**
                     * 集群 ID，可不填
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEEXPORTERINTEGRATIONREQUEST_H_
