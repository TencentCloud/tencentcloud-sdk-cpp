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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNCONNECTIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SecurityPolicyDatabase.h>
#include <tencentcloud/vpc/v20170312/model/IKEOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/IPSECOptionsSpecification.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnRoute.h>
#include <tencentcloud/vpc/v20170312/model/BgpConfig.h>
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
                * CreateVpnConnection请求参数结构体
                */
                class CreateVpnConnectionRequest : public AbstractModel
                {
                public:
                    CreateVpnConnectionRequest();
                    ~CreateVpnConnectionRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>对端网关ID。例如：cgw-2wqq41m9，可通过<a href="https://cloud.tencent.com/document/product/215/17516">DescribeCustomerGateways</a>接口查询对端网关。</p>
                     * @return CustomerGatewayId <p>对端网关ID。例如：cgw-2wqq41m9，可通过<a href="https://cloud.tencent.com/document/product/215/17516">DescribeCustomerGateways</a>接口查询对端网关。</p>
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置<p>对端网关ID。例如：cgw-2wqq41m9，可通过<a href="https://cloud.tencent.com/document/product/215/17516">DescribeCustomerGateways</a>接口查询对端网关。</p>
                     * @param _customerGatewayId <p>对端网关ID。例如：cgw-2wqq41m9，可通过<a href="https://cloud.tencent.com/document/product/215/17516">DescribeCustomerGateways</a>接口查询对端网关。</p>
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
                     * 获取<p>通道名称，可任意命名，但不得超过60个字符。</p>
                     * @return VpnConnectionName <p>通道名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetVpnConnectionName() const;

                    /**
                     * 设置<p>通道名称，可任意命名，但不得超过60个字符。</p>
                     * @param _vpnConnectionName <p>通道名称，可任意命名，但不得超过60个字符。</p>
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
                     * 获取<p>VPC实例ID。VPC类型网关可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取，CCN类型网关传空值即可。</p>
                     * @return VpcId <p>VPC实例ID。VPC类型网关可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取，CCN类型网关传空值即可。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。VPC类型网关可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取，CCN类型网关传空值即可。</p>
                     * @param _vpcId <p>VPC实例ID。VPC类型网关可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取，CCN类型网关传空值即可。</p>
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
                     * 获取<p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * @return SecurityPolicyDatabases <p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * 
                     */
                    std::vector<SecurityPolicyDatabase> GetSecurityPolicyDatabases() const;

                    /**
                     * 设置<p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     * @param _securityPolicyDatabases <p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
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
                     * 获取<p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议</p>
                     * @return IKEOptionsSpecification <p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议</p>
                     * 
                     */
                    IKEOptionsSpecification GetIKEOptionsSpecification() const;

                    /**
                     * 设置<p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议</p>
                     * @param _iKEOptionsSpecification <p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议</p>
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
                     * 获取<p>IPSec配置，腾讯云提供IPSec安全会话设置</p>
                     * @return IPSECOptionsSpecification <p>IPSec配置，腾讯云提供IPSec安全会话设置</p>
                     * 
                     */
                    IPSECOptionsSpecification GetIPSECOptionsSpecification() const;

                    /**
                     * 设置<p>IPSec配置，腾讯云提供IPSec安全会话设置</p>
                     * @param _iPSECOptionsSpecification <p>IPSec配置，腾讯云提供IPSec安全会话设置</p>
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
                     * 获取<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * @return Tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     * @param _tags <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
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
                     * 获取<p>是否支持隧道内健康检查，默认为False。</p>
                     * @return EnableHealthCheck <p>是否支持隧道内健康检查，默认为False。</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否支持隧道内健康检查，默认为False。</p>
                     * @param _enableHealthCheck <p>是否支持隧道内健康检查，默认为False。</p>
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
                     * 获取<p>健康检查本端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     * @return HealthCheckLocalIp <p>健康检查本端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     * 
                     */
                    std::string GetHealthCheckLocalIp() const;

                    /**
                     * 设置<p>健康检查本端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     * @param _healthCheckLocalIp <p>健康检查本端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
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
                     * 获取<p>健康检查对端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     * @return HealthCheckRemoteIp <p>健康检查对端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     * 
                     */
                    std::string GetHealthCheckRemoteIp() const;

                    /**
                     * 设置<p>健康检查对端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     * @param _healthCheckRemoteIp <p>健康检查对端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
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
                     * 获取<p>通道类型, 例如:[&quot;STATIC&quot;, &quot;StaticRoute&quot;, &quot;Policy&quot;, &quot;Bgp&quot;]</p><p>枚举值：</p><ul><li>StaticRoute： 目的路由类型</li><li>Policy： SPD策略类型</li><li>Bgp： BGP类型</li></ul><p>默认值：STATIC</p>
                     * @return RouteType <p>通道类型, 例如:[&quot;STATIC&quot;, &quot;StaticRoute&quot;, &quot;Policy&quot;, &quot;Bgp&quot;]</p><p>枚举值：</p><ul><li>StaticRoute： 目的路由类型</li><li>Policy： SPD策略类型</li><li>Bgp： BGP类型</li></ul><p>默认值：STATIC</p>
                     * 
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置<p>通道类型, 例如:[&quot;STATIC&quot;, &quot;StaticRoute&quot;, &quot;Policy&quot;, &quot;Bgp&quot;]</p><p>枚举值：</p><ul><li>StaticRoute： 目的路由类型</li><li>Policy： SPD策略类型</li><li>Bgp： BGP类型</li></ul><p>默认值：STATIC</p>
                     * @param _routeType <p>通道类型, 例如:[&quot;STATIC&quot;, &quot;StaticRoute&quot;, &quot;Policy&quot;, &quot;Bgp&quot;]</p><p>枚举值：</p><ul><li>StaticRoute： 目的路由类型</li><li>Policy： SPD策略类型</li><li>Bgp： BGP类型</li></ul><p>默认值：STATIC</p>
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
                     * 获取<p>DPD超时后的动作。</p><p>入参限制：dpdEnable为1（开启）时有效。</p><p>枚举值：</p><ul><li>clear： 断开</li><li>restart： 重试</li></ul><p>默认值：restart</p>
                     * @return DpdAction <p>DPD超时后的动作。</p><p>入参限制：dpdEnable为1（开启）时有效。</p><p>枚举值：</p><ul><li>clear： 断开</li><li>restart： 重试</li></ul><p>默认值：restart</p>
                     * 
                     */
                    std::string GetDpdAction() const;

                    /**
                     * 设置<p>DPD超时后的动作。</p><p>入参限制：dpdEnable为1（开启）时有效。</p><p>枚举值：</p><ul><li>clear： 断开</li><li>restart： 重试</li></ul><p>默认值：restart</p>
                     * @param _dpdAction <p>DPD超时后的动作。</p><p>入参限制：dpdEnable为1（开启）时有效。</p><p>枚举值：</p><ul><li>clear： 断开</li><li>restart： 重试</li></ul><p>默认值：restart</p>
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
                     * 获取<p>创建通道路由信息。</p>
                     * @return Route <p>创建通道路由信息。</p>
                     * @deprecated
                     */
                    CreateVpnConnRoute GetRoute() const;

                    /**
                     * 设置<p>创建通道路由信息。</p>
                     * @param _route <p>创建通道路由信息。</p>
                     * @deprecated
                     */
                    void SetRoute(const CreateVpnConnRoute& _route);

                    /**
                     * 判断参数 Route 是否已赋值
                     * @return Route 是否已赋值
                     * @deprecated
                     */
                    bool RouteHasBeenSet() const;

                    /**
                     * 获取<p>BGP配置。</p>
                     * @return BgpConfig <p>BGP配置。</p>
                     * 
                     */
                    BgpConfig GetBgpConfig() const;

                    /**
                     * 设置<p>BGP配置。</p>
                     * @param _bgpConfig <p>BGP配置。</p>
                     * 
                     */
                    void SetBgpConfig(const BgpConfig& _bgpConfig);

                    /**
                     * 判断参数 BgpConfig 是否已赋值
                     * @return BgpConfig 是否已赋值
                     * 
                     */
                    bool BgpConfigHasBeenSet() const;

                    /**
                     * 获取<p>健康检查NQA配置。</p>
                     * @return HealthCheckConfig <p>健康检查NQA配置。</p>
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置<p>健康检查NQA配置。</p>
                     * @param _healthCheckConfig <p>健康检查NQA配置。</p>
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
                     * <p>VPN网关实例ID。</p>
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * <p>对端网关ID。例如：cgw-2wqq41m9，可通过<a href="https://cloud.tencent.com/document/product/215/17516">DescribeCustomerGateways</a>接口查询对端网关。</p>
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * <p>通道名称，可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_vpnConnectionName;
                    bool m_vpnConnectionNameHasBeenSet;

                    /**
                     * <p>预共享密钥。</p>
                     */
                    std::string m_preShareKey;
                    bool m_preShareKeyHasBeenSet;

                    /**
                     * <p>VPC实例ID。VPC类型网关可通过<a href="https://cloud.tencent.com/document/product/215/15778">DescribeVpcs</a>接口返回值中的VpcId获取，CCN类型网关传空值即可。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>SPD策略组，例如：{&quot;10.0.0.5/24&quot;:[&quot;172.123.10.5/16&quot;]}，10.0.0.5/24是vpc内网段172.123.10.5/16是IDC网段。用户指定VPC内哪些网段可以和您IDC中哪些网段通信。</p>
                     */
                    std::vector<SecurityPolicyDatabase> m_securityPolicyDatabases;
                    bool m_securityPolicyDatabasesHasBeenSet;

                    /**
                     * <p>IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议</p>
                     */
                    IKEOptionsSpecification m_iKEOptionsSpecification;
                    bool m_iKEOptionsSpecificationHasBeenSet;

                    /**
                     * <p>IPSec配置，腾讯云提供IPSec安全会话设置</p>
                     */
                    IPSECOptionsSpecification m_iPSECOptionsSpecification;
                    bool m_iPSECOptionsSpecificationHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表，例如：[{&quot;Key&quot;: &quot;city&quot;, &quot;Value&quot;: &quot;shanghai&quot;}]</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否支持隧道内健康检查，默认为False。</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>健康检查本端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     */
                    std::string m_healthCheckLocalIp;
                    bool m_healthCheckLocalIpHasBeenSet;

                    /**
                     * <p>健康检查对端地址，默认值为随机在169.254.128.0/17分配一个IP。</p>
                     */
                    std::string m_healthCheckRemoteIp;
                    bool m_healthCheckRemoteIpHasBeenSet;

                    /**
                     * <p>通道类型, 例如:[&quot;STATIC&quot;, &quot;StaticRoute&quot;, &quot;Policy&quot;, &quot;Bgp&quot;]</p><p>枚举值：</p><ul><li>StaticRoute： 目的路由类型</li><li>Policy： SPD策略类型</li><li>Bgp： BGP类型</li></ul><p>默认值：STATIC</p>
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

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
                     * <p>DPD超时后的动作。</p><p>入参限制：dpdEnable为1（开启）时有效。</p><p>枚举值：</p><ul><li>clear： 断开</li><li>restart： 重试</li></ul><p>默认值：restart</p>
                     */
                    std::string m_dpdAction;
                    bool m_dpdActionHasBeenSet;

                    /**
                     * <p>创建通道路由信息。</p>
                     */
                    CreateVpnConnRoute m_route;
                    bool m_routeHasBeenSet;

                    /**
                     * <p>BGP配置。</p>
                     */
                    BgpConfig m_bgpConfig;
                    bool m_bgpConfigHasBeenSet;

                    /**
                     * <p>健康检查NQA配置。</p>
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNCONNECTIONREQUEST_H_
