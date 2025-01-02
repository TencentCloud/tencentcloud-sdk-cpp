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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SSLVPNSEVER_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SSLVPNSEVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AccessPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SSL-VPN-SERVER 出参
                */
                class SslVpnSever : public AbstractModel
                {
                public:
                    SslVpnSever();
                    ~SslVpnSever() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC实例ID.
                     * @return VpcId VPC实例ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID.
                     * @param _vpcId VPC实例ID.
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
                     * 获取SSL-VPN-SERVER 实例ID。
                     * @return SslVpnServerId SSL-VPN-SERVER 实例ID。
                     * 
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置SSL-VPN-SERVER 实例ID。
                     * @param _sslVpnServerId SSL-VPN-SERVER 实例ID。
                     * 
                     */
                    void SetSslVpnServerId(const std::string& _sslVpnServerId);

                    /**
                     * 判断参数 SslVpnServerId 是否已赋值
                     * @return SslVpnServerId 是否已赋值
                     * 
                     */
                    bool SslVpnServerIdHasBeenSet() const;

                    /**
                     * 获取VPN 实例ID。
                     * @return VpnGatewayId VPN 实例ID。
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置VPN 实例ID。
                     * @param _vpnGatewayId VPN 实例ID。
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
                     * 获取SSL-VPN-SERVER name。
                     * @return SslVpnServerName SSL-VPN-SERVER name。
                     * 
                     */
                    std::string GetSslVpnServerName() const;

                    /**
                     * 设置SSL-VPN-SERVER name。
                     * @param _sslVpnServerName SSL-VPN-SERVER name。
                     * 
                     */
                    void SetSslVpnServerName(const std::string& _sslVpnServerName);

                    /**
                     * 判断参数 SslVpnServerName 是否已赋值
                     * @return SslVpnServerName 是否已赋值
                     * 
                     */
                    bool SslVpnServerNameHasBeenSet() const;

                    /**
                     * 获取本端地址段。
                     * @return LocalAddress 本端地址段。
                     * 
                     */
                    std::vector<std::string> GetLocalAddress() const;

                    /**
                     * 设置本端地址段。
                     * @param _localAddress 本端地址段。
                     * 
                     */
                    void SetLocalAddress(const std::vector<std::string>& _localAddress);

                    /**
                     * 判断参数 LocalAddress 是否已赋值
                     * @return LocalAddress 是否已赋值
                     * 
                     */
                    bool LocalAddressHasBeenSet() const;

                    /**
                     * 获取客户端地址段。
                     * @return RemoteAddress 客户端地址段。
                     * 
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置客户端地址段。
                     * @param _remoteAddress 客户端地址段。
                     * 
                     */
                    void SetRemoteAddress(const std::string& _remoteAddress);

                    /**
                     * 判断参数 RemoteAddress 是否已赋值
                     * @return RemoteAddress 是否已赋值
                     * 
                     */
                    bool RemoteAddressHasBeenSet() const;

                    /**
                     * 获取客户端最大连接数。
                     * @return MaxConnection 客户端最大连接数。
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置客户端最大连接数。
                     * @param _maxConnection 客户端最大连接数。
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取SSL-VPN 网关公网IP。
                     * @return WanIp SSL-VPN 网关公网IP。
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置SSL-VPN 网关公网IP。
                     * @param _wanIp SSL-VPN 网关公网IP。
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取SSL VPN服务端监听协议
                     * @return SslVpnProtocol SSL VPN服务端监听协议
                     * 
                     */
                    std::string GetSslVpnProtocol() const;

                    /**
                     * 设置SSL VPN服务端监听协议
                     * @param _sslVpnProtocol SSL VPN服务端监听协议
                     * 
                     */
                    void SetSslVpnProtocol(const std::string& _sslVpnProtocol);

                    /**
                     * 判断参数 SslVpnProtocol 是否已赋值
                     * @return SslVpnProtocol 是否已赋值
                     * 
                     */
                    bool SslVpnProtocolHasBeenSet() const;

                    /**
                     * 获取SSL VPN服务端监听协议端口
                     * @return SslVpnPort SSL VPN服务端监听协议端口
                     * 
                     */
                    uint64_t GetSslVpnPort() const;

                    /**
                     * 设置SSL VPN服务端监听协议端口
                     * @param _sslVpnPort SSL VPN服务端监听协议端口
                     * 
                     */
                    void SetSslVpnPort(const uint64_t& _sslVpnPort);

                    /**
                     * 判断参数 SslVpnPort 是否已赋值
                     * @return SslVpnPort 是否已赋值
                     * 
                     */
                    bool SslVpnPortHasBeenSet() const;

                    /**
                     * 获取加密算法。
                     * @return EncryptAlgorithm 加密算法。
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置加密算法。
                     * @param _encryptAlgorithm 加密算法。
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取认证算法。
                     * @return IntegrityAlgorithm 认证算法。
                     * 
                     */
                    std::string GetIntegrityAlgorithm() const;

                    /**
                     * 设置认证算法。
                     * @param _integrityAlgorithm 认证算法。
                     * 
                     */
                    void SetIntegrityAlgorithm(const std::string& _integrityAlgorithm);

                    /**
                     * 判断参数 IntegrityAlgorithm 是否已赋值
                     * @return IntegrityAlgorithm 是否已赋值
                     * 
                     */
                    bool IntegrityAlgorithmHasBeenSet() const;

                    /**
                     * 获取是否支持压缩。
                     * @return Compress 是否支持压缩。
                     * 
                     */
                    uint64_t GetCompress() const;

                    /**
                     * 设置是否支持压缩。
                     * @param _compress 是否支持压缩。
                     * 
                     */
                    void SetCompress(const uint64_t& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取SSL-VPN-SERVER 创建状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * @return State SSL-VPN-SERVER 创建状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置SSL-VPN-SERVER 创建状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * @param _state SSL-VPN-SERVER 创建状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取是否开启SSO认证。1：开启  0： 不开启
                     * @return SsoEnabled 是否开启SSO认证。1：开启  0： 不开启
                     * 
                     */
                    uint64_t GetSsoEnabled() const;

                    /**
                     * 设置是否开启SSO认证。1：开启  0： 不开启
                     * @param _ssoEnabled 是否开启SSO认证。1：开启  0： 不开启
                     * 
                     */
                    void SetSsoEnabled(const uint64_t& _ssoEnabled);

                    /**
                     * 判断参数 SsoEnabled 是否已赋值
                     * @return SsoEnabled 是否已赋值
                     * 
                     */
                    bool SsoEnabledHasBeenSet() const;

                    /**
                     * 获取EIAM应用ID
                     * @return EiamApplicationId EIAM应用ID
                     * 
                     */
                    std::string GetEiamApplicationId() const;

                    /**
                     * 设置EIAM应用ID
                     * @param _eiamApplicationId EIAM应用ID
                     * 
                     */
                    void SetEiamApplicationId(const std::string& _eiamApplicationId);

                    /**
                     * 判断参数 EiamApplicationId 是否已赋值
                     * @return EiamApplicationId 是否已赋值
                     * 
                     */
                    bool EiamApplicationIdHasBeenSet() const;

                    /**
                     * 获取是否开启策略控制。0：不开启 1： 开启
                     * @return AccessPolicyEnabled 是否开启策略控制。0：不开启 1： 开启
                     * 
                     */
                    uint64_t GetAccessPolicyEnabled() const;

                    /**
                     * 设置是否开启策略控制。0：不开启 1： 开启
                     * @param _accessPolicyEnabled 是否开启策略控制。0：不开启 1： 开启
                     * 
                     */
                    void SetAccessPolicyEnabled(const uint64_t& _accessPolicyEnabled);

                    /**
                     * 判断参数 AccessPolicyEnabled 是否已赋值
                     * @return AccessPolicyEnabled 是否已赋值
                     * 
                     */
                    bool AccessPolicyEnabledHasBeenSet() const;

                    /**
                     * 获取策略信息
                     * @return AccessPolicy 策略信息
                     * 
                     */
                    std::vector<AccessPolicy> GetAccessPolicy() const;

                    /**
                     * 设置策略信息
                     * @param _accessPolicy 策略信息
                     * 
                     */
                    void SetAccessPolicy(const std::vector<AccessPolicy>& _accessPolicy);

                    /**
                     * 判断参数 AccessPolicy 是否已赋值
                     * @return AccessPolicy 是否已赋值
                     * 
                     */
                    bool AccessPolicyHasBeenSet() const;

                    /**
                     * 获取CAM服务提供商Name
                     * @return SpName CAM服务提供商Name
                     * 
                     */
                    std::string GetSpName() const;

                    /**
                     * 设置CAM服务提供商Name
                     * @param _spName CAM服务提供商Name
                     * 
                     */
                    void SetSpName(const std::string& _spName);

                    /**
                     * 判断参数 SpName 是否已赋值
                     * @return SpName 是否已赋值
                     * 
                     */
                    bool SpNameHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * SSL-VPN-SERVER 实例ID。
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * VPN 实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * SSL-VPN-SERVER name。
                     */
                    std::string m_sslVpnServerName;
                    bool m_sslVpnServerNameHasBeenSet;

                    /**
                     * 本端地址段。
                     */
                    std::vector<std::string> m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * 客户端地址段。
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * 客户端最大连接数。
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * SSL-VPN 网关公网IP。
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议
                     */
                    std::string m_sslVpnProtocol;
                    bool m_sslVpnProtocolHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议端口
                     */
                    uint64_t m_sslVpnPort;
                    bool m_sslVpnPortHasBeenSet;

                    /**
                     * 加密算法。
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 认证算法。
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                    /**
                     * 是否支持压缩。
                     */
                    uint64_t m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * SSL-VPN-SERVER 创建状态。
0 创建中
1 创建出错
2 更新中
3 更新出错
4 销毁中
5 销毁出错
6 已连通
7 未知
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 是否开启SSO认证。1：开启  0： 不开启
                     */
                    uint64_t m_ssoEnabled;
                    bool m_ssoEnabledHasBeenSet;

                    /**
                     * EIAM应用ID
                     */
                    std::string m_eiamApplicationId;
                    bool m_eiamApplicationIdHasBeenSet;

                    /**
                     * 是否开启策略控制。0：不开启 1： 开启
                     */
                    uint64_t m_accessPolicyEnabled;
                    bool m_accessPolicyEnabledHasBeenSet;

                    /**
                     * 策略信息
                     */
                    std::vector<AccessPolicy> m_accessPolicy;
                    bool m_accessPolicyHasBeenSet;

                    /**
                     * CAM服务提供商Name
                     */
                    std::string m_spName;
                    bool m_spNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SSLVPNSEVER_H_
