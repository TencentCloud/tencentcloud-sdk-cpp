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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEOUTPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEOUTPUT_H_

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
                * 证书相关信息
                */
                class CertificateOutput : public AbstractModel
                {
                public:
                    CertificateOutput();
                    ~CertificateOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * @return SSLMode 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * 
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     * @param _sSLMode 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
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
                     * 获取是否开启客户端证书验证，只在双向认证时生效。
                     * @return SSLVerifyClient 是否开启客户端证书验证，只在双向认证时生效。
                     * 
                     */
                    std::string GetSSLVerifyClient() const;

                    /**
                     * 设置是否开启客户端证书验证，只在双向认证时生效。
                     * @param _sSLVerifyClient 是否开启客户端证书验证，只在双向认证时生效。
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
                     * 获取服务端证书的ID。
                     * @return CertId 服务端证书的ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务端证书的ID。
                     * @param _certId 服务端证书的ID。
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
                     * 获取客户端证书的 ID。
                     * @return CertCaId 客户端证书的 ID。
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置客户端证书的 ID。
                     * @param _certCaId 客户端证书的 ID。
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
                     * 获取多本服务器证书场景扩展的服务器证书ID。
                     * @return ExtCertIds 多本服务器证书场景扩展的服务器证书ID。
                     * 
                     */
                    std::vector<std::string> GetExtCertIds() const;

                    /**
                     * 设置多本服务器证书场景扩展的服务器证书ID。
                     * @param _extCertIds 多本服务器证书场景扩展的服务器证书ID。
                     * 
                     */
                    void SetExtCertIds(const std::vector<std::string>& _extCertIds);

                    /**
                     * 判断参数 ExtCertIds 是否已赋值
                     * @return ExtCertIds 是否已赋值
                     * 
                     */
                    bool ExtCertIdsHasBeenSet() const;

                private:

                    /**
                     * 认证类型，UNIDIRECTIONAL：单向认证，MUTUAL：双向认证
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * 是否开启客户端证书验证，只在双向认证时生效。
                     */
                    std::string m_sSLVerifyClient;
                    bool m_sSLVerifyClientHasBeenSet;

                    /**
                     * 服务端证书的ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 客户端证书的 ID。
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 多本服务器证书场景扩展的服务器证书ID。
                     */
                    std::vector<std::string> m_extCertIds;
                    bool m_extCertIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEOUTPUT_H_
