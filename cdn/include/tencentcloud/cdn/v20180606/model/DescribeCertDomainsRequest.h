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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCertDomains请求参数结构体
                */
                class DescribeCertDomainsRequest : public AbstractModel
                {
                public:
                    DescribeCertDomainsRequest();
                    ~DescribeCertDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取PEM格式证书Base64编码后的字符串
                     * @return Cert PEM格式证书Base64编码后的字符串
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置PEM格式证书Base64编码后的字符串
                     * @param _cert PEM格式证书Base64编码后的字符串
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取托管证书ID，Cert和CertId不能均为空，都填写时以CertId为准。
                     * @return CertId 托管证书ID，Cert和CertId不能均为空，都填写时以CertId为准。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置托管证书ID，Cert和CertId不能均为空，都填写时以CertId为准。
                     * @param _certId 托管证书ID，Cert和CertId不能均为空，都填写时以CertId为准。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取域名所属产品，cdn或ecdn，默认cdn。
                     * @return Product 域名所属产品，cdn或ecdn，默认cdn。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置域名所属产品，cdn或ecdn，默认cdn。
                     * @param _product 域名所属产品，cdn或ecdn，默认cdn。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * PEM格式证书Base64编码后的字符串
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 托管证书ID，Cert和CertId不能均为空，都填写时以CertId为准。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 域名所属产品，cdn或ecdn，默认cdn。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECERTDOMAINSREQUEST_H_
