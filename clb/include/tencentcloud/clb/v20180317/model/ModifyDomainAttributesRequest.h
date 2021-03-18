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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyDomainAttributes请求参数结构体
                */
                class ModifyDomainAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDomainAttributesRequest();
                    ~ModifyDomainAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID。
                     * @return LoadBalancerId 负载均衡实例ID。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID。
                     * @param LoadBalancerId 负载均衡实例ID。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器ID。
                     * @return ListenerId 负载均衡监听器ID。
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器ID。
                     * @param ListenerId 负载均衡监听器ID。
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取域名（必须是已经创建的转发规则下的域名）。
                     * @return Domain 域名（必须是已经创建的转发规则下的域名）。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名（必须是已经创建的转发规则下的域名）。
                     * @param Domain 域名（必须是已经创建的转发规则下的域名）。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取要修改的新域名。
                     * @return NewDomain 要修改的新域名。
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置要修改的新域名。
                     * @param NewDomain 要修改的新域名。
                     */
                    void SetNewDomain(const std::string& _newDomain);

                    /**
                     * 判断参数 NewDomain 是否已赋值
                     * @return NewDomain 是否已赋值
                     */
                    bool NewDomainHasBeenSet() const;

                    /**
                     * 获取域名相关的证书信息，注意，仅对启用SNI的监听器适用。
                     * @return Certificate 域名相关的证书信息，注意，仅对启用SNI的监听器适用。
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置域名相关的证书信息，注意，仅对启用SNI的监听器适用。
                     * @param Certificate 域名相关的证书信息，注意，仅对启用SNI的监听器适用。
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     * @return Http2 是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     * @param Http2 是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * @return DefaultServer 是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     * @param DefaultServer 是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名。
                     * @return NewDefaultServerDomain 监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名。
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名。
                     * @param NewDefaultServerDomain 监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名。
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 域名（必须是已经创建的转发规则下的域名）。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要修改的新域名。
                     */
                    std::string m_newDomain;
                    bool m_newDomainHasBeenSet;

                    /**
                     * 域名相关的证书信息，注意，仅对启用SNI的监听器适用。
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 是否开启Http2，注意，只有HTTPS域名才能开启Http2。
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * 是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * 监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名。
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
