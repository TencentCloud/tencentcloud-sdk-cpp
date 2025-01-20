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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CustomerGatewayVendor.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
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
                     * 获取VPN网关实例ID。
                     * @return VpnGatewayId VPN网关实例ID。
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN网关实例ID。
                     * @param _vpnGatewayId VPN网关实例ID。
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPN通道实例ID。形如：vpnx-f49l6u0z。
                     * @return VpnConnectionId VPN通道实例ID。形如：vpnx-f49l6u0z。
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置VPN通道实例ID。形如：vpnx-f49l6u0z。
                     * @param _vpnConnectionId VPN通道实例ID。形如：vpnx-f49l6u0z。
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
                     * 获取对端网关厂商信息对象，可通过[DescribeCustomerGatewayVendors](https://cloud.tencent.com/document/api/215/17517)获取。
                     * @return CustomerGatewayVendor 对端网关厂商信息对象，可通过[DescribeCustomerGatewayVendors](https://cloud.tencent.com/document/api/215/17517)获取。
                     * 
                     */
                    CustomerGatewayVendor GetCustomerGatewayVendor() const;

                    /**
                     * 设置对端网关厂商信息对象，可通过[DescribeCustomerGatewayVendors](https://cloud.tencent.com/document/api/215/17517)获取。
                     * @param _customerGatewayVendor 对端网关厂商信息对象，可通过[DescribeCustomerGatewayVendors](https://cloud.tencent.com/document/api/215/17517)获取。
                     * 
                     */
                    void SetCustomerGatewayVendor(const CustomerGatewayVendor& _customerGatewayVendor);

                    /**
                     * 判断参数 CustomerGatewayVendor 是否已赋值
                     * @return CustomerGatewayVendor 是否已赋值
                     * 
                     */
                    bool CustomerGatewayVendorHasBeenSet() const;

                    /**
                     * 获取通道接入设备物理接口名称。
                     * @return InterfaceName 通道接入设备物理接口名称。
                     * 
                     */
                    std::string GetInterfaceName() const;

                    /**
                     * 设置通道接入设备物理接口名称。
                     * @param _interfaceName 通道接入设备物理接口名称。
                     * 
                     */
                    void SetInterfaceName(const std::string& _interfaceName);

                    /**
                     * 判断参数 InterfaceName 是否已赋值
                     * @return InterfaceName 是否已赋值
                     * 
                     */
                    bool InterfaceNameHasBeenSet() const;

                private:

                    /**
                     * VPN网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * VPN通道实例ID。形如：vpnx-f49l6u0z。
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * 对端网关厂商信息对象，可通过[DescribeCustomerGatewayVendors](https://cloud.tencent.com/document/api/215/17517)获取。
                     */
                    CustomerGatewayVendor m_customerGatewayVendor;
                    bool m_customerGatewayVendorHasBeenSet;

                    /**
                     * 通道接入设备物理接口名称。
                     */
                    std::string m_interfaceName;
                    bool m_interfaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADCUSTOMERGATEWAYCONFIGURATIONREQUEST_H_
