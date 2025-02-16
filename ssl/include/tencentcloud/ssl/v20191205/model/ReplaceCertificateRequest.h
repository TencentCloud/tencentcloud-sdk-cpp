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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * ReplaceCertificate请求参数结构体
                */
                class ReplaceCertificateRequest : public AbstractModel
                {
                public:
                    ReplaceCertificateRequest();
                    ~ReplaceCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certificateId 证书 ID。
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
                     * 获取验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * @return ValidType 验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * 
                     */
                    std::string GetValidType() const;

                    /**
                     * 设置验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * @param _validType 验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     * 
                     */
                    void SetValidType(const std::string& _validType);

                    /**
                     * 判断参数 ValidType 是否已赋值
                     * @return ValidType 是否已赋值
                     * 
                     */
                    bool ValidTypeHasBeenSet() const;

                    /**
                     * 获取类型，默认 Original。可选项：Original = 原证书 CSR，Upload = 手动上传，Online = 在线生成。
                     * @return CsrType 类型，默认 Original。可选项：Original = 原证书 CSR，Upload = 手动上传，Online = 在线生成。
                     * 
                     */
                    std::string GetCsrType() const;

                    /**
                     * 设置类型，默认 Original。可选项：Original = 原证书 CSR，Upload = 手动上传，Online = 在线生成。
                     * @param _csrType 类型，默认 Original。可选项：Original = 原证书 CSR，Upload = 手动上传，Online = 在线生成。
                     * 
                     */
                    void SetCsrType(const std::string& _csrType);

                    /**
                     * 判断参数 CsrType 是否已赋值
                     * @return CsrType 是否已赋值
                     * 
                     */
                    bool CsrTypeHasBeenSet() const;

                    /**
                     * 获取CSR 内容，手动上传的时候需要。
                     * @return CsrContent CSR 内容，手动上传的时候需要。
                     * 
                     */
                    std::string GetCsrContent() const;

                    /**
                     * 设置CSR 内容，手动上传的时候需要。
                     * @param _csrContent CSR 内容，手动上传的时候需要。
                     * 
                     */
                    void SetCsrContent(const std::string& _csrContent);

                    /**
                     * 判断参数 CsrContent 是否已赋值
                     * @return CsrContent 是否已赋值
                     * 
                     */
                    bool CsrContentHasBeenSet() const;

                    /**
                     * 获取KEY 密码。
                     * @return CsrkeyPassword KEY 密码。
                     * 
                     */
                    std::string GetCsrkeyPassword() const;

                    /**
                     * 设置KEY 密码。
                     * @param _csrkeyPassword KEY 密码。
                     * 
                     */
                    void SetCsrkeyPassword(const std::string& _csrkeyPassword);

                    /**
                     * 判断参数 CsrkeyPassword 是否已赋值
                     * @return CsrkeyPassword 是否已赋值
                     * 
                     */
                    bool CsrkeyPasswordHasBeenSet() const;

                    /**
                     * 获取重颁发原因。
                     * @return Reason 重颁发原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置重颁发原因。
                     * @param _reason 重颁发原因。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取CSR加密方式，可选：RSA、ECC、SM2
（CsrType为Online才可选）， 默认为RSA
                     * @return CertCSREncryptAlgo CSR加密方式，可选：RSA、ECC、SM2
（CsrType为Online才可选）， 默认为RSA
                     * 
                     */
                    std::string GetCertCSREncryptAlgo() const;

                    /**
                     * 设置CSR加密方式，可选：RSA、ECC、SM2
（CsrType为Online才可选）， 默认为RSA
                     * @param _certCSREncryptAlgo CSR加密方式，可选：RSA、ECC、SM2
（CsrType为Online才可选）， 默认为RSA
                     * 
                     */
                    void SetCertCSREncryptAlgo(const std::string& _certCSREncryptAlgo);

                    /**
                     * 判断参数 CertCSREncryptAlgo 是否已赋值
                     * @return CertCSREncryptAlgo 是否已赋值
                     * 
                     */
                    bool CertCSREncryptAlgoHasBeenSet() const;

                    /**
                     * 获取CSR加密参数，CsrEncryptAlgo为RSA时， 可选2048、4096等默认为2048；CsrEncryptAlgo为ECC时，可选prime256v1，secp384r1等，默认为prime256v1; 
                     * @return CertCSRKeyParameter CSR加密参数，CsrEncryptAlgo为RSA时， 可选2048、4096等默认为2048；CsrEncryptAlgo为ECC时，可选prime256v1，secp384r1等，默认为prime256v1; 
                     * 
                     */
                    std::string GetCertCSRKeyParameter() const;

                    /**
                     * 设置CSR加密参数，CsrEncryptAlgo为RSA时， 可选2048、4096等默认为2048；CsrEncryptAlgo为ECC时，可选prime256v1，secp384r1等，默认为prime256v1; 
                     * @param _certCSRKeyParameter CSR加密参数，CsrEncryptAlgo为RSA时， 可选2048、4096等默认为2048；CsrEncryptAlgo为ECC时，可选prime256v1，secp384r1等，默认为prime256v1; 
                     * 
                     */
                    void SetCertCSRKeyParameter(const std::string& _certCSRKeyParameter);

                    /**
                     * 判断参数 CertCSRKeyParameter 是否已赋值
                     * @return CertCSRKeyParameter 是否已赋值
                     * 
                     */
                    bool CertCSRKeyParameterHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 验证类型：DNS_AUTO = 自动DNS验证（仅支持在腾讯云解析且解析状态正常的域名使用该验证类型），DNS = 手动DNS验证，FILE = 文件验证。
                     */
                    std::string m_validType;
                    bool m_validTypeHasBeenSet;

                    /**
                     * 类型，默认 Original。可选项：Original = 原证书 CSR，Upload = 手动上传，Online = 在线生成。
                     */
                    std::string m_csrType;
                    bool m_csrTypeHasBeenSet;

                    /**
                     * CSR 内容，手动上传的时候需要。
                     */
                    std::string m_csrContent;
                    bool m_csrContentHasBeenSet;

                    /**
                     * KEY 密码。
                     */
                    std::string m_csrkeyPassword;
                    bool m_csrkeyPasswordHasBeenSet;

                    /**
                     * 重颁发原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * CSR加密方式，可选：RSA、ECC、SM2
（CsrType为Online才可选）， 默认为RSA
                     */
                    std::string m_certCSREncryptAlgo;
                    bool m_certCSREncryptAlgoHasBeenSet;

                    /**
                     * CSR加密参数，CsrEncryptAlgo为RSA时， 可选2048、4096等默认为2048；CsrEncryptAlgo为ECC时，可选prime256v1，secp384r1等，默认为prime256v1; 
                     */
                    std::string m_certCSRKeyParameter;
                    bool m_certCSRKeyParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_REPLACECERTIFICATEREQUEST_H_
