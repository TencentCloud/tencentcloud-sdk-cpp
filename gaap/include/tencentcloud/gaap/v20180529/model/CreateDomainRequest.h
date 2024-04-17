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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINREQUEST_H_

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
                * CreateDomain请求参数结构体
                */
                class CreateDomainRequest : public AbstractModel
                {
                public:
                    CreateDomainRequest();
                    ~CreateDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取需要创建的域名，一个监听器下最大支持100个域名。
                     * @return Domain 需要创建的域名，一个监听器下最大支持100个域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要创建的域名，一个监听器下最大支持100个域名。
                     * @param _domain 需要创建的域名，一个监听器下最大支持100个域名。
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
                     * 获取服务器证书，用于客户端与GAAP的HTTPS的交互。
                     * @return CertificateId 服务器证书，用于客户端与GAAP的HTTPS的交互。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置服务器证书，用于客户端与GAAP的HTTPS的交互。
                     * @param _certificateId 服务器证书，用于客户端与GAAP的HTTPS的交互。
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
                     * 获取客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或PolyClientCertificateIds字段。
                     * @return ClientCertificateId 客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或PolyClientCertificateIds字段。
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或PolyClientCertificateIds字段。
                     * @param _clientCertificateId 客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或PolyClientCertificateIds字段。
                     * 
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     * 
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或ClientCertificateId字段。
                     * @return PolyClientCertificateIds 客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或ClientCertificateId字段。
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或ClientCertificateId字段。
                     * @param _polyClientCertificateIds 客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或ClientCertificateId字段。
                     * 
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                    /**
                     * 获取是否开启Http3特性的标识，其中：
0，表示不开启Http3；
1，表示开启Http3。
默认不开启Http3。可以通过SetDomainHttp3开启。
                     * @return Http3Supported 是否开启Http3特性的标识，其中：
0，表示不开启Http3；
1，表示开启Http3。
默认不开启Http3。可以通过SetDomainHttp3开启。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置是否开启Http3特性的标识，其中：
0，表示不开启Http3；
1，表示开启Http3。
默认不开启Http3。可以通过SetDomainHttp3开启。
                     * @param _http3Supported 是否开启Http3特性的标识，其中：
0，表示不开启Http3；
1，表示开启Http3。
默认不开启Http3。可以通过SetDomainHttp3开启。
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                    /**
                     * 获取是否作为默认域名，默认为“否”
                     * @return IsDefaultServer 是否作为默认域名，默认为“否”
                     * 
                     */
                    bool GetIsDefaultServer() const;

                    /**
                     * 设置是否作为默认域名，默认为“否”
                     * @param _isDefaultServer 是否作为默认域名，默认为“否”
                     * 
                     */
                    void SetIsDefaultServer(const bool& _isDefaultServer);

                    /**
                     * 判断参数 IsDefaultServer 是否已赋值
                     * @return IsDefaultServer 是否已赋值
                     * 
                     */
                    bool IsDefaultServerHasBeenSet() const;

                private:

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 需要创建的域名，一个监听器下最大支持100个域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 服务器证书，用于客户端与GAAP的HTTPS的交互。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或PolyClientCertificateIds字段。
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 客户端CA证书，用于客户端与GAAP的HTTPS的交互。
仅当采用双向认证的方式时，需要设置该字段或ClientCertificateId字段。
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                    /**
                     * 是否开启Http3特性的标识，其中：
0，表示不开启Http3；
1，表示开启Http3。
默认不开启Http3。可以通过SetDomainHttp3开启。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                    /**
                     * 是否作为默认域名，默认为“否”
                     */
                    bool m_isDefaultServer;
                    bool m_isDefaultServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINREQUEST_H_
