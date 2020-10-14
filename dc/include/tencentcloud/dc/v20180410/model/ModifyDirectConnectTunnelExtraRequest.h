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
                     * 获取专用通道ID
                     * @return DirectConnectTunnelId 专用通道ID
                     */
                    std::string GetDirectConnectTunnelId() const;

                    /**
                     * 设置专用通道ID
                     * @param DirectConnectTunnelId 专用通道ID
                     */
                    void SetDirectConnectTunnelId(const std::string& _directConnectTunnelId);

                    /**
                     * 判断参数 DirectConnectTunnelId 是否已赋值
                     * @return DirectConnectTunnelId 是否已赋值
                     */
                    bool DirectConnectTunnelIdHasBeenSet() const;

                    /**
                     * 获取专用通道的Vlan
                     * @return Vlan 专用通道的Vlan
                     */
                    int64_t GetVlan() const;

                    /**
                     * 设置专用通道的Vlan
                     * @param Vlan 专用通道的Vlan
                     */
                    void SetVlan(const int64_t& _vlan);

                    /**
                     * 判断参数 Vlan 是否已赋值
                     * @return Vlan 是否已赋值
                     */
                    bool VlanHasBeenSet() const;

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
                    RouteFilterPrefix GetRouteFilterPrefixes() const;

                    /**
                     * 设置用户侧网段地址
                     * @param RouteFilterPrefixes 用户侧网段地址
                     */
                    void SetRouteFilterPrefixes(const RouteFilterPrefix& _routeFilterPrefixes);

                    /**
                     * 判断参数 RouteFilterPrefixes 是否已赋值
                     * @return RouteFilterPrefixes 是否已赋值
                     */
                    bool RouteFilterPrefixesHasBeenSet() const;

                    /**
                     * 获取腾讯侧互联IP
                     * @return TencentAddress 腾讯侧互联IP
                     */
                    std::string GetTencentAddress() const;

                    /**
                     * 设置腾讯侧互联IP
                     * @param TencentAddress 腾讯侧互联IP
                     */
                    void SetTencentAddress(const std::string& _tencentAddress);

                    /**
                     * 判断参数 TencentAddress 是否已赋值
                     * @return TencentAddress 是否已赋值
                     */
                    bool TencentAddressHasBeenSet() const;

                    /**
                     * 获取腾讯侧备用互联IP
                     * @return TencentBackupAddress 腾讯侧备用互联IP
                     */
                    std::string GetTencentBackupAddress() const;

                    /**
                     * 设置腾讯侧备用互联IP
                     * @param TencentBackupAddress 腾讯侧备用互联IP
                     */
                    void SetTencentBackupAddress(const std::string& _tencentBackupAddress);

                    /**
                     * 判断参数 TencentBackupAddress 是否已赋值
                     * @return TencentBackupAddress 是否已赋值
                     */
                    bool TencentBackupAddressHasBeenSet() const;

                    /**
                     * 获取用户侧互联IP
                     * @return CustomerAddress 用户侧互联IP
                     */
                    std::string GetCustomerAddress() const;

                    /**
                     * 设置用户侧互联IP
                     * @param CustomerAddress 用户侧互联IP
                     */
                    void SetCustomerAddress(const std::string& _customerAddress);

                    /**
                     * 判断参数 CustomerAddress 是否已赋值
                     * @return CustomerAddress 是否已赋值
                     */
                    bool CustomerAddressHasBeenSet() const;

                    /**
                     * 获取专用通道带宽值
                     * @return Bandwidth 专用通道带宽值
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置专用通道带宽值
                     * @param Bandwidth 专用通道带宽值
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取BGP community开关
                     * @return EnableBGPCommunity BGP community开关
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置BGP community开关
                     * @param EnableBGPCommunity BGP community开关
                     */
                    void SetEnableBGPCommunity(const bool& _enableBGPCommunity);

                    /**
                     * 判断参数 EnableBGPCommunity 是否已赋值
                     * @return EnableBGPCommunity 是否已赋值
                     */
                    bool EnableBGPCommunityHasBeenSet() const;

                    /**
                     * 获取是否开启BFD
                     * @return BfdEnable 是否开启BFD
                     */
                    int64_t GetBfdEnable() const;

                    /**
                     * 设置是否开启BFD
                     * @param BfdEnable 是否开启BFD
                     */
                    void SetBfdEnable(const int64_t& _bfdEnable);

                    /**
                     * 判断参数 BfdEnable 是否已赋值
                     * @return BfdEnable 是否已赋值
                     */
                    bool BfdEnableHasBeenSet() const;

                    /**
                     * 获取是否开启NQA
                     * @return NqaEnable 是否开启NQA
                     */
                    int64_t GetNqaEnable() const;

                    /**
                     * 设置是否开启NQA
                     * @param NqaEnable 是否开启NQA
                     */
                    void SetNqaEnable(const int64_t& _nqaEnable);

                    /**
                     * 判断参数 NqaEnable 是否已赋值
                     * @return NqaEnable 是否已赋值
                     */
                    bool NqaEnableHasBeenSet() const;

                    /**
                     * 获取BFD配置信息
                     * @return BfdInfo BFD配置信息
                     */
                    BFDInfo GetBfdInfo() const;

                    /**
                     * 设置BFD配置信息
                     * @param BfdInfo BFD配置信息
                     */
                    void SetBfdInfo(const BFDInfo& _bfdInfo);

                    /**
                     * 判断参数 BfdInfo 是否已赋值
                     * @return BfdInfo 是否已赋值
                     */
                    bool BfdInfoHasBeenSet() const;

                    /**
                     * 获取NQA配置信息
                     * @return NqaInfo NQA配置信息
                     */
                    NQAInfo GetNqaInfo() const;

                    /**
                     * 设置NQA配置信息
                     * @param NqaInfo NQA配置信息
                     */
                    void SetNqaInfo(const NQAInfo& _nqaInfo);

                    /**
                     * 判断参数 NqaInfo 是否已赋值
                     * @return NqaInfo 是否已赋值
                     */
                    bool NqaInfoHasBeenSet() const;

                private:

                    /**
                     * 专用通道ID
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * 专用通道的Vlan
                     */
                    int64_t m_vlan;
                    bool m_vlanHasBeenSet;

                    /**
                     * 用户侧BGP，Asn，AuthKey
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * 用户侧网段地址
                     */
                    RouteFilterPrefix m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * 腾讯侧互联IP
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 腾讯侧备用互联IP
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                    /**
                     * 用户侧互联IP
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * 专用通道带宽值
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * BGP community开关
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

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
                     * BFD配置信息
                     */
                    BFDInfo m_bfdInfo;
                    bool m_bfdInfoHasBeenSet;

                    /**
                     * NQA配置信息
                     */
                    NQAInfo m_nqaInfo;
                    bool m_nqaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELEXTRAREQUEST_H_
