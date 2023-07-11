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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEIPV6ADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEIPV6ADDRESSESBANDWIDTHREQUEST_H_

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
                * AllocateIpv6AddressesBandwidth请求参数结构体
                */
                class AllocateIpv6AddressesBandwidthRequest : public AbstractModel
                {
                public:
                    AllocateIpv6AddressesBandwidthRequest();
                    ~AllocateIpv6AddressesBandwidthRequest() = default;
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
                     * 获取需要开通公网访问能力的IPV6地址。
                     * @return Ipv6Addresses 需要开通公网访问能力的IPV6地址。
                     * 
                     */
                    std::vector<std::string> GetIpv6Addresses() const;

                    /**
                     * 设置需要开通公网访问能力的IPV6地址。
                     * @param _ipv6Addresses 需要开通公网访问能力的IPV6地址。
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
                     * 获取带宽，单位Mbps，默认是1Mbps。
                     * @return InternetMaxBandwidthOut 带宽，单位Mbps，默认是1Mbps。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置带宽，单位Mbps，默认是1Mbps。
                     * @param _internetMaxBandwidthOut 带宽，单位Mbps，默认是1Mbps。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取网络计费模式，当前支持 BANDWIDTH_PACKAGE。
                     * @return InternetChargeType 网络计费模式，当前支持 BANDWIDTH_PACKAGE。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置网络计费模式，当前支持 BANDWIDTH_PACKAGE。
                     * @param _internetChargeType 网络计费模式，当前支持 BANDWIDTH_PACKAGE。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                private:

                    /**
                     * ECM 地域。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 需要开通公网访问能力的IPV6地址。
                     */
                    std::vector<std::string> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * 带宽，单位Mbps，默认是1Mbps。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 网络计费模式，当前支持 BANDWIDTH_PACKAGE。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEIPV6ADDRESSESBANDWIDTHREQUEST_H_
