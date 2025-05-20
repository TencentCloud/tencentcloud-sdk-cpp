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
#include <tencentcloud/teo/v20220901/model/RangeOriginPullParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/HostHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirectHTTPSParameters.h>
#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/OCSPStaplingParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSizeParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPCountryParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamFollowRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>
#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPUpstreamTimeoutParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPResponseParameters.h>
#include <tencentcloud/teo/v20220901/model/ErrorPageParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyResponseHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyRequestHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ResponseSpeedLimitParameters.h>
#include <tencentcloud/teo/v20220901/model/SetContentIdentifierParameters.h>
#include <tencentcloud/teo/v20220901/model/VaryParameters.h>


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
                     * 获取操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。
<li>Cache：节点缓存 TTL；</li>
<li>CacheKey：自定义 Cache Key；</li>
<li>CachePrefresh：缓存预刷新；</li>
<li>AccessURLRedirect：访问 URL 重定向；</li>
<li>UpstreamURLRewrite：回源 URL 重写；</li>
<li>QUIC：QUIC；</li>
<li>WebSocket：WebSocket；</li>
<li>Authentication：Token 鉴权；</li>
<li>MaxAge：浏览器缓存 TTL；</li>
<li>StatusCodeCache：状态码缓存 TTL；</li>
<li>OfflineCache：离线缓存；</li>
<li>SmartRouting：智能加速；</li>
<li>RangeOriginPull：分片回源 ；</li>
<li>UpstreamHTTP2：HTTP2 回源；</li>
<li>HostHeader：Host Header 重写；</li>
<li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li>
<li>OriginPullProtocol：回源 HTTPS；</li>
<li>Compression：智能压缩配置；</li>
<li>HSTS：HSTS；</li>
<li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li>
<li>OCSPStapling：OCSP 装订；</li>
<li>HTTP2：HTTP2 接入；</li>
<li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li>
<li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li>
<li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li>
<li>UpstreamRequest：回源请求参数；</li>
<li>TLSConfig：SSL/TLS 安全；</li>
<li>ModifyOrigin：修改源站；</li>
<li>HTTPUpstreamTimeout：七层回源超时配置；</li>
<li>HttpResponse：HTTP 应答；</li>
<li>ErrorPage：自定义错误页面；</li>
<li>ModifyResponseHeader：修改 HTTP 节点响应头；</li>
<li>ModifyRequestHeader：修改 HTTP 节点请求头；</li>
<li>ResponseSpeedLimit：单连接下载限速；</li>
<li>SetContentIdentifier：设置内容标识符；</li>
<li>Vary：Vary 特性配置。</li>
                     * @return Name 操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。
