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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEIPV6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEIPV6ADDRESSESBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ReleaseIpv6AddressesBandwidth请求参数结构体
                */
                class ReleaseIpv6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ReleaseIpv6AddressesBandwidthRequest();
                    ~ReleaseIpv6AddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM 地域。
                     * @return EcmRegion ECM 地域。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域。
                     * @param _ecmRegion ECM 地域。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取IPV6地址。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * @return Ipv6Addresses IPV6地址。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * 
                     */
                    std::vector<std::string> GetIpv6Addresses() const;

                    /**
                     * 设置IPV6地址。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * @param _ipv6Addresses IPV6地址。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<std::string>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                    /**
                     * 获取IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * @return Ipv6AddressIds IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * 
                     */
                    std::vector<std::string> GetIpv6AddressIds() const;

                    /**
                     * 设置IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * @param _ipv6AddressIds IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     * 
                     */
                    void SetIpv6AddressIds(const std::vector<std::string>& _ipv6AddressIds);

                    /**
                     * 判断参数 Ipv6AddressIds 是否已赋值
                     * @return Ipv6AddressIds 是否已赋值
                     * 
                     */
                    bool Ipv6AddressIdsHasBeenSet() const;

                private:

                    /**
                     * ECM 地域。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * IPV6地址。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     */
                    std::vector<std::string> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * IPV6地址对应的唯一ID，形如eip-xxxxxxxx。Ipv6Addresses和Ipv6AddressIds必须且只能传一个。
                     */
                    std::vector<std::string> m_ipv6AddressIds;
                    bool m_ipv6AddressIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RELEASEIPV6ADDRESSESBANDWIDTHREQUEST_H_
