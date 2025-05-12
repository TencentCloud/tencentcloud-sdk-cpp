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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeCertificateVerifyResult请求参数结构体
                */
                class DescribeCertificateVerifyResultRequest : public AbstractModel
                {
                public:
                    DescribeCertificateVerifyResultRequest();
                    ~DescribeCertificateVerifyResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取证书类型，此参数和GmCertType不可同时为0。 0：不检测国际标准证书 1：证书来源为自有证书 2：证书来源为托管证书
                     * @return CertType 证书类型，此参数和GmCertType不可同时为0。 0：不检测国际标准证书 1：证书来源为自有证书 2：证书来源为托管证书
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置证书类型，此参数和GmCertType不可同时为0。 0：不检测国际标准证书 1：证书来源为自有证书 2：证书来源为托管证书
                     * @param _certType 证书类型，此参数和GmCertType不可同时为0。 0：不检测国际标准证书 1：证书来源为自有证书 2：证书来源为托管证书
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取CertType为1时，需要填充此参数，表示自有证书的证书链
                     * @return Certificate CertType为1时，需要填充此参数，表示自有证书的证书链
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置CertType为1时，需要填充此参数，表示自有证书的证书链
                     * @param _certificate CertType为1时，需要填充此参数，表示自有证书的证书链
                     * 
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @return CertID CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * 
                     */
                    std::string GetCertID() const;

                    /**
                     * 设置CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @param _certID CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * 
                     */
                    void SetCertID(const std::string& _certID);

                    /**
                     * 判断参数 CertID 是否已赋值
                     * @return CertID 是否已赋值
                     * 
                     */
                    bool CertIDHasBeenSet() const;

                    /**
                     * 获取CertType为1时，需要填充此参数，表示自有证书的私钥
                     * @return PrivateKey CertType为1时，需要填充此参数，表示自有证书的私钥
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置CertType为1时，需要填充此参数，表示自有证书的私钥
                     * @param _privateKey CertType为1时，需要填充此参数，表示自有证书的私钥
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取国密证书类型，此参数和CertType不可同时为0。0：不检测国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * @return GmCertType 国密证书类型，此参数和CertType不可同时为0。0：不检测国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * 
                     */
                    int64_t GetGmCertType() const;

                    /**
                     * 设置国密证书类型，此参数和CertType不可同时为0。0：不检测国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * @param _gmCertType 国密证书类型，此参数和CertType不可同时为0。0：不检测国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * 
                     */
                    void SetGmCertType(const int64_t& _gmCertType);

                    /**
                     * 判断参数 GmCertType 是否已赋值
                     * @return GmCertType 是否已赋值
                     * 
                     */
                    bool GmCertTypeHasBeenSet() const;

                    /**
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * @return GmCert GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * 
                     */
                    std::string GetGmCert() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * @param _gmCert GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * 
                     */
                    void SetGmCert(const std::string& _gmCert);

                    /**
                     * 判断参数 GmCert 是否已赋值
                     * @return GmCert 是否已赋值
                     * 
                     */
                    bool GmCertHasBeenSet() const;

                    /**
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * @return GmPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * 
                     */
                    std::string GetGmPrivateKey() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * @param _gmPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * 
                     */
                    void SetGmPrivateKey(const std::string& _gmPrivateKey);

                    /**
                     * 判断参数 GmPrivateKey 是否已赋值
                     * @return GmPrivateKey 是否已赋值
                     * 
                     */
                    bool GmPrivateKeyHasBeenSet() const;

                    /**
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * @return GmEncCert GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * 
                     */
                    std::string GetGmEncCert() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * @param _gmEncCert GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * 
                     */
                    void SetGmEncCert(const std::string& _gmEncCert);

                    /**
                     * 判断参数 GmEncCert 是否已赋值
                     * @return GmEncCert 是否已赋值
                     * 
                     */
                    bool GmEncCertHasBeenSet() const;

                    /**
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * @return GmEncPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * 
                     */
                    std::string GetGmEncPrivateKey() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * @param _gmEncPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * 
                     */
                    void SetGmEncPrivateKey(const std::string& _gmEncPrivateKey);

                    /**
                     * 判断参数 GmEncPrivateKey 是否已赋值
                     * @return GmEncPrivateKey 是否已赋值
                     * 
                     */
                    bool GmEncPrivateKeyHasBeenSet() const;

                    /**
                     * 获取GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @return GmSSLId GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * 
                     */
                    std::string GetGmSSLId() const;

                    /**
                     * 设置GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @param _gmSSLId GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * 
                     */
                    void SetGmSSLId(const std::string& _gmSSLId);

                    /**
                     * 判断参数 GmSSLId 是否已赋值
                     * @return GmSSLId 是否已赋值
                     * 
                     */
                    bool GmSSLIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 证书类型，此参数和GmCertType不可同时为0。 0：不检测国际标准证书 1：证书来源为自有证书 2：证书来源为托管证书
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * CertType为1时，需要填充此参数，表示自有证书的证书链
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     */
                    std::string m_certID;
                    bool m_certIDHasBeenSet;

                    /**
                     * CertType为1时，需要填充此参数，表示自有证书的私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 国密证书类型，此参数和CertType不可同时为0。0：不检测国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     */
                    int64_t m_gmCertType;
                    bool m_gmCertTypeHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     */
                    std::string m_gmCert;
                    bool m_gmCertHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     */
                    std::string m_gmPrivateKey;
                    bool m_gmPrivateKeyHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     */
                    std::string m_gmEncCert;
                    bool m_gmEncCertHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     */
                    std::string m_gmEncPrivateKey;
                    bool m_gmEncPrivateKeyHasBeenSet;

                    /**
                     * GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     */
                    std::string m_gmSSLId;
                    bool m_gmSSLIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_
