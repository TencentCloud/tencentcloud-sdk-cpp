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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpc请求参数结构体
                */
                class CreateVpcRequest : public AbstractModel
                {
                public:
                    CreateVpcRequest();
                    ~CreateVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取vpc名称，最大长度不能超过60个字节。
                     * @return VpcName vpc名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc名称，最大长度不能超过60个字节。
                     * @param _vpcName vpc名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。
                     * @return CidrBlock vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。
                     * @param _cidrBlock vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取是否开启组播。true: 开启, false: 不开启。
                     * @return EnableMulticast 是否开启组播。true: 开启, false: 不开启。
                     * 
                     */
                    std::string GetEnableMulticast() const;

                    /**
                     * 设置是否开启组播。true: 开启, false: 不开启。
                     * @param _enableMulticast 是否开启组播。true: 开启, false: 不开启。
                     * 
                     */
                    void SetEnableMulticast(const std::string& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     * 
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取DNS地址，最多支持4个。
                     * @return DnsServers DNS地址，最多支持4个。
                     * 
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置DNS地址，最多支持4个。
                     * @param _dnsServers DNS地址，最多支持4个。
                     * 
                     */
                    void SetDnsServers(const std::vector<std::string>& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     * 
                     */
                    bool DnsServersHasBeenSet() const;

                    /**
                     * 获取DHCP使用的域名。
                     * @return DomainName DHCP使用的域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置DHCP使用的域名。
                     * @param _domainName DHCP使用的域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * vpc名称，最大长度不能超过60个字节。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否开启组播。true: 开启, false: 不开启。
                     */
                    std::string m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * DNS地址，最多支持4个。
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * DHCP使用的域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_
