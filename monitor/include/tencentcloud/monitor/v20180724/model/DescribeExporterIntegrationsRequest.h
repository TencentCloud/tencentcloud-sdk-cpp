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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEEXPORTERINTEGRATIONSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEEXPORTERINTEGRATIONSREQUEST_H_

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
                * DescribeExporterIntegrations请求参数结构体
                */
                class DescribeExporterIntegrationsRequest : public AbstractModel
                {
                public:
                    DescribeExporterIntegrationsRequest();
                    ~DescribeExporterIntegrationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>Kubernetes 集群类型，可不填。取值如下：</p><li> 1= 容器集群(TKE) </li><li> 2=弹性集群(EKS) </li><li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * @return KubeType <p>Kubernetes 集群类型，可不填。取值如下：</p><li> 1= 容器集群(TKE) </li><li> 2=弹性集群(EKS) </li><li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * 
                     */
                    int64_t GetKubeType() const;

                    /**
                     * 设置<p>Kubernetes 集群类型，可不填。取值如下：</p><li> 1= 容器集群(TKE) </li><li> 2=弹性集群(EKS) </li><li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     * @param _kubeType <p>Kubernetes 集群类型，可不填。取值如下：</p><li> 1= 容器集群(TKE) </li><li> 2=弹性集群(EKS) </li><li> 3= Prometheus管理的弹性集群(MEKS) </li>
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
                     * 获取<p>集群 ID，可不填</p>
                     * @return ClusterId <p>集群 ID，可不填</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID，可不填</p>
                     * @param _clusterId <p>集群 ID，可不填</p>
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
                     * 获取<p>类型(不填返回全部集成。可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)</p>
                     * @return Kind <p>类型(不填返回全部集成。可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>类型(不填返回全部集成。可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)</p>
                     * @param _kind <p>类型(不填返回全部集成。可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)</p>
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
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Kubernetes 集群类型，可不填。取值如下：</p><li> 1= 容器集群(TKE) </li><li> 2=弹性集群(EKS) </li><li> 3= Prometheus管理的弹性集群(MEKS) </li>
                     */
                    int64_t m_kubeType;
                    bool m_kubeTypeHasBeenSet;

                    /**
                     * <p>集群 ID，可不填</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>类型(不填返回全部集成。可通过 DescribePrometheusIntegrations 接口获取，取每一项中的 ExporterType 字段)</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEEXPORTERINTEGRATIONSREQUEST_H_
