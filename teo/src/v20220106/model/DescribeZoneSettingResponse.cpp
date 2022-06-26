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

#include <tencentcloud/teo/v20220106/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeZoneSettingResponse::DescribeZoneSettingResponse() :
    m_cacheHasBeenSet(false),
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
    m_zoneIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_webSocketHasBeenSet(false),
    m_clientIpHeaderHasBeenSet(false),
    m_cachePrefreshHasBeenSet(false)
{
}

CoreInternalOutcome DescribeZoneSettingResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Cache") && !rsp["Cache"].IsNull())
    {
        if (!rsp["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(rsp["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (rsp.HasMember("CacheKey") && !rsp["CacheKey"].IsNull())
    {
        if (!rsp["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(rsp["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }

    if (rsp.HasMember("MaxAge") && !rsp["MaxAge"].IsNull())
    {
        if (!rsp["MaxAge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAge.Deserialize(rsp["MaxAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeHasBeenSet = true;
    }

    if (rsp.HasMember("OfflineCache") && !rsp["OfflineCache"].IsNull())
    {
        if (!rsp["OfflineCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineCache.Deserialize(rsp["OfflineCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineCacheHasBeenSet = true;
    }

    if (rsp.HasMember("Quic") && !rsp["Quic"].IsNull())
    {
        if (!rsp["Quic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Quic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quic.Deserialize(rsp["Quic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quicHasBeenSet = true;
    }

    if (rsp.HasMember("PostMaxSize") && !rsp["PostMaxSize"].IsNull())
    {
        if (!rsp["PostMaxSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PostMaxSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postMaxSize.Deserialize(rsp["PostMaxSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postMaxSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Compression") && !rsp["Compression"].IsNull())
    {
        if (!rsp["Compression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Compression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compression.Deserialize(rsp["Compression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionHasBeenSet = true;
    }

    if (rsp.HasMember("UpstreamHttp2") && !rsp["UpstreamHttp2"].IsNull())
    {
        if (!rsp["UpstreamHttp2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamHttp2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamHttp2.Deserialize(rsp["UpstreamHttp2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamHttp2HasBeenSet = true;
    }

    if (rsp.HasMember("ForceRedirect") && !rsp["ForceRedirect"].IsNull())
    {
        if (!rsp["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ForceRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirect.Deserialize(rsp["ForceRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHasBeenSet = true;
    }

    if (rsp.HasMember("Https") && !rsp["Https"].IsNull())
    {
        if (!rsp["Https"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Https` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_https.Deserialize(rsp["Https"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsHasBeenSet = true;
    }

    if (rsp.HasMember("Origin") && !rsp["Origin"].IsNull())
    {
        if (!rsp["Origin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(rsp["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (rsp.HasMember("SmartRouting") && !rsp["SmartRouting"].IsNull())
    {
        if (!rsp["SmartRouting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartRouting.Deserialize(rsp["SmartRouting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartRoutingHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("WebSocket") && !rsp["WebSocket"].IsNull())
    {
        if (!rsp["WebSocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebSocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSocket.Deserialize(rsp["WebSocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSocketHasBeenSet = true;
    }

    if (rsp.HasMember("ClientIpHeader") && !rsp["ClientIpHeader"].IsNull())
    {
        if (!rsp["ClientIpHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIpHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIpHeader.Deserialize(rsp["ClientIpHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIpHeaderHasBeenSet = true;
    }

    if (rsp.HasMember("CachePrefresh") && !rsp["CachePrefresh"].IsNull())
    {
        if (!rsp["CachePrefresh"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CachePrefresh` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cachePrefresh.Deserialize(rsp["CachePrefresh"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cachePrefreshHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeZoneSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


CacheConfig DescribeZoneSettingResponse::GetCache() const
{
    return m_cache;
}

bool DescribeZoneSettingResponse::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

CacheKey DescribeZoneSettingResponse::GetCacheKey() const
{
    return m_cacheKey;
}

bool DescribeZoneSettingResponse::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

MaxAge DescribeZoneSettingResponse::GetMaxAge() const
{
    return m_maxAge;
}

bool DescribeZoneSettingResponse::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

OfflineCache DescribeZoneSettingResponse::GetOfflineCache() const
{
    return m_offlineCache;
}

bool DescribeZoneSettingResponse::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

Quic DescribeZoneSettingResponse::GetQuic() const
{
    return m_quic;
}

bool DescribeZoneSettingResponse::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

PostMaxSize DescribeZoneSettingResponse::GetPostMaxSize() const
{
    return m_postMaxSize;
}

bool DescribeZoneSettingResponse::PostMaxSizeHasBeenSet() const
{
    return m_postMaxSizeHasBeenSet;
}

Compression DescribeZoneSettingResponse::GetCompression() const
{
    return m_compression;
}

bool DescribeZoneSettingResponse::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

UpstreamHttp2 DescribeZoneSettingResponse::GetUpstreamHttp2() const
{
    return m_upstreamHttp2;
}

bool DescribeZoneSettingResponse::UpstreamHttp2HasBeenSet() const
{
    return m_upstreamHttp2HasBeenSet;
}

ForceRedirect DescribeZoneSettingResponse::GetForceRedirect() const
{
    return m_forceRedirect;
}

bool DescribeZoneSettingResponse::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Https DescribeZoneSettingResponse::GetHttps() const
{
    return m_https;
}

bool DescribeZoneSettingResponse::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

Origin DescribeZoneSettingResponse::GetOrigin() const
{
    return m_origin;
}

bool DescribeZoneSettingResponse::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

SmartRouting DescribeZoneSettingResponse::GetSmartRouting() const
{
    return m_smartRouting;
}

bool DescribeZoneSettingResponse::SmartRoutingHasBeenSet() const
{
    return m_smartRoutingHasBeenSet;
}

string DescribeZoneSettingResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DescribeZoneSettingResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeZoneSettingResponse::GetZone() const
{
    return m_zone;
}

bool DescribeZoneSettingResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

WebSocket DescribeZoneSettingResponse::GetWebSocket() const
{
    return m_webSocket;
}

bool DescribeZoneSettingResponse::WebSocketHasBeenSet() const
{
    return m_webSocketHasBeenSet;
}

ClientIp DescribeZoneSettingResponse::GetClientIpHeader() const
{
    return m_clientIpHeader;
}

bool DescribeZoneSettingResponse::ClientIpHeaderHasBeenSet() const
{
    return m_clientIpHeaderHasBeenSet;
}

CachePrefresh DescribeZoneSettingResponse::GetCachePrefresh() const
{
    return m_cachePrefresh;
}

bool DescribeZoneSettingResponse::CachePrefreshHasBeenSet() const
{
    return m_cachePrefreshHasBeenSet;
}


