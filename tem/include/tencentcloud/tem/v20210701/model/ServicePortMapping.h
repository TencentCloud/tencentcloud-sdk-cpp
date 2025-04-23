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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPING_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/ServicePortMappingItem.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 端口映射详细信息结构体
                */
                class ServicePortMapping : public AbstractModel
                {
                public:
                    ServicePortMapping();
                    ~ServicePortMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务类型：如：EXTERNAL，VPC，CLUSTER
                     * @return Type 服务类型：如：EXTERNAL，VPC，CLUSTER
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置服务类型：如：EXTERNAL，VPC，CLUSTER
                     * @param _type 服务类型：如：EXTERNAL，VPC，CLUSTER
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
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
                     * 获取集群内访问vip
                     * @return ClusterIp 集群内访问vip
                     * 
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置集群内访问vip
                     * @param _clusterIp 集群内访问vip
                     * 
                     */
                    void SetClusterIp(const std::string& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     * 
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取集群外方位vip
                     * @return ExternalIp 集群外方位vip
                     * 
                     */
                    std::string GetExternalIp() const;

                    /**
                     * 设置集群外方位vip
                     * @param _externalIp 集群外方位vip
                     * 
                     */
                    void SetExternalIp(const std::string& _externalIp);

                    /**
                     * 判断参数 ExternalIp 是否已赋值
                     * @return ExternalIp 是否已赋值
                     * 
                     */
                    bool ExternalIpHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取LoadBalance Id
                     * @return LoadBalanceId LoadBalance Id
                     * 
                     */
                    std::string GetLoadBalanceId() const;

                    /**
                     * 设置LoadBalance Id
                     * @param _loadBalanceId LoadBalance Id
                     * 
                     */
                    void SetLoadBalanceId(const std::string& _loadBalanceId);

                    /**
                     * 判断参数 LoadBalanceId 是否已赋值
                     * @return LoadBalanceId 是否已赋值
                     * 
                     */
                    bool LoadBalanceIdHasBeenSet() const;

                    /**
                     * 获取yaml 内容
                     * @return Yaml yaml 内容
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置yaml 内容
                     * @param _yaml yaml 内容
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取暴露端口列表
                     * @return Ports 暴露端口列表
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置暴露端口列表
                     * @param _ports 暴露端口列表
                     * 
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取端口映射数组
                     * @return PortMappingItemList 端口映射数组
                     * 
                     */
                    std::vector<ServicePortMappingItem> GetPortMappingItemList() const;

                    /**
                     * 设置端口映射数组
                     * @param _portMappingItemList 端口映射数组
                     * 
                     */
                    void SetPortMappingItemList(const std::vector<ServicePortMappingItem>& _portMappingItemList);

                    /**
                     * 判断参数 PortMappingItemList 是否已赋值
                     * @return PortMappingItemList 是否已赋值
                     * 
                     */
                    bool PortMappingItemListHasBeenSet() const;

                    /**
                     * 获取clb domain
                     * @return ExternalDomain clb domain
                     * 
                     */
                    std::string GetExternalDomain() const;

                    /**
                     * 设置clb domain
                     * @param _externalDomain clb domain
                     * 
                     */
                    void SetExternalDomain(const std::string& _externalDomain);

                    /**
                     * 判断参数 ExternalDomain 是否已赋值
                     * @return ExternalDomain 是否已赋值
                     * 
                     */
                    bool ExternalDomainHasBeenSet() const;

                private:

                    /**
                     * 服务类型：如：EXTERNAL，VPC，CLUSTER
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 集群内访问vip
                     */
                    std::string m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * 集群外方位vip
                     */
                    std::string m_externalIp;
                    bool m_externalIpHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * LoadBalance Id
                     */
                    std::string m_loadBalanceId;
                    bool m_loadBalanceIdHasBeenSet;

                    /**
                     * yaml 内容
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * 暴露端口列表
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 端口映射数组
                     */
                    std::vector<ServicePortMappingItem> m_portMappingItemList;
                    bool m_portMappingItemListHasBeenSet;

                    /**
                     * clb domain
                     */
                    std::string m_externalDomain;
                    bool m_externalDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPING_H_
