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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_

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
                * AssignIpv6Addresses请求参数结构体
                */
                class AssignIpv6AddressesRequest : public AbstractModel
                {
                public:
                    AssignIpv6AddressesRequest();
                    ~AssignIpv6AddressesRequest() = default;
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
                     * 获取弹性网卡实例ID，形如：eni-1snva0vd。目前只支持主网卡上分配。
                     * @return NetworkInterfaceId 弹性网卡实例ID，形如：eni-1snva0vd。目前只支持主网卡上分配。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，形如：eni-1snva0vd。目前只支持主网卡上分配。
                     * @param _networkInterfaceId 弹性网卡实例ID，形如：eni-1snva0vd。目前只支持主网卡上分配。
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
                     * 获取指定的IPv6地址列表，单次最多指定10个。与入参Ipv6AddressCount合并计算配额。与Ipv6AddressCount必填一个。
                     * @return Ipv6Addresses 指定的IPv6地址列表，单次最多指定10个。与入参Ipv6AddressCount合并计算配额。与Ipv6AddressCount必填一个。
                     * 
                     */
                    std::vector<Ipv6Address> GetIpv6Addresses() const;

                    /**
                     * 设置指定的IPv6地址列表，单次最多指定10个。与入参Ipv6AddressCount合并计算配额。与Ipv6AddressCount必填一个。
                     * @param _ipv6Addresses 指定的IPv6地址列表，单次最多指定10个。与入参Ipv6AddressCount合并计算配额。与Ipv6AddressCount必填一个。
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
                     * 获取自动分配IPv6地址个数，内网IP地址个数总和不能超过配数。与入参Ipv6Addresses合并计算配额。与Ipv6Addresses必填一个。
                     * @return Ipv6AddressCount 自动分配IPv6地址个数，内网IP地址个数总和不能超过配数。与入参Ipv6Addresses合并计算配额。与Ipv6Addresses必填一个。
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置自动分配IPv6地址个数，内网IP地址个数总和不能超过配数。与入参Ipv6Addresses合并计算配额。与Ipv6Addresses必填一个。
                     * @param _ipv6AddressCount 自动分配IPv6地址个数，内网IP地址个数总和不能超过配数。与入参Ipv6Addresses合并计算配额。与Ipv6Addresses必填一个。
                     * 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取ipv6运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
                     * @return Ipv6ISP ipv6运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
                     * 
                     */
                    std::string GetIpv6ISP() const;

                    /**
                     * 设置ipv6运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
                     * @param _ipv6ISP ipv6运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
                     * 
                     */
                    void SetIpv6ISP(const std::string& _ipv6ISP);

                    /**
                     * 判断参数 Ipv6ISP 是否已赋值
                     * @return Ipv6ISP 是否已赋值
                     * 
                     */
                    bool Ipv6ISPHasBeenSet() const;

                private:

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 弹性网卡实例ID，形如：eni-1snva0vd。目前只支持主网卡上分配。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 指定的IPv6地址列表，单次最多指定10个。与入参Ipv6AddressCount合并计算配额。与Ipv6AddressCount必填一个。
                     */
                    std::vector<Ipv6Address> m_ipv6Addresses;
                    bool m_ipv6AddressesHasBeenSet;

                    /**
                     * 自动分配IPv6地址个数，内网IP地址个数总和不能超过配数。与入参Ipv6Addresses合并计算配额。与Ipv6Addresses必填一个。
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * ipv6运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
                     */
                    std::string m_ipv6ISP;
                    bool m_ipv6ISPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6ADDRESSESREQUEST_H_
