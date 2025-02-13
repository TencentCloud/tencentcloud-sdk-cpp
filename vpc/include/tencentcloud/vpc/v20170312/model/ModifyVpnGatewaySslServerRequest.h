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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYSSLSERVERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYSSLSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取SSL-VPN SERVER 实例ID
                     * @return SslVpnServerId SSL-VPN SERVER 实例ID
                     * 
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置SSL-VPN SERVER 实例ID
                     * @param _sslVpnServerId SSL-VPN SERVER 实例ID
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
                     * 获取SSL-VPN SERVER NAME
                     * @return SslVpnServerName SSL-VPN SERVER NAME
                     * 
                     */
                    std::string GetSslVpnServerName() const;

                    /**
                     * 设置SSL-VPN SERVER NAME
                     * @param _sslVpnServerName SSL-VPN SERVER NAME
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
                     * 获取本端地址
                     * @return LocalAddress 本端地址
                     * 
                     */
                    std::vector<std::string> GetLocalAddress() const;

                    /**
                     * 设置本端地址
                     * @param _localAddress 本端地址
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
                     * 获取客户端地址
                     * @return RemoteAddress 客户端地址
                     * 
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置客户端地址
                     * @param _remoteAddress 客户端地址
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
                     * 获取SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     * @return SslVpnProtocol SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     * 
                     */
                    std::string GetSslVpnProtocol() const;

                    /**
                     * 设置SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     * @param _sslVpnProtocol SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
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
                     * 获取SSL VPN服务端监听协议端口。
                     * @return SslVpnPort SSL VPN服务端监听协议端口。
                     * 
                     */
                    int64_t GetSslVpnPort() const;

                    /**
                     * 设置SSL VPN服务端监听协议端口。
                     * @param _sslVpnPort SSL VPN服务端监听协议端口。
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
                     * 获取是否支持压缩。当前不支持压缩。默认False。
                     * @return Compress 是否支持压缩。当前不支持压缩。默认False。
                     * 
                     */
                    bool GetCompress() const;

                    /**
                     * 设置是否支持压缩。当前不支持压缩。默认False。
                     * @param _compress 是否支持压缩。当前不支持压缩。默认False。
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
                     * 获取SAML-DATA
                     * @return SamlData SAML-DATA
                     * 
                     */
                    std::string GetSamlData() const;

                    /**
                     * 设置SAML-DATA
                     * @param _samlData SAML-DATA
                     * 
                     */
                    void SetSamlData(const std::string& _samlData);

                    /**
                     * 判断参数 SamlData 是否已赋值
                     * @return SamlData 是否已赋值
                     * 
                     */
                    bool SamlDataHasBeenSet() const;

                private:

                    /**
                     * SSL-VPN SERVER 实例ID
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * SSL-VPN SERVER NAME
                     */
                    std::string m_sslVpnServerName;
                    bool m_sslVpnServerNameHasBeenSet;

                    /**
                     * 本端地址
                     */
                    std::vector<std::string> m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * 客户端地址
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议。当前仅支持 UDP。默认UDP
                     */
                    std::string m_sslVpnProtocol;
                    bool m_sslVpnProtocolHasBeenSet;

                    /**
                     * SSL VPN服务端监听协议端口。
                     */
                    int64_t m_sslVpnPort;
                    bool m_sslVpnPortHasBeenSet;

                    /**
                     * 加密算法。可选 'AES-128-CBC','AES-192-CBC', 'AES-256-CBC', 默认AES-128-CBC。
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 认证算法。可选 'SHA1'，默认SHA1。
                     */
                    std::string m_integrityAlgorithm;
                    bool m_integrityAlgorithmHasBeenSet;

                    /**
                     * 是否支持压缩。当前不支持压缩。默认False。
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 是否开启SSO认证。默认为False。该功能当前需要申请开白使用。
                     */
                    bool m_ssoEnabled;
                    bool m_ssoEnabledHasBeenSet;

                    /**
                     * SAML-DATA
                     */
                    std::string m_samlData;
                    bool m_samlDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPNGATEWAYSSLSERVERREQUEST_H_
