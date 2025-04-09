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
                     * 获取VPN通道实例ID。形如：vpnx-f49l6u0z。
                     * @return VpnConnectionId VPN通道实例ID。形如：vpnx-f49l6u0z。
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置VPN通道实例ID。形如：vpnx-f49l6u0z。
                     * @param _vpnConnectionId VPN通道实例ID。形如：vpnx-f49l6u0z。
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
                     * 获取VPN通道名称，可任意命名，但不得超过60个字符。
                     * @return VpnConnectionName VPN通道名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置VPN通道名称，可任意命名，但不得超过60个字符。
                     * @param _vpnConnectionName VPN通道名称，可任意命名，但不得超过60个字符。
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
                     * 获取预共享密钥。
                     * @return PreShareKey 预共享密钥。
                     * 
                     */
                    std::string GetPreShareKey() const;

                    /**
                     * 设置预共享密钥。
                     * @param _preShareKey 预共享密钥。
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
                     * 获取SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * @return SecurityPolicyDatabases SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabases() const;

                    /**
                     * 设置SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     * @param _securityPolicyDatabases SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
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
                     * 获取IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * @return IKEOptionsSpecification IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     * @param _iKEOptionsSpecification IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
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
                     * 获取IPSec配置，腾讯云提供IPSec安全会话设置。
                     * @return IPSECOptionsSpecification IPSec配置，腾讯云提供IPSec安全会话设置。
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSec配置，腾讯云提供IPSec安全会话设置。
                     * @param _iPSECOptionsSpecification IPSec配置，腾讯云提供IPSec安全会话设置。
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
                     * 获取是否启用通道健康检查，默认为False。
                     * @return EnableHealthCheck 是否启用通道健康检查，默认为False。
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否启用通道健康检查，默认为False。
                     * @param _enableHealthCheck 是否启用通道健康检查，默认为False。
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
                     * 获取本端通道探测IP。
                     * @return HealthCheckLocalIp 本端通道探测IP。
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置本端通道探测IP。
                     * @param _healthCheckLocalIp 本端通道探测IP。
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
                     * 获取对端通道探测IP。
                     * @return HealthCheckRemoteIp 对端通道探测IP。
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置对端通道探测IP。
                     * @param _healthCheckRemoteIp 对端通道探测IP。
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
                     * 获取协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）
                     * @return NegotiationType 协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）
                     * 
                     */
                    std::string GetNegotiationType() const;

                    /**
                     * 设置协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）
                     * @param _negotiationType 协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）
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
                     * 获取DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）
                     * @return DpdEnable DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）
                     * 
                     */
                    int64_t GetDpdEnable() const;

                    /**
                     * 设置DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）
                     * @param _dpdEnable DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）
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
                     * 获取DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒
                     * @return DpdTimeout DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒
                     * 
                     */
                    std::string GetDpdTimeout() const;

                    /**
                     * 设置DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒
                     * @param _dpdTimeout DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒
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
                     * 获取DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）
                     * @return DpdAction DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）
                     * 
                     */
                    std::string GetDpdAction() const;

                    /**
                     * 设置DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）
                     * @param _dpdAction DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）
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
                     * 获取对端网关ID，4.0及以上网关下的通道支持更新。
                     * @return CustomerGatewayId 对端网关ID，4.0及以上网关下的通道支持更新。
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置对端网关ID，4.0及以上网关下的通道支持更新。
                     * @param _customerGatewayId 对端网关ID，4.0及以上网关下的通道支持更新。
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
                     * 获取健康检查配置
                     * @return HealthCheckConfig 健康检查配置
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置健康检查配置
                     * @param _healthCheckConfig 健康检查配置
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
                     * 获取BGP隧道配置
                     * @return BgpConfig BGP隧道配置
                     * 
                     */
                    BgpConfig GetBgpConfig() const;

                    /**
                     * 设置BGP隧道配置
                     * @param _bgpConfig BGP隧道配置
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
                     * VPN通道实例ID。形如：vpnx-f49l6u0z。
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * VPN通道名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * 预共享密钥。
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * SPD策略组，例如：{"10.0.0.5/24":["172.123.10.5/16"]}，10.0.0.5/24是vpc内网段，172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabases;
                    bool m_securityPolicyDatabasesHasBeenSet;

                    /**
                     * IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议。
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * IPSec配置，腾讯云提供IPSec安全会话设置。
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * 是否启用通道健康检查，默认为False。
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * 本端通道探测IP。
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * 对端通道探测IP。
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * 协商类型，默认为active（主动协商）。可选值：active（主动协商），passive（被动协商），flowTrigger（流量协商）
                     */
                    std::string m_negotiationType;
                    bool m_negotiationTypeHasBeenSet;

                    /**
                     * DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）
                     */
                    int64_t m_dpdEnable;
                    bool m_dpdEnableHasBeenSet;

                    /**
                     * DPD超时时间。即探测确认对端不存在需要的时间。dpdEnable为1（开启）时有效。默认30，单位为秒
                     */
                    std::string m_dpdTimeout;
                    bool m_dpdTimeoutHasBeenSet;

                    /**
                     * DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * 对端网关ID，4.0及以上网关下的通道支持更新。
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * 健康检查配置
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * BGP隧道配置
                     */
                    BgpConfig m_bgpConfig;
                    bool m_bgpConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_H_
