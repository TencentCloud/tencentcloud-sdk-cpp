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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSOCIATEADDRESSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSOCIATEADDRESSREQUEST_H_

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
                * AssociateAddress请求参数结构体
                */
                class AssociateAddressRequest : public AbstractModel
                {
                public:
                    AssociateAddressRequest();
                    ~AssociateAddressRequest() = default;
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
                     * 获取标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * @return AddressId 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * @param _addressId 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

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
                     * 标识 EIP 的唯一 ID。EIP 唯一 ID 形如：eip-11112222。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

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

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSOCIATEADDRESSREQUEST_H_
