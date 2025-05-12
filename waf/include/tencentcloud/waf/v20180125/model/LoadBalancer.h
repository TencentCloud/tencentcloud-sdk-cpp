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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 负载均衡的监听器
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡LD的ID
                     * @return LoadBalancerId 负载均衡LD的ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡LD的ID
                     * @param _loadBalancerId 负载均衡LD的ID
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
                     * 获取负载均衡LD的名称
                     * @return LoadBalancerName 负载均衡LD的名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡LD的名称
                     * @param _loadBalancerName 负载均衡LD的名称
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器的ID
                     * @return ListenerId 负载均衡监听器的ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器的ID
                     * @param _listenerId 负载均衡监听器的ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器的名称
                     * @return ListenerName 负载均衡监听器的名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置负载均衡监听器的名称
                     * @param _listenerName 负载均衡监听器的名称
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的端口
                     * @return Vport 负载均衡实例的端口
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置负载均衡实例的端口
                     * @param _vport 负载均衡实例的端口
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取负载均衡LD的地域
                     * @return Region 负载均衡LD的地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置负载均衡LD的地域
                     * @param _region 负载均衡LD的地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取监听器协议，http、https
                     * @return Protocol 监听器协议，http、https
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议，http、https
                     * @param _protocol 监听器协议，http、https
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器所在的zone
                     * @return Zone 负载均衡监听器所在的zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置负载均衡监听器所在的zone
                     * @param _zone 负载均衡监听器所在的zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的IP。域名化CLB VIP可填空。
                     * @return Vip 负载均衡实例的IP。域名化CLB VIP可填空。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置负载均衡实例的IP。域名化CLB VIP可填空。
                     * @param _vip 负载均衡实例的IP。域名化CLB VIP可填空。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取负载均衡的VPCID，公网为-1，内网按实际填写
                     * @return NumericalVpcId 负载均衡的VPCID，公网为-1，内网按实际填写
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置负载均衡的VPCID，公网为-1，内网按实际填写
                     * @param _numericalVpcId 负载均衡的VPCID，公网为-1，内网按实际填写
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网
                     * @return LoadBalancerType 负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网
                     * @param _loadBalancerType 负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡的域名
                     * @return LoadBalancerDomain 负载均衡的域名
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置负载均衡的域名
                     * @param _loadBalancerDomain 负载均衡的域名
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                private:

                    /**
                     * 负载均衡LD的ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡LD的名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡监听器的ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 负载均衡监听器的名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 负载均衡实例的端口
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 负载均衡LD的地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 监听器协议，http、https
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 负载均衡监听器所在的zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 负载均衡实例的IP。域名化CLB VIP可填空。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 负载均衡的VPCID，公网为-1，内网按实际填写
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * 负载均衡的网络类型。OPEN： 公网 INTERNAL ：内网
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡的域名
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCER_H_
