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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_LOADBALANCER_H_

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
                * 获取负载均衡实例列表时返回的负载均衡信息。
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡器ID
                     * @return LoadBalancerId 负载均衡器ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡器ID
                     * @param _loadBalancerId 负载均衡器ID
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
                     * 获取项目ID，通过v2/DescribeProject 接口获得
                     * @return ProjectId 项目ID，通过v2/DescribeProject 接口获得
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID，通过v2/DescribeProject 接口获得
                     * @param _projectId 项目ID，通过v2/DescribeProject 接口获得
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取负载均衡器名称
                     * @return LoadBalancerName 负载均衡器名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡器名称
                     * @param _loadBalancerName 负载均衡器名称
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
                     * 获取负载均衡的类型 : open表示公网负载均衡类型，internal表示内网负载均衡类型
                     * @return LoadBalancerType 负载均衡的类型 : open表示公网负载均衡类型，internal表示内网负载均衡类型
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡的类型 : open表示公网负载均衡类型，internal表示内网负载均衡类型
                     * @param _loadBalancerType 负载均衡的类型 : open表示公网负载均衡类型，internal表示内网负载均衡类型
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
                     * 获取是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * @return Exclusive 是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * @param _exclusive 是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * @return TgwSetType 该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * 
                     */
                    std::string GetTgwSetType() const;

                    /**
                     * 设置该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * @param _tgwSetType 该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     * 
                     */
                    void SetTgwSetType(const std::string& _tgwSetType);

                    /**
                     * 判断参数 TgwSetType 是否已赋值
                     * @return TgwSetType 是否已赋值
                     * 
                     */
                    bool TgwSetTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * @return Domain 负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * @param _domain 负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取该负载均衡对应的所在的VpcId
                     * @return VpcId 该负载均衡对应的所在的VpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置该负载均衡对应的所在的VpcId
                     * @param _vpcId 该负载均衡对应的所在的VpcId
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
                     * 获取该负载均衡对应的所在的SubnetId
                     * @return SubnetId 该负载均衡对应的所在的SubnetId
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置该负载均衡对应的所在的SubnetId
                     * @param _subnetId 该负载均衡对应的所在的SubnetId
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
                     * 获取无
                     * @return Status 无
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置无
                     * @param _status 无
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取无
                     * @return PayMode 无
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置无
                     * @param _payMode 无
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return LatestPayMode 无
                     * 
                     */
                    std::string GetLatestPayMode() const;

                    /**
                     * 设置无
                     * @param _latestPayMode 无
                     * 
                     */
                    void SetLatestPayMode(const std::string& _latestPayMode);

                    /**
                     * 判断参数 LatestPayMode 是否已赋值
                     * @return LatestPayMode 是否已赋值
                     * 
                     */
                    bool LatestPayModeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return CreateTime 无
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置无
                     * @param _createTime 无
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return StatusTime 无
                     * 
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置无
                     * @param _statusTime 无
                     * 
                     */
                    void SetStatusTime(const std::string& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     * 
                     */
                    bool StatusTimeHasBeenSet() const;

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
                     * 获取负载均衡的IPV4的VIP。
                     * @return LoadBalancerVips 负载均衡的IPV4的VIP。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡的IPV4的VIP。
                     * @param _loadBalancerVips 负载均衡的IPV4的VIP。
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
                     * 获取无
                     * @return SupportListenerTypes 无
                     * 
                     */
                    std::vector<std::string> GetSupportListenerTypes() const;

                    /**
                     * 设置无
                     * @param _supportListenerTypes 无
                     * 
                     */
                    void SetSupportListenerTypes(const std::vector<std::string>& _supportListenerTypes);

                    /**
                     * 判断参数 SupportListenerTypes 是否已赋值
                     * @return SupportListenerTypes 是否已赋值
                     * 
                     */
                    bool SupportListenerTypesHasBeenSet() const;

                    /**
                     * 获取无
                     * @return Bandwidth 无
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置无
                     * @param _bandwidth 无
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
                     * 获取负载均衡个性化配置ID
                     * @return ConfId 负载均衡个性化配置ID
                     * 
                     */
                    std::string GetConfId() const;

                    /**
                     * 设置负载均衡个性化配置ID
                     * @param _confId 负载均衡个性化配置ID
                     * 
                     */
                    void SetConfId(const std::string& _confId);

                    /**
                     * 判断参数 ConfId 是否已赋值
                     * @return ConfId 是否已赋值
                     * 
                     */
                    bool ConfIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ConfName 无
                     * 
                     */
                    std::string GetConfName() const;

                    /**
                     * 设置无
                     * @param _confName 无
                     * 
                     */
                    void SetConfName(const std::string& _confName);

                    /**
                     * 判断参数 ConfName 是否已赋值
                     * @return ConfName 是否已赋值
                     * 
                     */
                    bool ConfNameHasBeenSet() const;

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
                     * 获取负载均衡IP协议类型。ipv4或者ipv6。
                     * @return IpProtocolType 负载均衡IP协议类型。ipv4或者ipv6。
                     * 
                     */
                    std::string GetIpProtocolType() const;

                    /**
                     * 设置负载均衡IP协议类型。ipv4或者ipv6。
                     * @param _ipProtocolType 负载均衡IP协议类型。ipv4或者ipv6。
                     * 
                     */
                    void SetIpProtocolType(const std::string& _ipProtocolType);

                    /**
                     * 判断参数 IpProtocolType 是否已赋值
                     * @return IpProtocolType 是否已赋值
                     * 
                     */
                    bool IpProtocolTypeHasBeenSet() const;

                    /**
                     * 获取保障型网关计费形式
                     * @return BzPayMode 保障型网关计费形式
                     * 
                     */
                    std::string GetBzPayMode() const;

                    /**
                     * 设置保障型网关计费形式
                     * @param _bzPayMode 保障型网关计费形式
                     * 
                     */
                    void SetBzPayMode(const std::string& _bzPayMode);

                    /**
                     * 判断参数 BzPayMode 是否已赋值
                     * @return BzPayMode 是否已赋值
                     * 
                     */
                    bool BzPayModeHasBeenSet() const;

                    /**
                     * 获取保障型网关四层计费指标
                     * @return BzL4Metrics 保障型网关四层计费指标
                     * 
                     */
                    std::string GetBzL4Metrics() const;

                    /**
                     * 设置保障型网关四层计费指标
                     * @param _bzL4Metrics 保障型网关四层计费指标
                     * 
                     */
                    void SetBzL4Metrics(const std::string& _bzL4Metrics);

                    /**
                     * 判断参数 BzL4Metrics 是否已赋值
                     * @return BzL4Metrics 是否已赋值
                     * 
                     */
                    bool BzL4MetricsHasBeenSet() const;

                    /**
                     * 获取保障型网关七层计费指标
                     * @return BzL7Metrics 保障型网关七层计费指标
                     * 
                     */
                    std::string GetBzL7Metrics() const;

                    /**
                     * 设置保障型网关七层计费指标
                     * @param _bzL7Metrics 保障型网关七层计费指标
                     * 
                     */
                    void SetBzL7Metrics(const std::string& _bzL7Metrics);

                    /**
                     * 判断参数 BzL7Metrics 是否已赋值
                     * @return BzL7Metrics 是否已赋值
                     * 
                     */
                    bool BzL7MetricsHasBeenSet() const;

                    /**
                     * 获取该负载均衡对应的所在的整形类型的VpcId
                     * @return IntVpcId 该负载均衡对应的所在的整形类型的VpcId
                     * 
                     */
                    uint64_t GetIntVpcId() const;

                    /**
                     * 设置该负载均衡对应的所在的整形类型的VpcId
                     * @param _intVpcId 该负载均衡对应的所在的整形类型的VpcId
                     * 
                     */
                    void SetIntVpcId(const uint64_t& _intVpcId);

                    /**
                     * 判断参数 IntVpcId 是否已赋值
                     * @return IntVpcId 是否已赋值
                     * 
                     */
                    bool IntVpcIdHasBeenSet() const;

                    /**
                     * 获取负载均衡的IPV6或者IPV4的VIP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurVips 负载均衡的IPV6或者IPV4的VIP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCurVips() const;

                    /**
                     * 设置负载均衡的IPV6或者IPV4的VIP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _curVips 负载均衡的IPV6或者IPV4的VIP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurVips(const std::vector<std::string>& _curVips);

                    /**
                     * 判断参数 CurVips 是否已赋值
                     * @return CurVips 是否已赋值
                     * 
                     */
                    bool CurVipsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡器ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 项目ID，通过v2/DescribeProject 接口获得
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 负载均衡器名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡的类型 : open表示公网负载均衡类型，internal表示内网负载均衡类型
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 是否筛选独占集群，0表示非独占集群，1表示四层独占集群，2表示七层独占集群，3表示四层和七层独占集群，4表示共享容灾
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 该负载均衡对应的tgw集群（fullnat,tunnel,dnat）
                     */
                    std::string m_tgwSetType;
                    bool m_tgwSetTypeHasBeenSet;

                    /**
                     * 负载均衡域名。规则：1-60个小写英文字母、数字、点号“.”或连接线“-”。内网类型的负载均衡不能配置该字段
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 该负载均衡对应的所在的VpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 该负载均衡对应的所在的SubnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 无
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_latestPayMode;
                    bool m_latestPayModeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_statusTime;
                    bool m_statusTimeHasBeenSet;

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
                     * 负载均衡的IPV4的VIP。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_supportListenerTypes;
                    bool m_supportListenerTypesHasBeenSet;

                    /**
                     * 无
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 负载均衡个性化配置ID
                     */
                    std::string m_confId;
                    bool m_confIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_confName;
                    bool m_confNameHasBeenSet;

                    /**
                     * 负载均衡的IPV6的VIP。
                     */
                    std::vector<std::string> m_loadBalancerVipv6s;
                    bool m_loadBalancerVipv6sHasBeenSet;

                    /**
                     * 负载均衡IP协议类型。ipv4或者ipv6。
                     */
                    std::string m_ipProtocolType;
                    bool m_ipProtocolTypeHasBeenSet;

                    /**
                     * 保障型网关计费形式
                     */
                    std::string m_bzPayMode;
                    bool m_bzPayModeHasBeenSet;

                    /**
                     * 保障型网关四层计费指标
                     */
                    std::string m_bzL4Metrics;
                    bool m_bzL4MetricsHasBeenSet;

                    /**
                     * 保障型网关七层计费指标
                     */
                    std::string m_bzL7Metrics;
                    bool m_bzL7MetricsHasBeenSet;

                    /**
                     * 该负载均衡对应的所在的整形类型的VpcId
                     */
                    uint64_t m_intVpcId;
                    bool m_intVpcIdHasBeenSet;

                    /**
                     * 负载均衡的IPV6或者IPV4的VIP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_curVips;
                    bool m_curVipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_LOADBALANCER_H_
