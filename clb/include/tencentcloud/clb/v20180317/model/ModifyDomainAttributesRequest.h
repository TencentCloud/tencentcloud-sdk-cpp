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
#include <tencentcloud/clb/v20180317/model/MultiCertInfo.h>


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
                     * 获取负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * @return LoadBalancerId 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * @param _loadBalancerId 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @return ListenerId 负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @param _listenerId 负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
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
                     * 获取域名（必须是已经创建的转发规则下的域名），如果是多域名，可以指定多域名列表中的任意一个，可以通过[DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @return Domain 域名（必须是已经创建的转发规则下的域名），如果是多域名，可以指定多域名列表中的任意一个，可以通过[DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名（必须是已经创建的转发规则下的域名），如果是多域名，可以指定多域名列表中的任意一个，可以通过[DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     * @param _domain 域名（必须是已经创建的转发规则下的域名），如果是多域名，可以指定多域名列表中的任意一个，可以通过[DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
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
                     * 获取要修改的新域名。NewDomain和NewDomains只能传一个。
                     * @return NewDomain 要修改的新域名。NewDomain和NewDomains只能传一个。
                     * 
                     */
                    std::string GetNewDomain() const;

                    /**
                     * 设置要修改的新域名。NewDomain和NewDomains只能传一个。
                     * @param _newDomain 要修改的新域名。NewDomain和NewDomains只能传一个。
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
                     * 获取域名相关的证书信息，注意，仅对启用SNI的监听器适用，不可和MultiCertInfo 同时传入。
                     * @return Certificate 域名相关的证书信息，注意，仅对启用SNI的监听器适用，不可和MultiCertInfo 同时传入。
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置域名相关的证书信息，注意，仅对启用SNI的监听器适用，不可和MultiCertInfo 同时传入。
                     * @param _certificate 域名相关的证书信息，注意，仅对启用SNI的监听器适用，不可和MultiCertInfo 同时传入。
                     * 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取是否开启HTTP2，注意，只有HTTPS域名才能开启HTTP2。
True: 开启HTTP2，Fasle: 不开启HTTP2。
                     * @return Http2 是否开启HTTP2，注意，只有HTTPS域名才能开启HTTP2。
True: 开启HTTP2，Fasle: 不开启HTTP2。
                     * 
                     */
                    bool GetHttp2() const;

                    /**
                     * 设置是否开启HTTP2，注意，只有HTTPS域名才能开启HTTP2。
True: 开启HTTP2，Fasle: 不开启HTTP2。
                     * @param _http2 是否开启HTTP2，注意，只有HTTPS域名才能开启HTTP2。
True: 开启HTTP2，Fasle: 不开启HTTP2。
                     * 
                     */
                    void SetHttp2(const bool& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
True: 设为默认域名，Fasle: 不设置为默认域名。
                     * @return DefaultServer 是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
True: 设为默认域名，Fasle: 不设置为默认域名。
                     * 
                     */
                    bool GetDefaultServer() const;

                    /**
                     * 设置是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
True: 设为默认域名，Fasle: 不设置为默认域名。
                     * @param _defaultServer 是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
True: 设为默认域名，Fasle: 不设置为默认域名。
                     * 
                     */
                    void SetDefaultServer(const bool& _defaultServer);

                    /**
                     * 判断参数 DefaultServer 是否已赋值
                     * @return DefaultServer 是否已赋值
                     * 
                     */
                    bool DefaultServerHasBeenSet() const;

                    /**
                     * 获取是否开启 QUIC，注意，只有 HTTPS 域名才能开启 QUIC。
True: 开启 QUIC，False: 不开启QUIC。
                     * @return Quic 是否开启 QUIC，注意，只有 HTTPS 域名才能开启 QUIC。
True: 开启 QUIC，False: 不开启QUIC。
                     * 
                     */
                    bool GetQuic() const;

                    /**
                     * 设置是否开启 QUIC，注意，只有 HTTPS 域名才能开启 QUIC。
True: 开启 QUIC，False: 不开启QUIC。
                     * @param _quic 是否开启 QUIC，注意，只有 HTTPS 域名才能开启 QUIC。
True: 开启 QUIC，False: 不开启QUIC。
                     * 
                     */
                    void SetQuic(const bool& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     * 
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个。
                     * @return NewDefaultServerDomain 监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个。
                     * 
                     */
                    std::string GetNewDefaultServerDomain() const;

                    /**
                     * 设置监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个。
                     * @param _newDefaultServerDomain 监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个。
                     * 
                     */
                    void SetNewDefaultServerDomain(const std::string& _newDefaultServerDomain);

                    /**
                     * 判断参数 NewDefaultServerDomain 是否已赋值
                     * @return NewDefaultServerDomain 是否已赋值
                     * 
                     */
                    bool NewDefaultServerDomainHasBeenSet() const;

                    /**
                     * 获取要修改的新域名列表。NewDomain和NewDomains只能传一个。
                     * @return NewDomains 要修改的新域名列表。NewDomain和NewDomains只能传一个。
                     * 
                     */
                    std::vector<std::string> GetNewDomains() const;

                    /**
                     * 设置要修改的新域名列表。NewDomain和NewDomains只能传一个。
                     * @param _newDomains 要修改的新域名列表。NewDomain和NewDomains只能传一个。
                     * 
                     */
                    void SetNewDomains(const std::vector<std::string>& _newDomains);

                    /**
                     * 判断参数 NewDomains 是否已赋值
                     * @return NewDomains 是否已赋值
                     * 
                     */
                    bool NewDomainsHasBeenSet() const;

                    /**
                     * 获取域名相关的证书信息，注意，仅对启用SNI的监听器适用；支持同时传入多本算法类型不同的服务器证书，不可和Certificate 同时传入。
                     * @return MultiCertInfo 域名相关的证书信息，注意，仅对启用SNI的监听器适用；支持同时传入多本算法类型不同的服务器证书，不可和Certificate 同时传入。
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置域名相关的证书信息，注意，仅对启用SNI的监听器适用；支持同时传入多本算法类型不同的服务器证书，不可和Certificate 同时传入。
                     * @param _multiCertInfo 域名相关的证书信息，注意，仅对启用SNI的监听器适用；支持同时传入多本算法类型不同的服务器证书，不可和Certificate 同时传入。
                     * 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     * 
                     */
                    bool MultiCertInfoHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器ID，可以通过 [DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 域名（必须是已经创建的转发规则下的域名），如果是多域名，可以指定多域名列表中的任意一个，可以通过[DescribeListeners](https://cloud.tencent.com/document/product/214/30686) 接口查询。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 要修改的新域名。NewDomain和NewDomains只能传一个。
                     */
                    std::string m_newDomain;
                    bool m_newDomainHasBeenSet;

                    /**
                     * 域名相关的证书信息，注意，仅对启用SNI的监听器适用，不可和MultiCertInfo 同时传入。
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 是否开启HTTP2，注意，只有HTTPS域名才能开启HTTP2。
True: 开启HTTP2，Fasle: 不开启HTTP2。
                     */
                    bool m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * 是否设为默认域名，注意，一个监听器下只能设置一个默认域名。
True: 设为默认域名，Fasle: 不设置为默认域名。
                     */
                    bool m_defaultServer;
                    bool m_defaultServerHasBeenSet;

                    /**
                     * 是否开启 QUIC，注意，只有 HTTPS 域名才能开启 QUIC。
True: 开启 QUIC，False: 不开启QUIC。
                     */
                    bool m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * 监听器下必须配置一个默认域名，若要关闭原默认域名，必须同时指定另一个域名作为新的默认域名，如果新的默认域名是多域名，可以指定多域名列表中的任意一个。
                     */
                    std::string m_newDefaultServerDomain;
                    bool m_newDefaultServerDomainHasBeenSet;

                    /**
                     * 要修改的新域名列表。NewDomain和NewDomains只能传一个。
                     */
                    std::vector<std::string> m_newDomains;
                    bool m_newDomainsHasBeenSet;

                    /**
                     * 域名相关的证书信息，注意，仅对启用SNI的监听器适用；支持同时传入多本算法类型不同的服务器证书，不可和Certificate 同时传入。
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYDOMAINATTRIBUTESREQUEST_H_
