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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器网络设置。
                */
                class ServiceSetting : public AbstractModel
                {
                public:
                    ServiceSetting();
                    ~ServiceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
                     * @return AccessType 0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
                     * @param _accessType 0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取容器端口映射
                     * @return ProtocolPorts 容器端口映射
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置容器端口映射
                     * @param _protocolPorts 容器端口映射
                     * 
                     */
                    void SetProtocolPorts(const std::vector<ProtocolPort>& _protocolPorts);

                    /**
                     * 判断参数 ProtocolPorts 是否已赋值
                     * @return ProtocolPorts 是否已赋值
                     * 
                     */
                    bool ProtocolPortsHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取是否创建 k8s service，默认为 false
                     * @return DisableService 是否创建 k8s service，默认为 false
                     * 
                     */
                    bool GetDisableService() const;

                    /**
                     * 设置是否创建 k8s service，默认为 false
                     * @param _disableService 是否创建 k8s service，默认为 false
                     * 
                     */
                    void SetDisableService(const bool& _disableService);

                    /**
                     * 判断参数 DisableService 是否已赋值
                     * @return DisableService 是否已赋值
                     * 
                     */
                    bool DisableServiceHasBeenSet() const;

                    /**
                     * 获取service 是否为 headless 类型
                     * @return HeadlessService service 是否为 headless 类型
                     * 
                     */
                    bool GetHeadlessService() const;

                    /**
                     * 设置service 是否为 headless 类型
                     * @param _headlessService service 是否为 headless 类型
                     * 
                     */
                    void SetHeadlessService(const bool& _headlessService);

                    /**
                     * 判断参数 HeadlessService 是否已赋值
                     * @return HeadlessService 是否已赋值
                     * 
                     */
                    bool HeadlessServiceHasBeenSet() const;

                    /**
                     * 获取当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用
                     * @return AllowDeleteService 当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用
                     * 
                     */
                    bool GetAllowDeleteService() const;

                    /**
                     * 设置当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用
                     * @param _allowDeleteService 当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用
                     * 
                     */
                    void SetAllowDeleteService(const bool& _allowDeleteService);

                    /**
                     * 判断参数 AllowDeleteService 是否已赋值
                     * @return AllowDeleteService 是否已赋值
                     * 
                     */
                    bool AllowDeleteServiceHasBeenSet() const;

                    /**
                     * 获取开启SessionAffinity，true为开启，false为不开启，默认为false
                     * @return OpenSessionAffinity 开启SessionAffinity，true为开启，false为不开启，默认为false
                     * 
                     */
                    bool GetOpenSessionAffinity() const;

                    /**
                     * 设置开启SessionAffinity，true为开启，false为不开启，默认为false
                     * @param _openSessionAffinity 开启SessionAffinity，true为开启，false为不开启，默认为false
                     * 
                     */
                    void SetOpenSessionAffinity(const bool& _openSessionAffinity);

                    /**
                     * 判断参数 OpenSessionAffinity 是否已赋值
                     * @return OpenSessionAffinity 是否已赋值
                     * 
                     */
                    bool OpenSessionAffinityHasBeenSet() const;

                    /**
                     * 获取SessionAffinity会话时间，默认10800
                     * @return SessionAffinityTimeoutSeconds SessionAffinity会话时间，默认10800
                     * 
                     */
                    int64_t GetSessionAffinityTimeoutSeconds() const;

                    /**
                     * 设置SessionAffinity会话时间，默认10800
                     * @param _sessionAffinityTimeoutSeconds SessionAffinity会话时间，默认10800
                     * 
                     */
                    void SetSessionAffinityTimeoutSeconds(const int64_t& _sessionAffinityTimeoutSeconds);

                    /**
                     * 判断参数 SessionAffinityTimeoutSeconds 是否已赋值
                     * @return SessionAffinityTimeoutSeconds 是否已赋值
                     * 
                     */
                    bool SessionAffinityTimeoutSecondsHasBeenSet() const;

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
                     * 获取外部流量策略
                     * @return ExternalTrafficStrategy 外部流量策略
                     * 
                     */
                    std::string GetExternalTrafficStrategy() const;

                    /**
                     * 设置外部流量策略
                     * @param _externalTrafficStrategy 外部流量策略
                     * 
                     */
                    void SetExternalTrafficStrategy(const std::string& _externalTrafficStrategy);

                    /**
                     * 判断参数 ExternalTrafficStrategy 是否已赋值
                     * @return ExternalTrafficStrategy 是否已赋值
                     * 
                     */
                    bool ExternalTrafficStrategyHasBeenSet() const;

                    /**
                     * 获取外部流量策略
                     * @return ExternalTrafficPolicy 外部流量策略
                     * 
                     */
                    std::string GetExternalTrafficPolicy() const;

                    /**
                     * 设置外部流量策略
                     * @param _externalTrafficPolicy 外部流量策略
                     * 
                     */
                    void SetExternalTrafficPolicy(const std::string& _externalTrafficPolicy);

                    /**
                     * 判断参数 ExternalTrafficPolicy 是否已赋值
                     * @return ExternalTrafficPolicy 是否已赋值
                     * 
                     */
                    bool ExternalTrafficPolicyHasBeenSet() const;

                    /**
                     * 获取负载均衡提供者
                     * @return LoadBalancerProvisioner 负载均衡提供者
                     * 
                     */
                    std::string GetLoadBalancerProvisioner() const;

                    /**
                     * 设置负载均衡提供者
                     * @param _loadBalancerProvisioner 负载均衡提供者
                     * 
                     */
                    void SetLoadBalancerProvisioner(const std::string& _loadBalancerProvisioner);

                    /**
                     * 判断参数 LoadBalancerProvisioner 是否已赋值
                     * @return LoadBalancerProvisioner 是否已赋值
                     * 
                     */
                    bool LoadBalancerProvisionerHasBeenSet() const;

                    /**
                     * 获取负载均衡类型
                     * @return LoadBalancingType 负载均衡类型
                     * 
                     */
                    std::string GetLoadBalancingType() const;

                    /**
                     * 设置负载均衡类型
                     * @param _loadBalancingType 负载均衡类型
                     * 
                     */
                    void SetLoadBalancingType(const std::string& _loadBalancingType);

                    /**
                     * 判断参数 LoadBalancingType 是否已赋值
                     * @return LoadBalancingType 是否已赋值
                     * 
                     */
                    bool LoadBalancingTypeHasBeenSet() const;

                    /**
                     * 获取k8s负载均衡内网vip
                     * @return ClusterIp k8s负载均衡内网vip
                     * 
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置k8s负载均衡内网vip
                     * @param _clusterIp k8s负载均衡内网vip
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
                     * 获取禁用服务Int记录
                     * @return DisableServiceInt 禁用服务Int记录
                     * 
                     */
                    uint64_t GetDisableServiceInt() const;

                    /**
                     * 设置禁用服务Int记录
                     * @param _disableServiceInt 禁用服务Int记录
                     * 
                     */
                    void SetDisableServiceInt(const uint64_t& _disableServiceInt);

                    /**
                     * 判断参数 DisableServiceInt 是否已赋值
                     * @return DisableServiceInt 是否已赋值
                     * 
                     */
                    bool DisableServiceIntHasBeenSet() const;

                    /**
                     * 获取开启SessionAffinity Int记录
                     * @return OpenSessionAffinityInt 开启SessionAffinity Int记录
                     * 
                     */
                    uint64_t GetOpenSessionAffinityInt() const;

                    /**
                     * 设置开启SessionAffinity Int记录
                     * @param _openSessionAffinityInt 开启SessionAffinity Int记录
                     * 
                     */
                    void SetOpenSessionAffinityInt(const uint64_t& _openSessionAffinityInt);

                    /**
                     * 判断参数 OpenSessionAffinityInt 是否已赋值
                     * @return OpenSessionAffinityInt 是否已赋值
                     * 
                     */
                    bool OpenSessionAffinityIntHasBeenSet() const;

                    /**
                     * 获取开启HeadlessService int记录
                     * @return HeadlessServiceInt 开启HeadlessService int记录
                     * 
                     */
                    uint64_t GetHeadlessServiceInt() const;

                    /**
                     * 设置开启HeadlessService int记录
                     * @param _headlessServiceInt 开启HeadlessService int记录
                     * 
                     */
                    void SetHeadlessServiceInt(const uint64_t& _headlessServiceInt);

                    /**
                     * 判断参数 HeadlessServiceInt 是否已赋值
                     * @return HeadlessServiceInt 是否已赋值
                     * 
                     */
                    bool HeadlessServiceIntHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Name 服务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称
                     * @param _name 服务名称
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
                     * 获取VPC网络ID
                     * @return VpcId VPC网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID
                     * @param _vpcId VPC网络ID
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
                     * 获取负载均衡VIP
                     * @return LoadBalancingIp 负载均衡VIP
                     * 
                     */
                    std::string GetLoadBalancingIp() const;

                    /**
                     * 设置负载均衡VIP
                     * @param _loadBalancingIp 负载均衡VIP
                     * 
                     */
                    void SetLoadBalancingIp(const std::string& _loadBalancingIp);

                    /**
                     * 判断参数 LoadBalancingIp 是否已赋值
                     * @return LoadBalancingIp 是否已赋值
                     * 
                     */
                    bool LoadBalancingIpHasBeenSet() const;

                    /**
                     * 获取负载均衡id
                     * @return LoadBalancerId 负载均衡id
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡id
                     * @param _loadBalancerId 负载均衡id
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取已存在的负载均衡id
                     * @return ExistingLoadBalancerId 已存在的负载均衡id
                     * 
                     */
                    std::string GetExistingLoadBalancerId() const;

                    /**
                     * 设置已存在的负载均衡id
                     * @param _existingLoadBalancerId 已存在的负载均衡id
                     * 
                     */
                    void SetExistingLoadBalancerId(const std::string& _existingLoadBalancerId);

                    /**
                     * 判断参数 ExistingLoadBalancerId 是否已赋值
                     * @return ExistingLoadBalancerId 是否已赋值
                     * 
                     */
                    bool ExistingLoadBalancerIdHasBeenSet() const;

                private:

                    /**
                     * 0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 容器端口映射
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否创建 k8s service，默认为 false
                     */
                    bool m_disableService;
                    bool m_disableServiceHasBeenSet;

                    /**
                     * service 是否为 headless 类型
                     */
                    bool m_headlessService;
                    bool m_headlessServiceHasBeenSet;

                    /**
                     * 当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用
                     */
                    bool m_allowDeleteService;
                    bool m_allowDeleteServiceHasBeenSet;

                    /**
                     * 开启SessionAffinity，true为开启，false为不开启，默认为false
                     */
                    bool m_openSessionAffinity;
                    bool m_openSessionAffinityHasBeenSet;

                    /**
                     * SessionAffinity会话时间，默认10800
                     */
                    int64_t m_sessionAffinityTimeoutSeconds;
                    bool m_sessionAffinityTimeoutSecondsHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 外部流量策略
                     */
                    std::string m_externalTrafficStrategy;
                    bool m_externalTrafficStrategyHasBeenSet;

                    /**
                     * 外部流量策略
                     */
                    std::string m_externalTrafficPolicy;
                    bool m_externalTrafficPolicyHasBeenSet;

                    /**
                     * 负载均衡提供者
                     */
                    std::string m_loadBalancerProvisioner;
                    bool m_loadBalancerProvisionerHasBeenSet;

                    /**
                     * 负载均衡类型
                     */
                    std::string m_loadBalancingType;
                    bool m_loadBalancingTypeHasBeenSet;

                    /**
                     * k8s负载均衡内网vip
                     */
                    std::string m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * 禁用服务Int记录
                     */
                    uint64_t m_disableServiceInt;
                    bool m_disableServiceIntHasBeenSet;

                    /**
                     * 开启SessionAffinity Int记录
                     */
                    uint64_t m_openSessionAffinityInt;
                    bool m_openSessionAffinityIntHasBeenSet;

                    /**
                     * 开启HeadlessService int记录
                     */
                    uint64_t m_headlessServiceInt;
                    bool m_headlessServiceIntHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * VPC网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 负载均衡VIP
                     */
                    std::string m_loadBalancingIp;
                    bool m_loadBalancingIpHasBeenSet;

                    /**
                     * 负载均衡id
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 已存在的负载均衡id
                     */
                    std::string m_existingLoadBalancerId;
                    bool m_existingLoadBalancerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_
