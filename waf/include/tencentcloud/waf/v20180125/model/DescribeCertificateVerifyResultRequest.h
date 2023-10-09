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
                     * 获取证书类型
                     * @return CertType 证书类型
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置证书类型
                     * @param _certType 证书类型
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
                     * 获取证书公钥
                     * @return Certificate 证书公钥
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置证书公钥
                     * @param _certificate 证书公钥
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
                     * 获取证书ID
                     * @return CertID 证书ID
                     * 
                     */
                    std::string GetCertID() const;

                    /**
                     * 设置证书ID
                     * @param _certID 证书ID
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
                     * 获取私钥信息
                     * @return PrivateKey 私钥信息
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置私钥信息
                     * @param _privateKey 私钥信息
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 证书类型
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书公钥
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 证书ID
                     */
                    std::string m_certID;
                    bool m_certIDHasBeenSet;

                    /**
                     * 私钥信息
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBECERTIFICATEVERIFYRESULTREQUEST_H_
