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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/AssistantCidr.h>
#include <tencentcloud/vpc/v20170312/model/ISPIPv6CidrBlock.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 私有网络(VPC)对象。
                */
                class Vpc : public AbstractModel
                {
                public:
                    Vpc();
                    ~Vpc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC`名称。
                     * @return VpcName `VPC`名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置`VPC`名称。
                     * @param _vpcName `VPC`名称。
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
                     * 获取`VPC`实例`ID`，例如：vpc-azd4dt1c。
                     * @return VpcId `VPC`实例`ID`，例如：vpc-azd4dt1c。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`，例如：vpc-azd4dt1c。
                     * @param _vpcId `VPC`实例`ID`，例如：vpc-azd4dt1c。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取`VPC`的`IPv4` `CIDR`。
                     * @return CidrBlock `VPC`的`IPv4` `CIDR`。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置`VPC`的`IPv4` `CIDR`。
                     * @param _cidrBlock `VPC`的`IPv4` `CIDR`。
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
                     * 获取是否默认`VPC`。
                     * @return IsDefault 是否默认`VPC`。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认`VPC`。
                     * @param _isDefault 是否默认`VPC`。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取是否开启组播。
                     * @return EnableMulticast 是否开启组播。
                     * 
                     */
                    bool GetEnableMulticast() const;

                    /**
                     * 设置是否开启组播。
                     * @param _enableMulticast 是否开启组播。
                     * 
                     */
                    void SetEnableMulticast(const bool& _enableMulticast);

                    /**
                     * 判断参数 EnableMulticast 是否已赋值
                     * @return EnableMulticast 是否已赋值
                     * 
                     */
                    bool EnableMulticastHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取`DNS`列表。
                     * @return DnsServerSet `DNS`列表。
                     * 
                     */
                    std::vector<std::string> GetDnsServerSet() const;

                    /**
                     * 设置`DNS`列表。
                     * @param _dnsServerSet `DNS`列表。
                     * 
                     */
                    void SetDnsServerSet(const std::vector<std::string>& _dnsServerSet);

                    /**
                     * 判断参数 DnsServerSet 是否已赋值
                     * @return DnsServerSet 是否已赋值
                     * 
                     */
                    bool DnsServerSetHasBeenSet() const;

                    /**
                     * 获取`DHCP`域名选项值。
                     * @return DomainName `DHCP`域名选项值。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置`DHCP`域名选项值。
                     * @param _domainName `DHCP`域名选项值。
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
                     * 获取`DHCP`选项集`ID`。
                     * @return DhcpOptionsId `DHCP`选项集`ID`。
                     * 
                     */
                    std::string GetDhcpOptionsId() const;

                    /**
                     * 设置`DHCP`选项集`ID`。
                     * @param _dhcpOptionsId `DHCP`选项集`ID`。
                     * 
                     */
                    void SetDhcpOptionsId(const std::string& _dhcpOptionsId);

                    /**
                     * 判断参数 DhcpOptionsId 是否已赋值
                     * @return DhcpOptionsId 是否已赋值
                     * 
                     */
                    bool DhcpOptionsIdHasBeenSet() const;

                    /**
                     * 获取是否开启`DHCP`。
                     * @return EnableDhcp 是否开启`DHCP`。
                     * 
                     */
                    bool GetEnableDhcp() const;

                    /**
                     * 设置是否开启`DHCP`。
                     * @param _enableDhcp 是否开启`DHCP`。
                     * 
                     */
                    void SetEnableDhcp(const bool& _enableDhcp);

                    /**
                     * 判断参数 EnableDhcp 是否已赋值
                     * @return EnableDhcp 是否已赋值
                     * 
                     */
                    bool EnableDhcpHasBeenSet() const;

                    /**
                     * 获取`VPC`的`IPv6` `CIDR`。
                     * @return Ipv6CidrBlock `VPC`的`IPv6` `CIDR`。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置`VPC`的`IPv6` `CIDR`。
                     * @param _ipv6CidrBlock `VPC`的`IPv6` `CIDR`。
                     * 
                     */
                    void SetIpv6CidrBlock(const std::string& _ipv6CidrBlock);

                    /**
                     * 判断参数 Ipv6CidrBlock 是否已赋值
                     * @return Ipv6CidrBlock 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockHasBeenSet() const;

                    /**
                     * 获取标签键值对
                     * @return TagSet 标签键值对
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对
                     * @param _tagSet 标签键值对
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取辅助CIDR
                     * @return AssistantCidrSet 辅助CIDR
                     * 
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 设置辅助CIDR
                     * @param _assistantCidrSet 辅助CIDR
                     * 
                     */
                    void SetAssistantCidrSet(const std::vector<AssistantCidr>& _assistantCidrSet);

                    /**
                     * 判断参数 AssistantCidrSet 是否已赋值
                     * @return AssistantCidrSet 是否已赋值
                     * 
                     */
                    bool AssistantCidrSetHasBeenSet() const;

                    /**
                     * 获取返回多运营商IPv6 Cidr Block
                     * @return Ipv6CidrBlockSet 返回多运营商IPv6 Cidr Block
                     * 
                     */
                    std::vector<ISPIPv6CidrBlock> GetIpv6CidrBlockSet() const;

                    /**
                     * 设置返回多运营商IPv6 Cidr Block
                     * @param _ipv6CidrBlockSet 返回多运营商IPv6 Cidr Block
                     * 
                     */
                    void SetIpv6CidrBlockSet(const std::vector<ISPIPv6CidrBlock>& _ipv6CidrBlockSet);

                    /**
                     * 判断参数 Ipv6CidrBlockSet 是否已赋值
                     * @return Ipv6CidrBlockSet 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockSetHasBeenSet() const;

                private:

                    /**
                     * `VPC`名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * `VPC`实例`ID`，例如：vpc-azd4dt1c。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * `VPC`的`IPv4` `CIDR`。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否默认`VPC`。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 是否开启组播。
                     */
                    bool m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * `DNS`列表。
                     */
                    std::vector<std::string> m_dnsServerSet;
                    bool m_dnsServerSetHasBeenSet;

                    /**
                     * `DHCP`域名选项值。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * `DHCP`选项集`ID`。
                     */
                    std::string m_dhcpOptionsId;
                    bool m_dhcpOptionsIdHasBeenSet;

                    /**
                     * 是否开启`DHCP`。
                     */
                    bool m_enableDhcp;
                    bool m_enableDhcpHasBeenSet;

                    /**
                     * `VPC`的`IPv6` `CIDR`。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 辅助CIDR
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                    /**
                     * 返回多运营商IPv6 Cidr Block
                     */
                    std::vector<ISPIPv6CidrBlock> m_ipv6CidrBlockSet;
                    bool m_ipv6CidrBlockSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_
