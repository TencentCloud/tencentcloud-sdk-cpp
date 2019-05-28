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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNEL_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 专线通道信息列表
                */
                class DirectConnectTunnel : public AbstractModel
                {
                public:
                    DirectConnectTunnel();
                    ~DirectConnectTunnel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专线通道ID
                     * @return DirectConnectTunnelId 专线通道ID
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置专线通道ID
                     * @param DirectConnectTunnelId 专线通道ID
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                    /**
                     * 获取物理专线ID
                     * @return DirectConnectId 物理专线ID
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置物理专线ID
                     * @param DirectConnectId 物理专线ID
                     */
                    void SetDirectConnectId(const std::string& _directConnectId);

                    /**
                     * 判断参数 DirectConnectId 是否已赋值
                     * @return DirectConnectId 是否已赋值
                     */
                    bool DirectConnectIdHasBeenSet() const;

                    /**
                     * 获取专线通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
                     * @return State 专线通道状态
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
                    std::string GetState() const;

                    /**
                     * 设置专线通道状态
AVAILABLE:就绪或者已连接
PENDING:申请中
ALLOCATING:配置中
ALLOCATED:配置完成
ALTERING:修改中
DELETING:删除中
DELETED:删除完成
COMFIRMING:待接受
REJECTED:拒绝
                     * @param State 专线通道状态
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
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取物理专线的拥有者，开发商账号 ID
                     * @return DirectConnectOwnerAccount 物理专线的拥有者，开发商账号 ID
                     */
                    std::string GetDirectConnectOwnerAccount() const;

                    /**
                     * 设置物理专线的拥有者，开发商账号 ID
                     * @param DirectConnectOwnerAccount 物理专线的拥有者，开发商账号 ID
                     */
                    void SetDirectConnectOwnerAccount(const std::string& _directConnectOwnerAccount);

                    /**
                     * 判断参数 DirectConnectOwnerAccount 是否已赋值
                     * @return DirectConnectOwnerAccount 是否已赋值
                     */
                    bool DirectConnectOwnerAccountHasBeenSet() const;

                    /**
                     * 获取专线通道的拥有者，开发商账号 ID
                     * @return OwnerAccount 专线通道的拥有者，开发商账号 ID
                     */
                    std::string GetOwnerAccount() const;

                    /**
                     * 设置专线通道的拥有者，开发商账号 ID
                     * @param OwnerAccount 专线通道的拥有者，开发商账号 ID
                     */
                    void SetOwnerAccount(const std::string& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     * @return NetworkType 网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     * @param NetworkType 网络类型，分别为VPC、BMVPC、CCN
 VPC：私有网络 ，BMVPC：黑石网络，CCN：云联网
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取VPC地域
                     * @return NetworkRegion VPC地域
                     */
                    std::string GetNetworkRegion() const;

                    /**
                     * 设置VPC地域
                     * @param NetworkRegion VPC地域
                     */
                    void SetNetworkRegion(const std::string& _networkRegion);

                    /**
                     * 判断参数 NetworkRegion 是否已赋值
                     * @return NetworkRegion 是否已赋值
                     */
                    bool NetworkRegionHasBeenSet() const;

                    /**
                     * 获取私有网络统一 ID 或者黑石网络统一 ID
                     * @return VpcId 私有网络统一 ID 或者黑石网络统一 ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络统一 ID 或者黑石网络统一 ID
                     * @param VpcId 私有网络统一 ID 或者黑石网络统一 ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取专线网关 ID
                     * @return DirectConnectGatewayId 专线网关 ID
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关 ID
                     * @param DirectConnectGatewayId 专线网关 ID
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     * @return RouteType BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     * @param RouteType BGP ：BGP路由 STATIC：静态 默认为 BGP 路由
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取用户侧BGP，Asn，AuthKey
                     * @return BgpPeer 用户侧BGP，Asn，AuthKey
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置用户侧BGP，Asn，AuthKey
                     * @param BgpPeer 用户侧BGP，Asn，AuthKey
                     */
                    void SetBgpPeer(const BgpPeer& _bgpPeer);

                    /**
                     * 判断参数 BgpPeer 是否已赋值
                     * @return BgpPeer 是否已赋值
                     */
                    bool BgpPeerHasBeenSet() const;

                    /**
                     * 获取用户侧网段地址
                     * @return RouteFilterPrefixes 用户侧网段地址
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置用户侧网段地址
                     * @param RouteFilterPrefixes 用户侧网段地址
                     */
                    void SetRouteFilterPrefixes(const std::vector<RouteFilterPrefix>& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取专线通道的Vlan
                     * @return Vlan 专线通道的Vlan
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置专线通道的Vlan
                     * @param Vlan 专线通道的Vlan
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     */
                    bool VlanHasBeenSet() const;

                    /**
                     * 获取TencentAddress，腾讯侧互联 IP
                     * @return TencentAddress TencentAddress，腾讯侧互联 IP
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置TencentAddress，腾讯侧互联 IP
                     * @param TencentAddress TencentAddress，腾讯侧互联 IP
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取CustomerAddress，用户侧互联 IP
                     * @return CustomerAddress CustomerAddress，用户侧互联 IP
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置CustomerAddress，用户侧互联 IP
                     * @param CustomerAddress CustomerAddress，用户侧互联 IP
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取专线通道名称
                     * @return DirectConnectTunnelName 专线通道名称
                     */
                    std::string GetDirectConnectTunnelName() const;

                    /**
                     * 设置专线通道名称
                     * @param DirectConnectTunnelName 专线通道名称
                     */
                    void SetDirectConnectTunnelName(const std::string& _directConnectTunnelName);

                    /**
                     * 判断参数 DirectConnectTunnelName 是否已赋值
                     * @return DirectConnectTunnelName 是否已赋值
                     */
                    bool DirectConnectTunnelNameHasBeenSet() const;

                    /**
                     * 获取专线通道创建时间
                     * @return CreatedTime 专线通道创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置专线通道创建时间
                     * @param CreatedTime 专线通道创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取专线通道带宽值
                     * @return Bandwidth 专线通道带宽值
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置专线通道带宽值
                     * @param Bandwidth 专线通道带宽值
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * 专线通道ID
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * 物理专线ID
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * 专线通道状态
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
                     * 专线通道的拥有者，开发商账号 ID
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
                     * VPC地域
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
                     * 专线通道的Vlan
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * TencentAddress，腾讯侧互联 IP
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * CustomerAddress，用户侧互联 IP
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * 专线通道名称
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * 专线通道创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 专线通道带宽值
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNEL_H_