<li>Cache：节点缓存 TTL；</li>
<li>CacheKey：自定义 Cache Key；</li>
<li>CachePrefresh：缓存预刷新；</li>
<li>AccessURLRedirect：访问 URL 重定向；</li>
<li>UpstreamURLRewrite：回源 URL 重写；</li>
<li>QUIC：QUIC；</li>
<li>WebSocket：WebSocket；</li>
<li>Authentication：Token 鉴权；</li>
<li>MaxAge：浏览器缓存 TTL；</li>
<li>StatusCodeCache：状态码缓存 TTL；</li>
<li>OfflineCache：离线缓存；</li>
<li>SmartRouting：智能加速；</li>
<li>RangeOriginPull：分片回源 ；</li>
<li>UpstreamHTTP2：HTTP2 回源；</li>
<li>HostHeader：Host Header 重写；</li>
<li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li>
<li>OriginPullProtocol：回源 HTTPS；</li>
<li>Compression：智能压缩配置；</li>
<li>HSTS：HSTS；</li>
<li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li>
<li>OCSPStapling：OCSP 装订；</li>
<li>HTTP2：HTTP2 接入；</li>
<li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li>
<li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li>
<li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li>
<li>UpstreamRequest：回源请求参数；</li>
<li>TLSConfig：SSL/TLS 安全；</li>
<li>ModifyOrigin：修改源站；</li>
<li>HTTPUpstreamTimeout：七层回源超时配置；</li>
<li>HttpResponse：HTTP 应答；</li>
<li>ErrorPage：自定义错误页面；</li>
<li>ModifyResponseHeader：修改 HTTP 节点响应头；</li>
<li>ModifyRequestHeader：修改 HTTP 节点请求头；</li>
<li>ResponseSpeedLimit：单连接下载限速；</li>
<li>SetContentIdentifier：设置内容标识符；</li>
<li>Vary：Vary 特性配置。</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。
<li>Cache：节点缓存 TTL；</li>
<li>CacheKey：自定义 Cache Key；</li>
<li>CachePrefresh：缓存预刷新；</li>
<li>AccessURLRedirect：访问 URL 重定向；</li>
<li>UpstreamURLRewrite：回源 URL 重写；</li>
<li>QUIC：QUIC；</li>
<li>WebSocket：WebSocket；</li>
<li>Authentication：Token 鉴权；</li>
<li>MaxAge：浏览器缓存 TTL；</li>
<li>StatusCodeCache：状态码缓存 TTL；</li>
<li>OfflineCache：离线缓存；</li>
<li>SmartRouting：智能加速；</li>
<li>RangeOriginPull：分片回源 ；</li>
<li>UpstreamHTTP2：HTTP2 回源；</li>
<li>HostHeader：Host Header 重写；</li>
<li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li>
<li>OriginPullProtocol：回源 HTTPS；</li>
<li>Compression：智能压缩配置；</li>
<li>HSTS：HSTS；</li>
<li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li>
<li>OCSPStapling：OCSP 装订；</li>
<li>HTTP2：HTTP2 接入；</li>
<li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li>
<li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li>
<li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li>
<li>UpstreamRequest：回源请求参数；</li>
<li>TLSConfig：SSL/TLS 安全；</li>
<li>ModifyOrigin：修改源站；</li>
<li>HTTPUpstreamTimeout：七层回源超时配置；</li>
<li>HttpResponse：HTTP 应答；</li>
<li>ErrorPage：自定义错误页面；</li>
<li>ModifyResponseHeader：修改 HTTP 节点响应头；</li>
<li>ModifyRequestHeader：修改 HTTP 节点请求头；</li>
<li>ResponseSpeedLimit：单连接下载限速；</li>
<li>SetContentIdentifier：设置内容标识符；</li>
<li>Vary：Vary 特性配置。</li>
                     * @param _name 操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。
