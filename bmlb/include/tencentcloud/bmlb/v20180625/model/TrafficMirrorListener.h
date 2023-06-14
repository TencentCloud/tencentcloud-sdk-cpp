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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORLISTENER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取流量镜像的监听器列表信息时返回的与流量镜像绑定的监听器信息。
                */
                class TrafficMirrorListener : public AbstractModel
                {
                public:
                    TrafficMirrorListener();
                    ~TrafficMirrorListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
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
                     * 获取监听器名称。
                     * @return ListenerName 监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称。
                     * @param _listenerName 监听器名称。
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
                     * 获取七层监听器协议类型，可选值：http,https。
                     * @return Protocol 七层监听器协议类型，可选值：http,https。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置七层监听器协议类型，可选值：http,https。
                     * @param _protocol 七层监听器协议类型，可选值：http,https。
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
                     * 获取监听器的监听端口。
                     * @return LoadBalancerPort 监听器的监听端口。
                     * 
                     */
                    uint64_t GetLoadBalancerPort() const;

                    /**
                     * 设置监听器的监听端口。
                     * @param _loadBalancerPort 监听器的监听端口。
                     * 
                     */
                    void SetLoadBalancerPort(const uint64_t& _loadBalancerPort);

                    /**
                     * 判断参数 LoadBalancerPort 是否已赋值
                     * @return LoadBalancerPort 是否已赋值
                     * 
                     */
                    bool LoadBalancerPortHasBeenSet() const;

                    /**
                     * 获取当前带宽。
                     * @return Bandwidth 当前带宽。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置当前带宽。
                     * @param _bandwidth 当前带宽。
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取带宽上限。
                     * @return MaxBandwidth 带宽上限。
                     * 
                     */
                    uint64_t GetMaxBandwidth() const;

                    /**
                     * 设置带宽上限。
                     * @param _maxBandwidth 带宽上限。
                     * 
                     */
                    void SetMaxBandwidth(const uint64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取监听器类型。
                     * @return ListenerType 监听器类型。
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置监听器类型。
                     * @param _listenerType 监听器类型。
                     * 
                     */
                    void SetListenerType(const std::string& _listenerType);

                    /**
                     * 判断参数 ListenerType 是否已赋值
                     * @return ListenerType 是否已赋值
                     * 
                     */
                    bool ListenerTypeHasBeenSet() const;

                    /**
                     * 获取认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * @return SslMode 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * 
                     */
                    int64_t GetSslMode() const;

                    /**
                     * 设置认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * @param _sslMode 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * 
                     */
                    void SetSslMode(const int64_t& _sslMode);

                    /**
                     * 判断参数 SslMode 是否已赋值
                     * @return SslMode 是否已赋值
                     * 
                     */
                    bool SslModeHasBeenSet() const;

                    /**
                     * 获取服务端证书ID。
                     * @return CertId 服务端证书ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务端证书ID。
                     * @param _certId 服务端证书ID。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取客户端证书ID。
                     * @return CertCaId 客户端证书ID。
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置客户端证书ID。
                     * @param _certCaId 客户端证书ID。
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取添加时间。
                     * @return AddTimestamp 添加时间。
                     * 
                     */
                    std::string GetAddTimestamp() const;

                    /**
                     * 设置添加时间。
                     * @param _addTimestamp 添加时间。
                     * 
                     */
                    void SetAddTimestamp(const std::string& _addTimestamp);

                    /**
                     * 判断参数 AddTimestamp 是否已赋值
                     * @return AddTimestamp 是否已赋值
                     * 
                     */
                    bool AddTimestampHasBeenSet() const;

                    /**
                     * 获取负载均衡ID。
                     * @return LoadBalancerId 负载均衡ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡ID。
                     * @param _loadBalancerId 负载均衡ID。
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
                     * 获取私有网络名称。
                     * @return VpcName 私有网络名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称。
                     * @param _vpcName 私有网络名称。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取私有网络Cidr。
                     * @return VpcCidrBlock 私有网络Cidr。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置私有网络Cidr。
                     * @param _vpcCidrBlock 私有网络Cidr。
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取负载均衡的VIP。
                     * @return LoadBalancerVips 负载均衡的VIP。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡的VIP。
                     * @param _loadBalancerVips 负载均衡的VIP。
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取负载均衡名称。
                     * @return LoadBalancerName 负载均衡名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡名称。
                     * @param _loadBalancerName 负载均衡名称。
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
                     * 获取负载均衡的IPV6的VIP。
                     * @return LoadBalancerVipv6s 负载均衡的IPV6的VIP。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVipv6s() const;

                    /**
                     * 设置负载均衡的IPV6的VIP。
                     * @param _loadBalancerVipv6s 负载均衡的IPV6的VIP。
                     * 
                     */
                    void SetLoadBalancerVipv6s(const std::vector<std::string>& _loadBalancerVipv6s);

                    /**
                     * 判断参数 LoadBalancerVipv6s 是否已赋值
                     * @return LoadBalancerVipv6s 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipv6sHasBeenSet() const;

                    /**
                     * 获取支持的IP协议类型。ipv4或者是ipv6。
                     * @return IpProtocolType 支持的IP协议类型。ipv4或者是ipv6。
                     * 
                     */
                    std::string GetIpProtocolType() const;

                    /**
                     * 设置支持的IP协议类型。ipv4或者是ipv6。
                     * @param _ipProtocolType 支持的IP协议类型。ipv4或者是ipv6。
                     * 
                     */
                    void SetIpProtocolType(const std::string& _ipProtocolType);

                    /**
                     * 判断参数 IpProtocolType 是否已赋值
                     * @return IpProtocolType 是否已赋值
                     * 
                     */
                    bool IpProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 七层监听器协议类型，可选值：http,https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器的监听端口。
                     */
                    uint64_t m_loadBalancerPort;
                    bool m_loadBalancerPortHasBeenSet;

                    /**
                     * 当前带宽。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 带宽上限。
                     */
                    uint64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 监听器类型。
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     */
                    int64_t m_sslMode;
                    bool m_sslModeHasBeenSet;

                    /**
                     * 服务端证书ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 客户端证书ID。
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 添加时间。
                     */
                    std::string m_addTimestamp;
                    bool m_addTimestampHasBeenSet;

                    /**
                     * 负载均衡ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 私有网络名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 私有网络Cidr。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 负载均衡的VIP。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 负载均衡名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡的IPV6的VIP。
                     */
                    std::vector<std::string> m_loadBalancerVipv6s;
                    bool m_loadBalancerVipv6sHasBeenSet;

                    /**
                     * 支持的IP协议类型。ipv4或者是ipv6。
                     */
                    std::string m_ipProtocolType;
                    bool m_ipProtocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRRORLISTENER_H_
