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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIP6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIP6ADDRESSESBANDWIDTHREQUEST_H_

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
                * ReleaseIp6AddressesBandwidth请求参数结构体
                */
                class ReleaseIp6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ReleaseIp6AddressesBandwidthRequest();
                    ~ReleaseIp6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPv6地址。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6Addresses。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * @return Ip6Addresses IPv6地址。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6Addresses。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * 
                     */
                    std::vector<std::string> GetIp6Addresses() const;

                    /**
                     * 设置IPv6地址。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6Addresses。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * @param _ip6Addresses IPv6地址。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6Addresses。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * 
                     */
                    void SetIp6Addresses(const std::vector<std::string>& _ip6Addresses);

                    /**
                     * 判断参数 Ip6Addresses 是否已赋值
                     * @return Ip6Addresses 是否已赋值
                     * 
                     */
                    bool Ip6AddressesHasBeenSet() const;

                    /**
                     * 获取IPv6地址对应的唯一ID，形如eip-xxxxxxxx。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * @return Ip6AddressIds IPv6地址对应的唯一ID，形如eip-xxxxxxxx。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * 
                     */
                    std::vector<std::string> GetIp6AddressIds() const;

                    /**
                     * 设置IPv6地址对应的唯一ID，形如eip-xxxxxxxx。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * @param _ip6AddressIds IPv6地址对应的唯一ID，形如eip-xxxxxxxx。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     * 
                     */
                    void SetIp6AddressIds(const std::vector<std::string>& _ip6AddressIds);

                    /**
                     * 判断参数 Ip6AddressIds 是否已赋值
                     * @return Ip6AddressIds 是否已赋值
                     * 
                     */
                    bool Ip6AddressIdsHasBeenSet() const;

                private:

                    /**
                     * IPv6地址。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6Addresses。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     */
                    std::vector<std::string> m_ip6Addresses;
                    bool m_ip6AddressesHasBeenSet;

                    /**
                     * IPv6地址对应的唯一ID，形如eip-xxxxxxxx。可以使用[DescribeIp6Addresses](https://cloud.tencent.com/document/product/215/40089)接口查询Ip6AddressIds。Ip6Addresses和Ip6AddressIds必须且只能传一个。
                     */
                    std::vector<std::string> m_ip6AddressIds;
                    bool m_ip6AddressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RELEASEIP6ADDRESSESBANDWIDTHREQUEST_H_
