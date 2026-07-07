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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLISTENERATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLISTENERATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/DefaultAction.h>
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
                * ModifyListenerAttributes请求参数结构体
                */
                class ModifyListenerAttributesRequest : public AbstractModel
                {
                public:
                    ModifyListenerAttributesRequest();
                    ~ModifyListenerAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @return ListenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器 ID，格式为 lst- 后接 8 位字母数字。
                     * @param _listenerId 监听器 ID，格式为 lst- 后接 8 位字母数字。
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
                     * 获取负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @return LoadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     * @param _loadBalancerId 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
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
                     * 获取监听器配置的CA证书ID列表。目前仅支持添加1个CA证书。
                     * @return CaCertificateIds 监听器配置的CA证书ID列表。目前仅支持添加1个CA证书。
                     * 
                     */
                    std::vector<std::string> GetCaCertificateIds() const;

                    /**
                     * 设置监听器配置的CA证书ID列表。目前仅支持添加1个CA证书。
                     * @param _caCertificateIds 监听器配置的CA证书ID列表。目前仅支持添加1个CA证书。
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
                     * 获取是否开启双向认证。
取值：
true：开启。
false（默认值）：不开启。
                     * @return CaEnabled 是否开启双向认证。
取值：
true：开启。
false（默认值）：不开启。
                     * 
                     */
                    bool GetCaEnabled() const;

                    /**
                     * 设置是否开启双向认证。
取值：
true：开启。
false（默认值）：不开启。
                     * @param _caEnabled 是否开启双向认证。
取值：
true：开启。
false（默认值）：不开启。
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
                     * 获取服务器证书 ID 列表。
                     * @return CertificateIds 服务器证书 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置服务器证书 ID 列表。
                     * @param _certificateIds 服务器证书 ID 列表。
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
                     * 获取客户端Token，用于保证请求的幂等性。  

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     * @return ClientToken 客户端Token，用于保证请求的幂等性。  

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端Token，用于保证请求的幂等性。  

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     * @param _clientToken 客户端Token，用于保证请求的幂等性。  

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
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
                     * 获取默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。
                     * @return DefaultActions 默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。
                     * 
                     */
                    std::vector<DefaultAction> GetDefaultActions() const;

                    /**
                     * 设置默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。
                     * @param _defaultActions 默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。
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
                     * 获取是否启用 Gzip 压缩。
                     * @return GzipEnabled 是否启用 Gzip 压缩。
                     * 
                     */
                    bool GetGzipEnabled() const;

                    /**
                     * 设置是否启用 Gzip 压缩。
                     * @param _gzipEnabled 是否启用 Gzip 压缩。
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
                     * 获取是否开启HTTP/2特性。只有 HTTPS 协议支持此参数。
                     * @return Http2Enabled 是否开启HTTP/2特性。只有 HTTPS 协议支持此参数。
                     * 
                     */
                    bool GetHttp2Enabled() const;

                    /**
                     * 设置是否开启HTTP/2特性。只有 HTTPS 协议支持此参数。
                     * @param _http2Enabled 是否开启HTTP/2特性。只有 HTTPS 协议支持此参数。
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
                     * 获取指定连接空闲超时时间。单位：秒。
取值范围：1~600。
默认值：15。
如果在设定时间内一直没有访问请求，负载均衡会暂时断开当前连接，下次请求来临时重新建立新的连接。
                     * @return IdleTimeout 指定连接空闲超时时间。单位：秒。
取值范围：1~600。
默认值：15。
如果在设定时间内一直没有访问请求，负载均衡会暂时断开当前连接，下次请求来临时重新建立新的连接。
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置指定连接空闲超时时间。单位：秒。
取值范围：1~600。
默认值：15。
如果在设定时间内一直没有访问请求，负载均衡会暂时断开当前连接，下次请求来临时重新建立新的连接。
                     * @param _idleTimeout 指定连接空闲超时时间。单位：秒。
取值范围：1~600。
默认值：15。
如果在设定时间内一直没有访问请求，负载均衡会暂时断开当前连接，下次请求来临时重新建立新的连接。
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
                     * 获取自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * @return ListenerName 自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     * @param _listenerName 自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
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
                     * 获取指定请求超时时间。单位：秒。
取值：1~600。
默认值：60。
如果在超时时间内后端服务器一直没有响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。
                     * @return RequestTimeout 指定请求超时时间。单位：秒。
取值：1~600。
默认值：60。
如果在超时时间内后端服务器一直没有响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置指定请求超时时间。单位：秒。
取值：1~600。
默认值：60。
如果在超时时间内后端服务器一直没有响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。
                     * @param _requestTimeout 指定请求超时时间。单位：秒。
取值：1~600。
默认值：60。
如果在超时时间内后端服务器一直没有响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。
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
                     * 获取安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @return SecurityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     * @param _securityPolicyId 安全策略 ID，格式为 tls- 后接 8 位字母数字。
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
                     * 获取XForwardedFor配置。
                     * @return XForwardedForConfig XForwardedFor配置。
                     * 
                     */
                    XForwardedForConfig GetXForwardedForConfig() const;

                    /**
                     * 设置XForwardedFor配置。
                     * @param _xForwardedForConfig XForwardedFor配置。
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
                     * 监听器 ID，格式为 lst- 后接 8 位字母数字。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID，格式为 alb- 后接 8 位字母数字。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 监听器配置的CA证书ID列表。目前仅支持添加1个CA证书。
                     */
                    std::vector<std::string> m_caCertificateIds;
                    bool m_caCertificateIdsHasBeenSet;

                    /**
                     * 是否开启双向认证。
取值：
true：开启。
false（默认值）：不开启。
                     */
                    bool m_caEnabled;
                    bool m_caEnabledHasBeenSet;

                    /**
                     * 服务器证书 ID 列表。
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * 客户端Token，用于保证请求的幂等性。  

从您的客户端生成一个参数值，确保不同请求间该参数值唯一。ClientToken只支持ASCII字符。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 默认转发规则动作列表。目前监听器仅支持添加 1 个默认转发规则动作。
                     */
                    std::vector<DefaultAction> m_defaultActions;
                    bool m_defaultActionsHasBeenSet;

                    /**
                     * 是否启用 Gzip 压缩。
                     */
                    bool m_gzipEnabled;
                    bool m_gzipEnabledHasBeenSet;

                    /**
                     * 是否开启HTTP/2特性。只有 HTTPS 协议支持此参数。
                     */
                    bool m_http2Enabled;
                    bool m_http2EnabledHasBeenSet;

                    /**
                     * 指定连接空闲超时时间。单位：秒。
取值范围：1~600。
默认值：15。
如果在设定时间内一直没有访问请求，负载均衡会暂时断开当前连接，下次请求来临时重新建立新的连接。
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * 自定义监听名称。  长度为 1~255 个字符，必须是中文和无害字符串中的字符，  可包含中文、字母、数字、短划线（-）、正斜线（/）、半角句号（.）、下划线（_）。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 指定请求超时时间。单位：秒。
取值：1~600。
默认值：60。
如果在超时时间内后端服务器一直没有响应，负载均衡将放弃等待，并给客户端返回HTTP 504错误码。
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * 安全策略 ID，格式为 tls- 后接 8 位字母数字。
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * XForwardedFor配置。
                     */
                    XForwardedForConfig m_xForwardedForConfig;
                    bool m_xForwardedForConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYLISTENERATTRIBUTESREQUEST_H_
