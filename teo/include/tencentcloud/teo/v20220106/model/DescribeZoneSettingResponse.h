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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESETTINGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESETTINGRESPONSE_H_

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
                * DescribeZoneSetting返回参数结构体
                */
                class DescribeZoneSettingResponse : public AbstractModel
                {
                public:
                    DescribeZoneSettingResponse();
                    ~DescribeZoneSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfig GetCache() const;

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取节点缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 节点缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取浏览器缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取离线缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineCache 离线缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取Quic访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quic Quic访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Quic GetQuic() const;

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取POST请求传输配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostMaxSize POST请求传输配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression GetCompression() const;

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取http2回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamHttp2 http2回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 判断参数 UpstreamHttp2 是否已赋值
                     * @return UpstreamHttp2 是否已赋值
                     */
                    bool UpstreamHttp2HasBeenSet() const;

                    /**
                     * 获取访问协议强制https跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制https跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取Https 加速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https 加速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https GetHttps() const;

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origin 源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Origin GetOrigin() const;

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取动态加速配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartRouting 动态加速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点域名
                     * @return Zone 站点域名
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocket WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取客户端IP回源请求头配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIpHeader 客户端IP回源请求头配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIp GetClientIpHeader() const;

                    /**
                     * 判断参数 ClientIpHeader 是否已赋值
                     * @return ClientIpHeader 是否已赋值
                     */
                    bool ClientIpHeaderHasBeenSet() const;

                private:

                    /**
                     * 缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfig m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 节点缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 浏览器缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 离线缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * Quic访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * POST请求传输配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * 智能压缩配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * http2回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * 访问协议强制https跳转配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * Https 加速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 动态加速配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点域名
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * WebSocket配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * 客户端IP回源请求头配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIp m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESETTINGRESPONSE_H_