<li>Cache：节点缓存 TTL；</li>
<li>CacheKey：自定义 Cache Key；</li>
<li>CachePrefresh：缓存预刷新；</li>
<li>AccessURLRedirect：访问 URL 重定向；</li>
<li>UpstreamURLRewrite：回源 URL 重写；</li>
<li>QUIC：QUIC；</li>
<li>WebSocket：WebSocket；</li>
<li>Authentication：Token 鉴权；</li>
<li>MaxAge：浏览器缓存 TTL；</li>
<li>StatusCodeCache：状态码缓存 TTL；</li>
<li>OfflineCache：离线缓存；</li>
<li>SmartRouting：智能加速；</li>
<li>RangeOriginPull：分片回源 ；</li>
<li>UpstreamHTTP2：HTTP2 回源；</li>
<li>HostHeader：Host Header 重写；</li>
<li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li>
<li>OriginPullProtocol：回源 HTTPS；</li>
<li>Compression：智能压缩配置；</li>
<li>HSTS：HSTS；</li>
<li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li>
<li>OCSPStapling：OCSP 装订；</li>
<li>HTTP2：HTTP2 接入；</li>
<li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li>
<li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li>
<li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li>
<li>UpstreamRequest：回源请求参数；</li>
<li>TLSConfig：SSL/TLS 安全；</li>
<li>ModifyOrigin：修改源站；</li>
<li>HTTPUpstreamTimeout：七层回源超时配置；</li>
<li>HttpResponse：HTTP 应答；</li>
<li>ErrorPage：自定义错误页面；</li>
<li>ModifyResponseHeader：修改 HTTP 节点响应头；</li>
<li>ModifyRequestHeader：修改 HTTP 节点请求头；</li>
<li>ResponseSpeedLimit：单连接下载限速；</li>
<li>SetContentIdentifier：设置内容标识符；</li>
<li>Vary：Vary 特性配置。</li>
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
                     * 获取节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheParameters 节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheParameters GetCacheParameters() const;

                    /**
                     * 设置节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheParameters 节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。
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
                     * 获取自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKeyParameters 自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKeyParameters GetCacheKeyParameters() const;

                    /**
                     * 设置自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKeyParameters 自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。
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
                     * 获取缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CachePrefreshParameters 缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CachePrefreshParameters GetCachePrefreshParameters() const;

                    /**
                     * 设置缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cachePrefreshParameters 缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。
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
                     * 获取访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessURLRedirectParameters 访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessURLRedirectParameters GetAccessURLRedirectParameters() const;

                    /**
                     * 设置访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessURLRedirectParameters 访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。
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
                     * 获取回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamURLRewriteParameters 回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamURLRewriteParameters GetUpstreamURLRewriteParameters() const;

                    /**
                     * 设置回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamURLRewriteParameters 回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。
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
                     * 获取QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QUICParameters QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QUICParameters GetQUICParameters() const;

                    /**
                     * 设置QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qUICParameters QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。
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
                     * 获取WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocketParameters WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSocketParameters GetWebSocketParameters() const;

                    /**
                     * 设置WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSocketParameters WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。
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
                     * 获取Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthenticationParameters Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AuthenticationParameters GetAuthenticationParameters() const;

                    /**
                     * 设置Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authenticationParameters Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。
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
                     * 获取浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAgeParameters 浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAgeParameters GetMaxAgeParameters() const;

                    /**
                     * 设置浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAgeParameters 浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。
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
                     * 获取状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusCodeCacheParameters 状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StatusCodeCacheParameters GetStatusCodeCacheParameters() const;

                    /**
                     * 设置状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusCodeCacheParameters 状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。
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
                     * 获取离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineCacheParameters 离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineCacheParameters GetOfflineCacheParameters() const;

                    /**
                     * 设置离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineCacheParameters 离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。
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
                     * 获取智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartRoutingParameters 智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRoutingParameters GetSmartRoutingParameters() const;

                    /**
                     * 设置智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartRoutingParameters 智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。
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
                     * 获取分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeOriginPullParameters 分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RangeOriginPullParameters GetRangeOriginPullParameters() const;

                    /**
                     * 设置分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeOriginPullParameters 分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。
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
                     * 获取HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamHTTP2Parameters HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2Parameters() const;

                    /**
                     * 设置HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamHTTP2Parameters HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。
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
                     * 获取Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostHeaderParameters Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostHeaderParameters GetHostHeaderParameters() const;

                    /**
                     * 设置Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostHeaderParameters Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。
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
                     * 获取访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirectHTTPSParameters 访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPSParameters() const;

                    /**
                     * 设置访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirectHTTPSParameters 访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。
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
                     * 获取智能压缩配置，当 Name 取值为 Compression 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompressionParameters 智能压缩配置，当 Name 取值为 Compression 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompressionParameters GetCompressionParameters() const;

                    /**
                     * 设置智能压缩配置，当 Name 取值为 Compression 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compressionParameters 智能压缩配置，当 Name 取值为 Compression 时，该参数必填。
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
                     * 获取HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSTSParameters HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HSTSParameters GetHSTSParameters() const;

                    /**
                     * 设置HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSTSParameters HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。
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
                     * 获取存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPHeaderParameters 存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeaderParameters() const;

                    /**
                     * 设置存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIPHeaderParameters 存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。
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
                     * 获取OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OCSPStaplingParameters OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStaplingParameters() const;

                    /**
                     * 设置OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oCSPStaplingParameters OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。
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
                     * 获取HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTP2Parameters HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTP2Parameters GetHTTP2Parameters() const;

                    /**
                     * 设置HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTP2Parameters HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。
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
                     * 获取POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostMaxSizeParameters POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSizeParameters() const;

                    /**
                     * 设置POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postMaxSizeParameters POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。
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
                     * 获取回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPCountryParameters 回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountryParameters() const;

                    /**
                     * 设置回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIPCountryParameters 回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。
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
                     * 获取回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamFollowRedirectParameters 回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamFollowRedirectParameters GetUpstreamFollowRedirectParameters() const;

                    /**
                     * 设置回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamFollowRedirectParameters 回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。
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
                     * 获取回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamRequestParameters 回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamRequestParameters GetUpstreamRequestParameters() const;

                    /**
                     * 设置回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamRequestParameters 回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。
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
                     * 获取SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TLSConfigParameters SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TLSConfigParameters GetTLSConfigParameters() const;

                    /**
                     * 设置SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tLSConfigParameters SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。
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
                     * 获取修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyOriginParameters 修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModifyOriginParameters GetModifyOriginParameters() const;

                    /**
                     * 设置修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyOriginParameters 修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。
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
                     * 获取七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTPUpstreamTimeoutParameters 七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTPUpstreamTimeoutParameters GetHTTPUpstreamTimeoutParameters() const;

                    /**
                     * 设置七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTPUpstreamTimeoutParameters 七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。
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
                     * 获取HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpResponseParameters HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTPResponseParameters GetHttpResponseParameters() const;

                    /**
                     * 设置HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpResponseParameters HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。
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
                     * 获取自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPageParameters 自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ErrorPageParameters GetErrorPageParameters() const;

                    /**
                     * 设置自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorPageParameters 自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。
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
                     * 获取修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyResponseHeaderParameters 修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModifyResponseHeaderParameters GetModifyResponseHeaderParameters() const;

                    /**
                     * 设置修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyResponseHeaderParameters 修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。
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
                     * 获取修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyRequestHeaderParameters 修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModifyRequestHeaderParameters GetModifyRequestHeaderParameters() const;

                    /**
                     * 设置修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyRequestHeaderParameters 修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。
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
                     * 获取单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseSpeedLimitParameters 单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseSpeedLimitParameters GetResponseSpeedLimitParameters() const;

                    /**
                     * 设置单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseSpeedLimitParameters 单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。
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
                     * 获取内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetContentIdentifierParameters 内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SetContentIdentifierParameters GetSetContentIdentifierParameters() const;

                    /**
                     * 设置内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setContentIdentifierParameters 内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。

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
                     * 获取Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。
                     * @return VaryParameters Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。
                     * 
                     */
                    VaryParameters GetVaryParameters() const;

                    /**
                     * 设置Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。
                     * @param _varyParameters Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。
                     * 
                     */
                    void SetVaryParameters(const VaryParameters& _varyParameters);

                    /**
                     * 判断参数 VaryParameters 是否已赋值
                     * @return VaryParameters 是否已赋值
                     * 
                     */
                    bool VaryParametersHasBeenSet() const;

                private:

                    /**
                     * 操作名称。名称需要与参数结构体对应，例如 Name=Cache，则 CacheParameters 必填。
<li>Cache：节点缓存 TTL；</li>
<li>CacheKey：自定义 Cache Key；</li>
<li>CachePrefresh：缓存预刷新；</li>
<li>AccessURLRedirect：访问 URL 重定向；</li>
<li>UpstreamURLRewrite：回源 URL 重写；</li>
<li>QUIC：QUIC；</li>
<li>WebSocket：WebSocket；</li>
<li>Authentication：Token 鉴权；</li>
<li>MaxAge：浏览器缓存 TTL；</li>
<li>StatusCodeCache：状态码缓存 TTL；</li>
<li>OfflineCache：离线缓存；</li>
<li>SmartRouting：智能加速；</li>
<li>RangeOriginPull：分片回源 ；</li>
<li>UpstreamHTTP2：HTTP2 回源；</li>
<li>HostHeader：Host Header 重写；</li>
<li>ForceRedirectHTTPS：访问协议强制 HTTPS 跳转配置；</li>
<li>OriginPullProtocol：回源 HTTPS；</li>
<li>Compression：智能压缩配置；</li>
<li>HSTS：HSTS；</li>
<li>ClientIPHeader：存储客户端请求 IP 的头部信息配置；</li>
<li>OCSPStapling：OCSP 装订；</li>
<li>HTTP2：HTTP2 接入；</li>
<li>PostMaxSize：POST 请求上传文件流式传输最大限制配置；</li>
<li>ClientIPCountry：回源时携带客户端 IP 所属地域信息；</li>
<li>UpstreamFollowRedirect：回源跟随重定向参数配置；</li>
<li>UpstreamRequest：回源请求参数；</li>
<li>TLSConfig：SSL/TLS 安全；</li>
<li>ModifyOrigin：修改源站；</li>
<li>HTTPUpstreamTimeout：七层回源超时配置；</li>
<li>HttpResponse：HTTP 应答；</li>
<li>ErrorPage：自定义错误页面；</li>
<li>ModifyResponseHeader：修改 HTTP 节点响应头；</li>
<li>ModifyRequestHeader：修改 HTTP 节点请求头；</li>
<li>ResponseSpeedLimit：单连接下载限速；</li>
<li>SetContentIdentifier：设置内容标识符；</li>
<li>Vary：Vary 特性配置。</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点缓存 TTL 配置参数，当 Name 取值为 Cache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheParameters m_cacheParameters;
                    bool m_cacheParametersHasBeenSet;

                    /**
                     * 自定义 Cache Key 配置参数，当 Name 取值为 CacheKey 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKeyParameters m_cacheKeyParameters;
                    bool m_cacheKeyParametersHasBeenSet;

                    /**
                     * 缓存预刷新配置参数，当 Name 取值为 CachePrefresh 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CachePrefreshParameters m_cachePrefreshParameters;
                    bool m_cachePrefreshParametersHasBeenSet;

                    /**
                     * 访问 URL 重定向配置参数，当 Name 取值为 AccessURLRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessURLRedirectParameters m_accessURLRedirectParameters;
                    bool m_accessURLRedirectParametersHasBeenSet;

                    /**
                     * 回源 URL 重写配置参数，当 Name 取值为 UpstreamURLRewrite 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamURLRewriteParameters m_upstreamURLRewriteParameters;
                    bool m_upstreamURLRewriteParametersHasBeenSet;

                    /**
                     * QUIC 配置参数，当 Name 取值为 QUIC 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QUICParameters m_qUICParameters;
                    bool m_qUICParametersHasBeenSet;

                    /**
                     * WebSocket 配置参数，当 Name 取值为 WebSocket 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocketParameters m_webSocketParameters;
                    bool m_webSocketParametersHasBeenSet;

                    /**
                     * Token 鉴权配置参数，当 Name 取值为 Authentication 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AuthenticationParameters m_authenticationParameters;
                    bool m_authenticationParametersHasBeenSet;

                    /**
                     * 浏览器缓存 TTL 配置参数，当 Name 取值为 MaxAge 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAgeParameters m_maxAgeParameters;
                    bool m_maxAgeParametersHasBeenSet;

                    /**
                     * 状态码缓存 TTL 配置参数，当 Name 取值为 StatusCodeCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusCodeCacheParameters m_statusCodeCacheParameters;
                    bool m_statusCodeCacheParametersHasBeenSet;

                    /**
                     * 离线缓存配置参数，当 Name 取值为 OfflineCache 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCacheParameters m_offlineCacheParameters;
                    bool m_offlineCacheParametersHasBeenSet;

                    /**
                     * 智能加速配置参数，当 Name 取值为 SmartRouting 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRoutingParameters m_smartRoutingParameters;
                    bool m_smartRoutingParametersHasBeenSet;

                    /**
                     * 分片回源配置参数，当 Name 取值为 RangeOriginPull 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RangeOriginPullParameters m_rangeOriginPullParameters;
                    bool m_rangeOriginPullParametersHasBeenSet;

                    /**
                     * HTTP2 回源配置参数，当 Name 取值为 UpstreamHTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2Parameters;
                    bool m_upstreamHTTP2ParametersHasBeenSet;

                    /**
                     * Host Header 重写配置参数，当 Name 取值为 HostHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostHeaderParameters m_hostHeaderParameters;
                    bool m_hostHeaderParametersHasBeenSet;

                    /**
                     * 访问协议强制 HTTPS 跳转配置，当 Name 取值为 ForceRedirectHTTPS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPSParameters;
                    bool m_forceRedirectHTTPSParametersHasBeenSet;

                    /**
                     * 智能压缩配置，当 Name 取值为 Compression 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompressionParameters m_compressionParameters;
                    bool m_compressionParametersHasBeenSet;

                    /**
                     * HSTS 配置参数，当 Name 取值为 HSTS 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HSTSParameters m_hSTSParameters;
                    bool m_hSTSParametersHasBeenSet;

                    /**
                     * 存储客户端请求 IP 的头部信息配置，当 Name 取值为 ClientIPHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIPHeaderParameters m_clientIPHeaderParameters;
                    bool m_clientIPHeaderParametersHasBeenSet;

                    /**
                     * OCSP 装订配置参数，当 Name 取值为 OCSPStapling 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OCSPStaplingParameters m_oCSPStaplingParameters;
                    bool m_oCSPStaplingParametersHasBeenSet;

                    /**
                     * HTTP2 接入配置参数，当 Name 取值为 HTTP2 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTP2Parameters m_hTTP2Parameters;
                    bool m_hTTP2ParametersHasBeenSet;

                    /**
                     * POST 请求上传文件流式传输最大限制配置，当 Name 取值为 PostMaxSize 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostMaxSizeParameters m_postMaxSizeParameters;
                    bool m_postMaxSizeParametersHasBeenSet;

                    /**
                     * 回源时携带客户端 IP 所属地域信息配置参数，当 Name 取值为 ClientIPCountry 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIPCountryParameters m_clientIPCountryParameters;
                    bool m_clientIPCountryParametersHasBeenSet;

                    /**
                     * 回源跟随重定向参数配置，当 Name 取值为 UpstreamFollowRedirect 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamFollowRedirectParameters m_upstreamFollowRedirectParameters;
                    bool m_upstreamFollowRedirectParametersHasBeenSet;

                    /**
                     * 回源请求参数配置参数，当 Name 取值为 UpstreamRequest 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamRequestParameters m_upstreamRequestParameters;
                    bool m_upstreamRequestParametersHasBeenSet;

                    /**
                     * SSL/TLS 安全配置参数，当 Name 取值为 TLSConfig 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TLSConfigParameters m_tLSConfigParameters;
                    bool m_tLSConfigParametersHasBeenSet;

                    /**
                     * 修改源站配置参数，当 Name 取值为 ModifyOrigin 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModifyOriginParameters m_modifyOriginParameters;
                    bool m_modifyOriginParametersHasBeenSet;

                    /**
                     * 七层回源超时配置，当 Name 取值为 HTTPUpstreamTimeout 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTPUpstreamTimeoutParameters m_hTTPUpstreamTimeoutParameters;
                    bool m_hTTPUpstreamTimeoutParametersHasBeenSet;

                    /**
                     * HTTP 应答配置参数，当 Name 取值为 HttpResponse 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTPResponseParameters m_httpResponseParameters;
                    bool m_httpResponseParametersHasBeenSet;

                    /**
                     * 自定义错误页面配置参数，当 Name 取值为 ErrorPage 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ErrorPageParameters m_errorPageParameters;
                    bool m_errorPageParametersHasBeenSet;

                    /**
                     * 修改 HTTP 节点响应头配置参数，当 Name 取值为 ModifyResponseHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModifyResponseHeaderParameters m_modifyResponseHeaderParameters;
                    bool m_modifyResponseHeaderParametersHasBeenSet;

                    /**
                     * 修改 HTTP 节点请求头配置参数，当 Name 取值为 ModifyRequestHeader 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModifyRequestHeaderParameters m_modifyRequestHeaderParameters;
                    bool m_modifyRequestHeaderParametersHasBeenSet;

                    /**
                     * 单连接下载限速配置参数，当 Name 取值为 ResponseSpeedLimit 时，该参数必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseSpeedLimitParameters m_responseSpeedLimitParameters;
                    bool m_responseSpeedLimitParametersHasBeenSet;

                    /**
                     * 内容标识配置参数，当 Name 取值为 SetContentIdentifier 时，该参数必填。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SetContentIdentifierParameters m_setContentIdentifierParameters;
                    bool m_setContentIdentifierParametersHasBeenSet;

                    /**
                     * Vary 特性配置参数，当 Name 取值为 Vary 时，该参数必填。
                     */
                    VaryParameters m_varyParameters;
                    bool m_varyParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
