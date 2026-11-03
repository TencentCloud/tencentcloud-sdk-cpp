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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplateSpecification.h>
#include <tencentcloud/vpc/v20170312/model/AddressTemplateSpecification.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 安全组规则对象
                */
                class SecurityGroupPolicy : public AbstractModel
                {
                public:
                    SecurityGroupPolicy();
                    ~SecurityGroupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>安全组规则索引号，值会随着安全组规则的变更动态变化。使用PolicyIndex时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的PolicyIndex，并且结合返回值中的Version一起使用处理规则。</p>
                     * @return PolicyIndex <p>安全组规则索引号，值会随着安全组规则的变更动态变化。使用PolicyIndex时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的PolicyIndex，并且结合返回值中的Version一起使用处理规则。</p>
                     * 
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置<p>安全组规则索引号，值会随着安全组规则的变更动态变化。使用PolicyIndex时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的PolicyIndex，并且结合返回值中的Version一起使用处理规则。</p>
                     * @param _policyIndex <p>安全组规则索引号，值会随着安全组规则的变更动态变化。使用PolicyIndex时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的PolicyIndex，并且结合返回值中的Version一起使用处理规则。</p>
                     * 
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     * 
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取<p>协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。</p>
                     * @return Protocol <p>协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。</p>
                     * @param _protocol <p>协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>端口(all, 离散port,  range)。<br>说明：如果Protocol设置为ALL，则Port也需要设置为all。</p>
                     * @return Port <p>端口(all, 离散port,  range)。<br>说明：如果Protocol设置为ALL，则Port也需要设置为all。</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口(all, 离散port,  range)。<br>说明：如果Protocol设置为ALL，则Port也需要设置为all。</p>
                     * @param _port <p>端口(all, 离散port,  range)。<br>说明：如果Protocol设置为ALL，则Port也需要设置为all。</p>
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。</p>
                     * @return ServiceTemplate <p>协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。</p>
                     * 
                     */
                    ServiceTemplateSpecification GetServiceTemplate() const;

                    /**
                     * 设置<p>协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。</p>
                     * @param _serviceTemplate <p>协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。</p>
                     * 
                     */
                    void SetServiceTemplate(const ServiceTemplateSpecification& _serviceTemplate);

                    /**
                     * 判断参数 ServiceTemplate 是否已赋值
                     * @return ServiceTemplate 是否已赋值
                     * 
                     */
                    bool ServiceTemplateHasBeenSet() const;

                    /**
                     * 获取<p>网段或IP(互斥)，特殊说明：0.0.0.0/n 都会映射为0.0.0.0/0。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IP地址。</p>
                     * @return CidrBlock <p>网段或IP(互斥)，特殊说明：0.0.0.0/n 都会映射为0.0.0.0/0。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IP地址。</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>网段或IP(互斥)，特殊说明：0.0.0.0/n 都会映射为0.0.0.0/0。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IP地址。</p>
                     * @param _cidrBlock <p>网段或IP(互斥)，特殊说明：0.0.0.0/n 都会映射为0.0.0.0/0。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IP地址。</p>
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
                     * 获取<p>网段或IPv6(互斥)。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IPv6地址。</p>
                     * @return Ipv6CidrBlock <p>网段或IPv6(互斥)。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IPv6地址。</p>
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置<p>网段或IPv6(互斥)。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IPv6地址。</p>
                     * @param _ipv6CidrBlock <p>网段或IPv6(互斥)。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IPv6地址。</p>
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
                     * 获取<p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * @return SecurityGroupId <p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置<p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * @param _securityGroupId <p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>IP地址ID或者IP地址组ID。</p>
                     * @return AddressTemplate <p>IP地址ID或者IP地址组ID。</p>
                     * 
                     */
                    AddressTemplateSpecification GetAddressTemplate() const;

                    /**
                     * 设置<p>IP地址ID或者IP地址组ID。</p>
                     * @param _addressTemplate <p>IP地址ID或者IP地址组ID。</p>
                     * 
                     */
                    void SetAddressTemplate(const AddressTemplateSpecification& _addressTemplate);

                    /**
                     * 判断参数 AddressTemplate 是否已赋值
                     * @return AddressTemplate 是否已赋值
                     * 
                     */
                    bool AddressTemplateHasBeenSet() const;

                    /**
                     * 获取<p>ACCEPT 或 DROP。</p>
                     * @return Action <p>ACCEPT 或 DROP。</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>ACCEPT 或 DROP。</p>
                     * @param _action <p>ACCEPT 或 DROP。</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>安全组规则描述。作为入参时，当未传递该参数或值为空，且参数CidrBlock或Ipv6CidrBlock值为MY_PUBLIC_IP时，该参数的值将会被自动填充为Replaced-From-MY_PUBLIC_IP。</p>
                     * @return PolicyDescription <p>安全组规则描述。作为入参时，当未传递该参数或值为空，且参数CidrBlock或Ipv6CidrBlock值为MY_PUBLIC_IP时，该参数的值将会被自动填充为Replaced-From-MY_PUBLIC_IP。</p>
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置<p>安全组规则描述。作为入参时，当未传递该参数或值为空，且参数CidrBlock或Ipv6CidrBlock值为MY_PUBLIC_IP时，该参数的值将会被自动填充为Replaced-From-MY_PUBLIC_IP。</p>
                     * @param _policyDescription <p>安全组规则描述。作为入参时，当未传递该参数或值为空，且参数CidrBlock或Ipv6CidrBlock值为MY_PUBLIC_IP时，该参数的值将会被自动填充为Replaced-From-MY_PUBLIC_IP。</p>
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>安全组最近修改时间。</p>
                     * @return ModifyTime <p>安全组最近修改时间。</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>安全组最近修改时间。</p>
                     * @param _modifyTime <p>安全组最近修改时间。</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>安全组规则优先级，值会随着安全组规则的变更动态变化。使用Priority时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的Priority，并且结合返回值中的Version一起使用处理规则。</p>
                     * @return Priority <p>安全组规则优先级，值会随着安全组规则的变更动态变化。使用Priority时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的Priority，并且结合返回值中的Version一起使用处理规则。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>安全组规则优先级，值会随着安全组规则的变更动态变化。使用Priority时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的Priority，并且结合返回值中的Version一起使用处理规则。</p>
                     * @param _priority <p>安全组规则优先级，值会随着安全组规则的变更动态变化。使用Priority时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的Priority，并且结合返回值中的Version一起使用处理规则。</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>安全组规则索引号，值会随着安全组规则的变更动态变化。使用PolicyIndex时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的PolicyIndex，并且结合返回值中的Version一起使用处理规则。</p>
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * <p>协议, 取值: TCP,UDP,ICMP,ICMPv6,ALL。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>端口(all, 离散port,  range)。<br>说明：如果Protocol设置为ALL，则Port也需要设置为all。</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>协议端口ID或者协议端口组ID。ServiceTemplate和Protocol+Port互斥。</p>
                     */
                    ServiceTemplateSpecification m_serviceTemplate;
                    bool m_serviceTemplateHasBeenSet;

                    /**
                     * <p>网段或IP(互斥)，特殊说明：0.0.0.0/n 都会映射为0.0.0.0/0。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IP地址。</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>网段或IPv6(互斥)。作为入参时，可使用字符串<code>MY_PUBLIC_IP</code>指代发起请求的公网IPv6地址。</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>安全组实例ID，例如：sg-ohuuioma。</p>
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * <p>IP地址ID或者IP地址组ID。</p>
                     */
                    AddressTemplateSpecification m_addressTemplate;
                    bool m_addressTemplateHasBeenSet;

                    /**
                     * <p>ACCEPT 或 DROP。</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>安全组规则描述。作为入参时，当未传递该参数或值为空，且参数CidrBlock或Ipv6CidrBlock值为MY_PUBLIC_IP时，该参数的值将会被自动填充为Replaced-From-MY_PUBLIC_IP。</p>
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * <p>安全组最近修改时间。</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>安全组规则优先级，值会随着安全组规则的变更动态变化。使用Priority时，请先调用<code>DescribeSecurityGroupPolicies</code>获取到规则的Priority，并且结合返回值中的Version一起使用处理规则。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPPOLICY_H_
