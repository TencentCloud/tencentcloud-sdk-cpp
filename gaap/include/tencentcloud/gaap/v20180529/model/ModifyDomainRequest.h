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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYDOMAINREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYDOMAINREQUEST_H_

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
                * ModifyDomain请求参数结构体
                */
                class ModifyDomainRequest : public AbstractModel
                {
                public:
                    ModifyDomainRequest();
                    ~ModifyDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取7层监听器ID
                     * @return ListenerId 7层监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置7层监听器ID
                     * @param _listenerId 7层监听器ID
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
                     * 获取修改前的域名信息
                     * @return OldDomain 修改前的域名信息
                     * 
                     */
                    std::string GetOldDomain() const;

                    /**
                     * 设置修改前的域名信息
                     * @param _oldDomain 修改前的域名信息
                     * 
                     */
                    void SetOldDomain(const std::string& _oldDomain);

                    /**
                     * 判断参数 OldDomain 是否已赋值
                     * @return OldDomain 是否已赋值
                     * 
                     */
                    bool OldDomainHasBeenSet() const;

                    /**
                     * 获取修改后的域名信息
                     * @return NewDomain 修改后的域名信息
                     * 
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置修改后的域名信息
                     * @param _newDomain 修改后的域名信息
                     * 
                     */
                    void SetNewDomain(const std::string& _newDomain);

                    /**
                     * 判断参数 NewDomain 是否已赋值
                     * @return NewDomain 是否已赋值
                     * 
                     */
                    bool NewDomainHasBeenSet() const;

                    /**
                     * 获取服务器SSL证书ID，仅适用于version3.0的通道。其中：
不带该字段时，表示使用原证书；
携带该字段时并且CertificateId=default，表示使用监听器证书；
其他情况，使用该CertificateId指定的证书。
                     * @return CertificateId 服务器SSL证书ID，仅适用于version3.0的通道。其中：
不带该字段时，表示使用原证书；
携带该字段时并且CertificateId=default，表示使用监听器证书；
其他情况，使用该CertificateId指定的证书。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置服务器SSL证书ID，仅适用于version3.0的通道。其中：
不带该字段时，表示使用原证书；
携带该字段时并且CertificateId=default，表示使用监听器证书；
其他情况，使用该CertificateId指定的证书。
                     * @param _certificateId 服务器SSL证书ID，仅适用于version3.0的通道。其中：
不带该字段时，表示使用原证书；
携带该字段时并且CertificateId=default，表示使用监听器证书；
其他情况，使用该CertificateId指定的证书。
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
                     * 获取客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和PolyClientCertificateIds时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     * @return ClientCertificateId 客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和PolyClientCertificateIds时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和PolyClientCertificateIds时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     * @param _clientCertificateId 客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和PolyClientCertificateIds时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
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
                     * 获取客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和ClientCertificateId时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     * @return PolyClientCertificateIds 客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和ClientCertificateId时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和ClientCertificateId时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     * @param _polyClientCertificateIds 客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和ClientCertificateId时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
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
                     * 7层监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 修改前的域名信息
                     */
                    std::string m_oldDomain;
                    bool m_oldDomainHasBeenSet;

                    /**
                     * 修改后的域名信息
                     */
                    std::string m_newDomain;
                    bool m_newDomainHasBeenSet;

                    /**
                     * 服务器SSL证书ID，仅适用于version3.0的通道。其中：
不带该字段时，表示使用原证书；
携带该字段时并且CertificateId=default，表示使用监听器证书；
其他情况，使用该CertificateId指定的证书。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和PolyClientCertificateIds时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 客户端CA证书ID，仅适用于version3.0的通道。其中：
不带该字段和ClientCertificateId时，表示使用原证书；
携带该字段时并且ClientCertificateId=default，表示使用监听器证书；
其他情况，使用该ClientCertificateId或PolyClientCertificateIds指定的证书。
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYDOMAINREQUEST_H_
