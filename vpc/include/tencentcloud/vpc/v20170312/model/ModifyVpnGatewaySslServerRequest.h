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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYSSLSERVERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYSSLSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DnsServers.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpnGatewaySslServer请求参数结构体
                */
                class ModifyVpnGatewaySslServerRequest : public AbstractModel
                {
                public:
                    ModifyVpnGatewaySslServerRequest();
                    ~ModifyVpnGatewaySslServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SSL-VPN SERVER 实例ID</p>
                     * @return SslVpnServerId <p>SSL-VPN SERVER 实例ID</p>
                     * 
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置<p>SSL-VPN SERVER 实例ID</p>
                     * @param _sslVpnServerId <p>SSL-VPN SERVER 实例ID</p>
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
                     * 获取<p>SSL-VPN SERVER NAME</p>
                     * @return SslVpnServerName <p>SSL-VPN SERVER NAME</p>
                     * 
                     */
                    std::string GetSslVpnServerName() const;

                    /**
                     * 设置<p>SSL-VPN SERVER NAME</p>
                     * @param _sslVpnServerName <p>SSL-VPN SERVER NAME</p>
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
                     * 获取<p>本端地址</p>
                     * @return LocalAddress <p>本端地址</p>
                     * 
                     */
                    std::vector<std::string> GetLocalAddress() const;

                    /**
                     * 设置<p>本端地址</p>
                     * @param _localAddress <p>本端地址</p>
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
                     * 获取<p>客户端地址</p>
                     * @return RemoteAddress <p>客户端地址</p>
                     * 
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置<p>客户端地址</p>
                     * @param _remoteAddress <p>客户端地址</p>
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
                     * 获取<p>SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP</p>
                     * @return SslVpnProtocol <p>SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP</p>
                     * @deprecated
                     */
                    std::string GetSslVpnProtocol() const;

                    /**
                     * 设置<p>SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP</p>
                     * @param _sslVpnProtocol <p>SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP</p>
                     * @deprecated
                     */
                    void SetSslVpnProtocol(const std::string& _sslVpnProtocol);

                    /**
                     * 判断参数 SslVpnProtocol 是否已赋值
                     * @return SslVpnProtocol 是否已赋值
                     * @deprecated
                     */
                    bool SslVpnProtocolHasBeenSet() const;

                    /**
                     * 获取<p>SSL VPN服务端监听协议端口。</p>
                     * @return SslVpnPort <p>SSL VPN服务端监听协议端口。</p>
                     * 
                     */
                    int64_t GetSslVpnPort() const;

                    /**
                     * 设置<p>SSL VPN服务端监听协议端口。</p>
                     * @param _sslVpnPort <p>SSL VPN服务端监听协议端口。</p>
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
                     * 获取<p>加密算法。可选值 &#39;AES-128-CBC&#39;, &#39;AES-192-CBC&#39;, &#39;AES-256-CBC&#39;, &#39;AES-128-GCM&#39;, &#39;AES-192-GCM&#39;, &#39;AES-256-GCM&#39;, 默认AES-128-CBC。</p>
                     * @return EncryptAlgorithm <p>加密算法。可选值 &#39;AES-128-CBC&#39;, &#39;AES-192-CBC&#39;, &#39;AES-256-CBC&#39;, &#39;AES-128-GCM&#39;, &#39;AES-192-GCM&#39;, &#39;AES-256-GCM&#39;, 默认AES-128-CBC。</p>
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置<p>加密算法。可选值 &#39;AES-128-CBC&#39;, &#39;AES-192-CBC&#39;, &#39;AES-256-CBC&#39;, &#39;AES-128-GCM&#39;, &#39;AES-192-GCM&#39;, &#39;AES-256-GCM&#39;, 默认AES-128-CBC。</p>
                     * @param _encryptAlgorithm <p>加密算法。可选值 &#39;AES-128-CBC&#39;, &#39;AES-192-CBC&#39;, &#39;AES-256-CBC&#39;, &#39;AES-128-GCM&#39;, &#39;AES-192-GCM&#39;, &#39;AES-256-GCM&#39;, 默认AES-128-CBC。</p>
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
                     * 获取<p>认证算法。可选 &#39;SHA1&#39;, &#39;MD5&#39;, &#39;SHA224&#39;, &#39;SHA256&#39;, &#39;SHA384&#39;, &#39;SHA512&#39;，默认SHA1。</p>
                     * @return IntegrityAlgorithm <p>认证算法。可选 &#39;SHA1&#39;, &#39;MD5&#39;, &#39;SHA224&#39;, &#39;SHA256&#39;, &#39;SHA384&#39;, &#39;SHA512&#39;，默认SHA1。</p>
                     * 
                     */
                    std::string GetIntegrityAlgorithm() const;

                    /**
                     * 设置<p>认证算法。可选 &#39;SHA1&#39;, &#39;MD5&#39;, &#39;SHA224&#39;, &#39;SHA256&#39;, &#39;SHA384&#39;, &#39;SHA512&#39;，默认SHA1。</p>
                     * @param _integrityAlgorithm <p>认证算法。可选 &#39;SHA1&#39;, &#39;MD5&#39;, &#39;SHA224&#39;, &#39;SHA256&#39;, &#39;SHA384&#39;, &#39;SHA512&#39;，默认SHA1。</p>
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
                     * 获取<p>是否支持压缩。当前不支持压缩。默认False。</p>
                     * @return Compress <p>是否支持压缩。当前不支持压缩。默认False。</p>
                     * 
                     */
                    bool GetCompress() const;

                    /**
                     * 设置<p>是否支持压缩。当前不支持压缩。默认False。</p>
                     * @param _compress <p>是否支持压缩。当前不支持压缩。默认False。</p>
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
                     * 获取<p>是否开启SSO认证。默认为False。该功能当前需要申请开白使用。</p>
                     * @return SsoEnabled <p>是否开启SSO认证。默认为False。该功能当前需要申请开白使用。</p>
                     * 
                     */
                    bool GetSsoEnabled() const;

                    /**
                     * 设置<p>是否开启SSO认证。默认为False。该功能当前需要申请开白使用。</p>
                     * @param _ssoEnabled <p>是否开启SSO认证。默认为False。该功能当前需要申请开白使用。</p>
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
                     * 获取<p>SAML-DATA</p>
                     * @return SamlData <p>SAML-DATA</p>
                     * 
                     */
                    std::string GetSamlData() const;

                    /**
                     * 设置<p>SAML-DATA</p>
                     * @param _samlData <p>SAML-DATA</p>
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
                     * 获取<p>DNS Server地址</p>
                     * @return DnsServers <p>DNS Server地址</p>
                     * 
                     */
                    DnsServers GetDnsServers() const;

                    /**
                     * 设置<p>DNS Server地址</p>
                     * @param _dnsServers <p>DNS Server地址</p>
                     * 
                     */
                    void SetDnsServers(const DnsServers& _dnsServers);

                    /**
                     * 判断参数 DnsServers 是否已赋值
                     * @return DnsServers 是否已赋值
                     * 
                     */
                    bool DnsServersHasBeenSet() const;

                private:

                    /**
                     * <p>SSL-VPN SERVER 实例ID</p>
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * <p>SSL-VPN SERVER NAME</p>
                     */
                    std::string m_sslVpnServerName;
                    bool m_sslVpnServerNameHasBeenSet;

                    /**
                     * <p>本端地址</p>
                     */
                    std::vector<std::string> m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * <p>客户端地址</p>
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * <p>SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP</p>
                     */
                    std::string m_sslVpnProtocol;
                    bool m_sslVpnProtocolHasBeenSet;

                    /**
                     * <p>SSL VPN服务端监听协议端口。</p>
                     */
                    int64_t m_sslVpnPort;
                    bool m_sslVpnPortHasBeenSet;

                    /**
                     * <p>加密算法。可选值 &#39;AES-128-CBC&#39;, &#39;AES-192-CBC&#39;, &#39;AES-256-CBC&#39;, &#39;AES-128-GCM&#39;, &#39;AES-192-GCM&#39;, &#39;AES-256-GCM&#39;, 默认AES-128-CBC。</p>
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * <p>认证算法。可选 &#39;SHA1&#39;, &#39;MD5&#39;, &#39;SHA224&#39;, &#39;SHA256&#39;, &#39;SHA384&#39;, &#39;SHA512&#39;，默认SHA1。</p>
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                    /**
                     * <p>是否支持压缩。当前不支持压缩。默认False。</p>
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * <p>是否开启SSO认证。默认为False。该功能当前需要申请开白使用。</p>
                     */
                    bool m_ssoEnabled;
                    bool m_ssoEnabledHasBeenSet;

                    /**
                     * <p>SAML-DATA</p>
                     */
                    std::string m_samlData;
                    bool m_samlDataHasBeenSet;

                    /**
                     * <p>DNS Server地址</p>
                     */
                    DnsServers m_dnsServers;
                    bool m_dnsServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYSSLSERVERREQUEST_H_
