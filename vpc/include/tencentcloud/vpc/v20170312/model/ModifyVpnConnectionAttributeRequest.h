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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityPolicyDatabase.h>
#include <tencentcloud/vpc/v20170312/model/IKEOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/IPSECOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/HealthCheckConfig.h>
#include <tencentcloud/vpc/v20170312/model/BgpConfig.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpnConnectionAttribute请求参数结构体
                */
                class ModifyVpnConnectionAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpnConnectionAttributeRequest();
                    ~ModifyVpnConnectionAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VPN通道实例ID。形如：vpnx-f49l6u0z。</p>
                     * @return VpnConnectionId <p>VPN通道实例ID。形如：vpnx-f49l6u0z。</p>
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置<p>VPN通道实例ID。形如：vpnx-f49l6u0z。</p>
                     * @param _vpnConnectionId <p>VPN通道实例ID。形如：vpnx-f49l6u0z。</p>
                     * 
                     */
                    void SetVpnConnectionId(const std::string& _vpnConnectionId);

                    /**
                     * 判断参数 VpnConnectionId 是否已赋值
                     * @return VpnConnectionId 是否已赋值
                     * 
                     */
                    bool VpnConnectionIdHasBeenSet() const;

                    /**
                     * 获取<p>VPN通道名称，可任意命名，但不得超过60个字符。</p>
                     * @return VpnConnectionName <p>VPN通道名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置<p>VPN通道名称，可任意命名，但不得超过60个字符。</p>
                     * @param _vpnConnectionName <p>VPN通道名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    void SetVpnConnectionName(const std::string& _vpnConnectionName);

                    /**
                     * 判断参数 VpnConnectionName 是否已赋值
                     * @return VpnConnectionName 是否已赋值
                     * 
                     */
                    bool VpnConnectionNameHasBeenSet() const;

                    /**
                     * 获取<p>预共享密钥。</p>
                     * @return PreShareKey <p>预共享密钥。</p>
                     * 
                     */
                    std::string GetPreShareKey() const;

                    /**
                     * 设置<p>预共享密钥。</p>
                     * @param _preShareKey <p>预共享密钥。</p>
                     * 
                     */
                    void SetPreShareKey(const std::string& _preShareKey);

                    /**
                     * 判断参数 PreShareKey 是否已赋值
                     * @return PreShareKey 是否已赋值
                     * 
                     */
                    bool PreShareKeyHasBeenSet() const;

                    /**
                     * 获取<p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * @return SecurityPolicyDatabases <p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabases() const;

                    /**
                     * 设置<p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * @param _securityPolicyDatabases <p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * 
                     */
                    void SetSecurityPolicyDatabases(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabases);

                    /**
                     * 判断参数 SecurityPolicyDatabases 是否已赋值
                     * @return SecurityPolicyDatabases 是否已赋值
                     * 
                     */
                    bool SecurityPolicyDatabasesHasBeenSet() const;

                    /**
                     * 获取<p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。</p>
                     * @return IKEOptionsSpecification <p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。</p>
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置<p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。</p>
                     * @param _iKEOptionsSpecification <p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。</p>
                     * 
                     */
                    void SetIKEOptionsSpecification(const IKEOptionsSpecification& _iKEOptionsSpecification);

                    /**
                     * 判断参数 IKEOptionsSpecification 是否已赋值
                     * @return IKEOptionsSpecification 是否已赋值
                     * 
                     */
                    bool IKEOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>IPSec配置，腾讯云提供IPSec安全会话设置。</p>
                     * @return IPSECOptionsSpecification <p>IPSec配置，腾讯云提供IPSec安全会话设置。</p>
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置<p>IPSec配置，腾讯云提供IPSec安全会话设置。</p>
                     * @param _iPSECOptionsSpecification <p>IPSec配置，腾讯云提供IPSec安全会话设置。</p>
                     * 
                     */
                    void SetIPSECOptionsSpecification(const IPSECOptionsSpecification& _iPSECOptionsSpecification);

                    /**
                     * 判断参数 IPSECOptionsSpecification 是否已赋值
                     * @return IPSECOptionsSpecification 是否已赋值
                     * 
                     */
                    bool IPSECOptionsSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>是否启用通道健康检查，默认为False。</p>
                     * @return EnableHealthCheck <p>是否启用通道健康检查，默认为False。</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否启用通道健康检查，默认为False。</p>
                     * @param _enableHealthCheck <p>是否启用通道健康检查，默认为False。</p>
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>本端通道探测IP。</p>
                     * @return HealthCheckLocalIp <p>本端通道探测IP。</p>
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置<p>本端通道探测IP。</p>
                     * @param _healthCheckLocalIp <p>本端通道探测IP。</p>
                     * 
                     */
                    void SetHealthCheckLocalIp(const std::string& _healthCheckLocalIp);

                    /**
                     * 判断参数 HealthCheckLocalIp 是否已赋值
                     * @return HealthCheckLocalIp 是否已赋值
                     * 
                     */
                    bool HealthCheckLocalIpHasBeenSet() const;

                    /**
                     * 获取<p>对端通道探测IP。</p>
                     * @return HealthCheckRemoteIp <p>对端通道探测IP。</p>
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置<p>对端通道探测IP。</p>
                     * @param _healthCheckRemoteIp <p>对端通道探测IP。</p>
                     * 
                     */
                    void SetHealthCheckRemoteIp(const std::string& _healthCheckRemoteIp);

                    /**
                     * 判断参数 HealthCheckRemoteIp 是否已赋值
                     * @return HealthCheckRemoteIp 是否已赋值
                     * 
                     */
                    bool HealthCheckRemoteIpHasBeenSet() const;

                    /**
                     * 获取<p>协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）</p>
                     * @return NegotiationType <p>协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）</p>
                     * 
                     */
                    std::string GetNegotiationType() const;

                    /**
                     * 设置<p>协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）</p>
                     * @param _negotiationType <p>协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）</p>
                     * 
                     */
                    void SetNegotiationType(const std::string& _negotiationType);

                    /**
                     * 判断参数 NegotiationType 是否已赋值
                     * @return NegotiationType 是否已赋值
                     * 
                     */
                    bool NegotiationTypeHasBeenSet() const;

                    /**
                     * 获取<p>DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）</p>
                     * @return DpdEnable <p>DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）</p>
                     * 
                     */
                    int64_t GetDpdEnable() const;

                    /**
                     * 设置<p>DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）</p>
                     * @param _dpdEnable <p>DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）</p>
                     * 
                     */
                    void SetDpdEnable(const int64_t& _dpdEnable);

                    /**
                     * 判断参数 DpdEnable 是否已赋值
                     * @return DpdEnable 是否已赋值
                     * 
                     */
                    bool DpdEnableHasBeenSet() const;

                    /**
                     * 获取<p>DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒</p>
                     * @return DpdTimeout <p>DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒</p>
                     * 
                     */
                    std::string GetDpdTimeout() const;

                    /**
                     * 设置<p>DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒</p>
                     * @param _dpdTimeout <p>DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒</p>
                     * 
                     */
                    void SetDpdTimeout(const std::string& _dpdTimeout);

                    /**
                     * 判断参数 DpdTimeout 是否已赋值
                     * @return DpdTimeout 是否已赋值
                     * 
                     */
                    bool DpdTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p><p>默认值：restart</p>
                     * @return DpdAction <p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p><p>默认值：restart</p>
                     * 
                     */
                    std::string GetDpdAction() const;

                    /**
                     * 设置<p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p><p>默认值：restart</p>
                     * @param _dpdAction <p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p><p>默认值：restart</p>
                     * 
                     */
                    void SetDpdAction(const std::string& _dpdAction);

                    /**
                     * 判断参数 DpdAction 是否已赋值
                     * @return DpdAction 是否已赋值
                     * 
                     */
                    bool DpdActionHasBeenSet() const;

                    /**
                     * 获取<p>对端网关ID，4.0及以上网关下的通道支持更新。</p>
                     * @return CustomerGatewayId <p>对端网关ID，4.0及以上网关下的通道支持更新。</p>
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置<p>对端网关ID，4.0及以上网关下的通道支持更新。</p>
                     * @param _customerGatewayId <p>对端网关ID，4.0及以上网关下的通道支持更新。</p>
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>健康检查配置</p>
                     * @return HealthCheckConfig <p>健康检查配置</p>
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置<p>健康检查配置</p>
                     * @param _healthCheckConfig <p>健康检查配置</p>
                     * 
                     */
                    void SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                    /**
                     * 获取<p>BGP隧道配置</p>
                     * @return BgpConfig <p>BGP隧道配置</p>
                     * 
                     */
                    BgpConfig GetBgpConfig() const;

                    /**
                     * 设置<p>BGP隧道配置</p>
                     * @param _bgpConfig <p>BGP隧道配置</p>
                     * 
                     */
                    void SetBgpConfig(const BgpConfig& _bgpConfig);

                    /**
                     * 判断参数 BgpConfig 是否已赋值
                     * @return BgpConfig 是否已赋值
                     * 
                     */
                    bool BgpConfigHasBeenSet() const;

                private:

                    /**
                     * <p>VPN通道实例ID。形如：vpnx-f49l6u0z。</p>
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * <p>VPN通道名称，可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * <p>预共享密钥。</p>
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * <p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabases;
                    bool m_securityPolicyDatabasesHasBeenSet;

                    /**
                     * <p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。</p>
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * <p>IPSec配置，腾讯云提供IPSec安全会话设置。</p>
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * <p>是否启用通道健康检查，默认为False。</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>本端通道探测IP。</p>
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * <p>对端通道探测IP。</p>
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * <p>协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）</p>
                     */
                    std::string m_negotiationType;
                    bool m_negotiationTypeHasBeenSet;

                    /**
                     * <p>DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）</p>
                     */
                    int64_t m_dpdEnable;
                    bool m_dpdEnableHasBeenSet;

                    /**
                     * <p>DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒</p>
                     */
                    std::string m_dpdTimeout;
                    bool m_dpdTimeoutHasBeenSet;

                    /**
                     * <p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p><p>默认值：restart</p>
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * <p>对端网关ID，4.0及以上网关下的通道支持更新。</p>
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * <p>健康检查配置</p>
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * <p>BGP隧道配置</p>
                     */
                    BgpConfig m_bgpConfig;
                    bool m_bgpConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
