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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AllocateAddresses请求参数结构体
                */
                class AllocateAddressesRequest : public AbstractModel
                {
                public:
                    AllocateAddressesRequest();
                    ~AllocateAddressesRequest() = default;
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
                     * 获取EIP数量。默认值：1。
                     * @return AddressCount EIP数量。默认值：1。
                     * 
                     */
                    uint64_t GetAddressCount() const;

                    /**
                     * 设置EIP数量。默认值：1。
                     * @param _addressCount EIP数量。默认值：1。
                     * 
                     */
                    void SetAddressCount(const uint64_t& _addressCount);

                    /**
                     * 判断参数 AddressCount 是否已赋值
                     * @return AddressCount 是否已赋值
                     * 
                     */
                    bool AddressCountHasBeenSet() const;

                    /**
                     * 获取CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     * @return InternetServiceProvider CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     * 
                     */
                    std::string GetInternetServiceProvider() const;

                    /**
                     * 设置CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     * @param _internetServiceProvider CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     * 
                     */
                    void SetInternetServiceProvider(const std::string& _internetServiceProvider);

                    /**
                     * 判断参数 InternetServiceProvider 是否已赋值
                     * @return InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool InternetServiceProviderHasBeenSet() const;

                    /**
                     * 获取1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     * @return InternetMaxBandwidthOut 1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     * @param _internetMaxBandwidthOut 1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取需要关联的标签列表。
                     * @return Tags 需要关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置需要关联的标签列表。
                     * @param _tags 需要关联的标签列表。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取要绑定的实例 ID。
                     * @return InstanceId 要绑定的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置要绑定的实例 ID。
                     * @param _instanceId 要绑定的实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过DescribeNetworkInterfaces接口返回值中的networkInterfaceId获取。
                     * @return NetworkInterfaceId 要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过DescribeNetworkInterfaces接口返回值中的networkInterfaceId获取。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过DescribeNetworkInterfaces接口返回值中的networkInterfaceId获取。
                     * @param _networkInterfaceId 要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过DescribeNetworkInterfaces接口返回值中的networkInterfaceId获取。
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
                     * 获取要绑定的内网 IP。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIpAddress ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIpAddress 是指定的 NetworkInterfaceId 上的一个内网 IP。指定弹性网卡的内网 IP 可通过DescribeNetworkInterfaces接口返回值中的privateIpAddress获取。
                     * @return PrivateIpAddress 要绑定的内网 IP。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIpAddress ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIpAddress 是指定的 NetworkInterfaceId 上的一个内网 IP。指定弹性网卡的内网 IP 可通过DescribeNetworkInterfaces接口返回值中的privateIpAddress获取。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置要绑定的内网 IP。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIpAddress ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIpAddress 是指定的 NetworkInterfaceId 上的一个内网 IP。指定弹性网卡的内网 IP 可通过DescribeNetworkInterfaces接口返回值中的privateIpAddress获取。
                     * @param _privateIpAddress 要绑定的内网 IP。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIpAddress ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIpAddress 是指定的 NetworkInterfaceId 上的一个内网 IP。指定弹性网卡的内网 IP 可通过DescribeNetworkInterfaces接口返回值中的privateIpAddress获取。
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                private:

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * EIP数量。默认值：1。
                     */
                    uint64_t m_addressCount;
                    bool m_addressCountHasBeenSet;

                    /**
                     * CMCC：中国移动
CTCC：中国电信
CUCC：中国联通
                     */
                    std::string m_internetServiceProvider;
                    bool m_internetServiceProviderHasBeenSet;

                    /**
                     * 1 Mbps 至 5000 Mbps，默认值：1 Mbps。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 需要关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 要绑定的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要绑定的弹性网卡 ID。 弹性网卡 ID 形如：eni-11112222。NetworkInterfaceId 与 InstanceId 不可同时指定。弹性网卡 ID 可通过DescribeNetworkInterfaces接口返回值中的networkInterfaceId获取。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 要绑定的内网 IP。如果指定了 NetworkInterfaceId 则也必须指定 PrivateIpAddress ，表示将 EIP 绑定到指定弹性网卡的指定内网 IP 上。同时要确保指定的 PrivateIpAddress 是指定的 NetworkInterfaceId 上的一个内网 IP。指定弹性网卡的内网 IP 可通过DescribeNetworkInterfaces接口返回值中的privateIpAddress获取。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ALLOCATEADDRESSESREQUEST_H_
