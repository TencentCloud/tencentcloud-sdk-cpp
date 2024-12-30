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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityPolicyDatabase.h>
#include <tencentcloud/vpc/v20170312/model/IKEOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/IPSECOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/BgpConfigAndAsn.h>
#include <tencentcloud/vpc/v20170312/model/HealthCheckConfig.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN通道对象。
                */
                class VpnConnection : public AbstractModel
                {
                public:
                    VpnConnection();
                    ~VpnConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道实例ID。
                     * @return VpnConnectionId 通道实例ID。
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置通道实例ID。
                     * @param _vpnConnectionId 通道实例ID。
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
                     * 获取通道名称。
                     * @return VpnConnectionName 通道名称。
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置通道名称。
                     * @param _vpnConnectionName 通道名称。
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
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取VPN网关实例ID。
                     * @return VpnGatewayId VPN网关实例ID。
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN网关实例ID。
                     * @param _vpnGatewayId VPN网关实例ID。
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取对端网关实例ID。
                     * @return CustomerGatewayId 对端网关实例ID。
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置对端网关实例ID。
                     * @param _customerGatewayId 对端网关实例ID。
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
                     * 获取通道传输协议。
                     * @return VpnProto 通道传输协议。
                     * 
                     */
                    std::string GetVpnProto() const;

                    /**
                     * 设置通道传输协议。
                     * @param _vpnProto 通道传输协议。
                     * 
                     */
                    void SetVpnProto(const std::string& _vpnProto);

                    /**
                     * 判断参数 VpnProto 是否已赋值
                     * @return VpnProto 是否已赋值
                     * 
                     */
                    bool VpnProtoHasBeenSet() const;

                    /**
                     * 获取通道加密协议。
                     * @return EncryptProto 通道加密协议。
                     * 
                     */
                    std::string GetEncryptProto() const;

                    /**
                     * 设置通道加密协议。
                     * @param _encryptProto 通道加密协议。
                     * 
                     */
                    void SetEncryptProto(const std::string& _encryptProto);

                    /**
                     * 判断参数 EncryptProto 是否已赋值
                     * @return EncryptProto 是否已赋值
                     * 
                     */
                    bool EncryptProtoHasBeenSet() const;

                    /**
                     * 获取路由类型。
                     * @return RouteType 路由类型。
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置路由类型。
                     * @param _routeType 路由类型。
                     * 
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

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
                     * 获取通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。
                     * @return State 通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。
                     * @param _state 通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取通道连接状态，AVAILABLE：已连接。
                     * @return NetStatus 通道连接状态，AVAILABLE：已连接。
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置通道连接状态，AVAILABLE：已连接。
                     * @param _netStatus 通道连接状态，AVAILABLE：已连接。
                     * 
                     */
                    void SetNetStatus(const std::string& _netStatus);

                    /**
                     * 判断参数 NetStatus 是否已赋值
                     * @return NetStatus 是否已赋值
                     * 
                     */
                    bool NetStatusHasBeenSet() const;

                    /**
                     * 获取SPD。
                     * @return SecurityPolicyDatabaseSet SPD。
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabaseSet() const;

                    /**
                     * 设置SPD。
                     * @param _securityPolicyDatabaseSet SPD。
                     * 
                     */
                    void SetSecurityPolicyDatabaseSet(const std::vector<SecurityPolicyDatabase>& _securityPolicyDatabaseSet);

                    /**
                     * 判断参数 SecurityPolicyDatabaseSet 是否已赋值
                     * @return SecurityPolicyDatabaseSet 是否已赋值
                     * 
                     */
                    bool SecurityPolicyDatabaseSetHasBeenSet() const;

                    /**
                     * 获取IKE选项。
                     * @return IKEOptionsSpecification IKE选项。
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置IKE选项。
                     * @param _iKEOptionsSpecification IKE选项。
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
                     * 获取IPSEC选择。
                     * @return IPSECOptionsSpecification IPSEC选择。
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置IPSEC选择。
                     * @param _iPSECOptionsSpecification IPSEC选择。
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
                     * 获取是否支持健康状态探测
                     * @return EnableHealthCheck 是否支持健康状态探测
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置是否支持健康状态探测
                     * @param _enableHealthCheck 是否支持健康状态探测
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
                     * 获取本端探测ip
                     * @return HealthCheckLocalIp 本端探测ip
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置本端探测ip
                     * @param _healthCheckLocalIp 本端探测ip
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
                     * 获取对端探测ip
                     * @return HealthCheckRemoteIp 对端探测ip
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置对端探测ip
                     * @param _healthCheckRemoteIp 对端探测ip
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
                     * 获取通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象
                     * @return HealthCheckStatus 通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象
                     * 
                     */
                    std::string GetHealthCheckStatus() const;

                    /**
                     * 设置通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象
                     * @param _healthCheckStatus 通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象
                     * 
                     */
                    void SetHealthCheckStatus(const std::string& _healthCheckStatus);

                    /**
                     * 判断参数 HealthCheckStatus 是否已赋值
                     * @return HealthCheckStatus 是否已赋值
                     * 
                     */
                    bool HealthCheckStatusHasBeenSet() const;

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
                     * 获取DPD超时时间。即探测确认对端不存在需要的时间。
                     * @return DpdTimeout DPD超时时间。即探测确认对端不存在需要的时间。
                     * 
                     */
                    std::string GetDpdTimeout() const;

                    /**
                     * 设置DPD超时时间。即探测确认对端不存在需要的时间。
                     * @param _dpdTimeout DPD超时时间。即探测确认对端不存在需要的时间。
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
                     * 获取标签键值对数组
                     * @return TagSet 标签键值对数组
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对数组
                     * @param _tagSet 标签键值对数组
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
                     * 获取协商类型
                     * @return NegotiationType 协商类型
                     * 
                     */
                    std::string GetNegotiationType() const;

                    /**
                     * 设置协商类型
                     * @param _negotiationType 协商类型
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
                     * 获取Bgp配置信息
                     * @return BgpConfig Bgp配置信息
                     * 
                     */
                    BgpConfigAndAsn GetBgpConfig() const;

                    /**
                     * 设置Bgp配置信息
                     * @param _bgpConfig Bgp配置信息
                     * 
                     */
                    void SetBgpConfig(const BgpConfigAndAsn& _bgpConfig);

                    /**
                     * 判断参数 BgpConfig 是否已赋值
                     * @return BgpConfig 是否已赋值
                     * 
                     */
                    bool BgpConfigHasBeenSet() const;

                    /**
                     * 获取Nqa配置信息
                     * @return HealthCheckConfig Nqa配置信息
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置Nqa配置信息
                     * @param _healthCheckConfig Nqa配置信息
                     * 
                     */
                    void SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                private:

                    /**
                     * 通道实例ID。
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * 通道名称。
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPN网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * 对端网关实例ID。
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * 预共享密钥。
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * 通道传输协议。
                     */
                    std::string m_vpnProto;
                    bool m_vpnProtoHasBeenSet;

                    /**
                     * 通道加密协议。
                     */
                    std::string m_encryptProto;
                    bool m_encryptProtoHasBeenSet;

                    /**
                     * 路由类型。
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 通道连接状态，AVAILABLE：已连接。
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * SPD。
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabaseSet;
                    bool m_securityPolicyDatabaseSetHasBeenSet;

                    /**
                     * IKE选项。
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * IPSEC选择。
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * 是否支持健康状态探测
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * 本端探测ip
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * 对端探测ip
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * 通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象
                     */
                    std::string m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                    /**
                     * DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）
                     */
                    int64_t m_dpdEnable;
                    bool m_dpdEnableHasBeenSet;

                    /**
                     * DPD超时时间。即探测确认对端不存在需要的时间。
                     */
                    std::string m_dpdTimeout;
                    bool m_dpdTimeoutHasBeenSet;

                    /**
                     * DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * 标签键值对数组
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 协商类型
                     */
                    std::string m_negotiationType;
                    bool m_negotiationTypeHasBeenSet;

                    /**
                     * Bgp配置信息
                     */
                    BgpConfigAndAsn m_bgpConfig;
                    bool m_bgpConfigHasBeenSet;

                    /**
                     * Nqa配置信息
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_
