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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYPRIVATEIPADDRESSESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYPRIVATEIPADDRESSESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/PrivateIpAddressSpecification.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyPrivateIpAddressesAttribute请求参数结构体
                */
                class ModifyPrivateIpAddressesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyPrivateIpAddressesAttributeRequest();
                    ~ModifyPrivateIpAddressesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例ID，例如：eni-m6dyj72l。
                     * @return NetworkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，例如：eni-m6dyj72l。
                     * @param _networkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。
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
                     * 获取指定的内网IP信息。
                     * @return PrivateIpAddresses 指定的内网IP信息。
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置指定的内网IP信息。
                     * @param _privateIpAddresses 指定的内网IP信息。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-m6dyj72l。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 指定的内网IP信息。
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYPRIVATEIPADDRESSESATTRIBUTEREQUEST_H_
