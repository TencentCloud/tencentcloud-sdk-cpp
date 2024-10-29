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

#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyZoneSettingRequest::ModifyZoneSettingRequest() :
    m_zoneIdHasBeenSet(false),
    m_cacheConfigHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_offlineCacheHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_postMaxSizeHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_upstreamHttp2HasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_originHasBeenSet(false),
    m_smartRoutingHasBeenSet(false),
    m_webSocketHasBeenSet(false),
    m_clientIpHeaderHasBeenSet(false),
    m_cachePrefreshHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_clientIpCountryHasBeenSet(false),
    m_grpcHasBeenSet(false),
    m_imageOptimizeHasBeenSet(false),
    m_standardDebugHasBeenSet(false),
    m_jITVideoProcessHasBeenSet(false)
{
}

string ModifyZoneSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offlineCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineCache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_quicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quic.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_postMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostMaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postMaxSize.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_upstreamHttp2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHttp2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamHttp2.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_smartRoutingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartRouting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartRouting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_webSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSocket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSocket.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientIpHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIpHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIpHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cachePrefreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachePrefresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cachePrefresh.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientIpCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIpCountry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIpCountry.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_grpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grpc.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageOptimizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOptimize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageOptimize.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_standardDebugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardDebug";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_standardDebug.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_jITVideoProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JITVideoProcess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jITVideoProcess.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyZoneSettingRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyZoneSettingRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyZoneSettingRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

CacheConfig ModifyZoneSettingRequest::GetCacheConfig() const
{
    return m_cacheConfig;
}

void ModifyZoneSettingRequest::SetCacheConfig(const CacheConfig& _cacheConfig)
{
    m_cacheConfig = _cacheConfig;
    m_cacheConfigHasBeenSet = true;
}

bool ModifyZoneSettingRequest::CacheConfigHasBeenSet() const
{
    return m_cacheConfigHasBeenSet;
}

CacheKey ModifyZoneSettingRequest::GetCacheKey() const
{
    return m_cacheKey;
}

void ModifyZoneSettingRequest::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool ModifyZoneSettingRequest::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

MaxAge ModifyZoneSettingRequest::GetMaxAge() const
{
    return m_maxAge;
}

void ModifyZoneSettingRequest::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool ModifyZoneSettingRequest::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

OfflineCache ModifyZoneSettingRequest::GetOfflineCache() const
{
    return m_offlineCache;
}

void ModifyZoneSettingRequest::SetOfflineCache(const OfflineCache& _offlineCache)
{
    m_offlineCache = _offlineCache;
    m_offlineCacheHasBeenSet = true;
}

bool ModifyZoneSettingRequest::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

Quic ModifyZoneSettingRequest::GetQuic() const
{
    return m_quic;
}

