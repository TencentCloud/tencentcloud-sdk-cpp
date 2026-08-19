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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LIGHTHOUSEFIREWALLRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LIGHTHOUSEFIREWALLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 轻量应用服务器防火墙规则
                */
                class LighthouseFirewallRule : public AbstractModel
                {
                public:
                    LighthouseFirewallRule();
                    ~LighthouseFirewallRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用类型</p>
                     * @return AppType <p>应用类型</p>
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置<p>应用类型</p>
                     * @param _appType <p>应用类型</p>
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取<p>协议</p>
                     * @return Protocol <p>协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议</p>
                     * @param _protocol <p>协议</p>
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
                     * 获取<p>端口</p>
                     * @return Port <p>端口</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _port <p>端口</p>
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
                     * 获取<p>地址</p>
                     * @return CidrBlock <p>地址</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>地址</p>
                     * @param _cidrBlock <p>地址</p>
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
                     * 获取<p>ipv6地址</p>
                     * @return Ipv6CidrBlock <p>ipv6地址</p>
                     * 
                     */
                    std::string GetIpv6CidrBlock() const;

                    /**
                     * 设置<p>ipv6地址</p>
                     * @param _ipv6CidrBlock <p>ipv6地址</p>
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
                     * 获取<p>状态</p>
                     * @return Action <p>状态</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _action <p>状态</p>
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
                     * 获取<p>描述</p>
                     * @return FirewallRuleDescription <p>描述</p>
                     * 
                     */
                    std::string GetFirewallRuleDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _firewallRuleDescription <p>描述</p>
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
                     * <p>应用类型</p>
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>ipv6地址</p>
                     */
                    std::string m_ipv6CidrBlock;
                    bool m_ipv6CidrBlockHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_firewallRuleDescription;
                    bool m_firewallRuleDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LIGHTHOUSEFIREWALLRULE_H_
