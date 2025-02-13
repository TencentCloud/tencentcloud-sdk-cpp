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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERREQUEST_H_

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
                * CreateVpnGatewaySslServer请求参数结构体
                */
                class CreateVpnGatewaySslServerRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewaySslServerRequest();
                    ~CreateVpnGatewaySslServerRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取SSL-VPN-SERVER 实例名称，长度不超过60个字节。
                     * @return SslVpnServerName SSL-VPN-SERVER 实例名称，长度不超过60个字节。
                     * 
                     */
                    std::string GetSslVpnServerName() const;

                    /**
                     * 设置SSL-VPN-SERVER 实例名称，长度不超过60个字节。
                     * @param _sslVpnServerName SSL-VPN-SERVER 实例名称，长度不超过60个字节。
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
                     * 获取客户端地址网段。
                     * @return RemoteAddress 客户端地址网段。
                     * 
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置客户端地址网段。
                     * @param _remoteAddress 客户端地址网段。
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
                     * 获取云端地址（CIDR）列表。
                     * @return LocalAddress 云端地址（CIDR）列表。
                     * 
                     */
                    std::vector<std::string> GetLocalAddress() const;

                    /**
                     * 设置云端地址（CIDR）列表。
                     * @param _localAddress 云端地址（CIDR）列表。
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
                     * 获取SSL VPN服务端监听协议。当前仅支持 UDP，默认UDP。
                     * @return SslVpnProtocol SSL VPN服务端监听协议。当前仅支持 UDP，默认UDP。
                     * 
                     */
                    std::string GetSslVpnProtocol() const;

                    /**
                     * 设置SSL VPN服务端监听协议。当前仅支持 UDP，默认UDP。
                     * @param _sslVpnProtocol SSL VPN服务端监听协议。当前仅支持 UDP，默认UDP。
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
                     * 获取SSL VPN服务端监听协议端口，默认1194。
                     * @return SslVpnPort SSL VPN服务端监听协议端口，默认1194。
                     * 
                     */
                    int64_t GetSslVpnPort() const;

                    /**
                     * 设置SSL VPN服务端监听协议端口，默认1194。
                     * @param _sslVpnPort SSL VPN服务端监听协议端口，默认1194。
                     * 
                     */
                    void SetSslVpnPort(const int64_t& _sslVpnPort);

                    /**
                     * 判断参数 SslVpnPort 是否已赋值
                     * @return SslVpnPort 是否已赋值
                     * 
                     */
                    bool SslVpnPortHasBeenSet() const;

                    /**
                     * 获取认证算法。可选 'SHA1'，默认SHA1。
                     * @return IntegrityAlgorithm 认证算法。可选 'SHA1'，默认SHA1。
                     * 
                     */
                    std::string GetIntegrityAlgorithm() const;

                    /**
                     * 设置认证算法。可选 'SHA1'，默认SHA1。
                     * @param _integrityAlgorithm 认证算法。可选 'SHA1'，默认SHA1。
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
                     * 获取加密算法。可选 'AES-128-CBC','AES-192-CBC', 'AES-256-CBC', 默认AES-128-CBC。
                     * @return EncryptAlgorithm 加密算法。可选 'AES-128-CBC','AES-192-CBC', 'AES-256-CBC', 默认AES-128-CBC。
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置加密算法。可选 'AES-128-CBC','AES-192-CBC', 'AES-256-CBC', 默认AES-128-CBC。
                     * @param _encryptAlgorithm 加密算法。可选 'AES-128-CBC','AES-192-CBC', 'AES-256-CBC', 默认AES-128-CBC。
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
                     * 获取是否支持压缩。当前不支持压缩，默认False。
                     * @return Compress 是否支持压缩。当前不支持压缩，默认False。
                     * 
                     */
                    bool GetCompress() const;

                    /**
                     * 设置是否支持压缩。当前不支持压缩，默认False。
                     * @param _compress 是否支持压缩。当前不支持压缩，默认False。
                     * 
                     */
                    void SetCompress(const bool& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取是否开启SSO认证。默认为False。该功能当前需要申请开白使用。
                     * @return SsoEnabled 是否开启SSO认证。默认为False。该功能当前需要申请开白使用。
                     * 
                     */
                    bool GetSsoEnabled() const;

                    /**
                     * 设置是否开启SSO认证。默认为False。该功能当前需要申请开白使用。
                     * @param _ssoEnabled 是否开启SSO认证。默认为False。该功能当前需要申请开白使用。
                     * 
                     */
                    void SetSsoEnabled(const bool& _ssoEnabled);

                    /**
                     * 判断参数 SsoEnabled 是否已赋值
                     * @return SsoEnabled 是否已赋值
                     * 
                     */
                    bool SsoEnabledHasBeenSet() const;

                    /**
                     * 获取是否开启策略访问控制。默认为False
                     * @return AccessPolicyEnabled 是否开启策略访问控制。默认为False
                     * 
                     */
                    bool GetAccessPolicyEnabled() const;

                    /**
                     * 设置是否开启策略访问控制。默认为False
                     * @param _accessPolicyEnabled 是否开启策略访问控制。默认为False
                     * 
                     */
                    void SetAccessPolicyEnabled(const bool& _accessPolicyEnabled);

                    /**
                     * 判断参数 AccessPolicyEnabled 是否已赋值
                     * @return AccessPolicyEnabled 是否已赋值
                     * 
                     */
                    bool AccessPolicyEnabledHasBeenSet() const;

                    /**
                     * 获取SAML-DATA，开启SSO时传。
                     * @return SamlData SAML-DATA，开启SSO时传。
                     * 
                     */
                    std::string GetSamlData() const;

                    /**
                     * 设置SAML-DATA，开启SSO时传。
                     * @param _samlData SAML-DATA，开启SSO时传。
                     * 
                     */
                    void SetSamlData(const std::string& _samlData);

                    /**
                     * 判断参数 SamlData 是否已赋值
                     * @return SamlData 是否已赋值
                     * 
                     */
                    bool SamlDataHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表
                     * @return Tags 指定绑定的标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表
                     * @param _tags 指定绑定的标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * VPN网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * SSL-VPN-SERVER 实例名称，长度不超过60个字节。
                     */
                    std::string m_sslVpnServerName;
                    bool m_sslVpnServerNameHasBeenSet;

                    /**
                     * 客户端地址网段。
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * 云端地址（CIDR）列表。
                     */
                    std::vector<std::string> m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议。当前仅支持 UDP，默认UDP。
                     */
                    std::string m_sslVpnProtocol;
                    bool m_sslVpnProtocolHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议端口，默认1194。
                     */
                    int64_t m_sslVpnPort;
                    bool m_sslVpnPortHasBeenSet;

                    /**
                     * 认证算法。可选 'SHA1'，默认SHA1。
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                    /**
                     * 加密算法。可选 'AES-128-CBC','AES-192-CBC', 'AES-256-CBC', 默认AES-128-CBC。
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 是否支持压缩。当前不支持压缩，默认False。
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 是否开启SSO认证。默认为False。该功能当前需要申请开白使用。
                     */
                    bool m_ssoEnabled;
                    bool m_ssoEnabledHasBeenSet;

                    /**
                     * 是否开启策略访问控制。默认为False
                     */
                    bool m_accessPolicyEnabled;
                    bool m_accessPolicyEnabledHasBeenSet;

                    /**
                     * SAML-DATA，开启SSO时传。
                     */
                    std::string m_samlData;
                    bool m_samlDataHasBeenSet;

                    /**
                     * 指定绑定的标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLSERVERREQUEST_H_
