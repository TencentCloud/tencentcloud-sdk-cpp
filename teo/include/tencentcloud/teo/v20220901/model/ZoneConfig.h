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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SmartRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/MaxAgeParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/CachePrefreshParameters.h>
#include <tencentcloud/teo/v20220901/model/OfflineCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirectHTTPSParameters.h>
#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>
#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/OCSPStaplingParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/QUICParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/IPv6Parameters.h>
#include <tencentcloud/teo/v20220901/model/WebSocketParameters.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSizeParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPCountryParameters.h>
#include <tencentcloud/teo/v20220901/model/GrpcParameters.h>
#include <tencentcloud/teo/v20220901/model/AccelerateMainlandParameters.h>
#include <tencentcloud/teo/v20220901/model/StandardDebugParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 站点加速配置。
                */
                class ZoneConfig : public AbstractModel
                {
                public:
                    ZoneConfig();
                    ~ZoneConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartRouting 智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRoutingParameters GetSmartRouting() const;

                    /**
                     * 设置智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartRouting 智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartRouting(const SmartRoutingParameters& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     * 
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheConfigParameters GetCache() const;

                    /**
                     * 设置缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cache 缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCache(const CacheConfigParameters& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAgeParameters GetMaxAge() const;

                    /**
                     * 设置浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAge 浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxAge(const MaxAgeParameters& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKeyConfigParameters GetCacheKey() const;

                    /**
                     * 设置节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKey 节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheKey(const CacheKeyConfigParameters& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CachePrefresh 缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CachePrefreshParameters GetCachePrefresh() const;

                    /**
                     * 设置缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cachePrefresh 缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCachePrefresh(const CachePrefreshParameters& _cachePrefresh);

                    /**
                     * 判断参数 CachePrefresh 是否已赋值
                     * @return CachePrefresh 是否已赋值
                     * 
                     */
                    bool CachePrefreshHasBeenSet() const;

                    /**
                     * 获取离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineCache 离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineCacheParameters GetOfflineCache() const;

                    /**
                     * 设置离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineCache 离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineCache(const OfflineCacheParameters& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     * 
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompressionParameters GetCompression() const;

                    /**
                     * 设置智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompression(const CompressionParameters& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取访问协议强制 HTTPS 跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirectHTTPS 访问协议强制 HTTPS 跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPS() const;

                    /**
                     * 设置访问协议强制 HTTPS 跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirectHTTPS 访问协议强制 HTTPS 跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForceRedirectHTTPS(const ForceRedirectHTTPSParameters& _forceRedirectHTTPS);

                    /**
                     * 判断参数 ForceRedirectHTTPS 是否已赋值
                     * @return ForceRedirectHTTPS 是否已赋值
                     * 
                     */
                    bool ForceRedirectHTTPSHasBeenSet() const;

                    /**
                     * 获取HSTS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HSTS HSTS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HSTSParameters GetHSTS() const;

                    /**
                     * 设置HSTS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hSTS HSTS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHSTS(const HSTSParameters& _hSTS);

                    /**
                     * 判断参数 HSTS 是否已赋值
                     * @return HSTS 是否已赋值
                     * 
                     */
                    bool HSTSHasBeenSet() const;

                    /**
                     * 获取TLS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TLSConfig TLS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TLSConfigParameters GetTLSConfig() const;

                    /**
                     * 设置TLS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tLSConfig TLS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTLSConfig(const TLSConfigParameters& _tLSConfig);

                    /**
                     * 判断参数 TLSConfig 是否已赋值
                     * @return TLSConfig 是否已赋值
                     * 
                     */
                    bool TLSConfigHasBeenSet() const;

                    /**
                     * 获取OCSP 装订配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OCSPStapling OCSP 装订配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStapling() const;

                    /**
                     * 设置OCSP 装订配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oCSPStapling OCSP 装订配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOCSPStapling(const OCSPStaplingParameters& _oCSPStapling);

                    /**
                     * 判断参数 OCSPStapling 是否已赋值
                     * @return OCSPStapling 是否已赋值
                     * 
                     */
                    bool OCSPStaplingHasBeenSet() const;

                    /**
                     * 获取HTTP2 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HTTP2 HTTP2 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HTTP2Parameters GetHTTP2() const;

                    /**
                     * 设置HTTP2 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hTTP2 HTTP2 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHTTP2(const HTTP2Parameters& _hTTP2);

                    /**
                     * 判断参数 HTTP2 是否已赋值
                     * @return HTTP2 是否已赋值
                     * 
                     */
                    bool HTTP2HasBeenSet() const;

                    /**
                     * 获取QUIC 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QUIC QUIC 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QUICParameters GetQUIC() const;

                    /**
                     * 设置QUIC 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qUIC QUIC 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQUIC(const QUICParameters& _qUIC);

                    /**
                     * 判断参数 QUIC 是否已赋值
                     * @return QUIC 是否已赋值
                     * 
                     */
                    bool QUICHasBeenSet() const;

                    /**
                     * 获取HTTP2 回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamHTTP2 HTTP2 回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2() const;

                    /**
                     * 设置HTTP2 回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamHTTP2 HTTP2 回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamHTTP2(const UpstreamHTTP2Parameters& _upstreamHTTP2);

                    /**
                     * 判断参数 UpstreamHTTP2 是否已赋值
                     * @return UpstreamHTTP2 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2HasBeenSet() const;

                    /**
                     * 获取IPv6 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPv6 IPv6 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IPv6Parameters GetIPv6() const;

                    /**
                     * 设置IPv6 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPv6 IPv6 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPv6(const IPv6Parameters& _iPv6);

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取WebSocket 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocket WebSocket 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSocketParameters GetWebSocket() const;

                    /**
                     * 设置WebSocket 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSocket WebSocket 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSocket(const WebSocketParameters& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取POST 请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostMaxSize POST 请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSize() const;

                    /**
                     * 设置POST 请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postMaxSize POST 请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostMaxSize(const PostMaxSizeParameters& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     * 
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取客户端 IP 回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPHeader 客户端 IP 回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeader() const;

                    /**
                     * 设置客户端 IP 回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIPHeader 客户端 IP 回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIPHeader(const ClientIPHeaderParameters& _clientIPHeader);

                    /**
                     * 判断参数 ClientIPHeader 是否已赋值
                     * @return ClientIPHeader 是否已赋值
                     * 
                     */
                    bool ClientIPHeaderHasBeenSet() const;

                    /**
                     * 获取回源时是否携带客户端 IP 所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIPCountry 回源时是否携带客户端 IP 所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountry() const;

                    /**
                     * 设置回源时是否携带客户端 IP 所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIPCountry 回源时是否携带客户端 IP 所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIPCountry(const ClientIPCountryParameters& _clientIPCountry);

                    /**
                     * 判断参数 ClientIPCountry 是否已赋值
                     * @return ClientIPCountry 是否已赋值
                     * 
                     */
                    bool ClientIPCountryHasBeenSet() const;

                    /**
                     * 获取gRPC 协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grpc gRPC 协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GrpcParameters GetGrpc() const;

                    /**
                     * 设置gRPC 协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grpc gRPC 协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrpc(const GrpcParameters& _grpc);

                    /**
                     * 判断参数 Grpc 是否已赋值
                     * @return Grpc 是否已赋值
                     * 
                     */
                    bool GrpcHasBeenSet() const;

                    /**
                     * 获取中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccelerateMainland 中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccelerateMainlandParameters GetAccelerateMainland() const;

                    /**
                     * 设置中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accelerateMainland 中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccelerateMainland(const AccelerateMainlandParameters& _accelerateMainland);

                    /**
                     * 判断参数 AccelerateMainland 是否已赋值
                     * @return AccelerateMainland 是否已赋值
                     * 
                     */
                    bool AccelerateMainlandHasBeenSet() const;

                    /**
                     * 获取标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardDebug 标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StandardDebugParameters GetStandardDebug() const;

                    /**
                     * 设置标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardDebug 标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandardDebug(const StandardDebugParameters& _standardDebug);

                    /**
                     * 判断参数 StandardDebug 是否已赋值
                     * @return StandardDebug 是否已赋值
                     * 
                     */
                    bool StandardDebugHasBeenSet() const;

                private:

                    /**
                     * 智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRoutingParameters m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * 缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigParameters m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAgeParameters m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKeyConfigParameters m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CachePrefreshParameters m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * 离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCacheParameters m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompressionParameters m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 访问协议强制 HTTPS 跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPS;
                    bool m_forceRedirectHTTPSHasBeenSet;

                    /**
                     * HSTS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HSTSParameters m_hSTS;
                    bool m_hSTSHasBeenSet;

                    /**
                     * TLS 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TLSConfigParameters m_tLSConfig;
                    bool m_tLSConfigHasBeenSet;

                    /**
                     * OCSP 装订配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OCSPStaplingParameters m_oCSPStapling;
                    bool m_oCSPStaplingHasBeenSet;

                    /**
                     * HTTP2 相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HTTP2Parameters m_hTTP2;
                    bool m_hTTP2HasBeenSet;

                    /**
                     * QUIC 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QUICParameters m_qUIC;
                    bool m_qUICHasBeenSet;

                    /**
                     * HTTP2 回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2;
                    bool m_upstreamHTTP2HasBeenSet;

                    /**
                     * IPv6 访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IPv6Parameters m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * WebSocket 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocketParameters m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * POST 请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostMaxSizeParameters m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * 客户端 IP 回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIPHeaderParameters m_clientIPHeader;
                    bool m_clientIPHeaderHasBeenSet;

                    /**
                     * 回源时是否携带客户端 IP 所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIPCountryParameters m_clientIPCountry;
                    bool m_clientIPCountryHasBeenSet;

                    /**
                     * gRPC 协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GrpcParameters m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * 中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccelerateMainlandParameters m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * 标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StandardDebugParameters m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONECONFIG_H_
