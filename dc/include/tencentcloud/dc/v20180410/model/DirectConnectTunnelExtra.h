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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNELEXTRA_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNELEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>
#include <tencentcloud/dc/v20180410/model/BFDInfo.h>
#include <tencentcloud/dc/v20180410/model/NQAInfo.h>
#include <tencentcloud/dc/v20180410/model/BGPStatus.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 专用通道扩展信息
                */
                class DirectConnectTunnelExtra : public AbstractModel
                {
                public:
                    DirectConnectTunnelExtra();
                    ~DirectConnectTunnelExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用通道ID
                     * @return DirectConnectTunnelId 专用通道ID
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置专用通道ID
                     * @param _directConnectTunnelId 专用通道ID
                     * 
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                    /**
                     * 获取物理专线ID
                     * @return DirectConnectId 物理专线ID
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置物理专线ID
                     * @param _directConnectId 物理专线ID
                     * 
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     * 
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取专用通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
                     * @return State 专用通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置专用通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
                     * @param _state 专用通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
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
                     * 获取物理专线的拥有者，开发商账号 ID
                     * @return DirectConnectOwnerAccount 物理专线的拥有者，开发商账号 ID
                     * 
                     */
                    std::string GetDirectConnectOwnerAccount() const;

                    /**
                     * 设置物理专线的拥有者，开发商账号 ID
                     * @param _directConnectOwnerAccount 物理专线的拥有者，开发商账号 ID
                     * 
                     */
                    void SetDirectConnectOwnerAccount(const std::string& _directConnectOwnerAccount);

                    /**
                     * 判断参数 DirectConnectOwnerAccount 是否已赋值
                     * @return DirectConnectOwnerAccount 是否已赋值
                     * 
                     */
                    bool DirectConnectOwnerAccountHasBeenSet() const;

                    /**
                     * 获取专用通道的拥有者，开发商账号 ID
                     * @return OwnerAccount 专用通道的拥有者，开发商账号 ID
                     * 
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置专用通道的拥有者，开发商账号 ID
                     * @param _ownerAccount 专用通道的拥有者，开发商账号 ID
                     * 
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     * @return NetworkType 网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     * @param _networkType 网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取VPC地域对应的网络名，如ap-guangzhou
                     * @return NetworkRegion VPC地域对应的网络名，如ap-guangzhou
                     * 
                     */
                    std::string GetNetworkRegion() const;

                    /**
                     * 设置VPC地域对应的网络名，如ap-guangzhou
                     * @param _networkRegion VPC地域对应的网络名，如ap-guangzhou
                     * 
                     */
                    void SetNetworkRegion(const std::string& _networkRegion);

                    /**
                     * 判断参数 NetworkRegion 是否已赋值
                     * @return NetworkRegion 是否已赋值
                     * 
                     */
                    bool NetworkRegionHasBeenSet() const;

                    /**
                     * 获取私有网络统一 ID 或者黑石网络统一 ID
                     * @return VpcId 私有网络统一 ID 或者黑石网络统一 ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络统一 ID 或者黑石网络统一 ID
                     * @param _vpcId 私有网络统一 ID 或者黑石网络统一 ID
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
                     * 获取专线网关 ID
                     * @return DirectConnectGatewayId 专线网关 ID
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关 ID
                     * @param _directConnectGatewayId 专线网关 ID
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     * @return RouteType BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     * @param _routeType BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     * 
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取用户侧BGP，Asn，AuthKey
                     * @return BgpPeer 用户侧BGP，Asn，AuthKey
                     * 
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置用户侧BGP，Asn，AuthKey
                     * @param _bgpPeer 用户侧BGP，Asn，AuthKey
                     * 
                     */
                    void SetBgpPeer(const BgpPeer& _bgpPeer);

                    /**
                     * 判断参数 BgpPeer 是否已赋值
                     * @return BgpPeer 是否已赋值
                     * 
                     */
                    bool BgpPeerHasBeenSet() const;

                    /**
                     * 获取用户侧网段地址
                     * @return RouteFilterPrefixes 用户侧网段地址
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置用户侧网段地址
                     * @param _routeFilterPrefixes 用户侧网段地址
                     * 
                     */
                    void SetRouteFilterPrefixes(const std::vector<RouteFilterPrefix>& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     * 
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取互联网通道公网网段地址
                     * @return PublicAddresses 互联网通道公网网段地址
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetPublicAddresses() const;

                    /**
                     * 设置互联网通道公网网段地址
                     * @param _publicAddresses 互联网通道公网网段地址
                     * 
                     */
                    void SetPublicAddresses(const std::vector<RouteFilterPrefix>& _publicAddresses);

                    /**
                     * 判断参数 PublicAddresses 是否已赋值
                     * @return PublicAddresses 是否已赋值
                     * 
                     */
                    bool PublicAddressesHasBeenSet() const;

                    /**
                     * 获取专用通道的Vlan
                     * @return Vlan 专用通道的Vlan
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置专用通道的Vlan
                     * @param _vlan 专用通道的Vlan
                     * 
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     * 
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取腾讯侧互联 IP
                     * @return TencentAddress 腾讯侧互联 IP
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置腾讯侧互联 IP
                     * @param _tencentAddress 腾讯侧互联 IP
                     * 
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     * 
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取腾讯侧备用互联IP
                     * @return TencentBackupAddress 腾讯侧备用互联IP
                     * 
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置腾讯侧备用互联IP
                     * @param _tencentBackupAddress 腾讯侧备用互联IP
                     * 
                     */
                    void SetTencentBackupAddress(const std::string& _tencentBackupAddress);

                    /**
                     * 判断参数 TencentBackupAddress 是否已赋值
                     * @return TencentBackupAddress 是否已赋值
                     * 
                     */
                    bool TencentBackupAddressHasBeenSet() const;

                    /**
                     * 获取用户侧互联 IP
                     * @return CustomerAddress 用户侧互联 IP
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置用户侧互联 IP
                     * @param _customerAddress 用户侧互联 IP
                     * 
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     * 
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取专用通道名称
                     * @return DirectConnectTunnelName 专用通道名称
                     * 
                     */
                    std::string GetDirectConnectTunnelName() const;

                    /**
                     * 设置专用通道名称
                     * @param _directConnectTunnelName 专用通道名称
                     * 
                     */
                    void SetDirectConnectTunnelName(const std::string& _directConnectTunnelName);

                    /**
                     * 判断参数 DirectConnectTunnelName 是否已赋值
                     * @return DirectConnectTunnelName 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelNameHasBeenSet() const;

                    /**
                     * 获取专用通道创建时间
                     * @return CreatedTime 专用通道创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置专用通道创建时间
                     * @param _createdTime 专用通道创建时间
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
                     * 获取专用通道带宽值
                     * @return Bandwidth 专用通道带宽值
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置专用通道带宽值
                     * @param _bandwidth 专用通道带宽值
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取关联的网络自定义探测ID
                     * @return NetDetectId 关联的网络自定义探测ID
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置关联的网络自定义探测ID
                     * @param _netDetectId 关联的网络自定义探测ID
                     * 
                     */
                    void SetNetDetectId(const std::string& _netDetectId);

                    /**
                     * 判断参数 NetDetectId 是否已赋值
                     * @return NetDetectId 是否已赋值
                     * 
                     */
                    bool NetDetectIdHasBeenSet() const;

                    /**
                     * 获取BGP community开关
                     * @return EnableBGPCommunity BGP community开关
                     * 
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置BGP community开关
                     * @param _enableBGPCommunity BGP community开关
                     * 
                     */
                    void SetEnableBGPCommunity(const bool& _enableBGPCommunity);

                    /**
                     * 判断参数 EnableBGPCommunity 是否已赋值
                     * @return EnableBGPCommunity 是否已赋值
                     * 
                     */
                    bool EnableBGPCommunityHasBeenSet() const;

                    /**
                     * 获取是否为Nat通道
                     * @return NatType 是否为Nat通道
                     * 
                     */
                    int64_t GetNatType() const;

                    /**
                     * 设置是否为Nat通道
                     * @param _natType 是否为Nat通道
                     * 
                     */
                    void SetNatType(const int64_t& _natType);

                    /**
                     * 判断参数 NatType 是否已赋值
                     * @return NatType 是否已赋值
                     * 
                     */
                    bool NatTypeHasBeenSet() const;

                    /**
                     * 获取VPC地域简码，如gz、cd
                     * @return VpcRegion VPC地域简码，如gz、cd
                     * 
                     */
                    std::string GetVpcRegion() const;

                    /**
                     * 设置VPC地域简码，如gz、cd
                     * @param _vpcRegion VPC地域简码，如gz、cd
                     * 
                     */
                    void SetVpcRegion(const std::string& _vpcRegion);

                    /**
                     * 判断参数 VpcRegion 是否已赋值
                     * @return VpcRegion 是否已赋值
                     * 
                     */
                    bool VpcRegionHasBeenSet() const;

                    /**
                     * 获取是否开启BFD
                     * @return BfdEnable 是否开启BFD
                     * 
                     */
                    int64_t GetBfdEnable() const;

                    /**
                     * 设置是否开启BFD
                     * @param _bfdEnable 是否开启BFD
                     * 
                     */
                    void SetBfdEnable(const int64_t& _bfdEnable);

                    /**
                     * 判断参数 BfdEnable 是否已赋值
                     * @return BfdEnable 是否已赋值
                     * 
                     */
                    bool BfdEnableHasBeenSet() const;

                    /**
                     * 获取是否开启NQA
                     * @return NqaEnable 是否开启NQA
                     * 
                     */
                    int64_t GetNqaEnable() const;

                    /**
                     * 设置是否开启NQA
                     * @param _nqaEnable 是否开启NQA
                     * 
                     */
                    void SetNqaEnable(const int64_t& _nqaEnable);

                    /**
                     * 判断参数 NqaEnable 是否已赋值
                     * @return NqaEnable 是否已赋值
                     * 
                     */
                    bool NqaEnableHasBeenSet() const;

                    /**
                     * 获取专用通道接入点类型
                     * @return AccessPointType 专用通道接入点类型
                     * 
                     */
                    std::string GetAccessPointType() const;

                    /**
                     * 设置专用通道接入点类型
                     * @param _accessPointType 专用通道接入点类型
                     * 
                     */
                    void SetAccessPointType(const std::string& _accessPointType);

                    /**
                     * 判断参数 AccessPointType 是否已赋值
                     * @return AccessPointType 是否已赋值
                     * 
                     */
                    bool AccessPointTypeHasBeenSet() const;

                    /**
                     * 获取专线网关名称
                     * @return DirectConnectGatewayName 专线网关名称
                     * 
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置专线网关名称
                     * @param _directConnectGatewayName 专线网关名称
                     * 
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取VPC名称
                     * @return VpcName VPC名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称
                     * @param _vpcName VPC名称
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
                     * 获取专用通道关联的物理专线是否签署了用户协议
                     * @return SignLaw 专用通道关联的物理专线是否签署了用户协议
                     * 
                     */
                    bool GetSignLaw() const;

                    /**
                     * 设置专用通道关联的物理专线是否签署了用户协议
                     * @param _signLaw 专用通道关联的物理专线是否签署了用户协议
                     * 
                     */
                    void SetSignLaw(const bool& _signLaw);

                    /**
                     * 判断参数 SignLaw 是否已赋值
                     * @return SignLaw 是否已赋值
                     * 
                     */
                    bool SignLawHasBeenSet() const;

                    /**
                     * 获取BFD配置信息
                     * @return BfdInfo BFD配置信息
                     * 
                     */
                    BFDInfo GetBfdInfo() const;

                    /**
                     * 设置BFD配置信息
                     * @param _bfdInfo BFD配置信息
                     * 
                     */
                    void SetBfdInfo(const BFDInfo& _bfdInfo);

                    /**
                     * 判断参数 BfdInfo 是否已赋值
                     * @return BfdInfo 是否已赋值
                     * 
                     */
                    bool BfdInfoHasBeenSet() const;

                    /**
                     * 获取NQA配置信息
                     * @return NqaInfo NQA配置信息
                     * 
                     */
                    NQAInfo GetNqaInfo() const;

                    /**
                     * 设置NQA配置信息
                     * @param _nqaInfo NQA配置信息
                     * 
                     */
                    void SetNqaInfo(const NQAInfo& _nqaInfo);

                    /**
                     * 判断参数 NqaInfo 是否已赋值
                     * @return NqaInfo 是否已赋值
                     * 
                     */
                    bool NqaInfoHasBeenSet() const;

                    /**
                     * 获取BGP状态
                     * @return BgpStatus BGP状态
                     * 
                     */
                    BGPStatus GetBgpStatus() const;

                    /**
                     * 设置BGP状态
                     * @param _bgpStatus BGP状态
                     * 
                     */
                    void SetBgpStatus(const BGPStatus& _bgpStatus);

                    /**
                     * 判断参数 BgpStatus 是否已赋值
                     * @return BgpStatus 是否已赋值
                     * 
                     */
                    bool BgpStatusHasBeenSet() const;

                    /**
                     * 获取是否开启IPv6
                     * @return IPv6Enable 是否开启IPv6
                     * 
                     */
                    int64_t GetIPv6Enable() const;

                    /**
                     * 设置是否开启IPv6
                     * @param _iPv6Enable 是否开启IPv6
                     * 
                     */
                    void SetIPv6Enable(const int64_t& _iPv6Enable);

                    /**
                     * 判断参数 IPv6Enable 是否已赋值
                     * @return IPv6Enable 是否已赋值
                     * 
                     */
                    bool IPv6EnableHasBeenSet() const;

                    /**
                     * 获取腾讯侧互联IPv6地址
                     * @return TencentIPv6Address 腾讯侧互联IPv6地址
                     * 
                     */
                    std::string GetTencentIPv6Address() const;

                    /**
                     * 设置腾讯侧互联IPv6地址
                     * @param _tencentIPv6Address 腾讯侧互联IPv6地址
                     * 
                     */
                    void SetTencentIPv6Address(const std::string& _tencentIPv6Address);

                    /**
                     * 判断参数 TencentIPv6Address 是否已赋值
                     * @return TencentIPv6Address 是否已赋值
                     * 
                     */
                    bool TencentIPv6AddressHasBeenSet() const;

                    /**
                     * 获取腾讯侧备用互联IPv6地址
                     * @return TencentBackupIPv6Address 腾讯侧备用互联IPv6地址
                     * 
                     */
                    std::string GetTencentBackupIPv6Address() const;

                    /**
                     * 设置腾讯侧备用互联IPv6地址
                     * @param _tencentBackupIPv6Address 腾讯侧备用互联IPv6地址
                     * 
                     */
                    void SetTencentBackupIPv6Address(const std::string& _tencentBackupIPv6Address);

                    /**
                     * 判断参数 TencentBackupIPv6Address 是否已赋值
                     * @return TencentBackupIPv6Address 是否已赋值
                     * 
                     */
                    bool TencentBackupIPv6AddressHasBeenSet() const;

                    /**
                     * 获取BGPv6状态
                     * @return BgpIPv6Status BGPv6状态
                     * 
                     */
                    BGPStatus GetBgpIPv6Status() const;

                    /**
                     * 设置BGPv6状态
                     * @param _bgpIPv6Status BGPv6状态
                     * 
                     */
                    void SetBgpIPv6Status(const BGPStatus& _bgpIPv6Status);

                    /**
                     * 判断参数 BgpIPv6Status 是否已赋值
                     * @return BgpIPv6Status 是否已赋值
                     * 
                     */
                    bool BgpIPv6StatusHasBeenSet() const;

                    /**
                     * 获取用户侧互联IPv6地址
                     * @return CustomerIPv6Address 用户侧互联IPv6地址
                     * 
                     */
                    std::string GetCustomerIPv6Address() const;

                    /**
                     * 设置用户侧互联IPv6地址
                     * @param _customerIPv6Address 用户侧互联IPv6地址
                     * 
                     */
                    void SetCustomerIPv6Address(const std::string& _customerIPv6Address);

                    /**
                     * 判断参数 CustomerIPv6Address 是否已赋值
                     * @return CustomerIPv6Address 是否已赋值
                     * 
                     */
                    bool CustomerIPv6AddressHasBeenSet() const;

                    /**
                     * 获取专用通道是否支持巨帧。1 支持，0 不支持
                     * @return JumboEnable 专用通道是否支持巨帧。1 支持，0 不支持
                     * 
                     */
                    int64_t GetJumboEnable() const;

                    /**
                     * 设置专用通道是否支持巨帧。1 支持，0 不支持
                     * @param _jumboEnable 专用通道是否支持巨帧。1 支持，0 不支持
                     * 
                     */
                    void SetJumboEnable(const int64_t& _jumboEnable);

                    /**
                     * 判断参数 JumboEnable 是否已赋值
                     * @return JumboEnable 是否已赋值
                     * 
                     */
                    bool JumboEnableHasBeenSet() const;

                    /**
                     * 获取专用通道是否支持高精度BFD。1支持，0不支持
                     * @return HighPrecisionBFDEnable 专用通道是否支持高精度BFD。1支持，0不支持
                     * 
                     */
                    int64_t GetHighPrecisionBFDEnable() const;

                    /**
                     * 设置专用通道是否支持高精度BFD。1支持，0不支持
                     * @param _highPrecisionBFDEnable 专用通道是否支持高精度BFD。1支持，0不支持
                     * 
                     */
                    void SetHighPrecisionBFDEnable(const int64_t& _highPrecisionBFDEnable);

                    /**
                     * 判断参数 HighPrecisionBFDEnable 是否已赋值
                     * @return HighPrecisionBFDEnable 是否已赋值
                     * 
                     */
                    bool HighPrecisionBFDEnableHasBeenSet() const;

                private:

                    /**
                     * 专用通道ID
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * 物理专线ID
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * 专用通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 物理专线的拥有者，开发商账号 ID
                     */
                    std::string m_directConnectOwnerAccount;
                    bool m_directConnectOwnerAccountHasBeenSet;

                    /**
                     * 专用通道的拥有者，开发商账号 ID
                     */
                    std::string m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * VPC地域对应的网络名，如ap-guangzhou
                     */
                    std::string m_networkRegion;
                    bool m_networkRegionHasBeenSet;

                    /**
                     * 私有网络统一 ID 或者黑石网络统一 ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 专线网关 ID
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * 用户侧BGP，Asn，AuthKey
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * 用户侧网段地址
                     */
                    std::vector<RouteFilterPrefix> m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * 互联网通道公网网段地址
                     */
                    std::vector<RouteFilterPrefix> m_publicAddresses;
                    bool m_publicAddressesHasBeenSet;

                    /**
                     * 专用通道的Vlan
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * 腾讯侧互联 IP
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 腾讯侧备用互联IP
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                    /**
                     * 用户侧互联 IP
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * 专用通道名称
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * 专用通道创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 专用通道带宽值
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 关联的网络自定义探测ID
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                    /**
                     * BGP community开关
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

                    /**
                     * 是否为Nat通道
                     */
                    int64_t m_natType;
                    bool m_natTypeHasBeenSet;

                    /**
                     * VPC地域简码，如gz、cd
                     */
                    std::string m_vpcRegion;
                    bool m_vpcRegionHasBeenSet;

                    /**
                     * 是否开启BFD
                     */
                    int64_t m_bfdEnable;
                    bool m_bfdEnableHasBeenSet;

                    /**
                     * 是否开启NQA
                     */
                    int64_t m_nqaEnable;
                    bool m_nqaEnableHasBeenSet;

                    /**
                     * 专用通道接入点类型
                     */
                    std::string m_accessPointType;
                    bool m_accessPointTypeHasBeenSet;

                    /**
                     * 专线网关名称
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * VPC名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 专用通道关联的物理专线是否签署了用户协议
                     */
                    bool m_signLaw;
                    bool m_signLawHasBeenSet;

                    /**
                     * BFD配置信息
                     */
                    BFDInfo m_bfdInfo;
                    bool m_bfdInfoHasBeenSet;

                    /**
                     * NQA配置信息
                     */
                    NQAInfo m_nqaInfo;
                    bool m_nqaInfoHasBeenSet;

                    /**
                     * BGP状态
                     */
                    BGPStatus m_bgpStatus;
                    bool m_bgpStatusHasBeenSet;

                    /**
                     * 是否开启IPv6
                     */
                    int64_t m_iPv6Enable;
                    bool m_iPv6EnableHasBeenSet;

                    /**
                     * 腾讯侧互联IPv6地址
                     */
                    std::string m_tencentIPv6Address;
                    bool m_tencentIPv6AddressHasBeenSet;

                    /**
                     * 腾讯侧备用互联IPv6地址
                     */
                    std::string m_tencentBackupIPv6Address;
                    bool m_tencentBackupIPv6AddressHasBeenSet;

                    /**
                     * BGPv6状态
                     */
                    BGPStatus m_bgpIPv6Status;
                    bool m_bgpIPv6StatusHasBeenSet;

                    /**
                     * 用户侧互联IPv6地址
                     */
                    std::string m_customerIPv6Address;
                    bool m_customerIPv6AddressHasBeenSet;

                    /**
                     * 专用通道是否支持巨帧。1 支持，0 不支持
                     */
                    int64_t m_jumboEnable;
                    bool m_jumboEnableHasBeenSet;

                    /**
                     * 专用通道是否支持高精度BFD。1支持，0不支持
                     */
                    int64_t m_highPrecisionBFDEnable;
                    bool m_highPrecisionBFDEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNELEXTRA_H_