void ModifyZoneSettingRequest::SetQuic(const Quic& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool ModifyZoneSettingRequest::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

PostMaxSize ModifyZoneSettingRequest::GetPostMaxSize() const
{
    return m_postMaxSize;
}

void ModifyZoneSettingRequest::SetPostMaxSize(const PostMaxSize& _postMaxSize)
{
    m_postMaxSize = _postMaxSize;
    m_postMaxSizeHasBeenSet = true;
}

bool ModifyZoneSettingRequest::PostMaxSizeHasBeenSet() const
{
    return m_postMaxSizeHasBeenSet;
}

Compression ModifyZoneSettingRequest::GetCompression() const
{
    return m_compression;
}

void ModifyZoneSettingRequest::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool ModifyZoneSettingRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

UpstreamHttp2 ModifyZoneSettingRequest::GetUpstreamHttp2() const
{
    return m_upstreamHttp2;
}

void ModifyZoneSettingRequest::SetUpstreamHttp2(const UpstreamHttp2& _upstreamHttp2)
{
    m_upstreamHttp2 = _upstreamHttp2;
    m_upstreamHttp2HasBeenSet = true;
}

bool ModifyZoneSettingRequest::UpstreamHttp2HasBeenSet() const
{
    return m_upstreamHttp2HasBeenSet;
}

ForceRedirect ModifyZoneSettingRequest::GetForceRedirect() const
{
    return m_forceRedirect;
}

void ModifyZoneSettingRequest::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool ModifyZoneSettingRequest::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Https ModifyZoneSettingRequest::GetHttps() const
{
    return m_https;
}

void ModifyZoneSettingRequest::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool ModifyZoneSettingRequest::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

Origin ModifyZoneSettingRequest::GetOrigin() const
{
    return m_origin;
}

void ModifyZoneSettingRequest::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool ModifyZoneSettingRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

SmartRouting ModifyZoneSettingRequest::GetSmartRouting() const
{
    return m_smartRouting;
}

void ModifyZoneSettingRequest::SetSmartRouting(const SmartRouting& _smartRouting)
{
    m_smartRouting = _smartRouting;
    m_smartRoutingHasBeenSet = true;
}

bool ModifyZoneSettingRequest::SmartRoutingHasBeenSet() const
{
    return m_smartRoutingHasBeenSet;
}

WebSocket ModifyZoneSettingRequest::GetWebSocket() const
{
    return m_webSocket;
}

void ModifyZoneSettingRequest::SetWebSocket(const WebSocket& _webSocket)
{
    m_webSocket = _webSocket;
    m_webSocketHasBeenSet = true;
}

bool ModifyZoneSettingRequest::WebSocketHasBeenSet() const
{
    return m_webSocketHasBeenSet;
}

ClientIpHeader ModifyZoneSettingRequest::GetClientIpHeader() const
{
    return m_clientIpHeader;
}

void ModifyZoneSettingRequest::SetClientIpHeader(const ClientIpHeader& _clientIpHeader)
{
    m_clientIpHeader = _clientIpHeader;
    m_clientIpHeaderHasBeenSet = true;
}

bool ModifyZoneSettingRequest::ClientIpHeaderHasBeenSet() const
{
    return m_clientIpHeaderHasBeenSet;
}

CachePrefresh ModifyZoneSettingRequest::GetCachePrefresh() const
{
    return m_cachePrefresh;
}

void ModifyZoneSettingRequest::SetCachePrefresh(const CachePrefresh& _cachePrefresh)
{
    m_cachePrefresh = _cachePrefresh;
    m_cachePrefreshHasBeenSet = true;
}

bool ModifyZoneSettingRequest::CachePrefreshHasBeenSet() const
{
    return m_cachePrefreshHasBeenSet;
}

Ipv6 ModifyZoneSettingRequest::GetIpv6() const
{
    return m_ipv6;
}

void ModifyZoneSettingRequest::SetIpv6(const Ipv6& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool ModifyZoneSettingRequest::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

ClientIpCountry ModifyZoneSettingRequest::GetClientIpCountry() const
{
    return m_clientIpCountry;
}

void ModifyZoneSettingRequest::SetClientIpCountry(const ClientIpCountry& _clientIpCountry)
{
    m_clientIpCountry = _clientIpCountry;
    m_clientIpCountryHasBeenSet = true;
}

bool ModifyZoneSettingRequest::ClientIpCountryHasBeenSet() const
{
    return m_clientIpCountryHasBeenSet;
}

Grpc ModifyZoneSettingRequest::GetGrpc() const
{
    return m_grpc;
}

void ModifyZoneSettingRequest::SetGrpc(const Grpc& _grpc)
{
    m_grpc = _grpc;
    m_grpcHasBeenSet = true;
}

bool ModifyZoneSettingRequest::GrpcHasBeenSet() const
{
    return m_grpcHasBeenSet;
}

ImageOptimize ModifyZoneSettingRequest::GetImageOptimize() const
{
    return m_imageOptimize;
}

void ModifyZoneSettingRequest::SetImageOptimize(const ImageOptimize& _imageOptimize)
{
    m_imageOptimize = _imageOptimize;
    m_imageOptimizeHasBeenSet = true;
}

bool ModifyZoneSettingRequest::ImageOptimizeHasBeenSet() const
{
    return m_imageOptimizeHasBeenSet;
}

StandardDebug ModifyZoneSettingRequest::GetStandardDebug() const
{
    return m_standardDebug;
}

void ModifyZoneSettingRequest::SetStandardDebug(const StandardDebug& _standardDebug)
{
    m_standardDebug = _standardDebug;
    m_standardDebugHasBeenSet = true;
}

bool ModifyZoneSettingRequest::StandardDebugHasBeenSet() const
{
    return m_standardDebugHasBeenSet;
}

JITVideoProcess ModifyZoneSettingRequest::GetJITVideoProcess() const
{
    return m_jITVideoProcess;
}

void ModifyZoneSettingRequest::SetJITVideoProcess(const JITVideoProcess& _jITVideoProcess)
{
    m_jITVideoProcess = _jITVideoProcess;
    m_jITVideoProcessHasBeenSet = true;
}

bool ModifyZoneSettingRequest::JITVideoProcessHasBeenSet() const
{
    return m_jITVideoProcessHasBeenSet;
}


