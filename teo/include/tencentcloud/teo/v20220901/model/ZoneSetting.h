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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheKey.h>
#include <tencentcloud/teo/v20220901/model/Quic.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSize.h>
#include <tencentcloud/teo/v20220901/model/Compression.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHttp2.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirect.h>
#include <tencentcloud/teo/v20220901/model/CacheConfig.h>
#include <tencentcloud/teo/v20220901/model/Origin.h>
#include <tencentcloud/teo/v20220901/model/SmartRouting.h>
#include <tencentcloud/teo/v20220901/model/MaxAge.h>
#include <tencentcloud/teo/v20220901/model/OfflineCache.h>
#include <tencentcloud/teo/v20220901/model/WebSocket.h>
#include <tencentcloud/teo/v20220901/model/ClientIpHeader.h>
#include <tencentcloud/teo/v20220901/model/CachePrefresh.h>
#include <tencentcloud/teo/v20220901/model/Ipv6.h>
#include <tencentcloud/teo/v20220901/model/Https.h>
#include <tencentcloud/teo/v20220901/model/ClientIpCountry.h>
#include <tencentcloud/teo/v20220901/model/Grpc.h>
#include <tencentcloud/teo/v20220901/model/ImageOptimize.h>
#include <tencentcloud/teo/v20220901/model/AccelerateMainland.h>
#include <tencentcloud/teo/v20220901/model/StandardDebug.h>
#include <tencentcloud/teo/v20220901/model/JITVideoProcess.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 站点配置。
                */
                class ZoneSetting : public AbstractModel
                {
                public:
                    ZoneSetting();
                    ~ZoneSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param _zoneName 站点名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取站点加速区域信息，取值有：
<li> mainland：中国境内加速；</li>
<li> overseas：中国境外加速。</li>
                     * @return Area 站点加速区域信息，取值有：
<li> mainland：中国境内加速；</li>
<li> overseas：中国境外加速。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置站点加速区域信息，取值有：
<li> mainland：中国境内加速；</li>
<li> overseas：中国境外加速。</li>
                     * @param _area 站点加速区域信息，取值有：
<li> mainland：中国境内加速；</li>
<li> overseas：中国境外加速。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKey 节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取Quic访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quic Quic访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Quic GetQuic() const;

                    /**
                     * 设置Quic访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quic Quic访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuic(const Quic& _quic);

                    /**
                     * 判断参数 Quic 是否已赋值
                     * @return Quic 是否已赋值
                     * 
                     */
                    bool QuicHasBeenSet() const;

                    /**
                     * 获取POST请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostMaxSize POST请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostMaxSize GetPostMaxSize() const;

                    /**
                     * 设置POST请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postMaxSize POST请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostMaxSize(const PostMaxSize& _postMaxSize);

                    /**
                     * 判断参数 PostMaxSize 是否已赋值
                     * @return PostMaxSize 是否已赋值
                     * 
                     */
                    bool PostMaxSizeHasBeenSet() const;

                    /**
                     * 获取智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Compression GetCompression() const;

                    /**
                     * 设置智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compression 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompression(const Compression& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取Http2回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamHttp2 Http2回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpstreamHttp2 GetUpstreamHttp2() const;

                    /**
                     * 设置Http2回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamHttp2 Http2回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamHttp2(const UpstreamHttp2& _upstreamHttp2);

                    /**
                     * 判断参数 UpstreamHttp2 是否已赋值
                     * @return UpstreamHttp2 是否已赋值
                     * 
                     */
                    bool UpstreamHttp2HasBeenSet() const;

                    /**
                     * 获取访问协议强制Https跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制Https跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制Https跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirect 访问协议强制Https跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     * 
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheConfig 缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheConfig 缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                    /**
                     * 获取源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origin 源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _origin 源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartRouting 智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartRouting GetSmartRouting() const;

                    /**
                     * 设置智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartRouting 智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartRouting(const SmartRouting& _smartRouting);

                    /**
                     * 判断参数 SmartRouting 是否已赋值
                     * @return SmartRouting 是否已赋值
                     * 
                     */
                    bool SmartRoutingHasBeenSet() const;

                    /**
                     * 获取浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAge 浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaxAge GetMaxAge() const;

                    /**
                     * 设置浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxAge 浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxAge(const MaxAge& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineCache 离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OfflineCache GetOfflineCache() const;

                    /**
                     * 设置离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineCache 离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineCache(const OfflineCache& _offlineCache);

                    /**
                     * 判断参数 OfflineCache 是否已赋值
                     * @return OfflineCache 是否已赋值
                     * 
                     */
                    bool OfflineCacheHasBeenSet() const;

                    /**
                     * 获取WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocket WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSocket WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

                    /**
                     * 获取客户端IP回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIpHeader 客户端IP回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIpHeader GetClientIpHeader() const;

                    /**
                     * 设置客户端IP回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIpHeader 客户端IP回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIpHeader(const ClientIpHeader& _clientIpHeader);

                    /**
                     * 判断参数 ClientIpHeader 是否已赋值
                     * @return ClientIpHeader 是否已赋值
                     * 
                     */
                    bool ClientIpHeaderHasBeenSet() const;

                    /**
                     * 获取缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CachePrefresh 缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CachePrefresh GetCachePrefresh() const;

                    /**
                     * 设置缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cachePrefresh 缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCachePrefresh(const CachePrefresh& _cachePrefresh);

                    /**
                     * 判断参数 CachePrefresh 是否已赋值
                     * @return CachePrefresh 是否已赋值
                     * 
                     */
                    bool CachePrefreshHasBeenSet() const;

                    /**
                     * 获取Ipv6访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv6 Ipv6访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Ipv6 GetIpv6() const;

                    /**
                     * 设置Ipv6访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv6 Ipv6访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv6(const Ipv6& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     * 
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取Https 加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https 加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https 加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _https Https 加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     * 
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIpCountry 回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientIpCountry GetClientIpCountry() const;

                    /**
                     * 设置回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIpCountry 回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIpCountry(const ClientIpCountry& _clientIpCountry);

                    /**
                     * 判断参数 ClientIpCountry 是否已赋值
                     * @return ClientIpCountry 是否已赋值
                     * 
                     */
                    bool ClientIpCountryHasBeenSet() const;

                    /**
                     * 获取Grpc协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grpc Grpc协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Grpc GetGrpc() const;

                    /**
                     * 设置Grpc协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grpc Grpc协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrpc(const Grpc& _grpc);

                    /**
                     * 判断参数 Grpc 是否已赋值
                     * @return Grpc 是否已赋值
                     * 
                     */
                    bool GrpcHasBeenSet() const;

                    /**
                     * 获取图片优化相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageOptimize 图片优化相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageOptimize GetImageOptimize() const;

                    /**
                     * 设置图片优化相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageOptimize 图片优化相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageOptimize(const ImageOptimize& _imageOptimize);

                    /**
                     * 判断参数 ImageOptimize 是否已赋值
                     * @return ImageOptimize 是否已赋值
                     * 
                     */
                    bool ImageOptimizeHasBeenSet() const;

                    /**
                     * 获取中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccelerateMainland 中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccelerateMainland GetAccelerateMainland() const;

                    /**
                     * 设置中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accelerateMainland 中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccelerateMainland(const AccelerateMainland& _accelerateMainland);

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
                    StandardDebug GetStandardDebug() const;

                    /**
                     * 设置标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardDebug 标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandardDebug(const StandardDebug& _standardDebug);

                    /**
                     * 判断参数 StandardDebug 是否已赋值
                     * @return StandardDebug 是否已赋值
                     * 
                     */
                    bool StandardDebugHasBeenSet() const;

                    /**
                     * 获取视频即时处理配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JITVideoProcess 视频即时处理配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    JITVideoProcess GetJITVideoProcess() const;

                    /**
                     * 设置视频即时处理配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jITVideoProcess 视频即时处理配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJITVideoProcess(const JITVideoProcess& _jITVideoProcess);

                    /**
                     * 判断参数 JITVideoProcess 是否已赋值
                     * @return JITVideoProcess 是否已赋值
                     * 
                     */
                    bool JITVideoProcessHasBeenSet() const;

                private:

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 站点加速区域信息，取值有：
<li> mainland：中国境内加速；</li>
<li> overseas：中国境外加速。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 节点缓存键配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * Quic访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Quic m_quic;
                    bool m_quicHasBeenSet;

                    /**
                     * POST请求传输配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostMaxSize m_postMaxSize;
                    bool m_postMaxSizeHasBeenSet;

                    /**
                     * 智能压缩配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Compression m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * Http2回源配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpstreamHttp2 m_upstreamHttp2;
                    bool m_upstreamHttp2HasBeenSet;

                    /**
                     * 访问协议强制Https跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * 缓存过期时间配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                    /**
                     * 源站配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 智能加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartRouting m_smartRouting;
                    bool m_smartRoutingHasBeenSet;

                    /**
                     * 浏览器缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaxAge m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 离线缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OfflineCache m_offlineCache;
                    bool m_offlineCacheHasBeenSet;

                    /**
                     * WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                    /**
                     * 客户端IP回源请求头配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIpHeader m_clientIpHeader;
                    bool m_clientIpHeaderHasBeenSet;

                    /**
                     * 缓存预刷新配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CachePrefresh m_cachePrefresh;
                    bool m_cachePrefreshHasBeenSet;

                    /**
                     * Ipv6访问配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ipv6 m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * Https 加速配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 回源时是否携带客户端IP所属地域信息的配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientIpCountry m_clientIpCountry;
                    bool m_clientIpCountryHasBeenSet;

                    /**
                     * Grpc协议支持配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Grpc m_grpc;
                    bool m_grpcHasBeenSet;

                    /**
                     * 图片优化相关配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageOptimize m_imageOptimize;
                    bool m_imageOptimizeHasBeenSet;

                    /**
                     * 中国大陆加速优化配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccelerateMainland m_accelerateMainland;
                    bool m_accelerateMainlandHasBeenSet;

                    /**
                     * 标准 Debug 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StandardDebug m_standardDebug;
                    bool m_standardDebugHasBeenSet;

                    /**
                     * 视频即时处理配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    JITVideoProcess m_jITVideoProcess;
                    bool m_jITVideoProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ZONESETTING_H_
