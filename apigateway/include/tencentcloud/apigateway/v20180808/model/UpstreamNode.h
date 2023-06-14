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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMNODE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 后端通道后端节点元数据
                */
                class UpstreamNode : public AbstractModel
                {
                public:
                    UpstreamNode();
                    ~UpstreamNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP或域名
                     * @return Host IP或域名
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置IP或域名
                     * @param _host IP或域名
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取端口[0, 65535]
                     * @return Port 端口[0, 65535]
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口[0, 65535]
                     * @param _port 端口[0, 65535]
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取权重[0, 100], 0为禁用
                     * @return Weight 权重[0, 100], 0为禁用
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重[0, 100], 0为禁用
                     * @param _weight 权重[0, 100], 0为禁用
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取CVM实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VmInstanceId CVM实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVmInstanceId() const;

                    /**
                     * 设置CVM实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vmInstanceId CVM实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVmInstanceId(const std::string& _vmInstanceId);

                    /**
                     * 判断参数 VmInstanceId 是否已赋值
                     * @return VmInstanceId 是否已赋值
                     * 
                     */
                    bool VmInstanceIdHasBeenSet() const;

                    /**
                     * 获取染色标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 染色标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置染色标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 染色标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取节点健康状态，创建、编辑时不需要传该参数。OFF：关闭，HEALTHY：健康，UNHEALTHY：异常，NO_DATA：数据未上报。目前只支持VPC通道。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Healthy 节点健康状态，创建、编辑时不需要传该参数。OFF：关闭，HEALTHY：健康，UNHEALTHY：异常，NO_DATA：数据未上报。目前只支持VPC通道。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthy() const;

                    /**
                     * 设置节点健康状态，创建、编辑时不需要传该参数。OFF：关闭，HEALTHY：健康，UNHEALTHY：异常，NO_DATA：数据未上报。目前只支持VPC通道。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthy 节点健康状态，创建、编辑时不需要传该参数。OFF：关闭，HEALTHY：健康，UNHEALTHY：异常，NO_DATA：数据未上报。目前只支持VPC通道。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthy(const std::string& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取K8S容器服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName K8S容器服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置K8S容器服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName K8S容器服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取K8S命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameSpace K8S命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置K8S命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameSpace K8S命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取TKE集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId TKE集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置TKE集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId TKE集群的ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Node的来源，取值范围：K8S
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source Node的来源，取值范围：K8S
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Node的来源，取值范围：K8S
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source Node的来源，取值范围：K8S
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取API网关内部记录唯一的服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqueServiceName API网关内部记录唯一的服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUniqueServiceName() const;

                    /**
                     * 设置API网关内部记录唯一的服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uniqueServiceName API网关内部记录唯一的服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUniqueServiceName(const std::string& _uniqueServiceName);

                    /**
                     * 判断参数 UniqueServiceName 是否已赋值
                     * @return UniqueServiceName 是否已赋值
                     * 
                     */
                    bool UniqueServiceNameHasBeenSet() const;

                private:

                    /**
                     * IP或域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 端口[0, 65535]
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 权重[0, 100], 0为禁用
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * CVM实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vmInstanceId;
                    bool m_vmInstanceIdHasBeenSet;

                    /**
                     * 染色标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 节点健康状态，创建、编辑时不需要传该参数。OFF：关闭，HEALTHY：健康，UNHEALTHY：异常，NO_DATA：数据未上报。目前只支持VPC通道。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * K8S容器服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * K8S命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * TKE集群的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node的来源，取值范围：K8S
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * API网关内部记录唯一的服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqueServiceName;
                    bool m_uniqueServiceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMNODE_H_
