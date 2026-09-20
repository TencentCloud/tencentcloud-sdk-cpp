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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Kafka访问协议
                */
                class KafkaProtocolInfo : public AbstractModel
                {
                public:
                    KafkaProtocolInfo();
                    ~KafkaProtocolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。</p><ul><li>当IsEncryptionAddr为true时，Protocol必填。</li><li>支持的协议类型如下：<ul><li>plaintext：纯文本无加密协议</li><li>sasl_ssl：SASL 认证 + SSL 加密</li><li>ssl：纯 SSL/TLS 加密协议</li><li>sasl_plaintext：SASL 认证 + 非加密通道</li></ul></li></ul>
                     * @return Protocol <p>协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。</p><ul><li>当IsEncryptionAddr为true时，Protocol必填。</li><li>支持的协议类型如下：<ul><li>plaintext：纯文本无加密协议</li><li>sasl_ssl：SASL 认证 + SSL 加密</li><li>ssl：纯 SSL/TLS 加密协议</li><li>sasl_plaintext：SASL 认证 + 非加密通道</li></ul></li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。</p><ul><li>当IsEncryptionAddr为true时，Protocol必填。</li><li>支持的协议类型如下：<ul><li>plaintext：纯文本无加密协议</li><li>sasl_ssl：SASL 认证 + SSL 加密</li><li>ssl：纯 SSL/TLS 加密协议</li><li>sasl_plaintext：SASL 认证 + 非加密通道</li></ul></li></ul>
                     * @param _protocol <p>协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。</p><ul><li>当IsEncryptionAddr为true时，Protocol必填。</li><li>支持的协议类型如下：<ul><li>plaintext：纯文本无加密协议</li><li>sasl_ssl：SASL 认证 + SSL 加密</li><li>ssl：纯 SSL/TLS 加密协议</li><li>sasl_plaintext：SASL 认证 + 非加密通道</li></ul></li></ul>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。</p><ul><li>当Protocol为  <code>sasl_plaintext</code> 或 <code>sasl_ssl</code> 时 Mechanism 必填。</li><li>支持加密类型如下<ul><li>PLAIN：明文认证</li><li>SCRAM-SHA-256：基于挑战-响应机制，使用PBKDF2-HMAC-SHA256算法</li><li>SCRAM-SHA-512：增强版SCRAM，使用PBKDF2-HMAC-SHA512算法</li></ul></li></ul>
                     * @return Mechanism <p>加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。</p><ul><li>当Protocol为  <code>sasl_plaintext</code> 或 <code>sasl_ssl</code> 时 Mechanism 必填。</li><li>支持加密类型如下<ul><li>PLAIN：明文认证</li><li>SCRAM-SHA-256：基于挑战-响应机制，使用PBKDF2-HMAC-SHA256算法</li><li>SCRAM-SHA-512：增强版SCRAM，使用PBKDF2-HMAC-SHA512算法</li></ul></li></ul>
                     * 
                     */
                    std::string GetMechanism() const;

                    /**
                     * 设置<p>加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。</p><ul><li>当Protocol为  <code>sasl_plaintext</code> 或 <code>sasl_ssl</code> 时 Mechanism 必填。</li><li>支持加密类型如下<ul><li>PLAIN：明文认证</li><li>SCRAM-SHA-256：基于挑战-响应机制，使用PBKDF2-HMAC-SHA256算法</li><li>SCRAM-SHA-512：增强版SCRAM，使用PBKDF2-HMAC-SHA512算法</li></ul></li></ul>
                     * @param _mechanism <p>加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。</p><ul><li>当Protocol为  <code>sasl_plaintext</code> 或 <code>sasl_ssl</code> 时 Mechanism 必填。</li><li>支持加密类型如下<ul><li>PLAIN：明文认证</li><li>SCRAM-SHA-256：基于挑战-响应机制，使用PBKDF2-HMAC-SHA256算法</li><li>SCRAM-SHA-512：增强版SCRAM，使用PBKDF2-HMAC-SHA512算法</li></ul></li></ul>
                     * 
                     */
                    void SetMechanism(const std::string& _mechanism);

                    /**
                     * 判断参数 Mechanism 是否已赋值
                     * @return Mechanism 是否已赋值
                     * 
                     */
                    bool MechanismHasBeenSet() const;

                    /**
                     * 获取<p>用户名。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * @return UserName <p>用户名。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * @param _userName <p>用户名。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>用户密码。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * @return Password <p>用户密码。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>用户密码。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * @param _password <p>用户密码。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>是否开启客户端证书验证</p>
                     * @return EnableClientCertificate <p>是否开启客户端证书验证</p>
                     * 
                     */
                    uint64_t GetEnableClientCertificate() const;

                    /**
                     * 设置<p>是否开启客户端证书验证</p>
                     * @param _enableClientCertificate <p>是否开启客户端证书验证</p>
                     * 
                     */
                    void SetEnableClientCertificate(const uint64_t& _enableClientCertificate);

                    /**
                     * 判断参数 EnableClientCertificate 是否已赋值
                     * @return EnableClientCertificate 是否已赋值
                     * 
                     */
                    bool EnableClientCertificateHasBeenSet() const;

                    /**
                     * 获取<p>是否开启服务端证书验证</p>
                     * @return EnableServerCertificate <p>是否开启服务端证书验证</p>
                     * 
                     */
                    uint64_t GetEnableServerCertificate() const;

                    /**
                     * 设置<p>是否开启服务端证书验证</p>
                     * @param _enableServerCertificate <p>是否开启服务端证书验证</p>
                     * 
                     */
                    void SetEnableServerCertificate(const uint64_t& _enableServerCertificate);

                    /**
                     * 判断参数 EnableServerCertificate 是否已赋值
                     * @return EnableServerCertificate 是否已赋值
                     * 
                     */
                    bool EnableServerCertificateHasBeenSet() const;

                    /**
                     * 获取<p>云托管CA证书id</p>
                     * @return CACertificateId <p>云托管CA证书id</p>
                     * 
                     */
                    std::string GetCACertificateId() const;

                    /**
                     * 设置<p>云托管CA证书id</p>
                     * @param _cACertificateId <p>云托管CA证书id</p>
                     * 
                     */
                    void SetCACertificateId(const std::string& _cACertificateId);

                    /**
                     * 判断参数 CACertificateId 是否已赋值
                     * @return CACertificateId 是否已赋值
                     * 
                     */
                    bool CACertificateIdHasBeenSet() const;

                    /**
                     * 获取<p>云托管服务端证书id</p>
                     * @return SVRCertificateId <p>云托管服务端证书id</p>
                     * 
                     */
                    std::string GetSVRCertificateId() const;

                    /**
                     * 设置<p>云托管服务端证书id</p>
                     * @param _sVRCertificateId <p>云托管服务端证书id</p>
                     * 
                     */
                    void SetSVRCertificateId(const std::string& _sVRCertificateId);

                    /**
                     * 判断参数 SVRCertificateId 是否已赋值
                     * @return SVRCertificateId 是否已赋值
                     * 
                     */
                    bool SVRCertificateIdHasBeenSet() const;

                private:

                    /**
                     * <p>协议类型，支持的协议类型包括 plaintext、sasl_plaintext 或 sasl_ssl。建议使用 sasl_ssl，此协议会进行连接加密同时需要用户认证。</p><ul><li>当IsEncryptionAddr为true时，Protocol必填。</li><li>支持的协议类型如下：<ul><li>plaintext：纯文本无加密协议</li><li>sasl_ssl：SASL 认证 + SSL 加密</li><li>ssl：纯 SSL/TLS 加密协议</li><li>sasl_plaintext：SASL 认证 + 非加密通道</li></ul></li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>加密类型，支持 PLAIN、SCRAM-SHA-256 或 SCRAM-SHA-512。</p><ul><li>当Protocol为  <code>sasl_plaintext</code> 或 <code>sasl_ssl</code> 时 Mechanism 必填。</li><li>支持加密类型如下<ul><li>PLAIN：明文认证</li><li>SCRAM-SHA-256：基于挑战-响应机制，使用PBKDF2-HMAC-SHA256算法</li><li>SCRAM-SHA-512：增强版SCRAM，使用PBKDF2-HMAC-SHA512算法</li></ul></li></ul>
                     */
                    std::string m_mechanism;
                    bool m_mechanismHasBeenSet;

                    /**
                     * <p>用户名。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>用户密码。<br>当Protocol为sasl_plaintext或sasl_ssl时必填</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>是否开启客户端证书验证</p>
                     */
                    uint64_t m_enableClientCertificate;
                    bool m_enableClientCertificateHasBeenSet;

                    /**
                     * <p>是否开启服务端证书验证</p>
                     */
                    uint64_t m_enableServerCertificate;
                    bool m_enableServerCertificateHasBeenSet;

                    /**
                     * <p>云托管CA证书id</p>
                     */
                    std::string m_cACertificateId;
                    bool m_cACertificateIdHasBeenSet;

                    /**
                     * <p>云托管服务端证书id</p>
                     */
                    std::string m_sVRCertificateId;
                    bool m_sVRCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKAPROTOCOLINFO_H_
