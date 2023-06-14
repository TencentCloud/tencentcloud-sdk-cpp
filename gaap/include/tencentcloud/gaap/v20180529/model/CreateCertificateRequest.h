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
                     * 获取证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
                     * @return CertificateType 证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
                     * 
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
                     * @param _certificateType 证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
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
                     * 获取证书内容。采用url编码。其中：
当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。
当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。
                     * @return CertificateContent 证书内容。采用url编码。其中：
当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。
当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。
                     * 
                     */
                    std::string GetCertificateContent() const;

                    /**
                     * 设置证书内容。采用url编码。其中：
当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。
当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。
                     * @param _certificateContent 证书内容。采用url编码。其中：
当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。
当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。
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
                     * 获取证书名称
                     * @return CertificateAlias 证书名称
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置证书名称
                     * @param _certificateAlias 证书名称
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
                     * 获取密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。
                     * @return CertificateKey 密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。
                     * 
                     */
                    std::string GetCertificateKey() const;

                    /**
                     * 设置密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。
                     * @param _certificateKey 密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。
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
                     * 证书类型。其中：
0，表示基础认证配置；
1，表示客户端CA证书；
2，服务器SSL证书；
3，表示源站CA证书；
4，表示通道SSL证书。
                     */
                    int64_t m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证书内容。采用url编码。其中：
当证书类型为基础认证配置时，该参数填写用户名/密码对。格式：“用户名：密码”，例如：root:FSGdT。其中密码使用htpasswd或者openssl，例如：openssl passwd -crypt 123456。
当证书类型为CA/SSL证书时，该参数填写证书内容，格式为pem。
                     */
                    std::string m_certificateContent;
                    bool m_certificateContentHasBeenSet;

                    /**
                     * 证书名称
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * 密钥内容。采用url编码。仅当证书类型为SSL证书时，需要填写该参数。格式为pem。
                     */
                    std::string m_certificateKey;
                    bool m_certificateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATECERTIFICATEREQUEST_H_
