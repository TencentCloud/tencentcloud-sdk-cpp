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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLRULE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述防火墙规则信息。
                */
                class FirewallRule : public AbstractModel
                {
                public:
                    FirewallRule();
                    ~FirewallRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议，取值：TCP，UDP，ICMP，ALL，ICMPv6。

- 使用ICMP协议时，只支持CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
- 使用ICMPv6协议时，只支持Ipv6CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
                     * @return Protocol 协议，取值：TCP，UDP，ICMP，ALL，ICMPv6。

- 使用ICMP协议时，只支持CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
- 使用ICMPv6协议时，只支持Ipv6CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，取值：TCP，UDP，ICMP，ALL，ICMPv6。

- 使用ICMP协议时，只支持CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
- 使用ICMPv6协议时，只支持Ipv6CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
                     * @param _protocol 协议，取值：TCP，UDP，ICMP，ALL，ICMPv6。

- 使用ICMP协议时，只支持CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
- 使用ICMPv6协议时，只支持Ipv6CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
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
                     * 获取端口，取值：ALL，单独的端口，逗号分隔的离散端口，减号分隔的端口范围。注意：单独的端口与离散端口不能同时存在。
                     * @return Port 端口，取值：ALL，单独的端口，逗号分隔的离散端口，减号分隔的端口范围。注意：单独的端口与离散端口不能同时存在。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口，取值：ALL，单独的端口，逗号分隔的离散端口，减号分隔的端口范围。注意：单独的端口与离散端口不能同时存在。
                     * @param _port 端口，取值：ALL，单独的端口，逗号分隔的离散端口，减号分隔的端口范围。注意：单独的端口与离散端口不能同时存在。
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
                     * 获取IPv4网段或 IPv4地址(互斥)。
示例值：0.0.0.0/0。

和Ipv6CidrBlock互斥，两者都不指定时，如果Protocol不是ICMPv6，则取默认值0.0.0.0/0。
                     * @return CidrBlock IPv4网段或 IPv4地址(互斥)。
示例值：0.0.0.0/0。

和Ipv6CidrBlock互斥，两者都不指定时，如果Protocol不是ICMPv6，则取默认值0.0.0.0/0。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置IPv4网段或 IPv4地址(互斥)。
示例值：0.0.0.0/0。

和Ipv6CidrBlock互斥，两者都不指定时，如果Protocol不是ICMPv6，则取默认值0.0.0.0/0。
                     * @param _cidrBlock IPv4网段或 IPv4地址(互斥)。
示例值：0.0.0.0/0。

和Ipv6CidrBlock互斥，两者都不指定时，如果Protocol不是ICMPv6，则取默认值0.0.0.0/0。
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
                     * 获取IPv6网段或IPv6地址(互斥)。
示例值：::/0。

和CidrBlock互斥，两者都不指定时，如果Protocol是ICMPv6，则取默认值::/0。
                     * @return Ipv6CidrBlock IPv6网段或IPv6地址(互斥)。
示例值：::/0。

和CidrBlock互斥，两者都不指定时，如果Protocol是ICMPv6，则取默认值::/0。
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置IPv6网段或IPv6地址(互斥)。
示例值：::/0。

和CidrBlock互斥，两者都不指定时，如果Protocol是ICMPv6，则取默认值::/0。
                     * @param _ipv6CidrBlock IPv6网段或IPv6地址(互斥)。
示例值：::/0。

和CidrBlock互斥，两者都不指定时，如果Protocol是ICMPv6，则取默认值::/0。
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
                     * 获取取值：ACCEPT（允许），DROP（拒绝）。默认为 ACCEPT。
                     * @return Action 取值：ACCEPT（允许），DROP（拒绝）。默认为 ACCEPT。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置取值：ACCEPT（允许），DROP（拒绝）。默认为 ACCEPT。
                     * @param _action 取值：ACCEPT（允许），DROP（拒绝）。默认为 ACCEPT。
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
                     * 获取防火墙规则描述。
                     * @return FirewallRuleDescription 防火墙规则描述。
                     * 
                     */
                    std::string GetFirewallRuleDescription() const;

                    /**
                     * 设置防火墙规则描述。
                     * @param _firewallRuleDescription 防火墙规则描述。
                     * 
                     */
                    void SetFirewallRuleDescription(const std::string& _firewallRuleDescription);

                    /**
                     * 判断参数 FirewallRuleDescription 是否已赋值
                     * @return FirewallRuleDescription 是否已赋值
                     * 
                     */
                    bool FirewallRuleDescriptionHasBeenSet() const;

                private:

                    /**
                     * 协议，取值：TCP，UDP，ICMP，ALL，ICMPv6。

- 使用ICMP协议时，只支持CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
- 使用ICMPv6协议时，只支持Ipv6CidrBlock，不支持使用Port、Ipv6CidrBlock参数；
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口，取值：ALL，单独的端口，逗号分隔的离散端口，减号分隔的端口范围。注意：单独的端口与离散端口不能同时存在。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IPv4网段或 IPv4地址(互斥)。
示例值：0.0.0.0/0。

和Ipv6CidrBlock互斥，两者都不指定时，如果Protocol不是ICMPv6，则取默认值0.0.0.0/0。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * IPv6网段或IPv6地址(互斥)。
示例值：::/0。

和CidrBlock互斥，两者都不指定时，如果Protocol是ICMPv6，则取默认值::/0。
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * 取值：ACCEPT（允许），DROP（拒绝）。默认为 ACCEPT。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 防火墙规则描述。
                     */
                    std::string m_firewallRuleDescription;
                    bool m_firewallRuleDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLRULE_H_
