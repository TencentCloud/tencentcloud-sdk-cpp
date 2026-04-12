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
                     * 获取<p>0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问</p>
                     * @return AccessType <p>0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问</p>
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问</p>
                     * @param _accessType <p>0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问</p>
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
                     * 获取<p>容器端口映射</p>
                     * @return ProtocolPorts <p>容器端口映射</p>
                     * 
                     */
                    std::vector<ProtocolPort> GetProtocolPorts() const;

                    /**
                     * 设置<p>容器端口映射</p>
                     * @param _protocolPorts <p>容器端口映射</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubnetId <p>子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subnetId <p>子网ID</p>
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
                     * 获取<p>是否创建 k8s service，默认为 false</p>
                     * @return DisableService <p>是否创建 k8s service，默认为 false</p>
                     * 
                     */
                    bool GetDisableService() const;

                    /**
                     * 设置<p>是否创建 k8s service，默认为 false</p>
                     * @param _disableService <p>是否创建 k8s service，默认为 false</p>
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
                     * 获取<p>service 是否为 headless 类型</p>
                     * @return HeadlessService <p>service 是否为 headless 类型</p>
                     * 
                     */
                    bool GetHeadlessService() const;

                    /**
                     * 设置<p>service 是否为 headless 类型</p>
                     * @param _headlessService <p>service 是否为 headless 类型</p>
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
                     * 获取<p>当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用</p>
                     * @return AllowDeleteService <p>当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用</p>
                     * 
                     */
                    bool GetAllowDeleteService() const;

                    /**
                     * 设置<p>当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用</p>
                     * @param _allowDeleteService <p>当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用</p>
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
                     * 获取<p>开启SessionAffinity，true为开启，false为不开启，默认为false</p>
                     * @return OpenSessionAffinity <p>开启SessionAffinity，true为开启，false为不开启，默认为false</p>
                     * 
                     */
                    bool GetOpenSessionAffinity() const;

                    /**
                     * 设置<p>开启SessionAffinity，true为开启，false为不开启，默认为false</p>
                     * @param _openSessionAffinity <p>开启SessionAffinity，true为开启，false为不开启，默认为false</p>
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
                     * 获取<p>SessionAffinity会话时间，默认10800</p>
                     * @return SessionAffinityTimeoutSeconds <p>SessionAffinity会话时间，默认10800</p>
                     * 
                     */
                    int64_t GetSessionAffinityTimeoutSeconds() const;

                    /**
                     * 设置<p>SessionAffinity会话时间，默认10800</p>
                     * @param _sessionAffinityTimeoutSeconds <p>SessionAffinity会话时间，默认10800</p>
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
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _serviceName <p>服务名称</p>
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
                     * 获取<p>外部流量策略</p>
                     * @return ExternalTrafficStrategy <p>外部流量策略</p>
                     * 
                     */
                    std::string GetExternalTrafficStrategy() const;

                    /**
                     * 设置<p>外部流量策略</p>
                     * @param _externalTrafficStrategy <p>外部流量策略</p>
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
                     * 获取<p>外部流量策略</p>
                     * @return ExternalTrafficPolicy <p>外部流量策略</p>
                     * 
                     */
                    std::string GetExternalTrafficPolicy() const;

                    /**
                     * 设置<p>外部流量策略</p>
                     * @param _externalTrafficPolicy <p>外部流量策略</p>
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
                     * 获取<p>负载均衡提供者</p>
                     * @return LoadBalancerProvisioner <p>负载均衡提供者</p>
                     * 
                     */
                    std::string GetLoadBalancerProvisioner() const;

                    /**
                     * 设置<p>负载均衡提供者</p>
                     * @param _loadBalancerProvisioner <p>负载均衡提供者</p>
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
                     * 获取<p>负载均衡类型，Intranet表示内网，Internet表示外网</p>
                     * @return LoadBalancingType <p>负载均衡类型，Intranet表示内网，Internet表示外网</p>
                     * 
                     */
                    std::string GetLoadBalancingType() const;

                    /**
                     * 设置<p>负载均衡类型，Intranet表示内网，Internet表示外网</p>
                     * @param _loadBalancingType <p>负载均衡类型，Intranet表示内网，Internet表示外网</p>
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
                     * 获取<p>k8s负载均衡内网vip</p>
                     * @return ClusterIp <p>k8s负载均衡内网vip</p>
                     * 
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置<p>k8s负载均衡内网vip</p>
                     * @param _clusterIp <p>k8s负载均衡内网vip</p>
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
                     * 获取<p>禁用服务Int记录</p>
                     * @return DisableServiceInt <p>禁用服务Int记录</p>
                     * 
                     */
                    uint64_t GetDisableServiceInt() const;

                    /**
                     * 设置<p>禁用服务Int记录</p>
                     * @param _disableServiceInt <p>禁用服务Int记录</p>
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
                     * 获取<p>开启SessionAffinity Int记录</p>
                     * @return OpenSessionAffinityInt <p>开启SessionAffinity Int记录</p>
                     * 
                     */
                    uint64_t GetOpenSessionAffinityInt() const;

                    /**
                     * 设置<p>开启SessionAffinity Int记录</p>
                     * @param _openSessionAffinityInt <p>开启SessionAffinity Int记录</p>
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
                     * 获取<p>开启HeadlessService int记录</p>
                     * @return HeadlessServiceInt <p>开启HeadlessService int记录</p>
                     * 
                     */
                    uint64_t GetHeadlessServiceInt() const;

                    /**
                     * 设置<p>开启HeadlessService int记录</p>
                     * @param _headlessServiceInt <p>开启HeadlessService int记录</p>
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
                     * 获取<p>服务名称</p>
                     * @return Name <p>服务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _name <p>服务名称</p>
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
                     * 获取<p>VPC网络ID</p>
                     * @return VpcId <p>VPC网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC网络ID</p>
                     * @param _vpcId <p>VPC网络ID</p>
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
                     * 获取<p>负载均衡VIP</p>
                     * @return LoadBalancingIp <p>负载均衡VIP</p>
                     * 
                     */
                    std::string GetLoadBalancingIp() const;

                    /**
                     * 设置<p>负载均衡VIP</p>
                     * @param _loadBalancingIp <p>负载均衡VIP</p>
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
                     * 获取<p>负载均衡id</p>
                     * @return LoadBalancerId <p>负载均衡id</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡id</p>
                     * @param _loadBalancerId <p>负载均衡id</p>
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
                     * 获取<p>已存在的负载均衡id</p>
                     * @return ExistingLoadBalancerId <p>已存在的负载均衡id</p>
                     * 
                     */
                    std::string GetExistingLoadBalancerId() const;

                    /**
                     * 设置<p>已存在的负载均衡id</p>
                     * @param _existingLoadBalancerId <p>已存在的负载均衡id</p>
                     * 
                     */
                    void SetExistingLoadBalancerId(const std::string& _existingLoadBalancerId);

                    /**
                     * 判断参数 ExistingLoadBalancerId 是否已赋值
                     * @return ExistingLoadBalancerId 是否已赋值
                     * 
                     */
                    bool ExistingLoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>是否为全局服务（仅TCS环境使用）</p>
                     * @return EnableGlobalService <p>是否为全局服务（仅TCS环境使用）</p>
                     * 
                     */
                    bool GetEnableGlobalService() const;

                    /**
                     * 设置<p>是否为全局服务（仅TCS环境使用）</p>
                     * @param _enableGlobalService <p>是否为全局服务（仅TCS环境使用）</p>
                     * 
                     */
                    void SetEnableGlobalService(const bool& _enableGlobalService);

                    /**
                     * 判断参数 EnableGlobalService 是否已赋值
                     * @return EnableGlobalService 是否已赋值
                     * 
                     */
                    bool EnableGlobalServiceHasBeenSet() const;

                private:

                    /**
                     * <p>0:公网, 1:集群内访问, 2：NodePort, 3: VPC 内网访问</p>
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>容器端口映射</p>
                     */
                    std::vector<ProtocolPort> m_protocolPorts;
                    bool m_protocolPortsHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>是否创建 k8s service，默认为 false</p>
                     */
                    bool m_disableService;
                    bool m_disableServiceHasBeenSet;

                    /**
                     * <p>service 是否为 headless 类型</p>
                     */
                    bool m_headlessService;
                    bool m_headlessServiceHasBeenSet;

                    /**
                     * <p>当为 true 且 DisableService 也为 true 时，会删除之前创建的 service，请小心使用</p>
                     */
                    bool m_allowDeleteService;
                    bool m_allowDeleteServiceHasBeenSet;

                    /**
                     * <p>开启SessionAffinity，true为开启，false为不开启，默认为false</p>
                     */
                    bool m_openSessionAffinity;
                    bool m_openSessionAffinityHasBeenSet;

                    /**
                     * <p>SessionAffinity会话时间，默认10800</p>
                     */
                    int64_t m_sessionAffinityTimeoutSeconds;
                    bool m_sessionAffinityTimeoutSecondsHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>外部流量策略</p>
                     */
                    std::string m_externalTrafficStrategy;
                    bool m_externalTrafficStrategyHasBeenSet;

                    /**
                     * <p>外部流量策略</p>
                     */
                    std::string m_externalTrafficPolicy;
                    bool m_externalTrafficPolicyHasBeenSet;

                    /**
                     * <p>负载均衡提供者</p>
                     */
                    std::string m_loadBalancerProvisioner;
                    bool m_loadBalancerProvisionerHasBeenSet;

                    /**
                     * <p>负载均衡类型，Intranet表示内网，Internet表示外网</p>
                     */
                    std::string m_loadBalancingType;
                    bool m_loadBalancingTypeHasBeenSet;

                    /**
                     * <p>k8s负载均衡内网vip</p>
                     */
                    std::string m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * <p>禁用服务Int记录</p>
                     */
                    uint64_t m_disableServiceInt;
                    bool m_disableServiceIntHasBeenSet;

                    /**
                     * <p>开启SessionAffinity Int记录</p>
                     */
                    uint64_t m_openSessionAffinityInt;
                    bool m_openSessionAffinityIntHasBeenSet;

                    /**
                     * <p>开启HeadlessService int记录</p>
                     */
                    uint64_t m_headlessServiceInt;
                    bool m_headlessServiceIntHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>VPC网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>负载均衡VIP</p>
                     */
                    std::string m_loadBalancingIp;
                    bool m_loadBalancingIpHasBeenSet;

                    /**
                     * <p>负载均衡id</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>已存在的负载均衡id</p>
                     */
                    std::string m_existingLoadBalancerId;
                    bool m_existingLoadBalancerIdHasBeenSet;

                    /**
                     * <p>是否为全局服务（仅TCS环境使用）</p>
                     */
                    bool m_enableGlobalService;
                    bool m_enableGlobalServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESETTING_H_
