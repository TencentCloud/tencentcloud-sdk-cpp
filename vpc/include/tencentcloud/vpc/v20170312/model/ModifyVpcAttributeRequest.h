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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_

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
                * ModifyVpcAttribute请求参数结构体
                */
                class ModifyVpcAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcAttributeRequest();
                    ~ModifyVpcAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     * @return VpcId VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     * @param VpcId VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络名称，可任意命名，但不得超过60个字符。
                     * @return VpcName 私有网络名称，可任意命名，但不得超过60个字符。
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称，可任意命名，但不得超过60个字符。
                     * @param VpcName 私有网络名称，可任意命名，但不得超过60个字符。
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取是否开启组播。true: 开启, false: 关闭。
                     * @return EnableMulticast 是否开启组播。true: 开启, false: 关闭。
                     */
                    std::string GetEnableMulticast() const;

                    /**
                     * 设置是否开启组播。true: 开启, false: 关闭。
                     * @param EnableMulticast 是否开启组播。true: 开启, false: 关闭。
                     */
                    void SetEnableMulticast(const std::string& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取DNS地址，最多支持4个，第1个默认为主，其余为备
                     * @return DnsServers DNS地址，最多支持4个，第1个默认为主，其余为备
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置DNS地址，最多支持4个，第1个默认为主，其余为备
                     * @param DnsServers DNS地址，最多支持4个，第1个默认为主，其余为备
                     */
                    void SetDnsServers(const std::vector<std::string>& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     */
                    bool DnsServersHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return DomainName 域名
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名
                     * @param DomainName 域名
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。形如：vpc-f49l6u0z。每次请求的实例的上限为100。参数不支持同时指定VpcIds和Filters。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 是否开启组播。true: 开启, false: 关闭。
                     */
                    std::string m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * DNS地址，最多支持4个，第1个默认为主，其余为备
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
