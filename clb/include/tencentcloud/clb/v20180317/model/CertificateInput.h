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
                     * 获取<p>认证类型，取值：<code>UNIDIRECTIONAL</code>：单向认证；<code>MUTUAL</code>：双向认证。 此参数是否必填取决于调用场景： - 创建监听器或转发规则：需要通过 Certificate 配置证书时，此参数必填；复用已有域名证书的转发规则无需传入。 - 修改监听器或域名属性：通过 Certificate 更新证书时，此参数必填；不修改证书时，无需传入整个 Certificate。 - 批量替换证书（ReplaceCertForLoadBalancers）：此参数无需传入，接口仅替换证书，不修改认证类型。</p><p>枚举值：</p><ul><li>UNIDIRECTIONAL： 单向认证</li><li>MUTUAL： 双向认证</li></ul>
                     * @return SSLMode <p>认证类型，取值：<code>UNIDIRECTIONAL</code>：单向认证；<code>MUTUAL</code>：双向认证。 此参数是否必填取决于调用场景： - 创建监听器或转发规则：需要通过 Certificate 配置证书时，此参数必填；复用已有域名证书的转发规则无需传入。 - 修改监听器或域名属性：通过 Certificate 更新证书时，此参数必填；不修改证书时，无需传入整个 Certificate。 - 批量替换证书（ReplaceCertForLoadBalancers）：此参数无需传入，接口仅替换证书，不修改认证类型。</p><p>枚举值：</p><ul><li>UNIDIRECTIONAL： 单向认证</li><li>MUTUAL： 双向认证</li></ul>
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置<p>认证类型，取值：<code>UNIDIRECTIONAL</code>：单向认证；<code>MUTUAL</code>：双向认证。 此参数是否必填取决于调用场景： - 创建监听器或转发规则：需要通过 Certificate 配置证书时，此参数必填；复用已有域名证书的转发规则无需传入。 - 修改监听器或域名属性：通过 Certificate 更新证书时，此参数必填；不修改证书时，无需传入整个 Certificate。 - 批量替换证书（ReplaceCertForLoadBalancers）：此参数无需传入，接口仅替换证书，不修改认证类型。</p><p>枚举值：</p><ul><li>UNIDIRECTIONAL： 单向认证</li><li>MUTUAL： 双向认证</li></ul>
                     * @param _sSLMode <p>认证类型，取值：<code>UNIDIRECTIONAL</code>：单向认证；<code>MUTUAL</code>：双向认证。 此参数是否必填取决于调用场景： - 创建监听器或转发规则：需要通过 Certificate 配置证书时，此参数必填；复用已有域名证书的转发规则无需传入。 - 修改监听器或域名属性：通过 Certificate 更新证书时，此参数必填；不修改证书时，无需传入整个 Certificate。 - 批量替换证书（ReplaceCertForLoadBalancers）：此参数无需传入，接口仅替换证书，不修改认证类型。</p><p>枚举值：</p><ul><li>UNIDIRECTIONAL： 单向认证</li><li>MUTUAL： 双向认证</li></ul>
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
                     * 获取<p>双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。</p>
                     * @return SSLVerifyClient <p>双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。</p>
                     * 
                     */
                    std::string GetSSLVerifyClient() const;

                    /**
                     * 设置<p>双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。</p>
                     * @param _sSLVerifyClient <p>双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。</p>
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
                     * 获取<p>服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。</p>
                     * @return CertId <p>服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。</p>
                     * @param _certId <p>服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。</p>
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
                     * 获取<p>客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。</p>
                     * @return CertCaId <p>客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。</p>
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置<p>客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。</p>
                     * @param _certCaId <p>客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。</p>
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
                     * 获取<p>上传服务端证书的名称，如果没有 CertId，则此项必传。</p>
                     * @return CertName <p>上传服务端证书的名称，如果没有 CertId，则此项必传。</p>
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置<p>上传服务端证书的名称，如果没有 CertId，则此项必传。</p>
                     * @param _certName <p>上传服务端证书的名称，如果没有 CertId，则此项必传。</p>
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
                     * 获取<p>上传服务端证书的 key，如果没有 CertId，则此项必传。</p>
                     * @return CertKey <p>上传服务端证书的 key，如果没有 CertId，则此项必传。</p>
                     * 
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置<p>上传服务端证书的 key，如果没有 CertId，则此项必传。</p>
                     * @param _certKey <p>上传服务端证书的 key，如果没有 CertId，则此项必传。</p>
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
                     * 获取<p>上传服务端证书的内容，如果没有 CertId，则此项必传。</p>
                     * @return CertContent <p>上传服务端证书的内容，如果没有 CertId，则此项必传。</p>
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置<p>上传服务端证书的内容，如果没有 CertId，则此项必传。</p>
                     * @param _certContent <p>上传服务端证书的内容，如果没有 CertId，则此项必传。</p>
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
                     * 获取<p>上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     * @return CertCaName <p>上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     * 
                     */
                    std::string GetCertCaName() const;

                    /**
                     * 设置<p>上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     * @param _certCaName <p>上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
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
                     * 获取<p>上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     * @return CertCaContent <p>上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     * 
                     */
                    std::string GetCertCaContent() const;

                    /**
                     * 设置<p>上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     * @param _certCaContent <p>上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
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
                     * <p>认证类型，取值：<code>UNIDIRECTIONAL</code>：单向认证；<code>MUTUAL</code>：双向认证。 此参数是否必填取决于调用场景： - 创建监听器或转发规则：需要通过 Certificate 配置证书时，此参数必填；复用已有域名证书的转发规则无需传入。 - 修改监听器或域名属性：通过 Certificate 更新证书时，此参数必填；不修改证书时，无需传入整个 Certificate。 - 批量替换证书（ReplaceCertForLoadBalancers）：此参数无需传入，接口仅替换证书，不修改认证类型。</p><p>枚举值：</p><ul><li>UNIDIRECTIONAL： 单向认证</li><li>MUTUAL： 双向认证</li></ul>
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * <p>双向认证时，是否开启客户端认证，ON:开启，OPTIONAL:自适应，默认ON。</p>
                     */
                    std::string m_sSLVerifyClient;
                    bool m_sSLVerifyClientHasBeenSet;

                    /**
                     * <p>服务端证书的 ID，如果不填写此项则必须上传证书，包括 CertContent（服务端证书内容），CertKey（服务端证书密钥），CertName（服务端证书名称）。</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>客户端证书的 ID，当监听器采用双向认证，即 SSLMode=MUTUAL 时，如果不填写此项则必须上传客户端证书，包括 CertCaContent，CertCaName。</p>
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * <p>上传服务端证书的名称，如果没有 CertId，则此项必传。</p>
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * <p>上传服务端证书的 key，如果没有 CertId，则此项必传。</p>
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                    /**
                     * <p>上传服务端证书的内容，如果没有 CertId，则此项必传。</p>
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * <p>上传客户端 CA 证书的名称，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     */
                    std::string m_certCaName;
                    bool m_certCaNameHasBeenSet;

                    /**
                     * <p>上传客户端证书的内容，如果 SSLMode=MUTUAL，如果没有 CertCaId，则此项必传。</p>
                     */
                    std::string m_certCaContent;
                    bool m_certCaContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEINPUT_H_
