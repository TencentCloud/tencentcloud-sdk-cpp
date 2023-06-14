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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYCERTIFICATEREQUEST_H_

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
                * ModifyCertificate请求参数结构体
                */
                class ModifyCertificateRequest : public AbstractModel
                {
                public:
                    ModifyCertificateRequest();
                    ~ModifyCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器实例ID
                     * @return ListenerId 监听器实例ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器实例ID
                     * @param _listenerId 监听器实例ID
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
                     * 获取需要修改证书的域名
                     * @return Domain 需要修改证书的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要修改证书的域名
                     * @param _domain 需要修改证书的域名
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
                     * 获取新的服务器证书ID。其中：
当CertificateId=default时，表示使用监听器的证书。
                     * @return CertificateId 新的服务器证书ID。其中：
当CertificateId=default时，表示使用监听器的证书。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置新的服务器证书ID。其中：
当CertificateId=default时，表示使用监听器的证书。
                     * @param _certificateId 新的服务器证书ID。其中：
当CertificateId=default时，表示使用监听器的证书。
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
                     * 获取新的客户端证书ID。其中：
当ClientCertificateId=default时，表示使用监听器的证书。
仅当采用双向认证方式时，需要设置该参数或者PolyClientCertificateIds。
                     * @return ClientCertificateId 新的客户端证书ID。其中：
当ClientCertificateId=default时，表示使用监听器的证书。
仅当采用双向认证方式时，需要设置该参数或者PolyClientCertificateIds。
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置新的客户端证书ID。其中：
当ClientCertificateId=default时，表示使用监听器的证书。
仅当采用双向认证方式时，需要设置该参数或者PolyClientCertificateIds。
                     * @param _clientCertificateId 新的客户端证书ID。其中：
当ClientCertificateId=default时，表示使用监听器的证书。
仅当采用双向认证方式时，需要设置该参数或者PolyClientCertificateIds。
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
                     * 获取新的多客户端证书ID列表。其中：
仅当采用双向认证方式时，需要设置该参数或ClientCertificateId参数。
                     * @return PolyClientCertificateIds 新的多客户端证书ID列表。其中：
仅当采用双向认证方式时，需要设置该参数或ClientCertificateId参数。
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置新的多客户端证书ID列表。其中：
仅当采用双向认证方式时，需要设置该参数或ClientCertificateId参数。
                     * @param _polyClientCertificateIds 新的多客户端证书ID列表。其中：
仅当采用双向认证方式时，需要设置该参数或ClientCertificateId参数。
                     * 
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                private:

                    /**
                     * 监听器实例ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 需要修改证书的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 新的服务器证书ID。其中：
当CertificateId=default时，表示使用监听器的证书。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 新的客户端证书ID。其中：
当ClientCertificateId=default时，表示使用监听器的证书。
仅当采用双向认证方式时，需要设置该参数或者PolyClientCertificateIds。
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 新的多客户端证书ID列表。其中：
仅当采用双向认证方式时，需要设置该参数或ClientCertificateId参数。
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYCERTIFICATEREQUEST_H_
