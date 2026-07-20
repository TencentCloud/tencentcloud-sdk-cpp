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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * IKE配置（Internet Key Exchange，因特网密钥交换），IKE具有一套自我保护机制，用户配置网络安全协议
                */
                class IKEOptionsSpecification : public AbstractModel
                {
                public:
                    IKEOptionsSpecification();
                    ~IKEOptionsSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;，&#39;SM4&#39;, 默认为3DES-CBC</p>
                     * @return PropoEncryAlgorithm <p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;，&#39;SM4&#39;, 默认为3DES-CBC</p>
                     * 
                     */
                    std::string GetPropoEncryAlgorithm() const;

                    /**
                     * 设置<p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;，&#39;SM4&#39;, 默认为3DES-CBC</p>
                     * @param _propoEncryAlgorithm <p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;，&#39;SM4&#39;, 默认为3DES-CBC</p>
                     * 
                     */
                    void SetPropoEncryAlgorithm(const std::string& _propoEncryAlgorithm);

                    /**
                     * 判断参数 PropoEncryAlgorithm 是否已赋值
                     * @return PropoEncryAlgorithm 是否已赋值
                     * 
                     */
                    bool PropoEncryAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>认证算法：可选值：&#39;MD5&#39;，&#39;SHA&#39;，&#39;SHA-256&#39;，&#39;SHA-512&#39;， 默认为SHA。</p>
                     * @return PropoAuthenAlgorithm <p>认证算法：可选值：&#39;MD5&#39;，&#39;SHA&#39;，&#39;SHA-256&#39;，&#39;SHA-512&#39;， 默认为SHA。</p>
                     * 
                     */
                    std::string GetPropoAuthenAlgorithm() const;

                    /**
                     * 设置<p>认证算法：可选值：&#39;MD5&#39;，&#39;SHA&#39;，&#39;SHA-256&#39;，&#39;SHA-512&#39;， 默认为SHA。</p>
                     * @param _propoAuthenAlgorithm <p>认证算法：可选值：&#39;MD5&#39;，&#39;SHA&#39;，&#39;SHA-256&#39;，&#39;SHA-512&#39;， 默认为SHA。</p>
                     * 
                     */
                    void SetPropoAuthenAlgorithm(const std::string& _propoAuthenAlgorithm);

                    /**
                     * 判断参数 PropoAuthenAlgorithm 是否已赋值
                     * @return PropoAuthenAlgorithm 是否已赋值
                     * 
                     */
                    bool PropoAuthenAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>协商模式：可选值：&#39;AGGRESSIVE&#39;， &#39;MAIN&#39;，默认为MAIN。</p>
                     * @return ExchangeMode <p>协商模式：可选值：&#39;AGGRESSIVE&#39;， &#39;MAIN&#39;，默认为MAIN。</p>
                     * 
                     */
                    std::string GetExchangeMode() const;

                    /**
                     * 设置<p>协商模式：可选值：&#39;AGGRESSIVE&#39;， &#39;MAIN&#39;，默认为MAIN。</p>
                     * @param _exchangeMode <p>协商模式：可选值：&#39;AGGRESSIVE&#39;， &#39;MAIN&#39;，默认为MAIN。</p>
                     * 
                     */
                    void SetExchangeMode(const std::string& _exchangeMode);

                    /**
                     * 判断参数 ExchangeMode 是否已赋值
                     * @return ExchangeMode 是否已赋值
                     * 
                     */
                    bool ExchangeModeHasBeenSet() const;

                    /**
                     * 获取<p>本端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * @return LocalIdentity <p>本端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * 
                     */
                    std::string GetLocalIdentity() const;

                    /**
                     * 设置<p>本端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * @param _localIdentity <p>本端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * 
                     */
                    void SetLocalIdentity(const std::string& _localIdentity);

                    /**
                     * 判断参数 LocalIdentity 是否已赋值
                     * @return LocalIdentity 是否已赋值
                     * 
                     */
                    bool LocalIdentityHasBeenSet() const;

                    /**
                     * 获取<p>对端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * @return RemoteIdentity <p>对端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * 
                     */
                    std::string GetRemoteIdentity() const;

                    /**
                     * 设置<p>对端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * @param _remoteIdentity <p>对端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     * 
                     */
                    void SetRemoteIdentity(const std::string& _remoteIdentity);

                    /**
                     * 判断参数 RemoteIdentity 是否已赋值
                     * @return RemoteIdentity 是否已赋值
                     * 
                     */
                    bool RemoteIdentityHasBeenSet() const;

                    /**
                     * 获取<p>本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP</p>
                     * @return LocalAddress <p>本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP</p>
                     * 
                     */
                    std::string GetLocalAddress() const;

                    /**
                     * 设置<p>本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP</p>
                     * @param _localAddress <p>本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP</p>
                     * 
                     */
                    void SetLocalAddress(const std::string& _localAddress);

                    /**
                     * 判断参数 LocalAddress 是否已赋值
                     * @return LocalAddress 是否已赋值
                     * 
                     */
                    bool LocalAddressHasBeenSet() const;

                    /**
                     * 获取<p>对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填</p>
                     * @return RemoteAddress <p>对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填</p>
                     * 
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置<p>对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填</p>
                     * @param _remoteAddress <p>对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填</p>
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
                     * 获取<p>本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填</p>
                     * @return LocalFqdnName <p>本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填</p>
                     * 
                     */
                    std::string GetLocalFqdnName() const;

                    /**
                     * 设置<p>本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填</p>
                     * @param _localFqdnName <p>本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填</p>
                     * 
                     */
                    void SetLocalFqdnName(const std::string& _localFqdnName);

                    /**
                     * 判断参数 LocalFqdnName 是否已赋值
                     * @return LocalFqdnName 是否已赋值
                     * 
                     */
                    bool LocalFqdnNameHasBeenSet() const;

                    /**
                     * 获取<p>对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填</p>
                     * @return RemoteFqdnName <p>对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填</p>
                     * 
                     */
                    std::string GetRemoteFqdnName() const;

                    /**
                     * 设置<p>对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填</p>
                     * @param _remoteFqdnName <p>对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填</p>
                     * 
                     */
                    void SetRemoteFqdnName(const std::string& _remoteFqdnName);

                    /**
                     * 判断参数 RemoteFqdnName 是否已赋值
                     * @return RemoteFqdnName 是否已赋值
                     * 
                     */
                    bool RemoteFqdnNameHasBeenSet() const;

                    /**
                     * 获取<p>DH group，指定IKE交换密钥时使用的DH组，可选值：&#39;GROUP1&#39;, &#39;GROUP2&#39;, &#39;GROUP5&#39;, &#39;GROUP14&#39;, &#39;GROUP15&#39;, &#39;GROUP16&#39;, &#39;GROUP19&#39;, &#39;GROUP20&#39;, &#39;GROUP21&#39;, &#39;GROUP24&#39;，默认是GROUP1。</p>
                     * @return DhGroupName <p>DH group，指定IKE交换密钥时使用的DH组，可选值：&#39;GROUP1&#39;, &#39;GROUP2&#39;, &#39;GROUP5&#39;, &#39;GROUP14&#39;, &#39;GROUP15&#39;, &#39;GROUP16&#39;, &#39;GROUP19&#39;, &#39;GROUP20&#39;, &#39;GROUP21&#39;, &#39;GROUP24&#39;，默认是GROUP1。</p>
                     * 
                     */
                    std::string GetDhGroupName() const;

                    /**
                     * 设置<p>DH group，指定IKE交换密钥时使用的DH组，可选值：&#39;GROUP1&#39;, &#39;GROUP2&#39;, &#39;GROUP5&#39;, &#39;GROUP14&#39;, &#39;GROUP15&#39;, &#39;GROUP16&#39;, &#39;GROUP19&#39;, &#39;GROUP20&#39;, &#39;GROUP21&#39;, &#39;GROUP24&#39;，默认是GROUP1。</p>
                     * @param _dhGroupName <p>DH group，指定IKE交换密钥时使用的DH组，可选值：&#39;GROUP1&#39;, &#39;GROUP2&#39;, &#39;GROUP5&#39;, &#39;GROUP14&#39;, &#39;GROUP15&#39;, &#39;GROUP16&#39;, &#39;GROUP19&#39;, &#39;GROUP20&#39;, &#39;GROUP21&#39;, &#39;GROUP24&#39;，默认是GROUP1。</p>
                     * 
                     */
                    void SetDhGroupName(const std::string& _dhGroupName);

                    /**
                     * 判断参数 DhGroupName 是否已赋值
                     * @return DhGroupName 是否已赋值
                     * 
                     */
                    bool DhGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800</p>
                     * @return IKESaLifetimeSeconds <p>IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800</p>
                     * 
                     */
                    uint64_t GetIKESaLifetimeSeconds() const;

                    /**
                     * 设置<p>IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800</p>
                     * @param _iKESaLifetimeSeconds <p>IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800</p>
                     * 
                     */
                    void SetIKESaLifetimeSeconds(const uint64_t& _iKESaLifetimeSeconds);

                    /**
                     * 判断参数 IKESaLifetimeSeconds 是否已赋值
                     * @return IKESaLifetimeSeconds 是否已赋值
                     * 
                     */
                    bool IKESaLifetimeSecondsHasBeenSet() const;

                    /**
                     * 获取<p>IKE版本</p>
                     * @return IKEVersion <p>IKE版本</p>
                     * 
                     */
                    std::string GetIKEVersion() const;

                    /**
                     * 设置<p>IKE版本</p>
                     * @param _iKEVersion <p>IKE版本</p>
                     * 
                     */
                    void SetIKEVersion(const std::string& _iKEVersion);

                    /**
                     * 判断参数 IKEVersion 是否已赋值
                     * @return IKEVersion 是否已赋值
                     * 
                     */
                    bool IKEVersionHasBeenSet() const;

                private:

                    /**
                     * <p>加密算法，可选值：&#39;3DES-CBC&#39;, &#39;AES-CBC-128&#39;, &#39;AES-CBC-192&#39;, &#39;AES-CBC-256&#39;, &#39;DES-CBC&#39;，&#39;SM4&#39;, 默认为3DES-CBC</p>
                     */
                    std::string m_propoEncryAlgorithm;
                    bool m_propoEncryAlgorithmHasBeenSet;

                    /**
                     * <p>认证算法：可选值：&#39;MD5&#39;，&#39;SHA&#39;，&#39;SHA-256&#39;，&#39;SHA-512&#39;， 默认为SHA。</p>
                     */
                    std::string m_propoAuthenAlgorithm;
                    bool m_propoAuthenAlgorithmHasBeenSet;

                    /**
                     * <p>协商模式：可选值：&#39;AGGRESSIVE&#39;， &#39;MAIN&#39;，默认为MAIN。</p>
                     */
                    std::string m_exchangeMode;
                    bool m_exchangeModeHasBeenSet;

                    /**
                     * <p>本端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     */
                    std::string m_localIdentity;
                    bool m_localIdentityHasBeenSet;

                    /**
                     * <p>对端标识类型：可选值：&#39;ADDRESS&#39;, &#39;FQDN&#39;，默认为ADDRESS</p>
                     */
                    std::string m_remoteIdentity;
                    bool m_remoteIdentityHasBeenSet;

                    /**
                     * <p>本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP</p>
                     */
                    std::string m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * <p>对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填</p>
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * <p>本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填</p>
                     */
                    std::string m_localFqdnName;
                    bool m_localFqdnNameHasBeenSet;

                    /**
                     * <p>对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填</p>
                     */
                    std::string m_remoteFqdnName;
                    bool m_remoteFqdnNameHasBeenSet;

                    /**
                     * <p>DH group，指定IKE交换密钥时使用的DH组，可选值：&#39;GROUP1&#39;, &#39;GROUP2&#39;, &#39;GROUP5&#39;, &#39;GROUP14&#39;, &#39;GROUP15&#39;, &#39;GROUP16&#39;, &#39;GROUP19&#39;, &#39;GROUP20&#39;, &#39;GROUP21&#39;, &#39;GROUP24&#39;，默认是GROUP1。</p>
                     */
                    std::string m_dhGroupName;
                    bool m_dhGroupNameHasBeenSet;

                    /**
                     * <p>IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800</p>
                     */
                    uint64_t m_iKESaLifetimeSeconds;
                    bool m_iKESaLifetimeSecondsHasBeenSet;

                    /**
                     * <p>IKE版本</p>
                     */
                    std::string m_iKEVersion;
                    bool m_iKEVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_
