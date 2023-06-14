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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL7LISTENERREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL7LISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyL7Listener请求参数结构体
                */
                class ModifyL7ListenerRequest : public AbstractModel
                {
                public:
                    ModifyL7ListenerRequest();
                    ~ModifyL7ListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @return LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @param _loadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
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
                     * 获取七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * @return ListenerId 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     * @param _listenerId 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
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
                     * 获取七层监听器名称。
                     * @return ListenerName 七层监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置七层监听器名称。
                     * @param _listenerName 七层监听器名称。
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
                     * 获取认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * @return SslMode 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * 
                     */
                    int64_t GetSslMode() const;

                    /**
                     * 设置认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * @param _sslMode 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * 
                     */
                    void SetSslMode(const int64_t& _sslMode);

                    /**
                     * 判断参数 SslMode 是否已赋值
                     * @return SslMode 是否已赋值
                     * 
                     */
                    bool SslModeHasBeenSet() const;

                    /**
                     * 获取服务端证书ID。
                     * @return CertId 服务端证书ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务端证书ID。
                     * @param _certId 服务端证书ID。
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
                     * 获取服务端证书名称。
                     * @return CertName 服务端证书名称。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置服务端证书名称。
                     * @param _certName 服务端证书名称。
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
                     * 获取服务端证书内容。
                     * @return CertContent 服务端证书内容。
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置服务端证书内容。
                     * @param _certContent 服务端证书内容。
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
                     * 获取服务端证书密钥。
                     * @return CertKey 服务端证书密钥。
                     * 
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置服务端证书密钥。
                     * @param _certKey 服务端证书密钥。
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
                     * 获取客户端证书ID。
                     * @return CertCaId 客户端证书ID。
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置客户端证书ID。
                     * @param _certCaId 客户端证书ID。
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
                     * 获取客户端证书名称。
                     * @return CertCaName 客户端证书名称。
                     * 
                     */
                    std::string GetCertCaName() const;

                    /**
                     * 设置客户端证书名称。
                     * @param _certCaName 客户端证书名称。
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
                     * 获取客户端证书内容。
                     * @return CertCaContent 客户端证书内容。
                     * 
                     */
                    std::string GetCertCaContent() const;

                    /**
                     * 设置客户端证书内容。
                     * @param _certCaContent 客户端证书内容。
                     * 
                     */
                    void SetCertCaContent(const std::string& _certCaContent);

                    /**
                     * 判断参数 CertCaContent 是否已赋值
                     * @return CertCaContent 是否已赋值
                     * 
                     */
                    bool CertCaContentHasBeenSet() const;

                    /**
                     * 获取计费模式为按固定带宽方式时监听器的限速值，可选值：0-1000，单位：Mbps。
                     * @return Bandwidth 计费模式为按固定带宽方式时监听器的限速值，可选值：0-1000，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置计费模式为按固定带宽方式时监听器的限速值，可选值：0-1000，单位：Mbps。
                     * @param _bandwidth 计费模式为按固定带宽方式时监听器的限速值，可选值：0-1000，单位：Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取转发协议。当监听器Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * @return ForwardProtocol 转发协议。当监听器Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * 
                     */
                    int64_t GetForwardProtocol() const;

                    /**
                     * 设置转发协议。当监听器Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * @param _forwardProtocol 转发协议。当监听器Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * 
                     */
                    void SetForwardProtocol(const int64_t& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 七层监听器实例ID，可通过接口DescribeL7Listeners查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 七层监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     */
                    int64_t m_sslMode;
                    bool m_sslModeHasBeenSet;

                    /**
                     * 服务端证书ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 服务端证书名称。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 服务端证书内容。
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * 服务端证书密钥。
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                    /**
                     * 客户端证书ID。
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 客户端证书名称。
                     */
                    std::string m_certCaName;
                    bool m_certCaNameHasBeenSet;

                    /**
                     * 客户端证书内容。
                     */
                    std::string m_certCaContent;
                    bool m_certCaContentHasBeenSet;

                    /**
                     * 计费模式为按固定带宽方式时监听器的限速值，可选值：0-1000，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 转发协议。当监听器Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     */
                    int64_t m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_MODIFYL7LISTENERREQUEST_H_
