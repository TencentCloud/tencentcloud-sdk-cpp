/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>弹性网卡实例<code>ID</code>，形如：<code>eni-m6dyj72l</code>。可通过<a href="https://cloud.tencent.com/document/product/215/15817">DescribeNetworkInterfaces</a>接口获取。</p>
                     * @return NetworkInterfaceId <p>弹性网卡实例<code>ID</code>，形如：<code>eni-m6dyj72l</code>。可通过<a href="https://cloud.tencent.com/document/product/215/15817">DescribeNetworkInterfaces</a>接口获取。</p>
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置<p>弹性网卡实例<code>ID</code>，形如：<code>eni-m6dyj72l</code>。可通过<a href="https://cloud.tencent.com/document/product/215/15817">DescribeNetworkInterfaces</a>接口获取。</p>
                     * @param _networkInterfaceId <p>弹性网卡实例<code>ID</code>，形如：<code>eni-m6dyj72l</code>。可通过<a href="https://cloud.tencent.com/document/product/215/15817">DescribeNetworkInterfaces</a>接口获取。</p>
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
                     * 获取<p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。与Ipv6AddressCount必填一个。</p>
                     * @return Ipv6Addresses <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。与Ipv6AddressCount必填一个。</p>
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置<p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。与Ipv6AddressCount必填一个。</p>
                     * @param _ipv6Addresses <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。与Ipv6AddressCount必填一个。</p>
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取<p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。与Ipv6Addresses必填一个。</p>
                     * @return Ipv6AddressCount <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。与Ipv6Addresses必填一个。</p>
                     * 
                     */
                    uint64_t GetIpv6AddressCount() const;

                    /**
                     * 设置<p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。与Ipv6Addresses必填一个。</p>
                     * @param _ipv6AddressCount <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。与Ipv6Addresses必填一个。</p>
                     * 
                     */
                    void SetIpv6AddressCount(const uint64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>弹性网卡实例<code>ID</code>，形如：<code>eni-m6dyj72l</code>。可通过<a href="https://cloud.tencent.com/document/product/215/15817">DescribeNetworkInterfaces</a>接口获取。</p>
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * <p>指定的<code>IPv6</code>地址列表，单次最多指定10个。与入参<code>Ipv6AddressCount</code>合并计算配额。与Ipv6AddressCount必填一个。</p>
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * <p>自动分配<code>IPv6</code>地址个数，内网IP地址个数总和不能超过配额数。与入参<code>Ipv6Addresses</code>合并计算配额。与Ipv6Addresses必填一个。</p>
                     */
                    uint64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
