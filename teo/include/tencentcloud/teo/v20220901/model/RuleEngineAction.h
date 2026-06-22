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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyParameters.h>
#include <tencentcloud/teo/v20220901/model/CachePrefreshParameters.h>
#include <tencentcloud/teo/v20220901/model/AccessURLRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamURLRewriteParameters.h>
#include <tencentcloud/teo/v20220901/model/QUICParameters.h>
#include <tencentcloud/teo/v20220901/model/WebSocketParameters.h>
#include <tencentcloud/teo/v20220901/model/AuthenticationParameters.h>
#include <tencentcloud/teo/v20220901/model/MaxAgeParameters.h>
#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/OfflineCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/SmartRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/AdvancedOriginRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/RangeOriginPullParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/HostHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirectHTTPSParameters.h>
#include <tencentcloud/teo/v20220901/model/OriginPullProtocolParameters.h>
#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/OCSPStaplingParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSizeParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPCountryParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamFollowRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>
#include <tencentcloud/teo/v20220901/model/ShieldParameters.h>
#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginParameters.h>
#include <tencentcloud/teo/v20220901/model/SiteFailoverParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPUpstreamTimeoutParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPResponseParameters.h>
#include <tencentcloud/teo/v20220901/model/ErrorPageParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyResponseHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyRequestHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ResponseSpeedLimitParameters.h>
#include <tencentcloud/teo/v20220901/model/SetContentIdentifierParameters.h>
#include <tencentcloud/teo/v20220901/model/VaryParameters.h>
#include <tencentcloud/teo/v20220901/model/ContentCompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/OriginAuthenticationParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎操作。
                */
                class RuleEngineAction : public AbstractModel
                {
                public:
                    RuleEngineAction();
                    ~RuleEngineAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。</p><li>Cache：节点缓存 TTL；</li><li>CacheKey：自定义 Cache Key；</li><li>CachePrefresh：缓存预刷新；</li><li>AccessURLRedirect：访问 URL 重定向；</li><li>UpstreamURLRewrite：回源 URL 重写；</li><li>QUIC：QUIC；</li><li>WebSocket：WebSocket；</li><li>Authentication：Token 鉴权；</li><li>MaxAge：浏览器缓存 TTL；</li><li>StatusCodeCache：状态码缓存 TTL；</li><li>OfflineCache：离线缓存；</li><li>SmartRouting：智能加速；</li><li>AdvancedOriginRouting：高级回源优化；</li><li>RangeOriginPull：分片回源 ；</li><li>UpstreamHTTP2：HTTP2 回源；</li><li>HostHeader：Host Header 重写；</li><li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li><li>OriginPullProtocol：回源 HTTPS；</li><li>Compression：智能压缩配置；</li><li>HSTS：HSTS；</li><li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li><li>OCSPStapling：OCSP 装订；</li><li>HTTP2：HTTP2 接入；</li><li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li><li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li><li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li><li>UpstreamRequest：回源请求参数；</li><li>Shield：源站卸载配置；</li><li>TLSConfig：SSL/TLS 安全；</li><li>ModifyOrigin：修改源站；</li><li> SiteFailover：源站故障转移；</li><li>HTTPUpstreamTimeout：七层回源超时配置；</li><li>HttpResponse：HTTP 应答；</li><li>ErrorPage：自定义错误页面；</li><li>ModifyResponseHeader：修改 HTTP 节点响应头；</li><li>ModifyRequestHeader：修改 HTTP 节点请求头；</li><li>ResponseSpeedLimit：单连接下载限速；</li><li>SetContentIdentifier：设置内容标识符；</li><li>Vary：Vary 特性配置；</li><li>ContentCompression：内容压缩配置；</li><li>OriginAuthentication：回源鉴权配置。</li>
                     * @return Name <p>操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。</p><li>Cache：节点缓存 TTL；</li><li>CacheKey：自定义 Cache Key；</li><li>CachePrefresh：缓存预刷新；</li><li>AccessURLRedirect：访问 URL 重定向；</li><li>UpstreamURLRewrite：回源 URL 重写；</li><li>QUIC：QUIC；</li><li>WebSocket：WebSocket；</li><li>Authentication：Token 鉴权；</li><li>MaxAge：浏览器缓存 TTL；</li><li>StatusCodeCache：状态码缓存 TTL；</li><li>OfflineCache：离线缓存；</li><li>SmartRouting：智能加速；</li><li>AdvancedOriginRouting：高级回源优化；</li><li>RangeOriginPull：分片回源 ；</li><li>UpstreamHTTP2：HTTP2 回源；</li><li>HostHeader：Host Header 重写；</li><li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li><li>OriginPullProtocol：回源 HTTPS；</li><li>Compression：智能压缩配置；</li><li>HSTS：HSTS；</li><li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li><li>OCSPStapling：OCSP 装订；</li><li>HTTP2：HTTP2 接入；</li><li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li><li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li><li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li><li>UpstreamRequest：回源请求参数；</li><li>Shield：源站卸载配置；</li><li>TLSConfig：SSL/TLS 安全；</li><li>ModifyOrigin：修改源站；</li><li> SiteFailover：源站故障转移；</li><li>HTTPUpstreamTimeout：七层回源超时配置；</li><li>HttpResponse：HTTP 应答；</li><li>ErrorPage：自定义错误页面；</li><li>ModifyResponseHeader：修改 HTTP 节点响应头；</li><li>ModifyRequestHeader：修改 HTTP 节点请求头；</li><li>ResponseSpeedLimit：单连接下载限速；</li><li>SetContentIdentifier：设置内容标识符；</li><li>Vary：Vary 特性配置；</li><li>ContentCompression：内容压缩配置；</li><li>OriginAuthentication：回源鉴权配置。</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。</p><li>Cache：节点缓存 TTL；</li><li>CacheKey：自定义 Cache Key；</li><li>CachePrefresh：缓存预刷新；</li><li>AccessURLRedirect：访问 URL 重定向；</li><li>UpstreamURLRewrite：回源 URL 重写；</li><li>QUIC：QUIC；</li><li>WebSocket：WebSocket；</li><li>Authentication：Token 鉴权；</li><li>MaxAge：浏览器缓存 TTL；</li><li>StatusCodeCache：状态码缓存 TTL；</li><li>OfflineCache：离线缓存；</li><li>SmartRouting：智能加速；</li><li>AdvancedOriginRouting：高级回源优化；</li><li>RangeOriginPull：分片回源 ；</li><li>UpstreamHTTP2：HTTP2 回源；</li><li>HostHeader：Host Header 重写；</li><li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li><li>OriginPullProtocol：回源 HTTPS；</li><li>Compression：智能压缩配置；</li><li>HSTS：HSTS；</li><li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li><li>OCSPStapling：OCSP 装订；</li><li>HTTP2：HTTP2 接入；</li><li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li><li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li><li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li><li>UpstreamRequest：回源请求参数；</li><li>Shield：源站卸载配置；</li><li>TLSConfig：SSL/TLS 安全；</li><li>ModifyOrigin：修改源站；</li><li> SiteFailover：源站故障转移；</li><li>HTTPUpstreamTimeout：七层回源超时配置；</li><li>HttpResponse：HTTP 应答；</li><li>ErrorPage：自定义错误页面；</li><li>ModifyResponseHeader：修改 HTTP 节点响应头；</li><li>ModifyRequestHeader：修改 HTTP 节点请求头；</li><li>ResponseSpeedLimit：单连接下载限速；</li><li>SetContentIdentifier：设置内容标识符；</li><li>Vary：Vary 特性配置；</li><li>ContentCompression：内容压缩配置；</li><li>OriginAuthentication：回源鉴权配置。</li>
                     * @param _name <p>操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。</p><li>Cache：节点缓存 TTL；</li><li>CacheKey：自定义 Cache Key；</li><li>CachePrefresh：缓存预刷新；</li><li>AccessURLRedirect：访问 URL 重定向；</li><li>UpstreamURLRewrite：回源 URL 重写；</li><li>QUIC：QUIC；</li><li>WebSocket：WebSocket；</li><li>Authentication：Token 鉴权；</li><li>MaxAge：浏览器缓存 TTL；</li><li>StatusCodeCache：状态码缓存 TTL；</li><li>OfflineCache：离线缓存；</li><li>SmartRouting：智能加速；</li><li>AdvancedOriginRouting：高级回源优化；</li><li>RangeOriginPull：分片回源 ；</li><li>UpstreamHTTP2：HTTP2 回源；</li><li>HostHeader：Host Header 重写；</li><li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li><li>OriginPullProtocol：回源 HTTPS；</li><li>Compression：智能压缩配置；</li><li>HSTS：HSTS；</li><li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li><li>OCSPStapling：OCSP 装订；</li><li>HTTP2：HTTP2 接入；</li><li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li><li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li><li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li><li>UpstreamRequest：回源请求参数；</li><li>Shield：源站卸载配置；</li><li>TLSConfig：SSL/TLS 安全；</li><li>ModifyOrigin：修改源站；</li><li> SiteFailover：源站故障转移；</li><li>HTTPUpstreamTimeout：七层回源超时配置；</li><li>HttpResponse：HTTP 应答；</li><li>ErrorPage：自定义错误页面；</li><li>ModifyResponseHeader：修改 HTTP 节点响应头；</li><li>ModifyRequestHeader：修改 HTTP 节点请求头；</li><li>ResponseSpeedLimit：单连接下载限速；</li><li>SetContentIdentifier：设置内容标识符；</li><li>Vary：Vary 特性配置；</li><li>ContentCompression：内容压缩配置；</li><li>OriginAuthentication：回源鉴权配置。</li>
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
                     * 获取<p>节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheParameters <p>节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheParameters GetCacheParameters() const;

                    /**
                     * 设置<p>节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheParameters <p>节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheParameters(const CacheParameters& _cacheParameters);

                    /**
                     * 判断参数 CacheParameters 是否已赋值
                     * @return CacheParameters 是否已赋值
                     * 
                     */
                    bool CacheParametersHasBeenSet() const;

                    /**
                     * 获取<p>自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKeyParameters <p>自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKeyParameters GetCacheKeyParameters() const;

                    /**
                     * 设置<p>自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKeyParameters <p>自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheKeyParameters(const CacheKeyParameters& _cacheKeyParameters);

                    /**
                     * 判断参数 CacheKeyParameters 是否已赋值
                     * @return CacheKeyParameters 是否已赋值
                     * 
                     */
                    bool CacheKeyParametersHasBeenSet() const;

                    /**
                     * 获取<p>缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CachePrefreshParameters <p>缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CachePrefreshParameters GetCachePrefreshParameters() const;

                    /**
                     * 设置<p>缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cachePrefreshParameters <p>缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCachePrefreshParameters(const CachePrefreshParameters& _cachePrefreshParameters);

                    /**
                     * 判断参数 CachePrefreshParameters 是否已赋值
                     * @return CachePrefreshParameters 是否已赋值
                     * 
                     */
                    bool CachePrefreshParametersHasBeenSet() const;

                    /**
                     * 获取<p>访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessURLRedirectParameters <p>访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessURLRedirectParameters GetAccessURLRedirectParameters() const;

                    /**
                     * 设置<p>访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessURLRedirectParameters <p>访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessURLRedirectParameters(const AccessURLRedirectParameters& _accessURLRedirectParameters);

                    /**
                     * 判断参数 AccessURLRedirectParameters 是否已赋值
                     * @return AccessURLRedirectParameters 是否已赋值
                     * 
                     */
                    bool AccessURLRedirectParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamURLRewriteParameters <p>回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamURLRewriteParameters GetUpstreamURLRewriteParameters() const;

                    /**
                     * 设置<p>回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamURLRewriteParameters <p>回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamURLRewriteParameters(const UpstreamURLRewriteParameters& _upstreamURLRewriteParameters);

                    /**
                     * 判断参数 UpstreamURLRewriteParameters 是否已赋值
                     * @return UpstreamURLRewriteParameters 是否已赋值
                     * 
                     */
                    bool UpstreamURLRewriteParametersHasBeenSet() const;

                    /**
                     * 获取<p>QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QUICParameters <p>QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QUICParameters GetQUICParameters() const;

                    /**
                     * 设置<p>QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qUICParameters <p>QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQUICParameters(const QUICParameters& _qUICParameters);

                    /**
                     * 判断参数 QUICParameters 是否已赋值
                     * @return QUICParameters 是否已赋值
                     * 
                     */
                    bool QUICParametersHasBeenSet() const;

                    /**
                     * 获取<p>WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocketParameters <p>WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSocketParameters GetWebSocketParameters() const;

                    /**
                     * 设置<p>WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSocketParameters <p>WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSocketParameters(const WebSocketParameters& _webSocketParameters);

                    /**
                     * 判断参数 WebSocketParameters 是否已赋值
                     * @return WebSocketParameters 是否已赋值
                     * 
                     */
                    bool WebSocketParametersHasBeenSet() const;

                    /**
                     * 获取<p>Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthenticationParameters <p>Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AuthenticationParameters GetAuthenticationParameters() const;

                    /**
                     * 设置<p>Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authenticationParameters <p>Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthenticationParameters(const AuthenticationParameters& _authenticationParameters);

                    /**
                     * 判断参数 AuthenticationParameters 是否已赋值
                     * @return AuthenticationParameters 是否已赋值
                     * 
                     */
                    bool AuthenticationParametersHasBeenSet() const;

                    /**
                     * 获取<p>浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAgeParameters <p>浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAgeParameters GetMaxAgeParameters() const;

                    /**
                     * 设置<p>浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAgeParameters <p>浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxAgeParameters(const MaxAgeParameters& _maxAgeParameters);

                    /**
                     * 判断参数 MaxAgeParameters 是否已赋值
                     * @return MaxAgeParameters 是否已赋值
                     * 
                     */
                    bool MaxAgeParametersHasBeenSet() const;

                    /**
                     * 获取<p>状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCacheParameters <p>状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StatusCodeCacheParameters GetStatusCodeCacheParameters() const;

                    /**
                     * 设置<p>状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCodeCacheParameters <p>状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusCodeCacheParameters(const StatusCodeCacheParameters& _statusCodeCacheParameters);

                    /**
                     * 判断参数 StatusCodeCacheParameters 是否已赋值
                     * @return StatusCodeCacheParameters 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheParametersHasBeenSet() const;

                    /**
                     * 获取<p>离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineCacheParameters <p>离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineCacheParameters GetOfflineCacheParameters() const;

                    /**
                     * 设置<p>离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineCacheParameters <p>离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineCacheParameters(const OfflineCacheParameters& _offlineCacheParameters);

                    /**
                     * 判断参数 OfflineCacheParameters 是否已赋值
                     * @return OfflineCacheParameters 是否已赋值
                     * 
                     */
                    bool OfflineCacheParametersHasBeenSet() const;

                    /**
                     * 获取<p>智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartRoutingParameters <p>智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRoutingParameters GetSmartRoutingParameters() const;

                    /**
                     * 设置<p>智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartRoutingParameters <p>智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartRoutingParameters(const SmartRoutingParameters& _smartRoutingParameters);

                    /**
                     * 判断参数 SmartRoutingParameters 是否已赋值
                     * @return SmartRoutingParameters 是否已赋值
                     * 
                     */
                    bool SmartRoutingParametersHasBeenSet() const;

                    /**
                     * 获取<p>高级回源优化配置参数，当 Name 取值为 AdvancedOriginRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedOriginRoutingParameters <p>高级回源优化配置参数，当 Name 取值为 AdvancedOriginRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedOriginRoutingParameters GetAdvancedOriginRoutingParameters() const;

                    /**
                     * 设置<p>高级回源优化配置参数，当 Name 取值为 AdvancedOriginRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedOriginRoutingParameters <p>高级回源优化配置参数，当 Name 取值为 AdvancedOriginRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedOriginRoutingParameters(const AdvancedOriginRoutingParameters& _advancedOriginRoutingParameters);

                    /**
                     * 判断参数 AdvancedOriginRoutingParameters 是否已赋值
                     * @return AdvancedOriginRoutingParameters 是否已赋值
                     * 
                     */
                    bool AdvancedOriginRoutingParametersHasBeenSet() const;

                    /**
                     * 获取<p>分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeOriginPullParameters <p>分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RangeOriginPullParameters GetRangeOriginPullParameters() const;

                    /**
                     * 设置<p>分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeOriginPullParameters <p>分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangeOriginPullParameters(const RangeOriginPullParameters& _rangeOriginPullParameters);

                    /**
                     * 判断参数 RangeOriginPullParameters 是否已赋值
                     * @return RangeOriginPullParameters 是否已赋值
                     * 
                     */
                    bool RangeOriginPullParametersHasBeenSet() const;

                    /**
                     * 获取<p>HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamHTTP2Parameters <p>HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2Parameters() const;

                    /**
                     * 设置<p>HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamHTTP2Parameters <p>HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters);

                    /**
                     * 判断参数 UpstreamHTTP2Parameters 是否已赋值
                     * @return UpstreamHTTP2Parameters 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取<p>Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostHeaderParameters <p>Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostHeaderParameters GetHostHeaderParameters() const;

                    /**
                     * 设置<p>Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostHeaderParameters <p>Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostHeaderParameters(const HostHeaderParameters& _hostHeaderParameters);

                    /**
                     * 判断参数 HostHeaderParameters 是否已赋值
                     * @return HostHeaderParameters 是否已赋值
                     * 
                     */
                    bool HostHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirectHTTPSParameters <p>访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPSParameters() const;

                    /**
                     * 设置<p>访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirectHTTPSParameters <p>访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForceRedirectHTTPSParameters(const ForceRedirectHTTPSParameters& _forceRedirectHTTPSParameters);

                    /**
                     * 判断参数 ForceRedirectHTTPSParameters 是否已赋值
                     * @return ForceRedirectHTTPSParameters 是否已赋值
                     * 
                     */
                    bool ForceRedirectHTTPSParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源 HTTPS 配置参数，当 Name 取值为 OriginPullProtocol 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullProtocolParameters <p>回源 HTTPS 配置参数，当 Name 取值为 OriginPullProtocol 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginPullProtocolParameters GetOriginPullProtocolParameters() const;

                    /**
                     * 设置<p>回源 HTTPS 配置参数，当 Name 取值为 OriginPullProtocol 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originPullProtocolParameters <p>回源 HTTPS 配置参数，当 Name 取值为 OriginPullProtocol 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginPullProtocolParameters(const OriginPullProtocolParameters& _originPullProtocolParameters);

                    /**
                     * 判断参数 OriginPullProtocolParameters 是否已赋值
                     * @return OriginPullProtocolParameters 是否已赋值
                     * 
                     */
                    bool OriginPullProtocolParametersHasBeenSet() const;

                    /**
                     * 获取<p>智能压缩配置，当 Name 取值为 Compression 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompressionParameters <p>智能压缩配置，当 Name 取值为 Compression 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompressionParameters GetCompressionParameters() const;

                    /**
                     * 设置<p>智能压缩配置，当 Name 取值为 Compression 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compressionParameters <p>智能压缩配置，当 Name 取值为 Compression 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompressionParameters(const CompressionParameters& _compressionParameters);

                    /**
                     * 判断参数 CompressionParameters 是否已赋值
                     * @return CompressionParameters 是否已赋值
                     * 
                     */
                    bool CompressionParametersHasBeenSet() const;

                    /**
                     * 获取<p>HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSTSParameters <p>HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HSTSParameters GetHSTSParameters() const;

                    /**
                     * 设置<p>HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSTSParameters <p>HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHSTSParameters(const HSTSParameters& _hSTSParameters);

                    /**
                     * 判断参数 HSTSParameters 是否已赋值
                     * @return HSTSParameters 是否已赋值
                     * 
                     */
                    bool HSTSParametersHasBeenSet() const;

                    /**
                     * 获取<p>存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPHeaderParameters <p>存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeaderParameters() const;

                    /**
                     * 设置<p>存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIPHeaderParameters <p>存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIPHeaderParameters(const ClientIPHeaderParameters& _clientIPHeaderParameters);

                    /**
                     * 判断参数 ClientIPHeaderParameters 是否已赋值
                     * @return ClientIPHeaderParameters 是否已赋值
                     * 
                     */
                    bool ClientIPHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OCSPStaplingParameters <p>OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStaplingParameters() const;

                    /**
                     * 设置<p>OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oCSPStaplingParameters <p>OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOCSPStaplingParameters(const OCSPStaplingParameters& _oCSPStaplingParameters);

                    /**
                     * 判断参数 OCSPStaplingParameters 是否已赋值
                     * @return OCSPStaplingParameters 是否已赋值
                     * 
                     */
                    bool OCSPStaplingParametersHasBeenSet() const;

                    /**
                     * 获取<p>HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTP2Parameters <p>HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTP2Parameters GetHTTP2Parameters() const;

                    /**
                     * 设置<p>HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTP2Parameters <p>HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTP2Parameters(const HTTP2Parameters& _hTTP2Parameters);

                    /**
                     * 判断参数 HTTP2Parameters 是否已赋值
                     * @return HTTP2Parameters 是否已赋值
                     * 
                     */
                    bool HTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取<p>POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostMaxSizeParameters <p>POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSizeParameters() const;

                    /**
                     * 设置<p>POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postMaxSizeParameters <p>POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostMaxSizeParameters(const PostMaxSizeParameters& _postMaxSizeParameters);

                    /**
                     * 判断参数 PostMaxSizeParameters 是否已赋值
                     * @return PostMaxSizeParameters 是否已赋值
                     * 
                     */
                    bool PostMaxSizeParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPCountryParameters <p>回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountryParameters() const;

                    /**
                     * 设置<p>回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIPCountryParameters <p>回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIPCountryParameters(const ClientIPCountryParameters& _clientIPCountryParameters);

                    /**
                     * 判断参数 ClientIPCountryParameters 是否已赋值
                     * @return ClientIPCountryParameters 是否已赋值
                     * 
                     */
                    bool ClientIPCountryParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamFollowRedirectParameters <p>回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamFollowRedirectParameters GetUpstreamFollowRedirectParameters() const;

                    /**
                     * 设置<p>回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamFollowRedirectParameters <p>回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamFollowRedirectParameters(const UpstreamFollowRedirectParameters& _upstreamFollowRedirectParameters);

                    /**
                     * 判断参数 UpstreamFollowRedirectParameters 是否已赋值
                     * @return UpstreamFollowRedirectParameters 是否已赋值
                     * 
                     */
                    bool UpstreamFollowRedirectParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamRequestParameters <p>回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamRequestParameters GetUpstreamRequestParameters() const;

                    /**
                     * 设置<p>回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamRequestParameters <p>回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters);

                    /**
                     * 判断参数 UpstreamRequestParameters 是否已赋值
                     * @return UpstreamRequestParameters 是否已赋值
                     * 
                     */
                    bool UpstreamRequestParametersHasBeenSet() const;

                    /**
                     * 获取<p>源站卸载配置参数，当 Name 取值为 Shield 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShieldParameters <p>源站卸载配置参数，当 Name 取值为 Shield 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ShieldParameters GetShieldParameters() const;

                    /**
                     * 设置<p>源站卸载配置参数，当 Name 取值为 Shield 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shieldParameters <p>源站卸载配置参数，当 Name 取值为 Shield 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShieldParameters(const ShieldParameters& _shieldParameters);

                    /**
                     * 判断参数 ShieldParameters 是否已赋值
                     * @return ShieldParameters 是否已赋值
                     * 
                     */
                    bool ShieldParametersHasBeenSet() const;

                    /**
                     * 获取<p>SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TLSConfigParameters <p>SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TLSConfigParameters GetTLSConfigParameters() const;

                    /**
                     * 设置<p>SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tLSConfigParameters <p>SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTLSConfigParameters(const TLSConfigParameters& _tLSConfigParameters);

                    /**
                     * 判断参数 TLSConfigParameters 是否已赋值
                     * @return TLSConfigParameters 是否已赋值
                     * 
                     */
                    bool TLSConfigParametersHasBeenSet() const;

                    /**
                     * 获取<p>修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyOriginParameters <p>修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModifyOriginParameters GetModifyOriginParameters() const;

                    /**
                     * 设置<p>修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyOriginParameters <p>修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyOriginParameters(const ModifyOriginParameters& _modifyOriginParameters);

                    /**
                     * 判断参数 ModifyOriginParameters 是否已赋值
                     * @return ModifyOriginParameters 是否已赋值
                     * 
                     */
                    bool ModifyOriginParametersHasBeenSet() const;

                    /**
                     * 获取<p>源站故障转移配置参数，当 Name 取值为 SiteFailover 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SiteFailoverParameters <p>源站故障转移配置参数，当 Name 取值为 SiteFailover 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SiteFailoverParameters GetSiteFailoverParameters() const;

                    /**
                     * 设置<p>源站故障转移配置参数，当 Name 取值为 SiteFailover 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _siteFailoverParameters <p>源站故障转移配置参数，当 Name 取值为 SiteFailover 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSiteFailoverParameters(const SiteFailoverParameters& _siteFailoverParameters);

                    /**
                     * 判断参数 SiteFailoverParameters 是否已赋值
                     * @return SiteFailoverParameters 是否已赋值
                     * 
                     */
                    bool SiteFailoverParametersHasBeenSet() const;

                    /**
                     * 获取<p>七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTPUpstreamTimeoutParameters <p>七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTPUpstreamTimeoutParameters GetHTTPUpstreamTimeoutParameters() const;

                    /**
                     * 设置<p>七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTPUpstreamTimeoutParameters <p>七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTPUpstreamTimeoutParameters(const HTTPUpstreamTimeoutParameters& _hTTPUpstreamTimeoutParameters);

                    /**
                     * 判断参数 HTTPUpstreamTimeoutParameters 是否已赋值
                     * @return HTTPUpstreamTimeoutParameters 是否已赋值
                     * 
                     */
                    bool HTTPUpstreamTimeoutParametersHasBeenSet() const;

                    /**
                     * 获取<p>HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpResponseParameters <p>HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTPResponseParameters GetHttpResponseParameters() const;

                    /**
                     * 设置<p>HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpResponseParameters <p>HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpResponseParameters(const HTTPResponseParameters& _httpResponseParameters);

                    /**
                     * 判断参数 HttpResponseParameters 是否已赋值
                     * @return HttpResponseParameters 是否已赋值
                     * 
                     */
                    bool HttpResponseParametersHasBeenSet() const;

                    /**
                     * 获取<p>自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPageParameters <p>自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorPageParameters GetErrorPageParameters() const;

                    /**
                     * 设置<p>自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorPageParameters <p>自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorPageParameters(const ErrorPageParameters& _errorPageParameters);

                    /**
                     * 判断参数 ErrorPageParameters 是否已赋值
                     * @return ErrorPageParameters 是否已赋值
                     * 
                     */
                    bool ErrorPageParametersHasBeenSet() const;

                    /**
                     * 获取<p>修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyResponseHeaderParameters <p>修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModifyResponseHeaderParameters GetModifyResponseHeaderParameters() const;

                    /**
                     * 设置<p>修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyResponseHeaderParameters <p>修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyResponseHeaderParameters(const ModifyResponseHeaderParameters& _modifyResponseHeaderParameters);

                    /**
                     * 判断参数 ModifyResponseHeaderParameters 是否已赋值
                     * @return ModifyResponseHeaderParameters 是否已赋值
                     * 
                     */
                    bool ModifyResponseHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyRequestHeaderParameters <p>修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModifyRequestHeaderParameters GetModifyRequestHeaderParameters() const;

                    /**
                     * 设置<p>修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyRequestHeaderParameters <p>修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyRequestHeaderParameters(const ModifyRequestHeaderParameters& _modifyRequestHeaderParameters);

                    /**
                     * 判断参数 ModifyRequestHeaderParameters 是否已赋值
                     * @return ModifyRequestHeaderParameters 是否已赋值
                     * 
                     */
                    bool ModifyRequestHeaderParametersHasBeenSet() const;

                    /**
                     * 获取<p>单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseSpeedLimitParameters <p>单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseSpeedLimitParameters GetResponseSpeedLimitParameters() const;

                    /**
                     * 设置<p>单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseSpeedLimitParameters <p>单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseSpeedLimitParameters(const ResponseSpeedLimitParameters& _responseSpeedLimitParameters);

                    /**
                     * 判断参数 ResponseSpeedLimitParameters 是否已赋值
                     * @return ResponseSpeedLimitParameters 是否已赋值
                     * 
                     */
                    bool ResponseSpeedLimitParametersHasBeenSet() const;

                    /**
                     * 获取<p>内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetContentIdentifierParameters <p>内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetContentIdentifierParameters GetSetContentIdentifierParameters() const;

                    /**
                     * 设置<p>内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setContentIdentifierParameters <p>内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetContentIdentifierParameters(const SetContentIdentifierParameters& _setContentIdentifierParameters);

                    /**
                     * 判断参数 SetContentIdentifierParameters 是否已赋值
                     * @return SetContentIdentifierParameters 是否已赋值
                     * 
                     */
                    bool SetContentIdentifierParametersHasBeenSet() const;

                    /**
                     * 获取<p>Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。</p>
                     * @return VaryParameters <p>Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。</p>
                     * 
                     */
                    VaryParameters GetVaryParameters() const;

                    /**
                     * 设置<p>Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。</p>
                     * @param _varyParameters <p>Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。</p>
                     * 
                     */
                    void SetVaryParameters(const VaryParameters& _varyParameters);

                    /**
                     * 判断参数 VaryParameters 是否已赋值
                     * @return VaryParameters 是否已赋值
                     * 
                     */
                    bool VaryParametersHasBeenSet() const;

                    /**
                     * 获取<p>内容压缩配置参数，当 Name 取值为 ContentCompression 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * @return ContentCompressionParameters <p>内容压缩配置参数，当 Name 取值为 ContentCompression 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * 
                     */
                    ContentCompressionParameters GetContentCompressionParameters() const;

                    /**
                     * 设置<p>内容压缩配置参数，当 Name 取值为 ContentCompression 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * @param _contentCompressionParameters <p>内容压缩配置参数，当 Name 取值为 ContentCompression 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * 
                     */
                    void SetContentCompressionParameters(const ContentCompressionParameters& _contentCompressionParameters);

                    /**
                     * 判断参数 ContentCompressionParameters 是否已赋值
                     * @return ContentCompressionParameters 是否已赋值
                     * 
                     */
                    bool ContentCompressionParametersHasBeenSet() const;

                    /**
                     * 获取<p>回源鉴权配置参数，当 Name 取值为 OriginAuthentication 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * @return OriginAuthenticationParameters <p>回源鉴权配置参数，当 Name 取值为 OriginAuthentication 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * 
                     */
                    OriginAuthenticationParameters GetOriginAuthenticationParameters() const;

                    /**
                     * 设置<p>回源鉴权配置参数，当 Name 取值为 OriginAuthentication 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * @param _originAuthenticationParameters <p>回源鉴权配置参数，当 Name 取值为 OriginAuthentication 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     * 
                     */
                    void SetOriginAuthenticationParameters(const OriginAuthenticationParameters& _originAuthenticationParameters);

                    /**
                     * 判断参数 OriginAuthenticationParameters 是否已赋值
                     * @return OriginAuthenticationParameters 是否已赋值
                     * 
                     */
                    bool OriginAuthenticationParametersHasBeenSet() const;

                private:

                    /**
                     * <p>操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。</p><li>Cache：节点缓存 TTL；</li><li>CacheKey：自定义 Cache Key；</li><li>CachePrefresh：缓存预刷新；</li><li>AccessURLRedirect：访问 URL 重定向；</li><li>UpstreamURLRewrite：回源 URL 重写；</li><li>QUIC：QUIC；</li><li>WebSocket：WebSocket；</li><li>Authentication：Token 鉴权；</li><li>MaxAge：浏览器缓存 TTL；</li><li>StatusCodeCache：状态码缓存 TTL；</li><li>OfflineCache：离线缓存；</li><li>SmartRouting：智能加速；</li><li>AdvancedOriginRouting：高级回源优化；</li><li>RangeOriginPull：分片回源 ；</li><li>UpstreamHTTP2：HTTP2 回源；</li><li>HostHeader：Host Header 重写；</li><li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li><li>OriginPullProtocol：回源 HTTPS；</li><li>Compression：智能压缩配置；</li><li>HSTS：HSTS；</li><li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li><li>OCSPStapling：OCSP 装订；</li><li>HTTP2：HTTP2 接入；</li><li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li><li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li><li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li><li>UpstreamRequest：回源请求参数；</li><li>Shield：源站卸载配置；</li><li>TLSConfig：SSL/TLS 安全；</li><li>ModifyOrigin：修改源站；</li><li> SiteFailover：源站故障转移；</li><li>HTTPUpstreamTimeout：七层回源超时配置；</li><li>HttpResponse：HTTP 应答；</li><li>ErrorPage：自定义错误页面；</li><li>ModifyResponseHeader：修改 HTTP 节点响应头；</li><li>ModifyRequestHeader：修改 HTTP 节点请求头；</li><li>ResponseSpeedLimit：单连接下载限速；</li><li>SetContentIdentifier：设置内容标识符；</li><li>Vary：Vary 特性配置；</li><li>ContentCompression：内容压缩配置；</li><li>OriginAuthentication：回源鉴权配置。</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheParameters m_cacheParameters;
                    bool m_cacheParametersHasBeenSet;

                    /**
                     * <p>自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKeyParameters m_cacheKeyParameters;
                    bool m_cacheKeyParametersHasBeenSet;

                    /**
                     * <p>缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CachePrefreshParameters m_cachePrefreshParameters;
                    bool m_cachePrefreshParametersHasBeenSet;

                    /**
                     * <p>访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessURLRedirectParameters m_accessURLRedirectParameters;
                    bool m_accessURLRedirectParametersHasBeenSet;

                    /**
                     * <p>回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamURLRewriteParameters m_upstreamURLRewriteParameters;
                    bool m_upstreamURLRewriteParametersHasBeenSet;

                    /**
                     * <p>QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QUICParameters m_qUICParameters;
                    bool m_qUICParametersHasBeenSet;

                    /**
                     * <p>WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocketParameters m_webSocketParameters;
                    bool m_webSocketParametersHasBeenSet;

                    /**
                     * <p>Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AuthenticationParameters m_authenticationParameters;
                    bool m_authenticationParametersHasBeenSet;

                    /**
                     * <p>浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAgeParameters m_maxAgeParameters;
                    bool m_maxAgeParametersHasBeenSet;

                    /**
                     * <p>状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCacheParameters m_statusCodeCacheParameters;
                    bool m_statusCodeCacheParametersHasBeenSet;

                    /**
                     * <p>离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCacheParameters m_offlineCacheParameters;
                    bool m_offlineCacheParametersHasBeenSet;

                    /**
                     * <p>智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRoutingParameters m_smartRoutingParameters;
                    bool m_smartRoutingParametersHasBeenSet;

                    /**
                     * <p>高级回源优化配置参数，当 Name 取值为 AdvancedOriginRouting 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedOriginRoutingParameters m_advancedOriginRoutingParameters;
                    bool m_advancedOriginRoutingParametersHasBeenSet;

                    /**
                     * <p>分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPullParameters m_rangeOriginPullParameters;
                    bool m_rangeOriginPullParametersHasBeenSet;

                    /**
                     * <p>HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2Parameters;
                    bool m_upstreamHTTP2ParametersHasBeenSet;

                    /**
                     * <p>Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostHeaderParameters m_hostHeaderParameters;
                    bool m_hostHeaderParametersHasBeenSet;

                    /**
                     * <p>访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPSParameters;
                    bool m_forceRedirectHTTPSParametersHasBeenSet;

                    /**
                     * <p>回源 HTTPS 配置参数，当 Name 取值为 OriginPullProtocol 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPullProtocolParameters m_originPullProtocolParameters;
                    bool m_originPullProtocolParametersHasBeenSet;

                    /**
                     * <p>智能压缩配置，当 Name 取值为 Compression 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompressionParameters m_compressionParameters;
                    bool m_compressionParametersHasBeenSet;

                    /**
                     * <p>HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HSTSParameters m_hSTSParameters;
                    bool m_hSTSParametersHasBeenSet;

                    /**
                     * <p>存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIPHeaderParameters m_clientIPHeaderParameters;
                    bool m_clientIPHeaderParametersHasBeenSet;

                    /**
                     * <p>OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OCSPStaplingParameters m_oCSPStaplingParameters;
                    bool m_oCSPStaplingParametersHasBeenSet;

                    /**
                     * <p>HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTP2Parameters m_hTTP2Parameters;
                    bool m_hTTP2ParametersHasBeenSet;

                    /**
                     * <p>POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostMaxSizeParameters m_postMaxSizeParameters;
                    bool m_postMaxSizeParametersHasBeenSet;

                    /**
                     * <p>回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIPCountryParameters m_clientIPCountryParameters;
                    bool m_clientIPCountryParametersHasBeenSet;

                    /**
                     * <p>回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamFollowRedirectParameters m_upstreamFollowRedirectParameters;
                    bool m_upstreamFollowRedirectParametersHasBeenSet;

                    /**
                     * <p>回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamRequestParameters m_upstreamRequestParameters;
                    bool m_upstreamRequestParametersHasBeenSet;

                    /**
                     * <p>源站卸载配置参数，当 Name 取值为 Shield 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ShieldParameters m_shieldParameters;
                    bool m_shieldParametersHasBeenSet;

                    /**
                     * <p>SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TLSConfigParameters m_tLSConfigParameters;
                    bool m_tLSConfigParametersHasBeenSet;

                    /**
                     * <p>修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModifyOriginParameters m_modifyOriginParameters;
                    bool m_modifyOriginParametersHasBeenSet;

                    /**
                     * <p>源站故障转移配置参数，当 Name 取值为 SiteFailover 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SiteFailoverParameters m_siteFailoverParameters;
                    bool m_siteFailoverParametersHasBeenSet;

                    /**
                     * <p>七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTPUpstreamTimeoutParameters m_hTTPUpstreamTimeoutParameters;
                    bool m_hTTPUpstreamTimeoutParametersHasBeenSet;

                    /**
                     * <p>HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTPResponseParameters m_httpResponseParameters;
                    bool m_httpResponseParametersHasBeenSet;

                    /**
                     * <p>自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPageParameters m_errorPageParameters;
                    bool m_errorPageParametersHasBeenSet;

                    /**
                     * <p>修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModifyResponseHeaderParameters m_modifyResponseHeaderParameters;
                    bool m_modifyResponseHeaderParametersHasBeenSet;

                    /**
                     * <p>修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModifyRequestHeaderParameters m_modifyRequestHeaderParameters;
                    bool m_modifyRequestHeaderParametersHasBeenSet;

                    /**
                     * <p>单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseSpeedLimitParameters m_responseSpeedLimitParameters;
                    bool m_responseSpeedLimitParametersHasBeenSet;

                    /**
                     * <p>内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetContentIdentifierParameters m_setContentIdentifierParameters;
                    bool m_setContentIdentifierParametersHasBeenSet;

                    /**
                     * <p>Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。</p>
                     */
                    VaryParameters m_varyParameters;
                    bool m_varyParametersHasBeenSet;

                    /**
                     * <p>内容压缩配置参数，当 Name 取值为 ContentCompression 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     */
                    ContentCompressionParameters m_contentCompressionParameters;
                    bool m_contentCompressionParametersHasBeenSet;

                    /**
                     * <p>回源鉴权配置参数，当 Name 取值为 OriginAuthentication 时，该参数必填。该参数为白名单功能，如有需要，请联系腾讯云工程师处理。</p>
                     */
                    OriginAuthenticationParameters m_originAuthenticationParameters;
                    bool m_originAuthenticationParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
