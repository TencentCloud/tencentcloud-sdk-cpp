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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETESERVICEDISCOVERYREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETESERVICEDISCOVERYREQUEST_H_

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
                * DeleteServiceDiscovery请求参数结构体
                */
                class DeleteServiceDiscoveryRequest : public AbstractModel
                {
                public:
                    DeleteServiceDiscoveryRequest();
                    ~DeleteServiceDiscoveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID，例如：prom-sdfk2342a
                     * @return InstanceId Prometheus 实例 ID，例如：prom-sdfk2342a
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID，例如：prom-sdfk2342a
                     * @param _instanceId Prometheus 实例 ID，例如：prom-sdfk2342a
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
                     * 获取<li>类型是 TKE，为对应的腾讯云容器服务集群 ID</li>
                     * @return KubeClusterId <li>类型是 TKE，为对应的腾讯云容器服务集群 ID</li>
                     * 
                     */
                    std::string GetKubeClusterId() const;

                    /**
                     * 设置<li>类型是 TKE，为对应的腾讯云容器服务集群 ID</li>
                     * @param _kubeClusterId <li>类型是 TKE，为对应的腾讯云容器服务集群 ID</li>
                     * 
                     */
                    void SetKubeClusterId(const std::string& _kubeClusterId);

                    /**
                     * 判断参数 KubeClusterId 是否已赋值
                     * @return KubeClusterId 是否已赋值
                     * 
                     */
                    bool KubeClusterIdHasBeenSet() const;

                    /**
                     * 获取用户 Kubernetes 集群类型：
<li> 1 = 容器服务集群(TKE) </li>
                     * @return KubeType 用户 Kubernetes 集群类型：
<li> 1 = 容器服务集群(TKE) </li>
                     * 
                     */
                    int64_t GetKubeType() const;

                    /**
                     * 设置用户 Kubernetes 集群类型：
<li> 1 = 容器服务集群(TKE) </li>
                     * @param _kubeType 用户 Kubernetes 集群类型：
<li> 1 = 容器服务集群(TKE) </li>
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
                     * 获取服务发现类型，取值如下：
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = PodMonitor</li>
                     * @return Type 服务发现类型，取值如下：
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = PodMonitor</li>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置服务发现类型，取值如下：
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = PodMonitor</li>
                     * @param _type 服务发现类型，取值如下：
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = PodMonitor</li>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取服务发现配置信息，YAML 格式，[具体YAML参数内容请参考](https://cloud.tencent.com/document/product/1416/55995#service-monitor)
                     * @return Yaml 服务发现配置信息，YAML 格式，[具体YAML参数内容请参考](https://cloud.tencent.com/document/product/1416/55995#service-monitor)
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置服务发现配置信息，YAML 格式，[具体YAML参数内容请参考](https://cloud.tencent.com/document/product/1416/55995#service-monitor)
                     * @param _yaml 服务发现配置信息，YAML 格式，[具体YAML参数内容请参考](https://cloud.tencent.com/document/product/1416/55995#service-monitor)
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID，例如：prom-sdfk2342a
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <li>类型是 TKE，为对应的腾讯云容器服务集群 ID</li>
                     */
                    std::string m_kubeClusterId;
                    bool m_kubeClusterIdHasBeenSet;

                    /**
                     * 用户 Kubernetes 集群类型：
<li> 1 = 容器服务集群(TKE) </li>
                     */
                    int64_t m_kubeType;
                    bool m_kubeTypeHasBeenSet;

                    /**
                     * 服务发现类型，取值如下：
<li> 1 = ServiceMonitor</li>
<li> 2 = PodMonitor</li>
<li> 3 = PodMonitor</li>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 服务发现配置信息，YAML 格式，[具体YAML参数内容请参考](https://cloud.tencent.com/document/product/1416/55995#service-monitor)
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETESERVICEDISCOVERYREQUEST_H_
