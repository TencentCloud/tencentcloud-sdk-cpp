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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELEXTRAREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELEXTRAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/BgpPeer.h>
#include <tencentcloud/dc/v20180410/model/RouteFilterPrefix.h>
#include <tencentcloud/dc/v20180410/model/BFDInfo.h>
#include <tencentcloud/dc/v20180410/model/NQAInfo.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * ModifyDirectConnectTunnelExtra请求参数结构体
                */
                class ModifyDirectConnectTunnelExtraRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectTunnelExtraRequest();
                    ~ModifyDirectConnectTunnelExtraRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专用通道ID。
                     * @return DirectConnectTunnelId 专用通道ID。
                     * 
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置专用通道ID。
                     * @param _directConnectTunnelId 专用通道ID。
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
                     * 获取专用通道的Vlan。
                     * @return Vlan 专用通道的Vlan。
                     * 
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置专用通道的Vlan。
                     * @param _vlan 专用通道的Vlan。
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
                     * 获取Bgp参数，包括Asn，AuthKey
                     * @return BgpPeer Bgp参数，包括Asn，AuthKey
                     * 
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置Bgp参数，包括Asn，AuthKey
                     * @param _bgpPeer Bgp参数，包括Asn，AuthKey
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
                     * 获取用户侧过滤网段地址。
                     * @return RouteFilterPrefixes 用户侧过滤网段地址。
                     * 
                     */
                    RouteFilterPrefix GetRouteFilterPrefixes() const;

                    /**
                     * 设置用户侧过滤网段地址。
                     * @param _routeFilterPrefixes 用户侧过滤网段地址。
                     * 
                     */
                    void SetRouteFilterPrefixes(const RouteFilterPrefix& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     * 
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取腾讯侧互联IP。
                     * @return TencentAddress 腾讯侧互联IP。
                     * 
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置腾讯侧互联IP。
                     * @param _tencentAddress 腾讯侧互联IP。
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
                     * 获取腾讯侧备用互联IP。
                     * @return TencentBackupAddress 腾讯侧备用互联IP。
                     * 
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置腾讯侧备用互联IP。
                     * @param _tencentBackupAddress 腾讯侧备用互联IP。
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
                     * 获取用户侧互联IP。
                     * @return CustomerAddress 用户侧互联IP。
                     * 
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置用户侧互联IP。
                     * @param _customerAddress 用户侧互联IP。
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
                     * 获取专用通道带宽值。
                     * @return Bandwidth 专用通道带宽值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置专用通道带宽值。
                     * @param _bandwidth 专用通道带宽值。
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
                     * 获取BGP community开关。
                     * @return EnableBGPCommunity BGP community开关。
                     * 
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置BGP community开关。
                     * @param _enableBGPCommunity BGP community开关。
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
                     * 获取IPV6使能。0：停用IPv6；1: 启用IPv6。
                     * @return IPv6Enable IPV6使能。0：停用IPv6；1: 启用IPv6。
                     * 
                     */
                    int64_t GetIPv6Enable() const;

                    /**
                     * 设置IPV6使能。0：停用IPv6；1: 启用IPv6。
                     * @param _iPv6Enable IPV6使能。0：停用IPv6；1: 启用IPv6。
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
                     * 获取去往用户侧的路由信息。
                     * @return CustomerIDCRoutes 去往用户侧的路由信息。
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetCustomerIDCRoutes() const;

                    /**
                     * 设置去往用户侧的路由信息。
                     * @param _customerIDCRoutes 去往用户侧的路由信息。
                     * 
                     */
                    void SetCustomerIDCRoutes(const std::vector<RouteFilterPrefix>& _customerIDCRoutes);

                    /**
                     * 判断参数 CustomerIDCRoutes 是否已赋值
                     * @return CustomerIDCRoutes 是否已赋值
                     * 
                     */
                    bool CustomerIDCRoutesHasBeenSet() const;

                    /**
                     * 获取是否开启巨帧。1：开启；0：不开启。
                     * @return JumboEnable 是否开启巨帧。1：开启；0：不开启。
                     * 
                     */
                    int64_t GetJumboEnable() const;

                    /**
                     * 设置是否开启巨帧。1：开启；0：不开启。
                     * @param _jumboEnable 是否开启巨帧。1：开启；0：不开启。
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
                     * 获取腾讯侧互联IPv6。
                     * @return TencentIPv6Address 腾讯侧互联IPv6。
                     * 
                     */
                    std::string GetTencentIPv6Address() const;

                    /**
                     * 设置腾讯侧互联IPv6。
                     * @param _tencentIPv6Address 腾讯侧互联IPv6。
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
                     * 获取腾讯侧备用互联IPv6。
                     * @return TencentBackupIPv6Address 腾讯侧备用互联IPv6。
                     * 
                     */
                    std::string GetTencentBackupIPv6Address() const;

                    /**
                     * 设置腾讯侧备用互联IPv6。
                     * @param _tencentBackupIPv6Address 腾讯侧备用互联IPv6。
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
                     * 获取用户侧互联IPv6。
                     * @return CustomerIPv6Address 用户侧互联IPv6。
                     * 
                     */
                    std::string GetCustomerIPv6Address() const;

                    /**
                     * 设置用户侧互联IPv6。
                     * @param _customerIPv6Address 用户侧互联IPv6。
                     * 
                     */
                    void SetCustomerIPv6Address(const std::string& _customerIPv6Address);

                    /**
                     * 判断参数 CustomerIPv6Address 是否已赋值
                     * @return CustomerIPv6Address 是否已赋值
                     * 
                     */
                    bool CustomerIPv6AddressHasBeenSet() const;

                private:

                    /**
                     * 专用通道ID。
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * 专用通道的Vlan。
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * Bgp参数，包括Asn，AuthKey
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * 用户侧过滤网段地址。
                     */
                    RouteFilterPrefix m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * 腾讯侧互联IP。
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 腾讯侧备用互联IP。
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                    /**
                     * 用户侧互联IP。
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * 专用通道带宽值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * BGP community开关。
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

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
                     * IPV6使能。0：停用IPv6；1: 启用IPv6。
                     */
                    int64_t m_iPv6Enable;
                    bool m_iPv6EnableHasBeenSet;

                    /**
                     * 去往用户侧的路由信息。
                     */
                    std::vector<RouteFilterPrefix> m_customerIDCRoutes;
                    bool m_customerIDCRoutesHasBeenSet;

                    /**
                     * 是否开启巨帧。1：开启；0：不开启。
                     */
                    int64_t m_jumboEnable;
                    bool m_jumboEnableHasBeenSet;

                    /**
                     * 腾讯侧互联IPv6。
                     */
                    std::string m_tencentIPv6Address;
                    bool m_tencentIPv6AddressHasBeenSet;

                    /**
                     * 腾讯侧备用互联IPv6。
                     */
                    std::string m_tencentBackupIPv6Address;
                    bool m_tencentBackupIPv6AddressHasBeenSet;

                    /**
                     * 用户侧互联IPv6。
                     */
                    std::string m_customerIPv6Address;
                    bool m_customerIPv6AddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELEXTRAREQUEST_H_
