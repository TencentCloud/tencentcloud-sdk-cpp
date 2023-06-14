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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_INGRESSGATEWAY_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_INGRESSGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/Service.h>
#include <tencentcloud/tcm/v20210413/model/WorkloadConfig.h>
#include <tencentcloud/tcm/v20210413/model/LoadBalancer.h>
#include <tencentcloud/tcm/v20210413/model/IngressGatewayStatus.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * IngressGateway 实例信息
                */
                class IngressGateway : public AbstractModel
                {
                public:
                    IngressGateway();
                    ~IngressGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IngressGateway 实例名字
                     * @return Name IngressGateway 实例名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置IngressGateway 实例名字
                     * @param _name IngressGateway 实例名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取Service 配置
                     * @return Service Service 配置
                     * 
                     */
                    Service GetService() const;

                    /**
                     * 设置Service 配置
                     * @param _service Service 配置
                     * 
                     */
                    void SetService(const Service& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Workload 配置
                     * @return Workload Workload 配置
                     * 
                     */
                    WorkloadConfig GetWorkload() const;

                    /**
                     * 设置Workload 配置
                     * @param _workload Workload 配置
                     * 
                     */
                    void SetWorkload(const WorkloadConfig& _workload);

                    /**
                     * 判断参数 Workload 是否已赋值
                     * @return Workload 是否已赋值
                     * 
                     */
                    bool WorkloadHasBeenSet() const;

                    /**
                     * 获取负载均衡配置，自动创建 CLB 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancer 负载均衡配置，自动创建 CLB 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LoadBalancer GetLoadBalancer() const;

                    /**
                     * 设置负载均衡配置，自动创建 CLB 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalancer 负载均衡配置，自动创建 CLB 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalancer(const LoadBalancer& _loadBalancer);

                    /**
                     * 判断参数 LoadBalancer 是否已赋值
                     * @return LoadBalancer 是否已赋值
                     * 
                     */
                    bool LoadBalancerHasBeenSet() const;

                    /**
                     * 获取IngressGateway 状态信息，只读
                     * @return Status IngressGateway 状态信息，只读
                     * 
                     */
                    IngressGatewayStatus GetStatus() const;

                    /**
                     * 设置IngressGateway 状态信息，只读
                     * @param _status IngressGateway 状态信息，只读
                     * 
                     */
                    void SetStatus(const IngressGatewayStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负载均衡实例ID，使用已有 CLB 时返回
                     * @return LoadBalancerId 负载均衡实例ID，使用已有 CLB 时返回
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，使用已有 CLB 时返回
                     * @param _loadBalancerId 负载均衡实例ID，使用已有 CLB 时返回
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                private:

                    /**
                     * IngressGateway 实例名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Service 配置
                     */
                    Service m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Workload 配置
                     */
                    WorkloadConfig m_workload;
                    bool m_workloadHasBeenSet;

                    /**
                     * 负载均衡配置，自动创建 CLB 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LoadBalancer m_loadBalancer;
                    bool m_loadBalancerHasBeenSet;

                    /**
                     * IngressGateway 状态信息，只读
                     */
                    IngressGatewayStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负载均衡实例ID，使用已有 CLB 时返回
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_INGRESSGATEWAY_H_
