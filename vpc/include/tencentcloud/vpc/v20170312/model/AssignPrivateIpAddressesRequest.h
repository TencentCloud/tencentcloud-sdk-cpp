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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_

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
                * AssignPrivateIpAddresses请求参数结构体
                */
                class AssignPrivateIpAddressesRequest : public AbstractModel
                {
                public:
                    AssignPrivateIpAddressesRequest();
                    ~AssignPrivateIpAddressesRequest() = default;
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
                     * 获取指定的内网IP信息，单次最多指定10个。与SecondaryPrivateIpAddressCount至少提供一个。
                     * @return PrivateIpAddresses 指定的内网IP信息，单次最多指定10个。与SecondaryPrivateIpAddressCount至少提供一个。
                     * 
                     */
                    std::vector<PrivateIpAddressSpecification> GetPrivateIpAddresses() const;

                    /**
                     * 设置指定的内网IP信息，单次最多指定10个。与SecondaryPrivateIpAddressCount至少提供一个。
                     * @param _privateIpAddresses 指定的内网IP信息，单次最多指定10个。与SecondaryPrivateIpAddressCount至少提供一个。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<PrivateIpAddressSpecification>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取新申请的内网IP地址个数，与PrivateIpAddresses至少提供一个。内网IP地址个数总和不能超过配额数，详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
                     * @return SecondaryPrivateIpAddressCount 新申请的内网IP地址个数，与PrivateIpAddresses至少提供一个。内网IP地址个数总和不能超过配额数，详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
                     * 
                     */
                    uint64_t GetSecondaryPrivateIpAddressCount() const;

                    /**
                     * 设置新申请的内网IP地址个数，与PrivateIpAddresses至少提供一个。内网IP地址个数总和不能超过配额数，详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
                     * @param _secondaryPrivateIpAddressCount 新申请的内网IP地址个数，与PrivateIpAddresses至少提供一个。内网IP地址个数总和不能超过配额数，详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
                     * 
                     */
                    void SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount);

                    /**
                     * 判断参数 SecondaryPrivateIpAddressCount 是否已赋值
                     * @return SecondaryPrivateIpAddressCount 是否已赋值
                     * 
                     */
                    bool SecondaryPrivateIpAddressCountHasBeenSet() const;

                    /**
                     * 获取IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表云金、云银、云铜、默认四个等级。
                     * @return QosLevel IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表云金、云银、云铜、默认四个等级。
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表云金、云银、云铜、默认四个等级。
                     * @param _qosLevel IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表云金、云银、云铜、默认四个等级。
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-m6dyj72l。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 指定的内网IP信息，单次最多指定10个。与SecondaryPrivateIpAddressCount至少提供一个。
                     */
                    std::vector<PrivateIpAddressSpecification> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 新申请的内网IP地址个数，与PrivateIpAddresses至少提供一个。内网IP地址个数总和不能超过配额数，详见<a href="/document/product/576/18527">弹性网卡使用限制</a>。
                     */
                    uint64_t m_secondaryPrivateIpAddressCount;
                    bool m_secondaryPrivateIpAddressCountHasBeenSet;

                    /**
                     * IP服务质量等级，和SecondaryPrivateIpAddressCount配合使用，可选值：PT、AU、AG、DEFAULT，分别代表云金、云银、云铜、默认四个等级。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNPRIVATEIPADDRESSESREQUEST_H_
