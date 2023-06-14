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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYIPV6ADDRESSESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYIPV6ADDRESSESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Ipv6Address.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyIpv6AddressesAttribute请求参数结构体
                */
                class ModifyIpv6AddressesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyIpv6AddressesAttributeRequest();
                    ~ModifyIpv6AddressesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM 地域
                     * @return EcmRegion ECM 地域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域
                     * @param _ecmRegion ECM 地域
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
                     * 获取弹性网卡实例ID，形如：eni-m6dyj72l。
                     * @return NetworkInterfaceId 弹性网卡实例ID，形如：eni-m6dyj72l。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，形如：eni-m6dyj72l。
                     * @param _networkInterfaceId 弹性网卡实例ID，形如：eni-m6dyj72l。
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
                     * 获取指定的IPv6地址信息。
                     * @return Ipv6Addresses 指定的IPv6地址信息。
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置指定的IPv6地址信息。
                     * @param _ipv6Addresses 指定的IPv6地址信息。
                     * 
                     */
                    void SetIpv6Addresses(const std::vector<Ipv6Address>& _ipv6Addresses);

                    /**
                     * 判断参数 Ipv6Addresses 是否已赋值
                     * @return Ipv6Addresses 是否已赋值
                     * 
                     */
                    bool Ipv6AddressesHasBeenSet() const;

                private:

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 弹性网卡实例ID，形如：eni-m6dyj72l。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 指定的IPv6地址信息。
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYIPV6ADDRESSESATTRIBUTEREQUEST_H_
