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
                     * 获取<p>vpc名称，最大长度不能超过60个字节。</p>
                     * @return VpcName <p>vpc名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>vpc名称，最大长度不能超过60个字节。</p>
                     * @param _vpcName <p>vpc名称，最大长度不能超过60个字节。</p>
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
                     * 获取<p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * @return StackType <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * 
                     */
                    std::string GetStackType() const;

                    /**
                     * 设置<p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * @param _stackType <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     * 
                     */
                    void SetStackType(const std::string& _stackType);

                    /**
                     * 判断参数 StackType 是否已赋值
                     * @return StackType 是否已赋值
                     * 
                     */
                    bool StackTypeHasBeenSet() const;

                    /**
                     * 获取<p>vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。</p>
                     * @return CidrBlock <p>vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。</p>
                     * @param _cidrBlock <p>vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。</p>
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
                     * 获取<p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * @return AddressType <p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * @param _addressType <p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启组播。true: 开启, false: 不开启。</p>
                     * @return EnableMulticast <p>是否开启组播。true: 开启, false: 不开启。</p>
                     * 
                     */
                    std::string GetEnableMulticast() const;

                    /**
                     * 设置<p>是否开启组播。true: 开启, false: 不开启。</p>
                     * @param _enableMulticast <p>是否开启组播。true: 开启, false: 不开启。</p>
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
                     * 获取<p>DNS地址，最多支持4个。</p>
                     * @return DnsServers <p>DNS地址，最多支持4个。</p>
                     * 
                     */
                    std::vector<std::string> GetDnsServers() const;

                    /**
                     * 设置<p>DNS地址，最多支持4个。</p>
                     * @param _dnsServers <p>DNS地址，最多支持4个。</p>
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
                     * 获取<p>DHCP使用的域名。</p>
                     * @return DomainName <p>DHCP使用的域名。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>DHCP使用的域名。</p>
                     * @param _domainName <p>DHCP使用的域名。</p>
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
                     * 获取<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @return Tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     * @param _tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
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
                     * <p>vpc名称，最大长度不能超过60个字节。</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>协议栈类型</p><p>枚举值：</p><ul><li>DualStack： IPv4和IPv6双栈</li><li>IPv6Only： IPv6单栈</li></ul>
                     */
                    std::string m_stackType;
                    bool m_stackTypeHasBeenSet;

                    /**
                     * <p>vpc的cidr，仅能在10.0.0.0/12，172.16.0.0/12，192.168.0.0/16这三个内网网段内。</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p><code>VPC</code>的<code>IPv6</code> <code>CIDR</code>。</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>IPv6网段类型</p><p>枚举值：</p><ul><li>GUA： 全球单播地址</li><li>ULA： 唯一本地地址</li></ul>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>是否开启组播。true: 开启, false: 不开启。</p>
                     */
                    std::string m_enableMulticast;
                    bool m_enableMulticastHasBeenSet;

                    /**
                     * <p>DNS地址，最多支持4个。</p>
                     */
                    std::vector<std::string> m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                    /**
                     * <p>DHCP使用的域名。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>vpc关联云联网时路由发布策略， true：开启cidr路由发布，false：开启subnet子网路由发布。创建vpc时默认为子网路由发布，当选择cidr路由发布时,请通过工单加入白名单</p>
                     */
                    bool m_enableRouteVpcPublish;
                    bool m_enableRouteVpcPublishHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCREQUEST_H_
