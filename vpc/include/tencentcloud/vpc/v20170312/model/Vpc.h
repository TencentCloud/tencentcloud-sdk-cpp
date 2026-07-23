/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p><code>VPC</code>名称。</p>
                     * @return VpcName <p><code>VPC</code>名称。</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p><code>VPC</code>名称。</p>
                     * @param _vpcName <p><code>VPC</code>名称。</p>
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
                     * 获取<p><code>VPC</code>实例<code>ID</code>，例如：vpc-azd4dt1c。</p>
                     * @return VpcId <p><code>VPC</code>实例<code>ID</code>，例如：vpc-azd4dt1c。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p><code>VPC</code>实例<code>ID</code>，例如：vpc-azd4dt1c。</p>
                     * @param _vpcId <p><code>VPC</code>实例<code>ID</code>，例如：vpc-azd4dt1c。</p>
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
                     * 获取<p><code>VPC</code>的<code>IPv4</code> <code>CIDR</code>。</p>
                     * @return CidrBlock <p><code>VPC</code>的<code>IPv4</code> <code>CIDR</code>。</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p><code>VPC</code>的<code>IPv4</code> <code>CIDR</code>。</p>
                     * @param _cidrBlock <p><code>VPC</code>的<code>IPv4</code> <code>CIDR</code>。</p>
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
                     * 获取<p>是否默认<code>VPC</code>。</p>
                     * @return IsDefault <p>是否默认<code>VPC</code>。</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否默认<code>VPC</code>。</p>
                     * @param _isDefault <p>是否默认<code>VPC</code>。</p>
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
                     * 获取<p>是否开启组播。</p>
                     * @return EnableMulticast <p>是否开启组播。</p>
                     * 
                     */
                    bool GetEnableMulticast() const;

                    /**
                     * 设置<p>是否开启组播。</p>
                     * @param _enableMulticast <p>是否开启组播。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
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
                     * 获取<p><code>DNS</code>列表。</p>
                     * @return DnsServerSet <p><code>DNS</code>列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDnsServerSet() const;

                    /**
                     * 设置<p><code>DNS</code>列表。</p>
                     * @param _dnsServerSet <p><code>DNS</code>列表。</p>
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
                     * 获取<p><code>DHCP</code>域名选项值。</p>
                     * @return DomainName <p><code>DHCP</code>域名选项值。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p><code>DHCP</code>域名选项值。</p>
                     * @param _domainName <p><code>DHCP</code>域名选项值。</p>
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
                     * 获取<p><code>DHCP</code>选项集<code>ID</code>。</p>
                     * @return DhcpOptionsId <p><code>DHCP</code>选项集<code>ID</code>。</p>
                     * 
                     */
                    std::string GetDhcpOptionsId() const;

                    /**
                     * 设置<p><code>DHCP</code>选项集<code>ID</code>。</p>
                     * @param _dhcpOptionsId <p><code>DHCP</code>选项集<code>ID</code>。</p>
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
                     * 获取<p>是否开启<code>DHCP</code>。</p>
                     * @return EnableDhcp <p>是否开启<code>DHCP</code>。</p>
                     * 
                     */
                    bool GetEnableDhcp() const;

                    /**
                     * 设置<p>是否开启<code>DHCP</code>。</p>
                     * @param _enableDhcp <p>是否开启<code>DHCP</code>。</p>
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
                     * 获取<p><code>VPC</code>的<code>IPv6</code> <code>CIDR</code>。</p>
                     * @return Ipv6CidrBlock <p><code>VPC</code>的<code>IPv6</code> <code>CIDR</code>。</p>
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置<p><code>VPC</code>的<code>IPv6</code> <code>CIDR</code>。</p>
                     * @param _ipv6CidrBlock <p><code>VPC</code>的<code>IPv6</code> <code>CIDR</code>。</p>
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
                     * 获取<p>标签键值对</p>
                     * @return TagSet <p>标签键值对</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对</p>
                     * @param _tagSet <p>标签键值对</p>
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
                     * 获取<p>辅助CIDR</p>
                     * @return AssistantCidrSet <p>辅助CIDR</p>
                     * 
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 设置<p>辅助CIDR</p>
                     * @param _assistantCidrSet <p>辅助CIDR</p>
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
                     * 获取<p>vpc关联云联网时路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时,请通过工单加入白名单</p>
                     * @return EnableRouteVpcPublish <p>vpc关联云联网时路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时,请通过工单加入白名单</p>
                     * 
                     */
                    bool GetEnableRouteVpcPublish() const;

                    /**
                     * 设置<p>vpc关联云联网时路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时,请通过工单加入白名单</p>
                     * @param _enableRouteVpcPublish <p>vpc关联云联网时路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时,请通过工单加入白名单</p>
                     * 
                     */
                    void SetEnableRouteVpcPublish(const bool& _enableRouteVpcPublish);

                    /**
                     * 判断参数 EnableRouteVpcPublish 是否已赋值
                     * @return EnableRouteVpcPublish 是否已赋值
                     * 
                     */
                    bool EnableRouteVpcPublishHasBeenSet() const;

                    /**
                     * 获取<p>返回多运营商IPv6 Cidr Block</p>
                     * @return Ipv6CidrBlockSet <p>返回多运营商IPv6 Cidr Block</p>
                     * 
                     */
                    std::vector<ISPIPv6CidrBlock> GetIpv6CidrBlockSet() const;

                    /**
                     * 设置<p>返回多运营商IPv6 Cidr Block</p>
                     * @param _ipv6CidrBlockSet <p>返回多运营商IPv6 Cidr Block</p>
                     * 
                     */
                    void SetIpv6CidrBlockSet(const std::vector<ISPIPv6CidrBlock>& _ipv6CidrBlockSet);

                    /**
                     * 判断参数 Ipv6CidrBlockSet 是否已赋值
                     * @return Ipv6CidrBlockSet 是否已赋值
                     * 
                     */
                    bool Ipv6CidrBlockSetHasBeenSet() const;

                    /**
                     * 获取<p>vpc关联云联网时IPv6类型路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时，请通过工单加入白名单。</p>
                     * @return EnableRouteVpcPublishIpv6 <p>vpc关联云联网时IPv6类型路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时，请通过工单加入白名单。</p>
                     * 
                     */
                    bool GetEnableRouteVpcPublishIpv6() const;

                    /**
                     * 设置<p>vpc关联云联网时IPv6类型路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时，请通过工单加入白名单。</p>
                     * @param _enableRouteVpcPublishIpv6 <p>vpc关联云联网时IPv6类型路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时，请通过工单加入白名单。</p>
                     * 
                     */
                    void SetEnableRouteVpcPublishIpv6(const bool& _enableRouteVpcPublishIpv6);

                    /**
                     * 判断参数 EnableRouteVpcPublishIpv6 是否已赋值
                     * @return EnableRouteVpcPublishIpv6 是否已赋值
                     * 
                     */
                    bool EnableRouteVpcPublishIpv6HasBeenSet() const;

                private:

                    /**
                     * <p><code>VPC</code>名称。</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p><code>VPC</code>实例<code>ID</code>，例如：vpc-azd4dt1c。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p><code>VPC</code>的<code>IPv4</code> <code>CIDR</code>。</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>是否默认<code>VPC</code>。</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>是否开启组播。</p>
                     */
                    bool m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p><code>DNS</code>列表。</p>
                     */
                    std::vector<std::string> m_dnsServerSet;
                    bool m_dnsServerSetHasBeenSet;

                    /**
                     * <p><code>DHCP</code>域名选项值。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p><code>DHCP</code>选项集<code>ID</code>。</p>
                     */
                    std::string m_dhcpOptionsId;
                    bool m_dhcpOptionsIdHasBeenSet;

                    /**
                     * <p>是否开启<code>DHCP</code>。</p>
                     */
                    bool m_enableDhcp;
                    bool m_enableDhcpHasBeenSet;

                    /**
                     * <p><code>VPC</code>的<code>IPv6</code> <code>CIDR</code>。</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>标签键值对</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>辅助CIDR</p>
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                    /**
                     * <p>vpc关联云联网时路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时,请通过工单加入白名单</p>
                     */
                    bool m_enableRouteVpcPublish;
                    bool m_enableRouteVpcPublishHasBeenSet;

                    /**
                     * <p>返回多运营商IPv6 Cidr Block</p>
                     */
                    std::vector<ISPIPv6CidrBlock> m_ipv6CidrBlockSet;
                    bool m_ipv6CidrBlockSetHasBeenSet;

                    /**
                     * <p>vpc关联云联网时IPv6类型路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时，请通过工单加入白名单。</p>
                     */
                    bool m_enableRouteVpcPublishIpv6;
                    bool m_enableRouteVpcPublishIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPC_H_
