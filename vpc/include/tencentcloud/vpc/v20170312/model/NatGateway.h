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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatGatewayAddress.h>
#include <tencentcloud/vpc/v20170312/model/DestinationIpPortTranslationNatRule.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/SourceIpTranslationNatRule.h>
#include <tencentcloud/vpc/v20170312/model/ConnectionStateTimeouts.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * NAT网关对象。
                */
                class NatGateway : public AbstractModel
                {
                public:
                    NatGateway();
                    ~NatGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NAT网关的ID。
                     * @return NatGatewayId NAT网关的ID。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID。
                     * @param _natGatewayId NAT网关的ID。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取NAT网关的名称。
                     * @return NatGatewayName NAT网关的名称。
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置NAT网关的名称。
                     * @param _natGatewayName NAT网关的名称。
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取NAT网关创建的时间。
                     * @return CreatedTime NAT网关创建的时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置NAT网关创建的时间。
                     * @param _createdTime NAT网关创建的时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取NAT网关的状态。
 'PENDING'：生产中，'DELETING'：删除中/子实例关闭中，'AVAILABLE'：运行中，'UPDATING'：升级中，
‘PENDFAILURE’：创建失败，‘DELETEFAILURE：删除失败，‘DENIED’：子实例关闭中
                     * @return State NAT网关的状态。
 'PENDING'：生产中，'DELETING'：删除中/子实例关闭中，'AVAILABLE'：运行中，'UPDATING'：升级中，
‘PENDFAILURE’：创建失败，‘DELETEFAILURE：删除失败，‘DENIED’：子实例关闭中
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置NAT网关的状态。
 'PENDING'：生产中，'DELETING'：删除中/子实例关闭中，'AVAILABLE'：运行中，'UPDATING'：升级中，
‘PENDFAILURE’：创建失败，‘DELETEFAILURE：删除失败，‘DENIED’：子实例关闭中
                     * @param _state NAT网关的状态。
 'PENDING'：生产中，'DELETING'：删除中/子实例关闭中，'AVAILABLE'：运行中，'UPDATING'：升级中，
‘PENDFAILURE’：创建失败，‘DELETEFAILURE：删除失败，‘DENIED’：子实例关闭中
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取网关最大外网出带宽(单位:Mbps)。
                     * @return InternetMaxBandwidthOut 网关最大外网出带宽(单位:Mbps)。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置网关最大外网出带宽(单位:Mbps)。
                     * @param _internetMaxBandwidthOut 网关最大外网出带宽(单位:Mbps)。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取网关并发连接上限。
                     * @return MaxConcurrentConnection 网关并发连接上限。
                     * 
                     */
                    uint64_t GetMaxConcurrentConnection() const;

                    /**
                     * 设置网关并发连接上限。
                     * @param _maxConcurrentConnection 网关并发连接上限。
                     * 
                     */
                    void SetMaxConcurrentConnection(const uint64_t& _maxConcurrentConnection);

                    /**
                     * 判断参数 MaxConcurrentConnection 是否已赋值
                     * @return MaxConcurrentConnection 是否已赋值
                     * 
                     */
                    bool MaxConcurrentConnectionHasBeenSet() const;

                    /**
                     * 获取绑定NAT网关的公网IP对象数组。
                     * @return PublicIpAddressSet 绑定NAT网关的公网IP对象数组。
                     * 
                     */
                    std::vector<NatGatewayAddress> GetPublicIpAddressSet() const;

                    /**
                     * 设置绑定NAT网关的公网IP对象数组。
                     * @param _publicIpAddressSet 绑定NAT网关的公网IP对象数组。
                     * 
                     */
                    void SetPublicIpAddressSet(const std::vector<NatGatewayAddress>& _publicIpAddressSet);

                    /**
                     * 判断参数 PublicIpAddressSet 是否已赋值
                     * @return PublicIpAddressSet 是否已赋值
                     * 
                     */
                    bool PublicIpAddressSetHasBeenSet() const;

                    /**
                     * 获取NAT网关网络状态。“AVAILABLE”:运行中, “UNAVAILABLE”:不可用, “INSUFFICIENT”:欠费停服。
                     * @return NetworkState NAT网关网络状态。“AVAILABLE”:运行中, “UNAVAILABLE”:不可用, “INSUFFICIENT”:欠费停服。
                     * 
                     */
                    std::string GetNetworkState() const;

                    /**
                     * 设置NAT网关网络状态。“AVAILABLE”:运行中, “UNAVAILABLE”:不可用, “INSUFFICIENT”:欠费停服。
                     * @param _networkState NAT网关网络状态。“AVAILABLE”:运行中, “UNAVAILABLE”:不可用, “INSUFFICIENT”:欠费停服。
                     * 
                     */
                    void SetNetworkState(const std::string& _networkState);

                    /**
                     * 判断参数 NetworkState 是否已赋值
                     * @return NetworkState 是否已赋值
                     * 
                     */
                    bool NetworkStateHasBeenSet() const;

                    /**
                     * 获取NAT网关的端口转发规则。
                     * @return DestinationIpPortTranslationNatRuleSet NAT网关的端口转发规则。
                     * 
                     */
                    std::vector<DestinationIpPortTranslationNatRule> GetDestinationIpPortTranslationNatRuleSet() const;

                    /**
                     * 设置NAT网关的端口转发规则。
                     * @param _destinationIpPortTranslationNatRuleSet NAT网关的端口转发规则。
                     * 
                     */
                    void SetDestinationIpPortTranslationNatRuleSet(const std::vector<DestinationIpPortTranslationNatRule>& _destinationIpPortTranslationNatRuleSet);

                    /**
                     * 判断参数 DestinationIpPortTranslationNatRuleSet 是否已赋值
                     * @return DestinationIpPortTranslationNatRuleSet 是否已赋值
                     * 
                     */
                    bool DestinationIpPortTranslationNatRuleSetHasBeenSet() const;

                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取NAT网关所在的可用区。
                     * @return Zone NAT网关所在的可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置NAT网关所在的可用区。
                     * @param _zone NAT网关所在的可用区。
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
                     * 获取绑定的专线网关ID。
                     * @return DirectConnectGatewayIds 绑定的专线网关ID。
                     * 
                     */
                    std::vector<std::string> GetDirectConnectGatewayIds() const;

                    /**
                     * 设置绑定的专线网关ID。
                     * @param _directConnectGatewayIds 绑定的专线网关ID。
                     * 
                     */
                    void SetDirectConnectGatewayIds(const std::vector<std::string>& _directConnectGatewayIds);

                    /**
                     * 判断参数 DirectConnectGatewayIds 是否已赋值
                     * @return DirectConnectGatewayIds 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdsHasBeenSet() const;

                    /**
                     * 获取所属子网ID。
                     * @return SubnetId 所属子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID。
                     * @param _subnetId 所属子网ID。
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
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取NAT网关绑定的安全组列表
                     * @return SecurityGroupSet NAT网关绑定的安全组列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupSet() const;

                    /**
                     * 设置NAT网关绑定的安全组列表
                     * @param _securityGroupSet NAT网关绑定的安全组列表
                     * 
                     */
                    void SetSecurityGroupSet(const std::vector<std::string>& _securityGroupSet);

                    /**
                     * 判断参数 SecurityGroupSet 是否已赋值
                     * @return SecurityGroupSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupSetHasBeenSet() const;

                    /**
                     * 获取NAT网关的SNAT转发规则。
                     * @return SourceIpTranslationNatRuleSet NAT网关的SNAT转发规则。
                     * 
                     */
                    std::vector<SourceIpTranslationNatRule> GetSourceIpTranslationNatRuleSet() const;

                    /**
                     * 设置NAT网关的SNAT转发规则。
                     * @param _sourceIpTranslationNatRuleSet NAT网关的SNAT转发规则。
                     * 
                     */
                    void SetSourceIpTranslationNatRuleSet(const std::vector<SourceIpTranslationNatRule>& _sourceIpTranslationNatRuleSet);

                    /**
                     * 判断参数 SourceIpTranslationNatRuleSet 是否已赋值
                     * @return SourceIpTranslationNatRuleSet 是否已赋值
                     * 
                     */
                    bool SourceIpTranslationNatRuleSetHasBeenSet() const;

                    /**
                     * 获取是否独享型NAT。
                     * @return IsExclusive 是否独享型NAT。
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置是否独享型NAT。
                     * @param _isExclusive 是否独享型NAT。
                     * 
                     */
                    void SetIsExclusive(const bool& _isExclusive);

                    /**
                     * 判断参数 IsExclusive 是否已赋值
                     * @return IsExclusive 是否已赋值
                     * 
                     */
                    bool IsExclusiveHasBeenSet() const;

                    /**
                     * 获取独享型NAT所在的网关集群的带宽(单位:Mbps)，当IsExclusive为false时无此字段。
                     * @return ExclusiveGatewayBandwidth 独享型NAT所在的网关集群的带宽(单位:Mbps)，当IsExclusive为false时无此字段。
                     * 
                     */
                    uint64_t GetExclusiveGatewayBandwidth() const;

                    /**
                     * 设置独享型NAT所在的网关集群的带宽(单位:Mbps)，当IsExclusive为false时无此字段。
                     * @param _exclusiveGatewayBandwidth 独享型NAT所在的网关集群的带宽(单位:Mbps)，当IsExclusive为false时无此字段。
                     * 
                     */
                    void SetExclusiveGatewayBandwidth(const uint64_t& _exclusiveGatewayBandwidth);

                    /**
                     * 判断参数 ExclusiveGatewayBandwidth 是否已赋值
                     * @return ExclusiveGatewayBandwidth 是否已赋值
                     * 
                     */
                    bool ExclusiveGatewayBandwidthHasBeenSet() const;

                    /**
                     * 获取NAT网关是否被封禁。“NORMAL”：未被封禁，“RESTRICTED”：已被封禁。
                     * @return RestrictState NAT网关是否被封禁。“NORMAL”：未被封禁，“RESTRICTED”：已被封禁。
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置NAT网关是否被封禁。“NORMAL”：未被封禁，“RESTRICTED”：已被封禁。
                     * @param _restrictState NAT网关是否被封禁。“NORMAL”：未被封禁，“RESTRICTED”：已被封禁。
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关
                     * @return NatProductVersion NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关
                     * 
                     */
                    uint64_t GetNatProductVersion() const;

                    /**
                     * 设置NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关
                     * @param _natProductVersion NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关
                     * 
                     */
                    void SetNatProductVersion(const uint64_t& _natProductVersion);

                    /**
                     * 判断参数 NatProductVersion 是否已赋值
                     * @return NatProductVersion 是否已赋值
                     * 
                     */
                    bool NatProductVersionHasBeenSet() const;

                    /**
                     * 获取true代表仅允许匹配SNAT规则的内网IP的流量进行转发，false代表所有内网IP发起的流量都进行转发。默认为false。
                     * @return StrictSnatMode true代表仅允许匹配SNAT规则的内网IP的流量进行转发，false代表所有内网IP发起的流量都进行转发。默认为false。
                     * 
                     */
                    bool GetStrictSnatMode() const;

                    /**
                     * 设置true代表仅允许匹配SNAT规则的内网IP的流量进行转发，false代表所有内网IP发起的流量都进行转发。默认为false。
                     * @param _strictSnatMode true代表仅允许匹配SNAT规则的内网IP的流量进行转发，false代表所有内网IP发起的流量都进行转发。默认为false。
                     * 
                     */
                    void SetStrictSnatMode(const bool& _strictSnatMode);

                    /**
                     * 判断参数 StrictSnatMode 是否已赋值
                     * @return StrictSnatMode 是否已赋值
                     * 
                     */
                    bool StrictSnatModeHasBeenSet() const;

                    /**
                     * 获取是否启用根据目的网段选择SNAT使用的EIP功能	
                     * @return SmartScheduleMode 是否启用根据目的网段选择SNAT使用的EIP功能	
                     * 
                     */
                    bool GetSmartScheduleMode() const;

                    /**
                     * 设置是否启用根据目的网段选择SNAT使用的EIP功能	
                     * @param _smartScheduleMode 是否启用根据目的网段选择SNAT使用的EIP功能	
                     * 
                     */
                    void SetSmartScheduleMode(const bool& _smartScheduleMode);

                    /**
                     * 判断参数 SmartScheduleMode 是否已赋值
                     * @return SmartScheduleMode 是否已赋值
                     * 
                     */
                    bool SmartScheduleModeHasBeenSet() const;

                    /**
                     * 获取NAT实例归属的专属集群id
                     * @return DedicatedClusterId NAT实例归属的专属集群id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置NAT实例归属的专属集群id
                     * @param _dedicatedClusterId NAT实例归属的专属集群id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取NAT实例是否开启删除保护
                     * @return DeletionProtectionEnabled NAT实例是否开启删除保护
                     * 
                     */
                    bool GetDeletionProtectionEnabled() const;

                    /**
                     * 设置NAT实例是否开启删除保护
                     * @param _deletionProtectionEnabled NAT实例是否开启删除保护
                     * 
                     */
                    void SetDeletionProtectionEnabled(const bool& _deletionProtectionEnabled);

                    /**
                     * 判断参数 DeletionProtectionEnabled 是否已赋值
                     * @return DeletionProtectionEnabled 是否已赋值
                     * 
                     */
                    bool DeletionProtectionEnabledHasBeenSet() const;

                    /**
                     * 获取NAT实例连接超时时间
                     * @return ConnectionStateTimeouts NAT实例连接超时时间
                     * 
                     */
                    ConnectionStateTimeouts GetConnectionStateTimeouts() const;

                    /**
                     * 设置NAT实例连接超时时间
                     * @param _connectionStateTimeouts NAT实例连接超时时间
                     * 
                     */
                    void SetConnectionStateTimeouts(const ConnectionStateTimeouts& _connectionStateTimeouts);

                    /**
                     * 判断参数 ConnectionStateTimeouts 是否已赋值
                     * @return ConnectionStateTimeouts 是否已赋值
                     * 
                     */
                    bool ConnectionStateTimeoutsHasBeenSet() const;

                    /**
                     * 获取独享实例规格。取值范围：ExclusiveSmall/ExclusiveMedium1/ExclusiveLarge1
                     * @return ExclusiveType 独享实例规格。取值范围：ExclusiveSmall/ExclusiveMedium1/ExclusiveLarge1
                     * 
                     */
                    std::string GetExclusiveType() const;

                    /**
                     * 设置独享实例规格。取值范围：ExclusiveSmall/ExclusiveMedium1/ExclusiveLarge1
                     * @param _exclusiveType 独享实例规格。取值范围：ExclusiveSmall/ExclusiveMedium1/ExclusiveLarge1
                     * 
                     */
                    void SetExclusiveType(const std::string& _exclusiveType);

                    /**
                     * 判断参数 ExclusiveType 是否已赋值
                     * @return ExclusiveType 是否已赋值
                     * 
                     */
                    bool ExclusiveTypeHasBeenSet() const;

                    /**
                     * 获取标准型NAT网关自动扩容
                     * @return AutoScaling 标准型NAT网关自动扩容
                     * 
                     */
                    bool GetAutoScaling() const;

                    /**
                     * 设置标准型NAT网关自动扩容
                     * @param _autoScaling 标准型NAT网关自动扩容
                     * 
                     */
                    void SetAutoScaling(const bool& _autoScaling);

                    /**
                     * 判断参数 AutoScaling 是否已赋值
                     * @return AutoScaling 是否已赋值
                     * 
                     */
                    bool AutoScalingHasBeenSet() const;

                    /**
                     * 获取是否代答公网发给NAT网关上弹性公网IP的ICMP echo请求报文，当前适用于标准型NAT网关
                     * @return ICMPProxy 是否代答公网发给NAT网关上弹性公网IP的ICMP echo请求报文，当前适用于标准型NAT网关
                     * 
                     */
                    bool GetICMPProxy() const;

                    /**
                     * 设置是否代答公网发给NAT网关上弹性公网IP的ICMP echo请求报文，当前适用于标准型NAT网关
                     * @param _iCMPProxy 是否代答公网发给NAT网关上弹性公网IP的ICMP echo请求报文，当前适用于标准型NAT网关
                     * 
                     */
                    void SetICMPProxy(const bool& _iCMPProxy);

                    /**
                     * 判断参数 ICMPProxy 是否已赋值
                     * @return ICMPProxy 是否已赋值
                     * 
                     */
                    bool ICMPProxyHasBeenSet() const;

                    /**
                     * 获取true代表同一个私网IP访问同一个公网目的IP时，固定使用同一个NAT网关上的弹性公网IP；false代表这种情况下使用的弹性公网IP不固定。默认为true。
                     * @return PublicAddressAffinity true代表同一个私网IP访问同一个公网目的IP时，固定使用同一个NAT网关上的弹性公网IP；false代表这种情况下使用的弹性公网IP不固定。默认为true。
                     * 
                     */
                    bool GetPublicAddressAffinity() const;

                    /**
                     * 设置true代表同一个私网IP访问同一个公网目的IP时，固定使用同一个NAT网关上的弹性公网IP；false代表这种情况下使用的弹性公网IP不固定。默认为true。
                     * @param _publicAddressAffinity true代表同一个私网IP访问同一个公网目的IP时，固定使用同一个NAT网关上的弹性公网IP；false代表这种情况下使用的弹性公网IP不固定。默认为true。
                     * 
                     */
                    void SetPublicAddressAffinity(const bool& _publicAddressAffinity);

                    /**
                     * 判断参数 PublicAddressAffinity 是否已赋值
                     * @return PublicAddressAffinity 是否已赋值
                     * 
                     */
                    bool PublicAddressAffinityHasBeenSet() const;

                private:

                    /**
                     * NAT网关的ID。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * NAT网关的名称。
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * NAT网关创建的时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * NAT网关的状态。
 'PENDING'：生产中，'DELETING'：删除中/子实例关闭中，'AVAILABLE'：运行中，'UPDATING'：升级中，
‘PENDFAILURE’：创建失败，‘DELETEFAILURE：删除失败，‘DENIED’：子实例关闭中
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 网关最大外网出带宽(单位:Mbps)。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 网关并发连接上限。
                     */
                    uint64_t m_maxConcurrentConnection;
                    bool m_maxConcurrentConnectionHasBeenSet;

                    /**
                     * 绑定NAT网关的公网IP对象数组。
                     */
                    std::vector<NatGatewayAddress> m_publicIpAddressSet;
                    bool m_publicIpAddressSetHasBeenSet;

                    /**
                     * NAT网关网络状态。“AVAILABLE”:运行中, “UNAVAILABLE”:不可用, “INSUFFICIENT”:欠费停服。
                     */
                    std::string m_networkState;
                    bool m_networkStateHasBeenSet;

                    /**
                     * NAT网关的端口转发规则。
                     */
                    std::vector<DestinationIpPortTranslationNatRule> m_destinationIpPortTranslationNatRuleSet;
                    bool m_destinationIpPortTranslationNatRuleSetHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT网关所在的可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 绑定的专线网关ID。
                     */
                    std::vector<std::string> m_directConnectGatewayIds;
                    bool m_directConnectGatewayIdsHasBeenSet;

                    /**
                     * 所属子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * NAT网关绑定的安全组列表
                     */
                    std::vector<std::string> m_securityGroupSet;
                    bool m_securityGroupSetHasBeenSet;

                    /**
                     * NAT网关的SNAT转发规则。
                     */
                    std::vector<SourceIpTranslationNatRule> m_sourceIpTranslationNatRuleSet;
                    bool m_sourceIpTranslationNatRuleSetHasBeenSet;

                    /**
                     * 是否独享型NAT。
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * 独享型NAT所在的网关集群的带宽(单位:Mbps)，当IsExclusive为false时无此字段。
                     */
                    uint64_t m_exclusiveGatewayBandwidth;
                    bool m_exclusiveGatewayBandwidthHasBeenSet;

                    /**
                     * NAT网关是否被封禁。“NORMAL”：未被封禁，“RESTRICTED”：已被封禁。
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * NAT网关类型，1表示传统型NAT网关，2表示标准型NAT网关
                     */
                    uint64_t m_natProductVersion;
                    bool m_natProductVersionHasBeenSet;

                    /**
                     * true代表仅允许匹配SNAT规则的内网IP的流量进行转发，false代表所有内网IP发起的流量都进行转发。默认为false。
                     */
                    bool m_strictSnatMode;
                    bool m_strictSnatModeHasBeenSet;

                    /**
                     * 是否启用根据目的网段选择SNAT使用的EIP功能	
                     */
                    bool m_smartScheduleMode;
                    bool m_smartScheduleModeHasBeenSet;

                    /**
                     * NAT实例归属的专属集群id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * NAT实例是否开启删除保护
                     */
                    bool m_deletionProtectionEnabled;
                    bool m_deletionProtectionEnabledHasBeenSet;

                    /**
                     * NAT实例连接超时时间
                     */
                    ConnectionStateTimeouts m_connectionStateTimeouts;
                    bool m_connectionStateTimeoutsHasBeenSet;

                    /**
                     * 独享实例规格。取值范围：ExclusiveSmall/ExclusiveMedium1/ExclusiveLarge1
                     */
                    std::string m_exclusiveType;
                    bool m_exclusiveTypeHasBeenSet;

                    /**
                     * 标准型NAT网关自动扩容
                     */
                    bool m_autoScaling;
                    bool m_autoScalingHasBeenSet;

                    /**
                     * 是否代答公网发给NAT网关上弹性公网IP的ICMP echo请求报文，当前适用于标准型NAT网关
                     */
                    bool m_iCMPProxy;
                    bool m_iCMPProxyHasBeenSet;

                    /**
                     * true代表同一个私网IP访问同一个公网目的IP时，固定使用同一个NAT网关上的弹性公网IP；false代表这种情况下使用的弹性公网IP不固定。默认为true。
                     */
                    bool m_publicAddressAffinity;
                    bool m_publicAddressAffinityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAY_H_
