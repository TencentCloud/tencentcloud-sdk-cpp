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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 证书信息
                */
                class CertificateInput : public AbstractModel
                {
                public:
                    CertificateInput();
                    ~CertificateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证。
默认为 UNIDIRECTIONAL。
                     * @return SSLMode 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证。
默认为 UNIDIRECTIONAL。
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证。
默认为 UNIDIRECTIONAL。
                     * @param _sSLMode 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证。
默认为 UNIDIRECTIONAL。
                     * 
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     * 
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。
                     * @return SSLVerifyClient 双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。
                     * 
                     */
                    std::string GetSSLVerifyClient() const;

                    /**
                     * 设置双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。
                     * @param _sSLVerifyClient 双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。
                     * 
                     */
                    void SetSSLVerifyClient(const std::string& _sSLVerifyClient);

                    /**
                     * 判断参数 SSLVerifyClient 是否已赋值
                     * @return SSLVerifyClient 是否已赋值
                     * 
                     */
                    bool SSLVerifyClientHasBeenSet() const;

                    /**
                     * 获取服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。
                     * @return CertId 服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。
                     * @param _certId 服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。
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
                     * 获取客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。
                     * @return CertCaId 客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。
                     * @param _certCaId 客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取上传服务端证书的名称，如果没有 CertId，则此项必传。
                     * @return CertName 上传服务端证书的名称，如果没有 CertId，则此项必传。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置上传服务端证书的名称，如果没有 CertId，则此项必传。
                     * @param _certName 上传服务端证书的名称，如果没有 CertId，则此项必传。
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取上传服务端证书的 key，如果没有 CertId，则此项必传。
                     * @return CertKey 上传服务端证书的 key，如果没有 CertId，则此项必传。
                     * 
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置上传服务端证书的 key，如果没有 CertId，则此项必传。
                     * @param _certKey 上传服务端证书的 key，如果没有 CertId，则此项必传。
                     * 
                     */
                    void SetCertKey(const std::string& _certKey);

                    /**
                     * 判断参数 CertKey 是否已赋值
                     * @return CertKey 是否已赋值
                     * 
                     */
                    bool CertKeyHasBeenSet() const;

                    /**
                     * 获取上传服务端证书的内容，如果没有 CertId，则此项必传。
                     * @return CertContent 上传服务端证书的内容，如果没有 CertId，则此项必传。
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置上传服务端证书的内容，如果没有 CertId，则此项必传。
                     * @param _certContent 上传服务端证书的内容，如果没有 CertId，则此项必传。
                     * 
                     */
                    void SetCertContent(const std::string& _certContent);

                    /**
                     * 判断参数 CertContent 是否已赋值
                     * @return CertContent 是否已赋值
                     * 
                     */
                    bool CertContentHasBeenSet() const;

                    /**
                     * 获取上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * @return CertCaName 上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * 
                     */
                    std::string GetCertCaName() const;

                    /**
                     * 设置上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * @param _certCaName 上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * 
                     */
                    void SetCertCaName(const std::string& _certCaName);

                    /**
                     * 判断参数 CertCaName 是否已赋值
                     * @return CertCaName 是否已赋值
                     * 
                     */
                    bool CertCaNameHasBeenSet() const;

                    /**
                     * 获取上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * @return CertCaContent 上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * 
                     */
                    std::string GetCertCaContent() const;

                    /**
                     * 设置上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * @param _certCaContent 上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     * 
                     */
                    void SetCertCaContent(const std::string& _certCaContent);

                    /**
                     * 判断参数 CertCaContent 是否已赋值
                     * @return CertCaContent 是否已赋值
                     * 
                     */
                    bool CertCaContentHasBeenSet() const;

                private:

                    /**
                     * 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证。
默认为 UNIDIRECTIONAL。
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * 双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。
                     */
                    std::string m_sSLVerifyClient;
                    bool m_sSLVerifyClientHasBeenSet;

                    /**
                     * 服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 上传服务端证书的名称，如果没有 CertId，则此项必传。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 上传服务端证书的 key，如果没有 CertId，则此项必传。
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                    /**
                     * 上传服务端证书的内容，如果没有 CertId，则此项必传。
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * 上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     */
                    std::string m_certCaName;
                    bool m_certCaNameHasBeenSet;

                    /**
                     * 上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。
                     */
                    std::string m_certCaContent;
                    bool m_certCaContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_
