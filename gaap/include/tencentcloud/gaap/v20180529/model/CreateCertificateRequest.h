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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateCertificate请求参数结构体
                */
                class CreateCertificateRequest : public AbstractModel
                {
                public:
                    CreateCertificateRequest();
                    ~CreateCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>证书类型。其中：0，表示基础认证配置；1，表示客户端CA证书；2，服务器SSL证书；3，表示源站CA证书；4，表示通道SSL证书。</p>
                     * @return CertificateType <p>证书类型。其中：0，表示基础认证配置；1，表示客户端CA证书；2，服务器SSL证书；3，表示源站CA证书；4，表示通道SSL证书。</p>
                     * 
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置<p>证书类型。其中：0，表示基础认证配置；1，表示客户端CA证书；2，服务器SSL证书；3，表示源站CA证书；4，表示通道SSL证书。</p>
                     * @param _certificateType <p>证书类型。其中：0，表示基础认证配置；1，表示客户端CA证书；2，服务器SSL证书；3，表示源站CA证书；4，表示通道SSL证书。</p>
                     * 
                     */
                    void SetCertificateType(const int64_t& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书内容。采用url编码。其中：当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。</p>
                     * @return CertificateContent <p>证书内容。采用url编码。其中：当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。</p>
                     * 
                     */
                    std::string GetCertificateContent() const;

                    /**
                     * 设置<p>证书内容。采用url编码。其中：当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。</p>
                     * @param _certificateContent <p>证书内容。采用url编码。其中：当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。</p>
                     * 
                     */
                    void SetCertificateContent(const std::string& _certificateContent);

                    /**
                     * 判断参数 CertificateContent 是否已赋值
                     * @return CertificateContent 是否已赋值
                     * 
                     */
                    bool CertificateContentHasBeenSet() const;

                    /**
                     * 获取<p>证书名称</p>
                     * @return CertificateAlias <p>证书名称</p>
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置<p>证书名称</p>
                     * @param _certificateAlias <p>证书名称</p>
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取<p>密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。</p>
                     * @return CertificateKey <p>密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。</p>
                     * 
                     */
                    std::string GetCertificateKey() const;

                    /**
                     * 设置<p>密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。</p>
                     * @param _certificateKey <p>密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。</p>
                     * 
                     */
                    void SetCertificateKey(const std::string& _certificateKey);

                    /**
                     * 判断参数 CertificateKey 是否已赋值
                     * @return CertificateKey 是否已赋值
                     * 
                     */
                    bool CertificateKeyHasBeenSet() const;

                private:

                    /**
                     * <p>证书类型。其中：0，表示基础认证配置；1，表示客户端CA证书；2，服务器SSL证书；3，表示源站CA证书；4，表示通道SSL证书。</p>
                     */
                    int64_t m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * <p>证书内容。采用url编码。其中：当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。</p>
                     */
                    std::string m_certificateContent;
                    bool m_certificateContentHasBeenSet;

                    /**
                     * <p>证书名称</p>
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * <p>密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。</p>
                     */
                    std::string m_certificateKey;
                    bool m_certificateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_
