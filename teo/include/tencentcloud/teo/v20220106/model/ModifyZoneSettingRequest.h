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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESETTINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/CacheConfig.h>
#include <tencentcloud/teo/v20220106/model/CacheKey.h>
#include <tencentcloud/teo/v20220106/model/MaxAge.h>
#include <tencentcloud/teo/v20220106/model/OfflineCache.h>
#include <tencentcloud/teo/v20220106/model/Quic.h>
#include <tencentcloud/teo/v20220106/model/PostMaxSize.h>
#include <tencentcloud/teo/v20220106/model/Compression.h>
#include <tencentcloud/teo/v20220106/model/UpstreamHttp2.h>
#include <tencentcloud/teo/v20220106/model/ForceRedirect.h>
#include <tencentcloud/teo/v20220106/model/Https.h>
#include <tencentcloud/teo/v20220106/model/Origin.h>
#include <tencentcloud/teo/v20220106/model/SmartRouting.h>
#include <tencentcloud/teo/v20220106/model/WebSocket.h>
#include <tencentcloud/teo/v20220106/model/ClientIp.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyZoneSetting请求参数结构体
                */
                class ModifyZoneSettingRequest : public AbstractModel
                {
                public:
                    ModifyZoneSettingRequest();
                    ~ModifyZoneSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待变更的站点ID
                     * @return ZoneId 待变更的站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置待变更的站点ID
                     * @param ZoneId 待变更的站点ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取缓存过期时间配置
                     * @return Cache 缓存过期时间配置
                     */
                    CacheConfig GetCache() const;

                    /**
                     * 设置缓存过期时间配置
                     * @param Cache 缓存过期时间配置
                     */
                    void SetCache(const CacheConfig& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取节点缓存键配置
                     * @return CacheKey 节点缓存键配置
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存键配置
                     * @param CacheKey 节点缓存键配置
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取浏览器缓存配置
                     * @return MaxAge 浏览器缓存配置
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存配置
                     * @param MaxAge 浏览器缓存配置
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取离线缓存
                     * @return OfflineCache 离线缓存
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置离线缓存
                     * @param OfflineCache 离线缓存
                     */
                    void SetOfflineCache(const OfflineCache& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取Quic访问
                     * @return Quic Quic访问
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置Quic访问
                     * @param Quic Quic访问
                     */
                    void SetQuic(const Quic& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取POST请求传输配置
                     * @return PostMaxSize POST请求传输配置
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置POST请求传输配置
                     * @param PostMaxSize POST请求传输配置
                     */
                    void SetPostMaxSize(const PostMaxSize& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取智能压缩配置
                     * @return Compression 智能压缩配置
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置
                     * @param Compression 智能压缩配置
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取http2回源配置
                     * @return UpstreamHttp2 http2回源配置
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置http2回源配置
                     * @param UpstreamHttp2 http2回源配置
                     */
                    void SetUpstreamHttp2(const UpstreamHttp2& _upstreamHttp2);

                    /**
                     * 判断参数 UpstreamHttp2 是否已赋值
                     * @return UpstreamHttp2 是否已赋值
                     */
                    bool UpstreamHttp2HasBeenSet() const;

                    /**
                     * 获取访问协议强制https跳转配置
                     * @return ForceRedirect 访问协议强制https跳转配置
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制https跳转配置
                     * @param ForceRedirect 访问协议强制https跳转配置
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取Https 加速配置
                     * @return Https Https 加速配置
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https 加速配置
                     * @param Https Https 加速配置
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取源站配置
                     * @return Origin 源站配置
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置
                     * @param Origin 源站配置
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取智能加速配置
                     * @return SmartRouting 智能加速配置
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置智能加速配置
                     * @param SmartRouting 智能加速配置
                     */
                    void SetSmartRouting(const SmartRouting& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取WebSocket配置
                     * @return WebSocket WebSocket配置
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket配置
                     * @param WebSocket WebSocket配置
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取客户端IP回源请求头配置
                     * @return ClientIpHeader 客户端IP回源请求头配置
                     */
                    ClientIp GetClientIpHeader() const;

                    /**
                     * 设置客户端IP回源请求头配置
                     * @param ClientIpHeader 客户端IP回源请求头配置
                     */
                    void SetClientIpHeader(const ClientIp& _clientIpHeader);

                    /**
                     * 判断参数 ClientIpHeader 是否已赋值
                     * @return ClientIpHeader 是否已赋值
                     */
                    bool ClientIpHeaderHasBeenSet() const;

                private:

                    /**
                     * 待变更的站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 缓存过期时间配置
                     */
                    CacheConfig m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 节点缓存键配置
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 浏览器缓存配置
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 离线缓存
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Quic访问
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * POST请求传输配置
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * 智能压缩配置
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * http2回源配置
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * 访问协议强制https跳转配置
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Https 加速配置
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 源站配置
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 智能加速配置
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * WebSocket配置
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * 客户端IP回源请求头配置
                     */
                    ClientIp m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESETTINGREQUEST_H_
