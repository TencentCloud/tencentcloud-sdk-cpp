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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEIPV6ADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEIPV6ADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssociateIPv6Address请求参数结构体
                */
                class AssociateIPv6AddressRequest : public AbstractModel
                {
                public:
                    AssociateIPv6AddressRequest();
                    ~AssociateIPv6AddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * @return IPv6AddressId 弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * 
                     */
                    std::string GetIPv6AddressId() const;

                    /**
                     * 设置弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * @param _iPv6AddressId 弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     * 
                     */
                    void SetIPv6AddressId(const std::string& _iPv6AddressId);

                    /**
                     * 判断参数 IPv6AddressId 是否已赋值
                     * @return IPv6AddressId 是否已赋值
                     * 
                     */
                    bool IPv6AddressIdHasBeenSet() const;

                    /**
                     * 获取要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的networkInterfaceId获取。
                     * @return NetworkInterfaceId 要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的networkInterfaceId获取。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的networkInterfaceId获取。
                     * @param _networkInterfaceId 要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的networkInterfaceId获取。
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取要绑定的内网 IPv6。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIPv6Address ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIPv6Address 是指定的 NetworkInterfaceId 上的一个内网 IPv6。指定弹性网卡的内网 IPv6 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的Ipv6AddressSet.Address获取。
                     * @return PrivateIPv6Address 要绑定的内网 IPv6。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIPv6Address ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIPv6Address 是指定的 NetworkInterfaceId 上的一个内网 IPv6。指定弹性网卡的内网 IPv6 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的Ipv6AddressSet.Address获取。
                     * 
                     */
                    std::string GetPrivateIPv6Address() const;

                    /**
                     * 设置要绑定的内网 IPv6。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIPv6Address ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIPv6Address 是指定的 NetworkInterfaceId 上的一个内网 IPv6。指定弹性网卡的内网 IPv6 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的Ipv6AddressSet.Address获取。
                     * @param _privateIPv6Address 要绑定的内网 IPv6。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIPv6Address ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIPv6Address 是指定的 NetworkInterfaceId 上的一个内网 IPv6。指定弹性网卡的内网 IPv6 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的Ipv6AddressSet.Address获取。
                     * 
                     */
                    void SetPrivateIPv6Address(const std::string& _privateIPv6Address);

                    /**
                     * 判断参数 PrivateIPv6Address 是否已赋值
                     * @return PrivateIPv6Address 是否已赋值
                     * 
                     */
                    bool PrivateIPv6AddressHasBeenSet() const;

                private:

                    /**
                     * 弹性公网IPv6唯一ID，EIPv6 唯一 ID 形如：eipv6-11112222。可以使用[DescribeIPv6Addresses](https://cloud.tencent.com/document/api/215/113677)接口获取IPv6AddressId。
                     */
                    std::string m_iPv6AddressId;
                    bool m_iPv6AddressIdHasBeenSet;

                    /**
                     * 要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的networkInterfaceId获取。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 要绑定的内网 IPv6。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIPv6Address ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIPv6Address 是指定的 NetworkInterfaceId 上的一个内网 IPv6。指定弹性网卡的内网 IPv6 可通过登录[控制台](https://console.cloud.tencent.com/vpc/eni?rid=1)查询，也可通过[DescribeNetworkInterfaces](https://cloud.tencent.com/document/api/215/15817)接口返回值中的Ipv6AddressSet.Address获取。
                     */
                    std::string m_privateIPv6Address;
                    bool m_privateIPv6AddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSOCIATEIPV6ADDRESSREQUEST_H_
