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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERDETAIL_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/LBChargePrepaid.h>
#include <tencentcloud/clb/v20180317/model/ExtraInfo.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 负载均衡详细信息
                */
                class LoadBalancerDetail : public AbstractModel
                {
                public:
                    LoadBalancerDetail();
                    ~LoadBalancerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param LoadBalancerId 负载均衡实例 ID。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称。
                     * @return LoadBalancerName 负载均衡实例的名称。
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称。
                     * @param LoadBalancerName 负载均衡实例的名称。
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型：
Public：公网属性， Private：内网属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerType 负载均衡实例的网络类型：
Public：公网属性， Private：内网属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：
Public：公网属性， Private：内网属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerType 负载均衡实例的网络类型：
Public：公网属性， Private：内网属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的 VIP 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 负载均衡实例的 VIP 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置负载均衡实例的 VIP 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Address 负载均衡实例的 VIP 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 VIP 的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIPv6 负载均衡实例 VIP 的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddressIPv6() const;

                    /**
                     * 设置负载均衡实例 VIP 的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddressIPv6 负载均衡实例 VIP 的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddressIPv6(const std::string& _addressIPv6);

                    /**
                     * 判断参数 AddressIPv6 是否已赋值
                     * @return AddressIPv6 是否已赋值
                     */
                    bool AddressIPv6HasBeenSet() const;

                    /**
                     * 获取负载均衡实例IP版本，IPv4 | IPv6。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIPVersion 负载均衡实例IP版本，IPv4 | IPv6。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddressIPVersion() const;

                    /**
                     * 设置负载均衡实例IP版本，IPv4 | IPv6。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddressIPVersion 负载均衡实例IP版本，IPv4 | IPv6。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddressIPVersion(const std::string& _addressIPVersion);

                    /**
                     * 判断参数 AddressIPVersion 是否已赋值
                     * @return AddressIPVersion 是否已赋值
                     */
                    bool AddressIPVersionHasBeenSet() const;

                    /**
                     * 获取负载均衡实例IPv6地址类型，IPv6Nat64 | IPv6FullChain。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6Mode 负载均衡实例IPv6地址类型，IPv6Nat64 | IPv6FullChain。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIPv6Mode() const;

                    /**
                     * 设置负载均衡实例IPv6地址类型，IPv6Nat64 | IPv6FullChain。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IPv6Mode 负载均衡实例IPv6地址类型，IPv6Nat64 | IPv6FullChain。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIPv6Mode(const std::string& _iPv6Mode);

                    /**
                     * 判断参数 IPv6Mode 是否已赋值
                     * @return IPv6Mode 是否已赋值
                     */
                    bool IPv6ModeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所在可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 负载均衡实例所在可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置负载均衡实例所在可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Zone 负载均衡实例所在可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取负载均衡实例IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIsp 负载均衡实例IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddressIsp() const;

                    /**
                     * 设置负载均衡实例IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddressIsp 负载均衡实例IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddressIsp(const std::string& _addressIsp);

                    /**
                     * 判断参数 AddressIsp 是否已赋值
                     * @return AddressIsp 是否已赋值
                     */
                    bool AddressIspHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 负载均衡实例所属私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置负载均衡实例所属私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 负载均衡实例所属私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属的项目 ID， 0 表示默认项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 负载均衡实例所属的项目 ID， 0 表示默认项目。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置负载均衡实例所属的项目 ID， 0 表示默认项目。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 负载均衡实例所属的项目 ID， 0 表示默认项目。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的计费类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 负载均衡实例的计费类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置负载均衡实例的计费类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChargeType 负载均衡实例的计费类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAttributes 负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetworkAttributes 负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetworkAttributes(const InternetAccessible& _networkAttributes);

                    /**
                     * 判断参数 NetworkAttributes 是否已赋值
                     * @return NetworkAttributes 是否已赋值
                     */
                    bool NetworkAttributesHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的预付费相关属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrepaidAttributes 负载均衡实例的预付费相关属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LBChargePrepaid GetPrepaidAttributes() const;

                    /**
                     * 设置负载均衡实例的预付费相关属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrepaidAttributes 负载均衡实例的预付费相关属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrepaidAttributes(const LBChargePrepaid& _prepaidAttributes);

                    /**
                     * 判断参数 PrepaidAttributes 是否已赋值
                     * @return PrepaidAttributes 是否已赋值
                     */
                    bool PrepaidAttributesHasBeenSet() const;

                    /**
                     * 获取暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 设置暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtraInfo 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtraInfo(const ExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取负载均衡维度的个性化配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 负载均衡维度的个性化配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置负载均衡维度的个性化配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigId 负载均衡维度的个性化配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListenerId 负载均衡监听器 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ListenerId 负载均衡监听器 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取监听器协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 监听器协议。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 监听器协议。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取监听器端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 监听器端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置监听器端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 监听器端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取转发规则的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocationId 转发规则的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LocationId 转发规则的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Url 转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取后端目标ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetId 后端目标ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置后端目标ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetId 后端目标ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取后端目标的IP地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetAddress 后端目标的IP地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置后端目标的IP地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetAddress 后端目标的IP地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取后端目标监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetPort 后端目标监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTargetPort() const;

                    /**
                     * 设置后端目标监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetPort 后端目标监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetPort(const uint64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     */
                    bool TargetPortHasBeenSet() const;

                    /**
                     * 获取后端目标转发权重。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetWeight 后端目标转发权重。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTargetWeight() const;

                    /**
                     * 设置后端目标转发权重。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetWeight 后端目标转发权重。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetWeight(const uint64_t& _targetWeight);

                    /**
                     * 判断参数 TargetWeight 是否已赋值
                     * @return TargetWeight 是否已赋值
                     */
                    bool TargetWeightHasBeenSet() const;

                    /**
                     * 获取0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Isolation 0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Isolation 0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolation(const uint64_t& _isolation);

                    /**
                     * 判断参数 Isolation 是否已赋值
                     * @return Isolation 是否已赋值
                     */
                    bool IsolationHasBeenSet() const;

                    /**
                     * 获取负载均衡绑定的安全组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroup 负载均衡绑定的安全组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置负载均衡绑定的安全组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecurityGroup 负载均衡绑定的安全组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取负载均衡安全组上移特性是否开启标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerPassToTarget 负载均衡安全组上移特性是否开启标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLoadBalancerPassToTarget() const;

                    /**
                     * 设置负载均衡安全组上移特性是否开启标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerPassToTarget 负载均衡安全组上移特性是否开启标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerPassToTarget(const uint64_t& _loadBalancerPassToTarget);

                    /**
                     * 判断参数 LoadBalancerPassToTarget 是否已赋值
                     * @return LoadBalancerPassToTarget 是否已赋值
                     */
                    bool LoadBalancerPassToTargetHasBeenSet() const;

                    /**
                     * 获取后端目标健康状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHealth 后端目标健康状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetHealth() const;

                    /**
                     * 设置后端目标健康状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetHealth 后端目标健康状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetHealth(const std::string& _targetHealth);

                    /**
                     * 判断参数 TargetHealth 是否已赋值
                     * @return TargetHealth 是否已赋值
                     */
                    bool TargetHealthHasBeenSet() const;

                    /**
                     * 获取转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domains 转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomains() const;

                    /**
                     * 设置转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domains 转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomains(const std::string& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡实例的网络类型：
Public：公网属性， Private：内网属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡实例的状态，包括
0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 负载均衡实例 VIP 的IPv6地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIPv6;
                    bool m_addressIPv6HasBeenSet;

                    /**
                     * 负载均衡实例IP版本，IPv4 | IPv6。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIPVersion;
                    bool m_addressIPVersionHasBeenSet;

                    /**
                     * 负载均衡实例IPv6地址类型，IPv6Nat64 | IPv6FullChain。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPv6Mode;
                    bool m_iPv6ModeHasBeenSet;

                    /**
                     * 负载均衡实例所在可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 负载均衡实例IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIsp;
                    bool m_addressIspHasBeenSet;

                    /**
                     * 负载均衡实例所属私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 负载均衡实例所属的项目 ID， 0 表示默认项目。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 负载均衡实例的计费类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                    /**
                     * 负载均衡实例的预付费相关属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LBChargePrepaid m_prepaidAttributes;
                    bool m_prepaidAttributesHasBeenSet;

                    /**
                     * 暂做保留，一般用户无需关注。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 负载均衡维度的个性化配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 负载均衡监听器 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器协议。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 转发规则的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 转发规则的域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发规则的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 后端目标ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 后端目标的IP地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * 后端目标监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * 后端目标转发权重。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetWeight;
                    bool m_targetWeightHasBeenSet;

                    /**
                     * 0：表示未被隔离，1：表示被隔离。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * 负载均衡绑定的安全组列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 负载均衡安全组上移特性是否开启标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_loadBalancerPassToTarget;
                    bool m_loadBalancerPassToTargetHasBeenSet;

                    /**
                     * 后端目标健康状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetHealth;
                    bool m_targetHealthHasBeenSet;

                    /**
                     * 转发规则的域名列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LOADBALANCERDETAIL_H_
