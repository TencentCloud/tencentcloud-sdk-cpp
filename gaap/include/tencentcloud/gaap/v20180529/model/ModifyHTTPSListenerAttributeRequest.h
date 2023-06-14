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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPSLISTENERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPSLISTENERATTRIBUTEREQUEST_H_

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
                * ModifyHTTPSListenerAttribute请求参数结构体
                */
                class ModifyHTTPSListenerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHTTPSListenerAttributeRequest();
                    ~ModifyHTTPSListenerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
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
                     * 获取通道ID， 若为单通道监听器，此项必须填写
                     * @return ProxyId 通道ID， 若为单通道监听器，此项必须填写
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID， 若为单通道监听器，此项必须填写
                     * @param _proxyId 通道ID， 若为单通道监听器，此项必须填写
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取修改后的监听器名称
                     * @return ListenerName 修改后的监听器名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置修改后的监听器名称
                     * @param _listenerName 修改后的监听器名称
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器后端转发与源站之间的协议类型
                     * @return ForwardProtocol 监听器后端转发与源站之间的协议类型
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置监听器后端转发与源站之间的协议类型
                     * @param _forwardProtocol 监听器后端转发与源站之间的协议类型
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取修改后的监听器服务器证书ID
                     * @return CertificateId 修改后的监听器服务器证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置修改后的监听器服务器证书ID
                     * @param _certificateId 修改后的监听器服务器证书ID
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
                     * 获取修改后的监听器客户端证书ID，不支持多客户端证书，多客户端证书新采用PolyClientCertificateIds字段
                     * @return ClientCertificateId 修改后的监听器客户端证书ID，不支持多客户端证书，多客户端证书新采用PolyClientCertificateIds字段
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置修改后的监听器客户端证书ID，不支持多客户端证书，多客户端证书新采用PolyClientCertificateIds字段
                     * @param _clientCertificateId 修改后的监听器客户端证书ID，不支持多客户端证书，多客户端证书新采用PolyClientCertificateIds字段
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
                     * 获取新字段,修改后的监听器客户端证书ID
                     * @return PolyClientCertificateIds 新字段,修改后的监听器客户端证书ID
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置新字段,修改后的监听器客户端证书ID
                     * @param _polyClientCertificateIds 新字段,修改后的监听器客户端证书ID
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
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 通道ID， 若为单通道监听器，此项必须填写
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 修改后的监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器后端转发与源站之间的协议类型
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * 修改后的监听器服务器证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 修改后的监听器客户端证书ID，不支持多客户端证书，多客户端证书新采用PolyClientCertificateIds字段
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 新字段,修改后的监听器客户端证书ID
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYHTTPSLISTENERATTRIBUTEREQUEST_H_
