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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATELISTENERREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/DefaultAction.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>
#include <tencentcloud/alb/v20251030/model/XForwardedForConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
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
                     * 获取<p>默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。</p>
                     * @return DefaultActions <p>默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。</p>
                     * 
                     */
                    std::vector<DefaultAction> GetDefaultActions() const;

                    /**
                     * 设置<p>默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。</p>
                     * @param _defaultActions <p>默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。</p>
                     * 
                     */
                    void SetDefaultActions(const std::vector<DefaultAction>& _defaultActions);

                    /**
                     * 判断参数 DefaultActions 是否已赋值
                     * @return DefaultActions 是否已赋值
                     * 
                     */
                    bool DefaultActionsHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例前端使用的端口。  取值：1~65535。</p>
                     * @return ListenerPort <p>负载均衡实例前端使用的端口。  取值：1~65535。</p>
                     * 
                     */
                    uint64_t GetListenerPort() const;

                    /**
                     * 设置<p>负载均衡实例前端使用的端口。  取值：1~65535。</p>
                     * @param _listenerPort <p>负载均衡实例前端使用的端口。  取值：1~65535。</p>
                     * 
                     */
                    void SetListenerPort(const uint64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取<p>监听协议。  取值：HTTP、HTTPS 或 QUIC。</p>
                     * @return ListenerProtocol <p>监听协议。  取值：HTTP、HTTPS 或 QUIC。</p>
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 设置<p>监听协议。  取值：HTTP、HTTPS 或 QUIC。</p>
                     * @param _listenerProtocol <p>监听协议。  取值：HTTP、HTTPS 或 QUIC。</p>
                     * 
                     */
                    void SetListenerProtocol(const std::string& _listenerProtocol);

                    /**
                     * 判断参数 ListenerProtocol 是否已赋值
                     * @return ListenerProtocol 是否已赋值
                     * 
                     */
                    bool ListenerProtocolHasBeenSet() const;

                    /**
                     * 获取<p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * @return LoadBalancerId <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     * @param _loadBalancerId <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
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
                     * 获取<p>监听器配置的CA证书ID列表。目前监听器仅支持添加 1 个 CA 证书。<br>当 CaEnabled 参数取值为 true 时，此参数必填。</p>
                     * @return CaCertificateIds <p>监听器配置的CA证书ID列表。目前监听器仅支持添加 1 个 CA 证书。<br>当 CaEnabled 参数取值为 true 时，此参数必填。</p>
                     * 
                     */
                    std::vector<std::string> GetCaCertificateIds() const;

                    /**
                     * 设置<p>监听器配置的CA证书ID列表。目前监听器仅支持添加 1 个 CA 证书。<br>当 CaEnabled 参数取值为 true 时，此参数必填。</p>
                     * @param _caCertificateIds <p>监听器配置的CA证书ID列表。目前监听器仅支持添加 1 个 CA 证书。<br>当 CaEnabled 参数取值为 true 时，此参数必填。</p>
                     * 
                     */
                    void SetCaCertificateIds(const std::vector<std::string>& _caCertificateIds);

                    /**
                     * 判断参数 CaCertificateIds 是否已赋值
                     * @return CaCertificateIds 是否已赋值
                     * 
                     */
                    bool CaCertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启双向认证。<br>取值：<br>true：开启。<br>false（默认值）：不开启。</p>
                     * @return CaEnabled <p>是否开启双向认证。<br>取值：<br>true：开启。<br>false（默认值）：不开启。</p>
                     * 
                     */
                    bool GetCaEnabled() const;

                    /**
                     * 设置<p>是否开启双向认证。<br>取值：<br>true：开启。<br>false（默认值）：不开启。</p>
                     * @param _caEnabled <p>是否开启双向认证。<br>取值：<br>true：开启。<br>false（默认值）：不开启。</p>
                     * 
                     */
                    void SetCaEnabled(const bool& _caEnabled);

                    /**
                     * 判断参数 CaEnabled 是否已赋值
                     * @return CaEnabled 是否已赋值
                     * 
                     */
                    bool CaEnabledHasBeenSet() const;

                    /**
                     * 获取<p>服务器证书 ID 列表。</p>
                     * @return CertificateIds <p>服务器证书 ID 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置<p>服务器证书 ID 列表。</p>
                     * @param _certificateIds <p>服务器证书 ID 列表。</p>
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取<p>客户端Token，用于保证请求的幂等性。  </p><p>从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。</p>
                     * @return ClientToken <p>客户端Token，用于保证请求的幂等性。  </p><p>从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>客户端Token，用于保证请求的幂等性。  </p><p>从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。</p>
                     * @param _clientToken <p>客户端Token，用于保证请求的幂等性。  </p><p>从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Gzip压缩。取值:true(默认值):是。false:否</p>
                     * @return GzipEnabled <p>是否开启Gzip压缩。取值:true(默认值):是。false:否</p>
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 设置<p>是否开启Gzip压缩。取值:true(默认值):是。false:否</p>
                     * @param _gzipEnabled <p>是否开启Gzip压缩。取值:true(默认值):是。false:否</p>
                     * 
                     */
                    void SetGzipEnabled(const bool& _gzipEnabled);

                    /**
                     * 判断参数 GzipEnabled 是否已赋值
                     * @return GzipEnabled 是否已赋值
                     * 
                     */
                    bool GzipEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否开启HTTP/2特性。HTTP 协议默认 false，HTTPS 协议默认 true。只有 HTTPS 协议支持此参数。</p>
                     * @return Http2Enabled <p>是否开启HTTP/2特性。HTTP 协议默认 false，HTTPS 协议默认 true。只有 HTTPS 协议支持此参数。</p>
                     * 
                     */
                    bool GetHttp2Enabled() const;

                    /**
                     * 设置<p>是否开启HTTP/2特性。HTTP 协议默认 false，HTTPS 协议默认 true。只有 HTTPS 协议支持此参数。</p>
                     * @param _http2Enabled <p>是否开启HTTP/2特性。HTTP 协议默认 false，HTTPS 协议默认 true。只有 HTTPS 协议支持此参数。</p>
                     * 
                     */
                    void SetHttp2Enabled(const bool& _http2Enabled);

                    /**
                     * 判断参数 Http2Enabled 是否已赋值
                     * @return Http2Enabled 是否已赋值
                     * 
                     */
                    bool Http2EnabledHasBeenSet() const;

                    /**
                     * 获取<p>连接空闲超时时间。单位：秒。<br>取值范围：1~600。<br>默认值：15。<br>如果在超时时间内一直没有访问请求，负载均衡会断开当前连接，在下次请求到来时创建新的连接。</p>
                     * @return IdleTimeout <p>连接空闲超时时间。单位：秒。<br>取值范围：1~600。<br>默认值：15。<br>如果在超时时间内一直没有访问请求，负载均衡会断开当前连接，在下次请求到来时创建新的连接。</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置<p>连接空闲超时时间。单位：秒。<br>取值范围：1~600。<br>默认值：15。<br>如果在超时时间内一直没有访问请求，负载均衡会断开当前连接，在下次请求到来时创建新的连接。</p>
                     * @param _idleTimeout <p>连接空闲超时时间。单位：秒。<br>取值范围：1~600。<br>默认值：15。<br>如果在超时时间内一直没有访问请求，负载均衡会断开当前连接，在下次请求到来时创建新的连接。</p>
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
                     * 获取<p>自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * @return ListenerName <p>自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     * @param _listenerName <p>自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
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
                     * 获取<p>连接请求超时时间。单位：秒。取值：1~600。默认值：60。如果在超时时间内后端服务器没有返回响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。</p>
                     * @return RequestTimeout <p>连接请求超时时间。单位：秒。取值：1~600。默认值：60。如果在超时时间内后端服务器没有返回响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置<p>连接请求超时时间。单位：秒。取值：1~600。默认值：60。如果在超时时间内后端服务器没有返回响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。</p>
                     * @param _requestTimeout <p>连接请求超时时间。单位：秒。取值：1~600。默认值：60。如果在超时时间内后端服务器没有返回响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。</p>
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
                     * 获取<p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     * @return SecurityPolicyId <p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置<p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     * @param _securityPolicyId <p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>标签列表。最大支持20个。</p>
                     * @return Tags <p>标签列表。最大支持20个。</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签列表。最大支持20个。</p>
                     * @param _tags <p>标签列表。最大支持20个。</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>X-Forwarded-For配置</p>
                     * @return XForwardedForConfig <p>X-Forwarded-For配置</p>
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 设置<p>X-Forwarded-For配置</p>
                     * @param _xForwardedForConfig <p>X-Forwarded-For配置</p>
                     * 
                     */
                    void SetXForwardedForConfig(const XForwardedForConfig& _xForwardedForConfig);

                    /**
                     * 判断参数 XForwardedForConfig 是否已赋值
                     * @return XForwardedForConfig 是否已赋值
                     * 
                     */
                    bool XForwardedForConfigHasBeenSet() const;

                private:

                    /**
                     * <p>默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。</p>
                     */
                    std::vector<DefaultAction> m_defaultActions;
                    bool m_defaultActionsHasBeenSet;

                    /**
                     * <p>负载均衡实例前端使用的端口。  取值：1~65535。</p>
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * <p>监听协议。  取值：HTTP、HTTPS 或 QUIC。</p>
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * <p>负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>监听器配置的CA证书ID列表。目前监听器仅支持添加 1 个 CA 证书。<br>当 CaEnabled 参数取值为 true 时，此参数必填。</p>
                     */
                    std::vector<std::string> m_caCertificateIds;
                    bool m_caCertificateIdsHasBeenSet;

                    /**
                     * <p>是否开启双向认证。<br>取值：<br>true：开启。<br>false（默认值）：不开启。</p>
                     */
                    bool m_caEnabled;
                    bool m_caEnabledHasBeenSet;

                    /**
                     * <p>服务器证书 ID 列表。</p>
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * <p>客户端Token，用于保证请求的幂等性。  </p><p>从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>是否开启Gzip压缩。取值:true(默认值):是。false:否</p>
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * <p>是否开启HTTP/2特性。HTTP 协议默认 false，HTTPS 协议默认 true。只有 HTTPS 协议支持此参数。</p>
                     */
                    bool m_http2Enabled;
                    bool m_http2EnabledHasBeenSet;

                    /**
                     * <p>连接空闲超时时间。单位：秒。<br>取值范围：1~600。<br>默认值：15。<br>如果在超时时间内一直没有访问请求，负载均衡会断开当前连接，在下次请求到来时创建新的连接。</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * <p>自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>连接请求超时时间。单位：秒。取值：1~600。默认值：60。如果在超时时间内后端服务器没有返回响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>安全策略 ID，格式为 tls- 后接 8 位字母数字。</p>
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * <p>标签列表。最大支持20个。</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>X-Forwarded-For配置</p>
                     */
                    XForwardedForConfig m_xForwardedForConfig;
                    bool m_xForwardedForConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATELISTENERREQUEST_H_
