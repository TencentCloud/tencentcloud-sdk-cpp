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

#include <tencentcloud/teo/v20220901/model/ZoneConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ZoneConfig::ZoneConfig() :
    m_smartRoutingHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_cachePrefreshHasBeenSet(false),
    m_offlineCacheHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_forceRedirectHTTPSHasBeenSet(false),
    m_hSTSHasBeenSet(false),
    m_tLSConfigHasBeenSet(false),
    m_oCSPStaplingHasBeenSet(false),
    m_hTTP2HasBeenSet(false),
    m_qUICHasBeenSet(false),
    m_upstreamHTTP2HasBeenSet(false),
    m_iPv6HasBeenSet(false),
    m_webSocketHasBeenSet(false),
    m_postMaxSizeHasBeenSet(false),
    m_clientIPHeaderHasBeenSet(false),
    m_clientIPCountryHasBeenSet(false),
    m_grpcHasBeenSet(false),
    m_accelerateMainlandHasBeenSet(false),
    m_standardDebugHasBeenSet(false)
{
}

CoreInternalOutcome ZoneConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SmartRouting") && !value["SmartRouting"].IsNull())
    {
        if (!value["SmartRouting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.SmartRouting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartRouting.Deserialize(value["SmartRouting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartRoutingHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.MaxAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAge.Deserialize(value["MaxAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("CacheKey") && !value["CacheKey"].IsNull())
    {
        if (!value["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(value["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }

    if (value.HasMember("CachePrefresh") && !value["CachePrefresh"].IsNull())
    {
        if (!value["CachePrefresh"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.CachePrefresh` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cachePrefresh.Deserialize(value["CachePrefresh"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cachePrefreshHasBeenSet = true;
    }

    if (value.HasMember("OfflineCache") && !value["OfflineCache"].IsNull())
    {
        if (!value["OfflineCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.OfflineCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineCache.Deserialize(value["OfflineCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineCacheHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.Compression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compression.Deserialize(value["Compression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirectHTTPS") && !value["ForceRedirectHTTPS"].IsNull())
    {
        if (!value["ForceRedirectHTTPS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.ForceRedirectHTTPS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirectHTTPS.Deserialize(value["ForceRedirectHTTPS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHTTPSHasBeenSet = true;
    }

    if (value.HasMember("HSTS") && !value["HSTS"].IsNull())
    {
        if (!value["HSTS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.HSTS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hSTS.Deserialize(value["HSTS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hSTSHasBeenSet = true;
    }

    if (value.HasMember("TLSConfig") && !value["TLSConfig"].IsNull())
    {
        if (!value["TLSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.TLSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tLSConfig.Deserialize(value["TLSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tLSConfigHasBeenSet = true;
    }

    if (value.HasMember("OCSPStapling") && !value["OCSPStapling"].IsNull())
    {
        if (!value["OCSPStapling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.OCSPStapling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oCSPStapling.Deserialize(value["OCSPStapling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oCSPStaplingHasBeenSet = true;
    }

    if (value.HasMember("HTTP2") && !value["HTTP2"].IsNull())
    {
        if (!value["HTTP2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.HTTP2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hTTP2.Deserialize(value["HTTP2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hTTP2HasBeenSet = true;
    }

    if (value.HasMember("QUIC") && !value["QUIC"].IsNull())
    {
        if (!value["QUIC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.QUIC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qUIC.Deserialize(value["QUIC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qUICHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHTTP2") && !value["UpstreamHTTP2"].IsNull())
    {
        if (!value["UpstreamHTTP2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.UpstreamHTTP2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamHTTP2.Deserialize(value["UpstreamHTTP2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamHTTP2HasBeenSet = true;
    }

    if (value.HasMember("IPv6") && !value["IPv6"].IsNull())
    {
        if (!value["IPv6"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.IPv6` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPv6.Deserialize(value["IPv6"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPv6HasBeenSet = true;
    }

    if (value.HasMember("WebSocket") && !value["WebSocket"].IsNull())
    {
        if (!value["WebSocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.WebSocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSocket.Deserialize(value["WebSocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSocketHasBeenSet = true;
    }

    if (value.HasMember("PostMaxSize") && !value["PostMaxSize"].IsNull())
    {
        if (!value["PostMaxSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.PostMaxSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postMaxSize.Deserialize(value["PostMaxSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("ClientIPHeader") && !value["ClientIPHeader"].IsNull())
    {
        if (!value["ClientIPHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.ClientIPHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIPHeader.Deserialize(value["ClientIPHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIPHeaderHasBeenSet = true;
    }

    if (value.HasMember("ClientIPCountry") && !value["ClientIPCountry"].IsNull())
    {
        if (!value["ClientIPCountry"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.ClientIPCountry` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIPCountry.Deserialize(value["ClientIPCountry"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIPCountryHasBeenSet = true;
    }

    if (value.HasMember("Grpc") && !value["Grpc"].IsNull())
    {
        if (!value["Grpc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.Grpc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grpc.Deserialize(value["Grpc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_grpcHasBeenSet = true;
    }

    if (value.HasMember("AccelerateMainland") && !value["AccelerateMainland"].IsNull())
    {
        if (!value["AccelerateMainland"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.AccelerateMainland` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accelerateMainland.Deserialize(value["AccelerateMainland"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accelerateMainlandHasBeenSet = true;
    }

    if (value.HasMember("StandardDebug") && !value["StandardDebug"].IsNull())
    {
        if (!value["StandardDebug"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneConfig.StandardDebug` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_standardDebug.Deserialize(value["StandardDebug"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_standardDebugHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_smartRoutingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartRouting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartRouting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cachePrefreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachePrefresh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cachePrefresh.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offlineCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forceRedirectHTTPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirectHTTPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirectHTTPS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hSTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HSTS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hSTS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tLSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tLSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oCSPStaplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OCSPStapling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oCSPStapling.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hTTP2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTP2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hTTP2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qUICHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUIC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qUIC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamHTTP2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHTTP2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamHTTP2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPv6.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSocket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postMaxSize.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIPHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIPHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIPCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIPCountry.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_grpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grpc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accelerateMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accelerateMainland.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_standardDebugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardDebug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_standardDebug.ToJsonObject(value[key.c_str()], allocator);
    }

}


SmartRoutingParameters ZoneConfig::GetSmartRouting() const
{
    return m_smartRouting;
}

void ZoneConfig::SetSmartRouting(const SmartRoutingParameters& _smartRouting)
{
    m_smartRouting = _smartRouting;
    m_smartRoutingHasBeenSet = true;
}

bool ZoneConfig::SmartRoutingHasBeenSet() const
{
    return m_smartRoutingHasBeenSet;
}

CacheConfigParameters ZoneConfig::GetCache() const
{
    return m_cache;
}

void ZoneConfig::SetCache(const CacheConfigParameters& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool ZoneConfig::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

MaxAgeParameters ZoneConfig::GetMaxAge() const
{
    return m_maxAge;
}

void ZoneConfig::SetMaxAge(const MaxAgeParameters& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool ZoneConfig::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

CacheKeyConfigParameters ZoneConfig::GetCacheKey() const
{
    return m_cacheKey;
}

void ZoneConfig::SetCacheKey(const CacheKeyConfigParameters& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool ZoneConfig::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

CachePrefreshParameters ZoneConfig::GetCachePrefresh() const
{
    return m_cachePrefresh;
}

void ZoneConfig::SetCachePrefresh(const CachePrefreshParameters& _cachePrefresh)
{
    m_cachePrefresh = _cachePrefresh;
    m_cachePrefreshHasBeenSet = true;
}

bool ZoneConfig::CachePrefreshHasBeenSet() const
{
    return m_cachePrefreshHasBeenSet;
}

OfflineCacheParameters ZoneConfig::GetOfflineCache() const
{
    return m_offlineCache;
}

void ZoneConfig::SetOfflineCache(const OfflineCacheParameters& _offlineCache)
{
    m_offlineCache = _offlineCache;
    m_offlineCacheHasBeenSet = true;
}

bool ZoneConfig::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

CompressionParameters ZoneConfig::GetCompression() const
{
    return m_compression;
}

void ZoneConfig::SetCompression(const CompressionParameters& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool ZoneConfig::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

ForceRedirectHTTPSParameters ZoneConfig::GetForceRedirectHTTPS() const
{
    return m_forceRedirectHTTPS;
}

void ZoneConfig::SetForceRedirectHTTPS(const ForceRedirectHTTPSParameters& _forceRedirectHTTPS)
{
    m_forceRedirectHTTPS = _forceRedirectHTTPS;
    m_forceRedirectHTTPSHasBeenSet = true;
}

bool ZoneConfig::ForceRedirectHTTPSHasBeenSet() const
{
    return m_forceRedirectHTTPSHasBeenSet;
}

HSTSParameters ZoneConfig::GetHSTS() const
{
    return m_hSTS;
}

void ZoneConfig::SetHSTS(const HSTSParameters& _hSTS)
{
    m_hSTS = _hSTS;
    m_hSTSHasBeenSet = true;
}

bool ZoneConfig::HSTSHasBeenSet() const
{
    return m_hSTSHasBeenSet;
}

TLSConfigParameters ZoneConfig::GetTLSConfig() const
{
    return m_tLSConfig;
}

void ZoneConfig::SetTLSConfig(const TLSConfigParameters& _tLSConfig)
{
    m_tLSConfig = _tLSConfig;
    m_tLSConfigHasBeenSet = true;
}

bool ZoneConfig::TLSConfigHasBeenSet() const
{
    return m_tLSConfigHasBeenSet;
}

OCSPStaplingParameters ZoneConfig::GetOCSPStapling() const
{
    return m_oCSPStapling;
}

void ZoneConfig::SetOCSPStapling(const OCSPStaplingParameters& _oCSPStapling)
{
    m_oCSPStapling = _oCSPStapling;
    m_oCSPStaplingHasBeenSet = true;
}

bool ZoneConfig::OCSPStaplingHasBeenSet() const
{
    return m_oCSPStaplingHasBeenSet;
}

HTTP2Parameters ZoneConfig::GetHTTP2() const
{
    return m_hTTP2;
}

void ZoneConfig::SetHTTP2(const HTTP2Parameters& _hTTP2)
{
    m_hTTP2 = _hTTP2;
    m_hTTP2HasBeenSet = true;
}

bool ZoneConfig::HTTP2HasBeenSet() const
{
    return m_hTTP2HasBeenSet;
}

QUICParameters ZoneConfig::GetQUIC() const
{
    return m_qUIC;
}

void ZoneConfig::SetQUIC(const QUICParameters& _qUIC)
{
    m_qUIC = _qUIC;
    m_qUICHasBeenSet = true;
}

bool ZoneConfig::QUICHasBeenSet() const
{
    return m_qUICHasBeenSet;
}

UpstreamHTTP2Parameters ZoneConfig::GetUpstreamHTTP2() const
{
    return m_upstreamHTTP2;
}

void ZoneConfig::SetUpstreamHTTP2(const UpstreamHTTP2Parameters& _upstreamHTTP2)
{
    m_upstreamHTTP2 = _upstreamHTTP2;
    m_upstreamHTTP2HasBeenSet = true;
}

bool ZoneConfig::UpstreamHTTP2HasBeenSet() const
{
    return m_upstreamHTTP2HasBeenSet;
}

IPv6Parameters ZoneConfig::GetIPv6() const
{
    return m_iPv6;
}

void ZoneConfig::SetIPv6(const IPv6Parameters& _iPv6)
{
    m_iPv6 = _iPv6;
    m_iPv6HasBeenSet = true;
}

bool ZoneConfig::IPv6HasBeenSet() const
{
    return m_iPv6HasBeenSet;
}

WebSocketParameters ZoneConfig::GetWebSocket() const
{
    return m_webSocket;
}

void ZoneConfig::SetWebSocket(const WebSocketParameters& _webSocket)
{
    m_webSocket = _webSocket;
    m_webSocketHasBeenSet = true;
}

bool ZoneConfig::WebSocketHasBeenSet() const
{
    return m_webSocketHasBeenSet;
}

PostMaxSizeParameters ZoneConfig::GetPostMaxSize() const
{
    return m_postMaxSize;
}

void ZoneConfig::SetPostMaxSize(const PostMaxSizeParameters& _postMaxSize)
{
    m_postMaxSize = _postMaxSize;
    m_postMaxSizeHasBeenSet = true;
}

bool ZoneConfig::PostMaxSizeHasBeenSet() const
{
    return m_postMaxSizeHasBeenSet;
}

ClientIPHeaderParameters ZoneConfig::GetClientIPHeader() const
{
    return m_clientIPHeader;
}

void ZoneConfig::SetClientIPHeader(const ClientIPHeaderParameters& _clientIPHeader)
{
    m_clientIPHeader = _clientIPHeader;
    m_clientIPHeaderHasBeenSet = true;
}

bool ZoneConfig::ClientIPHeaderHasBeenSet() const
{
    return m_clientIPHeaderHasBeenSet;
}

ClientIPCountryParameters ZoneConfig::GetClientIPCountry() const
{
    return m_clientIPCountry;
}

void ZoneConfig::SetClientIPCountry(const ClientIPCountryParameters& _clientIPCountry)
{
    m_clientIPCountry = _clientIPCountry;
    m_clientIPCountryHasBeenSet = true;
}

bool ZoneConfig::ClientIPCountryHasBeenSet() const
{
    return m_clientIPCountryHasBeenSet;
}

GrpcParameters ZoneConfig::GetGrpc() const
{
    return m_grpc;
}

void ZoneConfig::SetGrpc(const GrpcParameters& _grpc)
{
    m_grpc = _grpc;
    m_grpcHasBeenSet = true;
}

bool ZoneConfig::GrpcHasBeenSet() const
{
    return m_grpcHasBeenSet;
}

AccelerateMainlandParameters ZoneConfig::GetAccelerateMainland() const
{
    return m_accelerateMainland;
}

void ZoneConfig::SetAccelerateMainland(const AccelerateMainlandParameters& _accelerateMainland)
{
    m_accelerateMainland = _accelerateMainland;
    m_accelerateMainlandHasBeenSet = true;
}

bool ZoneConfig::AccelerateMainlandHasBeenSet() const
{
    return m_accelerateMainlandHasBeenSet;
}

StandardDebugParameters ZoneConfig::GetStandardDebug() const
{
    return m_standardDebug;
}

void ZoneConfig::SetStandardDebug(const StandardDebugParameters& _standardDebug)
{
    m_standardDebug = _standardDebug;
    m_standardDebugHasBeenSet = true;
}

bool ZoneConfig::StandardDebugHasBeenSet() const
{
    return m_standardDebugHasBeenSet;
}

