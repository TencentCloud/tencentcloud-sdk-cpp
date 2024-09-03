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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDirectConnectTunnelAttribute请求参数结构体
                */
                class ModifyDirectConnectTunnelAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectTunnelAttributeRequest();
                    ~ModifyDirectConnectTunnelAttributeRequest() = default;
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
                     * 获取用户侧BGP，包括Asn，AuthKey。
                     * @return BgpPeer 用户侧BGP，包括Asn，AuthKey。
                     * 
                     */
                    BgpPeer GetBgpPeer() const;

                    /**
                     * 设置用户侧BGP，包括Asn，AuthKey。
                     * @param _bgpPeer 用户侧BGP，包括Asn，AuthKey。
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
                     * 获取用户侧网段地址。
                     * @return RouteFilterPrefixes 用户侧网段地址。
                     * 
                     */
                    std::vector<RouteFilterPrefix> GetRouteFilterPrefixes() const;

                    /**
                     * 设置用户侧网段地址。
                     * @param _routeFilterPrefixes 用户侧网段地址。
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
                     * 获取专用通道带宽值，单位为M。
                     * @return Bandwidth 专用通道带宽值，单位为M。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置专用通道带宽值，单位为M。
                     * @param _bandwidth 专用通道带宽值，单位为M。
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

                private:

                    /**
                     * 专用通道ID。
                     */
                    std::string m_directConnectTunnelId;
                    bool m_directConnectTunnelIdHasBeenSet;

                    /**
                     * 专用通道名称。
                     */
                    std::string m_directConnectTunnelName;
                    bool m_directConnectTunnelNameHasBeenSet;

                    /**
                     * 用户侧BGP，包括Asn，AuthKey。
                     */
                    BgpPeer m_bgpPeer;
                    bool m_bgpPeerHasBeenSet;

                    /**
                     * 用户侧网段地址。
                     */
                    std::vector<RouteFilterPrefix> m_routeFilterPrefixes;
                    bool m_routeFilterPrefixesHasBeenSet;

                    /**
                     * 腾讯侧互联IP。
                     */
                    std::string m_tencentAddress;
                    bool m_tencentAddressHasBeenSet;

                    /**
                     * 用户侧互联IP。
                     */
                    std::string m_customerAddress;
                    bool m_customerAddressHasBeenSet;

                    /**
                     * 专用通道带宽值，单位为M。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 腾讯侧备用互联IP。
                     */
                    std::string m_tencentBackupAddress;
                    bool m_tencentBackupAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_MODIFYDIRECTCONNECTTUNNELATTRIBUTEREQUEST_H_
