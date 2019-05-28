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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ipv6Address.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AssignIpv6Addresses请求参数结构体
                */
                class AssignIpv6AddressesRequest : public AbstractModel
                {
                public:
                    AssignIpv6AddressesRequest();
                    ~AssignIpv6AddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例`ID`，形如：`eni-m6dyj72l`。
                     * @return NetworkInterfaceId 弹性网卡实例`ID`，形如：`eni-m6dyj72l`。
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例`ID`，形如：`eni-m6dyj72l`。
                     * @param NetworkInterfaceId 弹性网卡实例`ID`，形如：`eni-m6dyj72l`。
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取指定的`IPv6`地址列表，单次最多指定10个。与入参`Ipv6AddressCount`合并计算配额。
                     * @return Ipv6Addresses 指定的`IPv6`地址列表，单次最多指定10个。与入参`Ipv6AddressCount`合并计算配额。
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置指定的`IPv6`地址列表，单次最多指定10个。与入参`Ipv6AddressCount`合并计算配额。
                     * @param Ipv6Addresses 指定的`IPv6`地址列表，单次最多指定10个。与入参`Ipv6AddressCount`合并计算配额。
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取自动分配`IPv6`地址个数，内网IP地址个数总和不能超过配数。与入参`Ipv6Addresses`合并计算配额。
                     * @return Ipv6AddressCount 自动分配`IPv6`地址个数，内网IP地址个数总和不能超过配数。与入参`Ipv6Addresses`合并计算配额。
                     */
                    uint64_t GetIpv6AddressCount() const;

                    /**
                     * 设置自动分配`IPv6`地址个数，内网IP地址个数总和不能超过配数。与入参`Ipv6Addresses`合并计算配额。
                     * @param Ipv6AddressCount 自动分配`IPv6`地址个数，内网IP地址个数总和不能超过配数。与入参`Ipv6Addresses`合并计算配额。
                     */
                    void SetIpv6AddressCount(const uint64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例`ID`，形如：`eni-m6dyj72l`。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 指定的`IPv6`地址列表，单次最多指定10个。与入参`Ipv6AddressCount`合并计算配额。
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * 自动分配`IPv6`地址个数，内网IP地址个数总和不能超过配数。与入参`Ipv6Addresses`合并计算配额。
                     */
                    uint64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
