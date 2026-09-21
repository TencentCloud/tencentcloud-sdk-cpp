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
                     * 获取<p>通道实例ID。</p>
                     * @return VpnConnectionId <p>通道实例ID。</p>
                     * 
                     */
                    std::string GetVpnConnectionId() const;

                    /**
                     * 设置<p>通道实例ID。</p>
                     * @param _vpnConnectionId <p>通道实例ID。</p>
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
                     * 获取<p>通道名称。</p>
                     * @return VpnConnectionName <p>通道名称。</p>
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置<p>通道名称。</p>
                     * @param _vpnConnectionName <p>通道名称。</p>
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
                     * 获取<p>VPC实例ID。</p>
                     * @return VpcId <p>VPC实例ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。</p>
                     * @param _vpcId <p>VPC实例ID。</p>
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
                     * 获取<p>VPN网关实例ID。</p>
                     * @return VpnGatewayId <p>VPN网关实例ID。</p>
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置<p>VPN网关实例ID。</p>
                     * @param _vpnGatewayId <p>VPN网关实例ID。</p>
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
                     * 获取<p>对端网关实例ID。</p>
                     * @return CustomerGatewayId <p>对端网关实例ID。</p>
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置<p>对端网关实例ID。</p>
                     * @param _customerGatewayId <p>对端网关实例ID。</p>
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
                     * 获取<p>通道传输协议。</p>
                     * @return VpnProto <p>通道传输协议。</p>
                     * 
                     */
                    std::string GetVpnProto() const;

                    /**
                     * 设置<p>通道传输协议。</p>
                     * @param _vpnProto <p>通道传输协议。</p>
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
                     * 获取<p>通道加密协议。</p>
                     * @return EncryptProto <p>通道加密协议。</p>
                     * 
                     */
                    std::string GetEncryptProto() const;

                    /**
                     * 设置<p>通道加密协议。</p>
                     * @param _encryptProto <p>通道加密协议。</p>
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
                     * 获取<p>路由类型。</p>
                     * @return RouteType <p>路由类型。</p>
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置<p>路由类型。</p>
                     * @param _routeType <p>路由类型。</p>
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
                     * 获取<p>通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。</p>
                     * @return State <p>通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。</p>
                     * @param _state <p>通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。</p>
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
                     * 获取<p>通道连接状态，AVAILABLE：已连接。</p>
                     * @return NetStatus <p>通道连接状态，AVAILABLE：已连接。</p>
                     * 
                     */
                    std::string GetNetStatus() const;

                    /**
                     * 设置<p>通道连接状态，AVAILABLE：已连接。</p>
                     * @param _netStatus <p>通道连接状态，AVAILABLE：已连接。</p>
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
                     * 获取<p>SPD。</p>
                     * @return SecurityPolicyDatabaseSet <p>SPD。</p>
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabaseSet() const;

                    /**
                     * 设置<p>SPD。</p>
                     * @param _securityPolicyDatabaseSet <p>SPD。</p>
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
                     * 获取<p>IKE选项。</p>
                     * @return IKEOptionsSpecification <p>IKE选项。</p>
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置<p>IKE选项。</p>
                     * @param _iKEOptionsSpecification <p>IKE选项。</p>
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
                     * 获取<p>IPSEC选择。</p>
                     * @return IPSECOptionsSpecification <p>IPSEC选择。</p>
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置<p>IPSEC选择。</p>
                     * @param _iPSECOptionsSpecification <p>IPSEC选择。</p>
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
                     * 获取<p>是否支持健康状态探测</p>
                     * @return EnableHealthCheck <p>是否支持健康状态探测</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否支持健康状态探测</p>
                     * @param _enableHealthCheck <p>是否支持健康状态探测</p>
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
                     * 获取<p>本端探测ip</p>
                     * @return HealthCheckLocalIp <p>本端探测ip</p>
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置<p>本端探测ip</p>
                     * @param _healthCheckLocalIp <p>本端探测ip</p>
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
                     * 获取<p>对端探测ip</p>
                     * @return HealthCheckRemoteIp <p>对端探测ip</p>
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置<p>对端探测ip</p>
                     * @param _healthCheckRemoteIp <p>对端探测ip</p>
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
                     * 获取<p>通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象</p>
                     * @return HealthCheckStatus <p>通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象</p>
                     * 
                     */
                    std::string GetHealthCheckStatus() const;

                    /**
                     * 设置<p>通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象</p>
                     * @param _healthCheckStatus <p>通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象</p>
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
                     * 获取<p>DPD超时时间。即探测确认对端不存在需要的时间。</p>
                     * @return DpdTimeout <p>DPD超时时间。即探测确认对端不存在需要的时间。</p>
                     * 
                     */
                    std::string GetDpdTimeout() const;

                    /**
                     * 设置<p>DPD超时时间。即探测确认对端不存在需要的时间。</p>
                     * @param _dpdTimeout <p>DPD超时时间。即探测确认对端不存在需要的时间。</p>
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
                     * 获取<p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p>
                     * @return DpdAction <p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p>
                     * 
                     */
                    std::string GetDpdAction() const;

                    /**
                     * 设置<p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p>
                     * @param _dpdAction <p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p>
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
                     * 获取<p>标签键值对数组</p>
                     * @return TagSet <p>标签键值对数组</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对数组</p>
                     * @param _tagSet <p>标签键值对数组</p>
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
                     * 获取<p>协商类型</p><p>枚举值：</p><ul><li>active： 主动协商</li><li>passive： 被动协商</li><li>flowTrigger： 流量协商</li></ul>
                     * @return NegotiationType <p>协商类型</p><p>枚举值：</p><ul><li>active： 主动协商</li><li>passive： 被动协商</li><li>flowTrigger： 流量协商</li></ul>
                     * 
                     */
                    std::string GetNegotiationType() const;

                    /**
                     * 设置<p>协商类型</p><p>枚举值：</p><ul><li>active： 主动协商</li><li>passive： 被动协商</li><li>flowTrigger： 流量协商</li></ul>
                     * @param _negotiationType <p>协商类型</p><p>枚举值：</p><ul><li>active： 主动协商</li><li>passive： 被动协商</li><li>flowTrigger： 流量协商</li></ul>
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
                     * 获取<p>Bgp配置信息</p>
                     * @return BgpConfig <p>Bgp配置信息</p>
                     * 
                     */
                    BgpConfigAndAsn GetBgpConfig() const;

                    /**
                     * 设置<p>Bgp配置信息</p>
                     * @param _bgpConfig <p>Bgp配置信息</p>
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
                     * 获取<p>Nqa配置信息</p>
                     * @return HealthCheckConfig <p>Nqa配置信息</p>
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置<p>Nqa配置信息</p>
                     * @param _healthCheckConfig <p>Nqa配置信息</p>
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
                     * <p>通道实例ID。</p>
                     */
                    std::string m_vpnConnectionId;
                    bool m_vpnConnectionIdHasBeenSet;

                    /**
                     * <p>通道名称。</p>
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * <p>VPC实例ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>VPN网关实例ID。</p>
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * <p>对端网关实例ID。</p>
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * <p>预共享密钥。</p>
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * <p>通道传输协议。</p>
                     */
                    std::string m_vpnProto;
                    bool m_vpnProtoHasBeenSet;

                    /**
                     * <p>通道加密协议。</p>
                     */
                    std::string m_encryptProto;
                    bool m_encryptProtoHasBeenSet;

                    /**
                     * <p>路由类型。</p>
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>通道的生产状态，PENDING：生产中，AVAILABLE：运行中，DELETING：删除中。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>通道连接状态，AVAILABLE：已连接。</p>
                     */
                    std::string m_netStatus;
                    bool m_netStatusHasBeenSet;

                    /**
                     * <p>SPD。</p>
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabaseSet;
                    bool m_securityPolicyDatabaseSetHasBeenSet;

                    /**
                     * <p>IKE选项。</p>
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * <p>IPSEC选择。</p>
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * <p>是否支持健康状态探测</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>本端探测ip</p>
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * <p>对端探测ip</p>
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * <p>通道健康检查状态，AVAILABLE：正常，UNAVAILABLE：不正常。 未配置健康检查不返回该对象</p>
                     */
                    std::string m_healthCheckStatus;
                    bool m_healthCheckStatusHasBeenSet;

                    /**
                     * <p>DPD探测开关。默认为0，表示关闭DPD探测。可选值：0（关闭），1（开启）</p>
                     */
                    int64_t m_dpdEnable;
                    bool m_dpdEnableHasBeenSet;

                    /**
                     * <p>DPD超时时间。即探测确认对端不存在需要的时间。</p>
                     */
                    std::string m_dpdTimeout;
                    bool m_dpdTimeoutHasBeenSet;

                    /**
                     * <p>DPD超时后的动作。默认为clear。dpdEnable为1（开启）时有效。可取值为clear（断开）和restart（重试）</p>
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * <p>标签键值对数组</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>协商类型</p><p>枚举值：</p><ul><li>active： 主动协商</li><li>passive： 被动协商</li><li>flowTrigger： 流量协商</li></ul>
                     */
                    std::string m_negotiationType;
                    bool m_negotiationTypeHasBeenSet;

                    /**
                     * <p>Bgp配置信息</p>
                     */
                    BgpConfigAndAsn m_bgpConfig;
                    bool m_bgpConfigHasBeenSet;

                    /**
                     * <p>Nqa配置信息</p>
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNCONNECTION_H_
