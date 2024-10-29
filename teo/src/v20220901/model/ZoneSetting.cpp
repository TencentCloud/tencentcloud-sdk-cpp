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

#include <tencentcloud/teo/v20220901/model/ZoneSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ZoneSetting::ZoneSetting() :
    m_zoneNameHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_postMaxSizeHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_upstreamHttp2HasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_cacheConfigHasBeenSet(false),
    m_originHasBeenSet(false),
    m_smartRoutingHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_offlineCacheHasBeenSet(false),
    m_webSocketHasBeenSet(false),
    m_clientIpHeaderHasBeenSet(false),
    m_cachePrefreshHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_clientIpCountryHasBeenSet(false),
    m_grpcHasBeenSet(false),
    m_imageOptimizeHasBeenSet(false),
    m_accelerateMainlandHasBeenSet(false),
    m_standardDebugHasBeenSet(false),
    m_jITVideoProcessHasBeenSet(false)
{
}

CoreInternalOutcome ZoneSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("CacheKey") && !value["CacheKey"].IsNull())
    {
        if (!value["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(value["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }

    if (value.HasMember("Quic") && !value["Quic"].IsNull())
    {
        if (!value["Quic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Quic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quic.Deserialize(value["Quic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quicHasBeenSet = true;
    }

    if (value.HasMember("PostMaxSize") && !value["PostMaxSize"].IsNull())
    {
        if (!value["PostMaxSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.PostMaxSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postMaxSize.Deserialize(value["PostMaxSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Compression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compression.Deserialize(value["Compression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHttp2") && !value["UpstreamHttp2"].IsNull())
    {
        if (!value["UpstreamHttp2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.UpstreamHttp2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamHttp2.Deserialize(value["UpstreamHttp2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamHttp2HasBeenSet = true;
    }

    if (value.HasMember("ForceRedirect") && !value["ForceRedirect"].IsNull())
    {
        if (!value["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.ForceRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirect.Deserialize(value["ForceRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHasBeenSet = true;
    }

    if (value.HasMember("CacheConfig") && !value["CacheConfig"].IsNull())
    {
        if (!value["CacheConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.CacheConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheConfig.Deserialize(value["CacheConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheConfigHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(value["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (value.HasMember("SmartRouting") && !value["SmartRouting"].IsNull())
    {
        if (!value["SmartRouting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.SmartRouting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartRouting.Deserialize(value["SmartRouting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartRoutingHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.MaxAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAge.Deserialize(value["MaxAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("OfflineCache") && !value["OfflineCache"].IsNull())
    {
        if (!value["OfflineCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.OfflineCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineCache.Deserialize(value["OfflineCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineCacheHasBeenSet = true;
    }

    if (value.HasMember("WebSocket") && !value["WebSocket"].IsNull())
    {
        if (!value["WebSocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.WebSocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSocket.Deserialize(value["WebSocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSocketHasBeenSet = true;
    }

    if (value.HasMember("ClientIpHeader") && !value["ClientIpHeader"].IsNull())
    {
        if (!value["ClientIpHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.ClientIpHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIpHeader.Deserialize(value["ClientIpHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIpHeaderHasBeenSet = true;
    }

    if (value.HasMember("CachePrefresh") && !value["CachePrefresh"].IsNull())
    {
        if (!value["CachePrefresh"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.CachePrefresh` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cachePrefresh.Deserialize(value["CachePrefresh"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cachePrefreshHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Ipv6` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipv6.Deserialize(value["Ipv6"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("Https") && !value["Https"].IsNull())
    {
        if (!value["Https"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Https` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_https.Deserialize(value["Https"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsHasBeenSet = true;
    }

    if (value.HasMember("ClientIpCountry") && !value["ClientIpCountry"].IsNull())
    {
        if (!value["ClientIpCountry"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.ClientIpCountry` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIpCountry.Deserialize(value["ClientIpCountry"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIpCountryHasBeenSet = true;
    }

    if (value.HasMember("Grpc") && !value["Grpc"].IsNull())
    {
        if (!value["Grpc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.Grpc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_grpc.Deserialize(value["Grpc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_grpcHasBeenSet = true;
    }

    if (value.HasMember("ImageOptimize") && !value["ImageOptimize"].IsNull())
    {
        if (!value["ImageOptimize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.ImageOptimize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageOptimize.Deserialize(value["ImageOptimize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageOptimizeHasBeenSet = true;
    }

    if (value.HasMember("AccelerateMainland") && !value["AccelerateMainland"].IsNull())
    {
        if (!value["AccelerateMainland"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.AccelerateMainland` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.StandardDebug` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_standardDebug.Deserialize(value["StandardDebug"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_standardDebugHasBeenSet = true;
    }

    if (value.HasMember("JITVideoProcess") && !value["JITVideoProcess"].IsNull())
    {
        if (!value["JITVideoProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneSetting.JITVideoProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jITVideoProcess.Deserialize(value["JITVideoProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jITVideoProcessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postMaxSize.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamHttp2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHttp2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamHttp2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smartRoutingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartRouting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartRouting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offlineCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSocket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIpHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIpHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIpHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cachePrefreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachePrefresh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cachePrefresh.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIpCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIpCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIpCountry.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_grpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_grpc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageOptimizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOptimize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageOptimize.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_jITVideoProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JITVideoProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jITVideoProcess.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ZoneSetting::GetZoneName() const
{
    return m_zoneName;
}

void ZoneSetting::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneSetting::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string ZoneSetting::GetArea() const
{
    return m_area;
}

void ZoneSetting::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ZoneSetting::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

CacheKey ZoneSetting::GetCacheKey() const
{
    return m_cacheKey;
}

void ZoneSetting::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool ZoneSetting::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

Quic ZoneSetting::GetQuic() const
{
    return m_quic;
}

void ZoneSetting::SetQuic(const Quic& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool ZoneSetting::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

PostMaxSize ZoneSetting::GetPostMaxSize() const
{
    return m_postMaxSize;
}

void ZoneSetting::SetPostMaxSize(const PostMaxSize& _postMaxSize)
{
    m_postMaxSize = _postMaxSize;
    m_postMaxSizeHasBeenSet = true;
}

bool ZoneSetting::PostMaxSizeHasBeenSet() const
{
    return m_postMaxSizeHasBeenSet;
}

Compression ZoneSetting::GetCompression() const
{
    return m_compression;
}

void ZoneSetting::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool ZoneSetting::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

UpstreamHttp2 ZoneSetting::GetUpstreamHttp2() const
{
    return m_upstreamHttp2;
}

void ZoneSetting::SetUpstreamHttp2(const UpstreamHttp2& _upstreamHttp2)
{
    m_upstreamHttp2 = _upstreamHttp2;
    m_upstreamHttp2HasBeenSet = true;
}

bool ZoneSetting::UpstreamHttp2HasBeenSet() const
{
    return m_upstreamHttp2HasBeenSet;
}

ForceRedirect ZoneSetting::GetForceRedirect() const
{
    return m_forceRedirect;
}

void ZoneSetting::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool ZoneSetting::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

CacheConfig ZoneSetting::GetCacheConfig() const
{
    return m_cacheConfig;
}

void ZoneSetting::SetCacheConfig(const CacheConfig& _cacheConfig)
{
    m_cacheConfig = _cacheConfig;
    m_cacheConfigHasBeenSet = true;
}

bool ZoneSetting::CacheConfigHasBeenSet() const
{
    return m_cacheConfigHasBeenSet;
}

Origin ZoneSetting::GetOrigin() const
{
    return m_origin;
}

void ZoneSetting::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool ZoneSetting::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

SmartRouting ZoneSetting::GetSmartRouting() const
{
    return m_smartRouting;
}

void ZoneSetting::SetSmartRouting(const SmartRouting& _smartRouting)
{
    m_smartRouting = _smartRouting;
    m_smartRoutingHasBeenSet = true;
}

bool ZoneSetting::SmartRoutingHasBeenSet() const
{
    return m_smartRoutingHasBeenSet;
}

MaxAge ZoneSetting::GetMaxAge() const
{
    return m_maxAge;
}

void ZoneSetting::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool ZoneSetting::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

OfflineCache ZoneSetting::GetOfflineCache() const
{
    return m_offlineCache;
}

void ZoneSetting::SetOfflineCache(const OfflineCache& _offlineCache)
{
    m_offlineCache = _offlineCache;
    m_offlineCacheHasBeenSet = true;
}

bool ZoneSetting::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

WebSocket ZoneSetting::GetWebSocket() const
{
    return m_webSocket;
}

void ZoneSetting::SetWebSocket(const WebSocket& _webSocket)
{
    m_webSocket = _webSocket;
    m_webSocketHasBeenSet = true;
}

bool ZoneSetting::WebSocketHasBeenSet() const
{
    return m_webSocketHasBeenSet;
}

ClientIpHeader ZoneSetting::GetClientIpHeader() const
{
    return m_clientIpHeader;
}

void ZoneSetting::SetClientIpHeader(const ClientIpHeader& _clientIpHeader)
{
    m_clientIpHeader = _clientIpHeader;
    m_clientIpHeaderHasBeenSet = true;
}

bool ZoneSetting::ClientIpHeaderHasBeenSet() const
{
    return m_clientIpHeaderHasBeenSet;
}

CachePrefresh ZoneSetting::GetCachePrefresh() const
{
    return m_cachePrefresh;
}

void ZoneSetting::SetCachePrefresh(const CachePrefresh& _cachePrefresh)
{
    m_cachePrefresh = _cachePrefresh;
    m_cachePrefreshHasBeenSet = true;
}

bool ZoneSetting::CachePrefreshHasBeenSet() const
{
    return m_cachePrefreshHasBeenSet;
}

Ipv6 ZoneSetting::GetIpv6() const
{
    return m_ipv6;
}

void ZoneSetting::SetIpv6(const Ipv6& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool ZoneSetting::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

Https ZoneSetting::GetHttps() const
{
    return m_https;
}

void ZoneSetting::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool ZoneSetting::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

ClientIpCountry ZoneSetting::GetClientIpCountry() const
{
    return m_clientIpCountry;
}

void ZoneSetting::SetClientIpCountry(const ClientIpCountry& _clientIpCountry)
{
    m_clientIpCountry = _clientIpCountry;
    m_clientIpCountryHasBeenSet = true;
}

bool ZoneSetting::ClientIpCountryHasBeenSet() const
{
    return m_clientIpCountryHasBeenSet;
}

Grpc ZoneSetting::GetGrpc() const
{
    return m_grpc;
}

void ZoneSetting::SetGrpc(const Grpc& _grpc)
{
    m_grpc = _grpc;
    m_grpcHasBeenSet = true;
}

bool ZoneSetting::GrpcHasBeenSet() const
{
    return m_grpcHasBeenSet;
}

ImageOptimize ZoneSetting::GetImageOptimize() const
{
    return m_imageOptimize;
}

void ZoneSetting::SetImageOptimize(const ImageOptimize& _imageOptimize)
{
    m_imageOptimize = _imageOptimize;
    m_imageOptimizeHasBeenSet = true;
}

bool ZoneSetting::ImageOptimizeHasBeenSet() const
{
    return m_imageOptimizeHasBeenSet;
}

AccelerateMainland ZoneSetting::GetAccelerateMainland() const
{
    return m_accelerateMainland;
}

void ZoneSetting::SetAccelerateMainland(const AccelerateMainland& _accelerateMainland)
{
    m_accelerateMainland = _accelerateMainland;
    m_accelerateMainlandHasBeenSet = true;
}

bool ZoneSetting::AccelerateMainlandHasBeenSet() const
{
    return m_accelerateMainlandHasBeenSet;
}

StandardDebug ZoneSetting::GetStandardDebug() const
{
    return m_standardDebug;
}

void ZoneSetting::SetStandardDebug(const StandardDebug& _standardDebug)
{
    m_standardDebug = _standardDebug;
    m_standardDebugHasBeenSet = true;
}

bool ZoneSetting::StandardDebugHasBeenSet() const
{
    return m_standardDebugHasBeenSet;
}

JITVideoProcess ZoneSetting::GetJITVideoProcess() const
{
    return m_jITVideoProcess;
}

void ZoneSetting::SetJITVideoProcess(const JITVideoProcess& _jITVideoProcess)
{
    m_jITVideoProcess = _jITVideoProcess;
    m_jITVideoProcessHasBeenSet = true;
}

bool ZoneSetting::JITVideoProcessHasBeenSet() const
{
    return m_jITVideoProcessHasBeenSet;
}

