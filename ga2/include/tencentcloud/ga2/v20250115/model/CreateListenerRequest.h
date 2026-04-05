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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/PortRanges.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateListener请求参数结构体
                */
                class CreateListenerRequest : public AbstractModel
                {
                public:
                    CreateListenerRequest();
                    ~CreateListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>名称，最大长度不能超过60个字节。</p>
                     * @return Name <p>名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称，最大长度不能超过60个字节。</p>
                     * @param _name <p>名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>端口范围。</p>
                     * @return PortRanges <p>端口范围。</p>
                     * 
                     */
                    PortRanges GetPortRanges() const;

                    /**
                     * 设置<p>端口范围。</p>
                     * @param _portRanges <p>端口范围。</p>
                     * 
                     */
                    void SetPortRanges(const PortRanges& _portRanges);

                    /**
                     * 判断参数 PortRanges 是否已赋值
                     * @return PortRanges 是否已赋值
                     * 
                     */
                    bool PortRangesHasBeenSet() const;

                    /**
                     * 获取<p>描述信息，最大长度不能超过100个字节。</p>
                     * @return Description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息，最大长度不能超过100个字节。</p>
                     * @param _description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>监听类型，默认为智能路由。</p>
                     * @return ListenerType <p>监听类型，默认为智能路由。</p>
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置<p>监听类型，默认为智能路由。</p>
                     * @param _listenerType <p>监听类型，默认为智能路由。</p>
                     * 
                     */
                    void SetListenerType(const std::string& _listenerType);

                    /**
                     * 判断参数 ListenerType 是否已赋值
                     * @return ListenerType 是否已赋值
                     * 
                     */
                    bool ListenerTypeHasBeenSet() const;

                    /**
                     * 获取<p>协议，默认为TCP。</p>
                     * @return Protocol <p>协议，默认为TCP。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议，默认为TCP。</p>
                     * @param _protocol <p>协议，默认为TCP。</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>连接空闲等待时间。</p>
                     * @return IdleTimeout <p>连接空闲等待时间。</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置<p>连接空闲等待时间。</p>
                     * @param _idleTimeout <p>连接空闲等待时间。</p>
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>四层获取源IP方式，支持&#39;TOA&#39;, &#39;ProxyProtocol&#39;。</p>
                     * @return GetRealIpType <p>四层获取源IP方式，支持&#39;TOA&#39;, &#39;ProxyProtocol&#39;。</p>
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置<p>四层获取源IP方式，支持&#39;TOA&#39;, &#39;ProxyProtocol&#39;。</p>
                     * @param _getRealIpType <p>四层获取源IP方式，支持&#39;TOA&#39;, &#39;ProxyProtocol&#39;。</p>
                     * 
                     */
                    void SetGetRealIpType(const std::string& _getRealIpType);

                    /**
                     * 判断参数 GetRealIpType 是否已赋值
                     * @return GetRealIpType 是否已赋值
                     * 
                     */
                    bool GetRealIpTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启会话保持。</p>
                     * @return ClientAffinity <p>是否开启会话保持。</p>
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置<p>是否开启会话保持。</p>
                     * @param _clientAffinity <p>是否开启会话保持。</p>
                     * 
                     */
                    void SetClientAffinity(const std::string& _clientAffinity);

                    /**
                     * 判断参数 ClientAffinity 是否已赋值
                     * @return ClientAffinity 是否已赋值
                     * 
                     */
                    bool ClientAffinityHasBeenSet() const;

                    /**
                     * 获取<p>请求超时时间。</p>
                     * @return RequestTimeout <p>请求超时时间。</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置<p>请求超时时间。</p>
                     * @param _requestTimeout <p>请求超时时间。</p>
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否打开七层获取源IP方式。</p>
                     * @return XForwardedForRealIp <p>是否打开七层获取源IP方式。</p>
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置<p>是否打开七层获取源IP方式。</p>
                     * @param _xForwardedForRealIp <p>是否打开七层获取源IP方式。</p>
                     * 
                     */
                    void SetXForwardedForRealIp(const bool& _xForwardedForRealIp);

                    /**
                     * 判断参数 XForwardedForRealIp 是否已赋值
                     * @return XForwardedForRealIp 是否已赋值
                     * 
                     */
                    bool XForwardedForRealIpHasBeenSet() const;

                    /**
                     * 获取<p>解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。</p>
                     * @return CertificationType <p>解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。</p>
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置<p>解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。</p>
                     * @param _certificationType <p>解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。</p>
                     * 
                     */
                    void SetCertificationType(const std::string& _certificationType);

                    /**
                     * 判断参数 CertificationType 是否已赋值
                     * @return CertificationType 是否已赋值
                     * 
                     */
                    bool CertificationTypeHasBeenSet() const;

                    /**
                     * 获取<p>加密算法套件。</p>
                     * @return CipherPolicyId <p>加密算法套件。</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>加密算法套件。</p>
                     * @param _cipherPolicyId <p>加密算法套件。</p>
                     * 
                     */
                    void SetCipherPolicyId(const std::string& _cipherPolicyId);

                    /**
                     * 判断参数 CipherPolicyId 是否已赋值
                     * @return CipherPolicyId 是否已赋值
                     * 
                     */
                    bool CipherPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>服务器证书。</p>
                     * @return ServerCertificates <p>服务器证书。</p>
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置<p>服务器证书。</p>
                     * @param _serverCertificates <p>服务器证书。</p>
                     * 
                     */
                    void SetServerCertificates(const std::vector<std::string>& _serverCertificates);

                    /**
                     * 判断参数 ServerCertificates 是否已赋值
                     * @return ServerCertificates 是否已赋值
                     * 
                     */
                    bool ServerCertificatesHasBeenSet() const;

                    /**
                     * 获取<p>客户端证书。</p>
                     * @return ClientCaCertificates <p>客户端证书。</p>
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置<p>客户端证书。</p>
                     * @param _clientCaCertificates <p>客户端证书。</p>
                     * 
                     */
                    void SetClientCaCertificates(const std::vector<std::string>& _clientCaCertificates);

                    /**
                     * 判断参数 ClientCaCertificates 是否已赋值
                     * @return ClientCaCertificates 是否已赋值
                     * 
                     */
                    bool ClientCaCertificatesHasBeenSet() const;

                private:

                    /**
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>名称，最大长度不能超过60个字节。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>端口范围。</p>
                     */
                    PortRanges m_portRanges;
                    bool m_portRangesHasBeenSet;

                    /**
                     * <p>描述信息，最大长度不能超过100个字节。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>监听类型，默认为智能路由。</p>
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * <p>协议，默认为TCP。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>连接空闲等待时间。</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>四层获取源IP方式，支持&#39;TOA&#39;, &#39;ProxyProtocol&#39;。</p>
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                    /**
                     * <p>是否开启会话保持。</p>
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * <p>请求超时时间。</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>是否打开七层获取源IP方式。</p>
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * <p>解析方式。UNIDIRECTIONAL：双向。MUTUAL：单向。</p>
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * <p>加密算法套件。</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>服务器证书。</p>
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * <p>客户端证书。</p>
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATELISTENERREQUEST_H_
