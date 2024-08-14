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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDPCERTIFICATE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDPCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * SAML 签名证书信息
                */
                class SAMLIdPCertificate : public AbstractModel
                {
                public:
                    SAMLIdPCertificate();
                    ~SAMLIdPCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书序列号。
                     * @return SerialNumber 证书序列号。
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 设置证书序列号。
                     * @param _serialNumber 证书序列号。
                     * 
                     */
                    void SetSerialNumber(const std::string& _serialNumber);

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取证书颁发者。
                     * @return Issuer 证书颁发者。
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置证书颁发者。
                     * @param _issuer 证书颁发者。
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取证书版本。
                     * @return Version 证书版本。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置证书版本。
                     * @param _version 证书版本。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取证书ID。
                     * @return CertificateId 证书ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书ID。
                     * @param _certificateId 证书ID。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取PEM 格式的公钥证书（Base64 编码）。
                     * @return PublicKey PEM 格式的公钥证书（Base64 编码）。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置PEM 格式的公钥证书（Base64 编码）。
                     * @param _publicKey PEM 格式的公钥证书（Base64 编码）。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取证书的签名算法。
                     * @return SignatureAlgorithm 证书的签名算法。
                     * 
                     */
                    std::string GetSignatureAlgorithm() const;

                    /**
                     * 设置证书的签名算法。
                     * @param _signatureAlgorithm 证书的签名算法。
                     * 
                     */
                    void SetSignatureAlgorithm(const std::string& _signatureAlgorithm);

                    /**
                     * 判断参数 SignatureAlgorithm 是否已赋值
                     * @return SignatureAlgorithm 是否已赋值
                     * 
                     */
                    bool SignatureAlgorithmHasBeenSet() const;

                    /**
                     * 获取证书的过期时间。
                     * @return NotAfter 证书的过期时间。
                     * 
                     */
                    std::string GetNotAfter() const;

                    /**
                     * 设置证书的过期时间。
                     * @param _notAfter 证书的过期时间。
                     * 
                     */
                    void SetNotAfter(const std::string& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取证书的创建时间。
                     * @return NotBefore 证书的创建时间。
                     * 
                     */
                    std::string GetNotBefore() const;

                    /**
                     * 设置证书的创建时间。
                     * @param _notBefore 证书的创建时间。
                     * 
                     */
                    void SetNotBefore(const std::string& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取证书的主体。
                     * @return Subject 证书的主体。
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置证书的主体。
                     * @param _subject 证书的主体。
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取PEM 格式的 X509 证书。
                     * @return X509Certificate PEM 格式的 X509 证书。
                     * 
                     */
                    std::string GetX509Certificate() const;

                    /**
                     * 设置PEM 格式的 X509 证书。
                     * @param _x509Certificate PEM 格式的 X509 证书。
                     * 
                     */
                    void SetX509Certificate(const std::string& _x509Certificate);

                    /**
                     * 判断参数 X509Certificate 是否已赋值
                     * @return X509Certificate 是否已赋值
                     * 
                     */
                    bool X509CertificateHasBeenSet() const;

                private:

                    /**
                     * 证书序列号。
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 证书颁发者。
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 证书版本。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 证书ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * PEM 格式的公钥证书（Base64 编码）。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 证书的签名算法。
                     */
                    std::string m_signatureAlgorithm;
                    bool m_signatureAlgorithmHasBeenSet;

                    /**
                     * 证书的过期时间。
                     */
                    std::string m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * 证书的创建时间。
                     */
                    std::string m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * 证书的主体。
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * PEM 格式的 X509 证书。
                     */
                    std::string m_x509Certificate;
                    bool m_x509CertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDPCERTIFICATE_H_
