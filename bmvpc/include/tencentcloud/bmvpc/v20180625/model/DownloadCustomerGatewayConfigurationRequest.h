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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DownloadCustomerGatewayConfiguration请求参数结构体
                */
                class DownloadCustomerGatewayConfigurationRequest : public AbstractModel
                {
                public:
                    DownloadCustomerGatewayConfigurationRequest();
                    ~DownloadCustomerGatewayConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * @return VpnConnectionId VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * @param _vpnConnectionId VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     * 
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     * 
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取厂商,取值 h3c，cisco
                     * @return VendorName 厂商,取值 h3c，cisco
                     * 
                     */
                    std::string GetVendorName() const;

                    /**
                     * 设置厂商,取值 h3c，cisco
                     * @param _vendorName 厂商,取值 h3c，cisco
                     * 
                     */
                    void SetVendorName(const std::string& _vendorName);

                    /**
                     * 判断参数 VendorName 是否已赋值
                     * @return VendorName 是否已赋值
                     * 
                     */
                    bool VendorNameHasBeenSet() const;

                private:

                    /**
                     * VPN通道实例ID。形如：bmvpnx-f49l6u0z。
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * 厂商,取值 h3c，cisco
                     */
                    std::string m_vendorName;
                    bool m_vendorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_
