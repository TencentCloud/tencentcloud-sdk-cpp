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
                     * 获取加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBS-192', 'AES-CBC-256', 'DES-CBC'，'SM4', 默认为3DES-CBC
                     * @return PropoEncryAlgorithm 加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBS-192', 'AES-CBC-256', 'DES-CBC'，'SM4', 默认为3DES-CBC
                     * 
                     */
                    std::string GetPropoEncryAlgorithm() const;

                    /**
                     * 设置加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBS-192', 'AES-CBC-256', 'DES-CBC'，'SM4', 默认为3DES-CBC
                     * @param _propoEncryAlgorithm 加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBS-192', 'AES-CBC-256', 'DES-CBC'，'SM4', 默认为3DES-CBC
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
                     * 获取认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为MD5
                     * @return PropoAuthenAlgorithm 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为MD5
                     * 
                     */
                    std::string GetPropoAuthenAlgorithm() const;

                    /**
                     * 设置认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为MD5
                     * @param _propoAuthenAlgorithm 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为MD5
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
                     * 获取协商模式：可选值：'AGGRESSIVE', 'MAIN'，默认为MAIN
                     * @return ExchangeMode 协商模式：可选值：'AGGRESSIVE', 'MAIN'，默认为MAIN
                     * 
                     */
                    std::string GetExchangeMode() const;

                    /**
                     * 设置协商模式：可选值：'AGGRESSIVE', 'MAIN'，默认为MAIN
                     * @param _exchangeMode 协商模式：可选值：'AGGRESSIVE', 'MAIN'，默认为MAIN
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
                     * 获取本端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     * @return LocalIdentity 本端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     * 
                     */
                    std::string GetLocalIdentity() const;

                    /**
                     * 设置本端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     * @param _localIdentity 本端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
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
                     * 获取对端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     * @return RemoteIdentity 对端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     * 
                     */
                    std::string GetRemoteIdentity() const;

                    /**
                     * 设置对端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     * @param _remoteIdentity 对端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
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
                     * 获取本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP
                     * @return LocalAddress 本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP
                     * 
                     */
                    std::string GetLocalAddress() const;

                    /**
                     * 设置本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP
                     * @param _localAddress 本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP
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
                     * 获取对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填
                     * @return RemoteAddress 对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填
                     * 
                     */
                    std::string GetRemoteAddress() const;

                    /**
                     * 设置对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填
                     * @param _remoteAddress 对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填
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
                     * 获取本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填
                     * @return LocalFqdnName 本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填
                     * 
                     */
                    std::string GetLocalFqdnName() const;

                    /**
                     * 设置本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填
                     * @param _localFqdnName 本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填
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
                     * 获取对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填
                     * @return RemoteFqdnName 对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填
                     * 
                     */
                    std::string GetRemoteFqdnName() const;

                    /**
                     * 设置对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填
                     * @param _remoteFqdnName 对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填
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
                     * 获取DH group，指定IKE交换密钥时使用的DH组，可选值：'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', 'GROUP24'，
                     * @return DhGroupName DH group，指定IKE交换密钥时使用的DH组，可选值：'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', 'GROUP24'，
                     * 
                     */
                    std::string GetDhGroupName() const;

                    /**
                     * 设置DH group，指定IKE交换密钥时使用的DH组，可选值：'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', 'GROUP24'，
                     * @param _dhGroupName DH group，指定IKE交换密钥时使用的DH组，可选值：'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', 'GROUP24'，
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
                     * 获取IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800
                     * @return IKESaLifetimeSeconds IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800
                     * 
                     */
                    uint64_t GetIKESaLifetimeSeconds() const;

                    /**
                     * 设置IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800
                     * @param _iKESaLifetimeSeconds IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800
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
                     * 获取IKE版本
                     * @return IKEVersion IKE版本
                     * 
                     */
                    std::string GetIKEVersion() const;

                    /**
                     * 设置IKE版本
                     * @param _iKEVersion IKE版本
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
                     * 加密算法，可选值：'3DES-CBC', 'AES-CBC-128', 'AES-CBS-192', 'AES-CBC-256', 'DES-CBC'，'SM4', 默认为3DES-CBC
                     */
                    std::string m_propoEncryAlgorithm;
                    bool m_propoEncryAlgorithmHasBeenSet;

                    /**
                     * 认证算法：可选值：'MD5', 'SHA1'，'SHA-256' 默认为MD5
                     */
                    std::string m_propoAuthenAlgorithm;
                    bool m_propoAuthenAlgorithmHasBeenSet;

                    /**
                     * 协商模式：可选值：'AGGRESSIVE', 'MAIN'，默认为MAIN
                     */
                    std::string m_exchangeMode;
                    bool m_exchangeModeHasBeenSet;

                    /**
                     * 本端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     */
                    std::string m_localIdentity;
                    bool m_localIdentityHasBeenSet;

                    /**
                     * 对端标识类型：可选值：'ADDRESS', 'FQDN'，默认为ADDRESS
                     */
                    std::string m_remoteIdentity;
                    bool m_remoteIdentityHasBeenSet;

                    /**
                     * 本端标识，当LocalIdentity选为ADDRESS时，LocalAddress必填。localAddress默认为vpn网关公网IP
                     */
                    std::string m_localAddress;
                    bool m_localAddressHasBeenSet;

                    /**
                     * 对端标识，当RemoteIdentity选为ADDRESS时，RemoteAddress必填
                     */
                    std::string m_remoteAddress;
                    bool m_remoteAddressHasBeenSet;

                    /**
                     * 本端标识，当LocalIdentity选为FQDN时，LocalFqdnName必填
                     */
                    std::string m_localFqdnName;
                    bool m_localFqdnNameHasBeenSet;

                    /**
                     * 对端标识，当remoteIdentity选为FQDN时，RemoteFqdnName必填
                     */
                    std::string m_remoteFqdnName;
                    bool m_remoteFqdnNameHasBeenSet;

                    /**
                     * DH group，指定IKE交换密钥时使用的DH组，可选值：'GROUP1', 'GROUP2', 'GROUP5', 'GROUP14', 'GROUP24'，
                     */
                    std::string m_dhGroupName;
                    bool m_dhGroupNameHasBeenSet;

                    /**
                     * IKE SA Lifetime，单位：秒，设置IKE SA的生存周期，取值范围：60-604800
                     */
                    uint64_t m_iKESaLifetimeSeconds;
                    bool m_iKESaLifetimeSecondsHasBeenSet;

                    /**
                     * IKE版本
                     */
                    std::string m_iKEVersion;
                    bool m_iKEVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IKEOPTIONSSPECIFICATION_H_
