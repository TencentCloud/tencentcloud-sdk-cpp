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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>
#include <tencentcloud/dc/v20180410/model/BFDInfo.h>
#include <tencentcloud/dc/v20180410/model/NQAInfo.h>
#include <tencentcloud/dc/v20180410/model/Tag.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * CreateDirectConnectTunnel请求参数结构体
                */
                class CreateDirectConnectTunnelRequest : public AbstractModel
                {
                public:
                    CreateDirectConnectTunnelRequest();
                    ~CreateDirectConnectTunnelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取物理专线ID，例如：dc-kd7d06of。
                     * @return DirectConnectId 物理专线ID，例如：dc-kd7d06of。
                     * 
                     */
                    std::string GetDirectConnectId() const;

                    /**
                     * 设置物理专线ID，例如：dc-kd7d06of。
                     * @param _directConnectId 物理专线ID，例如：dc-kd7d06of。
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
                     * 获取专用通道名称。
                     * @return DirectConnectTunnelName 专用通道名称。
                     * 
                     */
                    std::string GetDirectConnectTunnelName() const;

                    /**
                     * 设置专用通道名称。
                     * @param _directConnectTunnelName 专用通道名称。
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
                     * 获取物理专线owner，缺省为当前客户（物理专线 owner）
共享专线时这里需要填写共享专线的开发商账号 ID。
                     * @return DirectConnectOwnerAccount 物理专线owner，缺省为当前客户（物理专线 owner）
共享专线时这里需要填写共享专线的开发商账号 ID。
                     * 
                     */
                    std::string GetDirectConnectOwnerAccount() const;

                    /**
                     * 设置物理专线owner，缺省为当前客户（物理专线 owner）
共享专线时这里需要填写共享专线的开发商账号 ID。
                     * @param _directConnectOwnerAccount 物理专线owner，缺省为当前客户（物理专线 owner）
共享专线时这里需要填写共享专线的开发商账号 ID。
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
                     * 获取网络类型，枚举：VPC、CCN、NAT；默认为VPC。VPC：私有网络；CCN：云联网；NAT：NAT网络）。
                     * @return NetworkType 网络类型，枚举：VPC、CCN、NAT；默认为VPC。VPC：私有网络；CCN：云联网；NAT：NAT网络）。
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型，枚举：VPC、CCN、NAT；默认为VPC。VPC：私有网络；CCN：云联网；NAT：NAT网络）。
                     * @param _networkType 网络类型，枚举：VPC、CCN、NAT；默认为VPC。VPC：私有网络；CCN：云联网；NAT：NAT网络）。
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
                     * 获取网络地域。
                     * @return NetworkRegion 网络地域。
                     * 
                     */
                    std::string GetNetworkRegion() const;

                    /**
                     * 设置网络地域。
                     * @param _networkRegion 网络地域。
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
                     * 获取私有网络统一ID，在NetworkType为VPC时必填，且与专线网关所属的VPCID一致；NetworkType为其它组网类型时可不填，内部会统一处理。
                     * @return VpcId 私有网络统一ID，在NetworkType为VPC时必填，且与专线网关所属的VPCID一致；NetworkType为其它组网类型时可不填，内部会统一处理。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络统一ID，在NetworkType为VPC时必填，且与专线网关所属的VPCID一致；NetworkType为其它组网类型时可不填，内部会统一处理。
                     * @param _vpcId 私有网络统一ID，在NetworkType为VPC时必填，且与专线网关所属的VPCID一致；NetworkType为其它组网类型时可不填，内部会统一处理。
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
                     * 获取专线网关ID，例如 dcg-d545ddf。
                     * @return DirectConnectGatewayId 专线网关ID，例如 dcg-d545ddf。
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置专线网关ID，例如 dcg-d545ddf。
                     * @param _directConnectGatewayId 专线网关ID，例如 dcg-d545ddf。
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
                     * 获取专线带宽，单位：Mbps；默认是物理专线带宽值。
                     * @return Bandwidth 专线带宽，单位：Mbps；默认是物理专线带宽值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置专线带宽，单位：Mbps；默认是物理专线带宽值。
                     * @param _bandwidth 专线带宽，单位：Mbps；默认是物理专线带宽值。
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
                     * 获取路由类型，枚举：BGP、STATIC；默认为BGP 。（BGP ：BGP路由；STATIC：静态）。
                     * @return RouteType 路由类型，枚举：BGP、STATIC；默认为BGP 。（BGP ：BGP路由；STATIC：静态）。
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置路由类型，枚举：BGP、STATIC；默认为BGP 。（BGP ：BGP路由；STATIC：静态）。
                     * @param _routeType 路由类型，枚举：BGP、STATIC；默认为BGP 。（BGP ：BGP路由；STATIC：静态）。
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
                     * 获取BgpPeer，用户侧bgp信息，包括Asn和AuthKey。
                     * @return BgpPeer BgpPeer，用户侧bgp信息，包括Asn和AuthKey。
                     * 
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置BgpPeer，用户侧bgp信息，包括Asn和AuthKey。
                     * @param _bgpPeer BgpPeer，用户侧bgp信息，包括Asn和AuthKey。
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
                     * 获取静态路由，用户IDC的网段地址。
                     * @return RouteFilterPrefixes 静态路由，用户IDC的网段地址。
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置静态路由，用户IDC的网段地址。
                     * @param _routeFilterPrefixes 静态路由，用户IDC的网段地址。
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
                     * 获取vlan，范围：0 ~ 3000。
0：不开启子接口，默认值是非0。
                     * @return Vlan vlan，范围：0 ~ 3000。
0：不开启子接口，默认值是非0。
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置vlan，范围：0 ~ 3000。
0：不开启子接口，默认值是非0。
                     * @param _vlan vlan，范围：0 ~ 3000。
0：不开启子接口，默认值是非0。
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
                     * 获取TencentAddress，腾讯侧互联 IP。
                     * @return TencentAddress TencentAddress，腾讯侧互联 IP。
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置TencentAddress，腾讯侧互联 IP。
                     * @param _tencentAddress TencentAddress，腾讯侧互联 IP。
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
                     * 获取CustomerAddress，用户侧互联 IP。
                     * @return CustomerAddress CustomerAddress，用户侧互联 IP。
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置CustomerAddress，用户侧互联 IP。
                     * @param _customerAddress CustomerAddress，用户侧互联 IP。
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
                     * 获取TencentBackupAddress，腾讯侧备用互联 IP。
                     * @return TencentBackupAddress TencentBackupAddress，腾讯侧备用互联 IP。
                     * 
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置TencentBackupAddress，腾讯侧备用互联 IP。
                     * @param _tencentBackupAddress TencentBackupAddress，腾讯侧备用互联 IP。
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
                     * 获取高速上云服务ID。
                     * @return CloudAttachId 高速上云服务ID。
                     * 
                     */
                    std::string GetCloudAttachId() const;

                    /**
                     * 设置高速上云服务ID。
                     * @param _cloudAttachId 高速上云服务ID。
                     * 
                     */
                    void SetCloudAttachId(const std::string& _cloudAttachId);

                    /**
                     * 判断参数 CloudAttachId 是否已赋值
                     * @return CloudAttachId 是否已赋值
                     * 
                     */
                    bool CloudAttachIdHasBeenSet() const;

                    /**
                     * 获取是否开启BFD。
                     * @return BfdEnable 是否开启BFD。
                     * 
                     */
                    int64_t GetBfdEnable() const;

                    /**
                     * 设置是否开启BFD。
                     * @param _bfdEnable 是否开启BFD。
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
                     * 获取是否开启NQA。
                     * @return NqaEnable 是否开启NQA。
                     * 
                     */
                    int64_t GetNqaEnable() const;

                    /**
                     * 设置是否开启NQA。
                     * @param _nqaEnable 是否开启NQA。
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
                     * 获取BFD配置信息。
                     * @return BfdInfo BFD配置信息。
                     * 
                     */
                    BFDInfo GetBfdInfo() const;

                    /**
                     * 设置BFD配置信息。
                     * @param _bfdInfo BFD配置信息。
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
                     * 获取NQA配置信息。
                     * @return NqaInfo NQA配置信息。
                     * 
                     */
                    NQAInfo GetNqaInfo() const;

                    /**
                     * 设置NQA配置信息。
                     * @param _nqaInfo NQA配置信息。
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
                     * 获取标签键值对
                     * @return Tags 标签键值对
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键值对
                     * @param _tags 标签键值对
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 物理专线ID，例如：dc-kd7d06of。
                     */
                    std::string m_directConnectId;
                    bool m_directConnectIdHasBeenSet;

                    /**
                     * 专用通道名称。
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * 物理专线owner，缺省为当前客户（物理专线 owner）
共享专线时这里需要填写共享专线的开发商账号 ID。
                     */
                    std::string m_directConnectOwnerAccount;
                    bool m_directConnectOwnerAccountHasBeenSet;

                    /**
                     * 网络类型，枚举：VPC、CCN、NAT；默认为VPC。VPC：私有网络；CCN：云联网；NAT：NAT网络）。
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 网络地域。
                     */
                    std::string m_networkRegion;
                    bool m_networkRegionHasBeenSet;

                    /**
                     * 私有网络统一ID，在NetworkType为VPC时必填，且与专线网关所属的VPCID一致；NetworkType为其它组网类型时可不填，内部会统一处理。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 专线网关ID，例如 dcg-d545ddf。
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * 专线带宽，单位：Mbps；默认是物理专线带宽值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 路由类型，枚举：BGP、STATIC；默认为BGP 。（BGP ：BGP路由；STATIC：静态）。
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * BgpPeer，用户侧bgp信息，包括Asn和AuthKey。
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * 静态路由，用户IDC的网段地址。
                     */
                    std::vector<RouteFilterPrefix> m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * vlan，范围：0 ~ 3000。
0：不开启子接口，默认值是非0。
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * TencentAddress，腾讯侧互联 IP。
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * CustomerAddress，用户侧互联 IP。
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * TencentBackupAddress，腾讯侧备用互联 IP。
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                    /**
                     * 高速上云服务ID。
                     */
                    std::string m_cloudAttachId;
                    bool m_cloudAttachIdHasBeenSet;

                    /**
                     * 是否开启BFD。
                     */
                    int64_t m_bfdEnable;
                    bool m_bfdEnableHasBeenSet;

                    /**
                     * 是否开启NQA。
                     */
                    int64_t m_nqaEnable;
                    bool m_nqaEnableHasBeenSet;

                    /**
                     * BFD配置信息。
                     */
                    BFDInfo m_bfdInfo;
                    bool m_bfdInfoHasBeenSet;

                    /**
                     * NQA配置信息。
                     */
                    NQAInfo m_nqaInfo;
                    bool m_nqaInfoHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_CREATEDIRECTCONNECTTUNNELREQUEST_H_
