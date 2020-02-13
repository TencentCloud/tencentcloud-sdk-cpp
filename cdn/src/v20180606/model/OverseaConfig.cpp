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

#include <tencentcloud/cdn/v20180606/model/OverseaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

OverseaConfig::OverseaConfig() :
    m_authenticationHasBeenSet(false),
    m_bandwidthAlertHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_downstreamCappingHasBeenSet(false),
    m_errorPageHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_ipFilterHasBeenSet(false),
    m_ipFreqLimitHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_originPullOptimizationHasBeenSet(false),
    m_rangeOriginPullHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_responseHeaderHasBeenSet(false),
    m_responseHeaderCacheHasBeenSet(false),
    m_seoHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_statusCodeCacheHasBeenSet(false),
    m_videoSeekHasBeenSet(false)
{
}

CoreInternalOutcome OverseaConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Authentication` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authentication.Deserialize(value["Authentication"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("BandwidthAlert") && !value["BandwidthAlert"].IsNull())
    {
        if (!value["BandwidthAlert"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.BandwidthAlert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bandwidthAlert.Deserialize(value["BandwidthAlert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bandwidthAlertHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("CacheKey") && !value["CacheKey"].IsNull())
    {
        if (!value["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(value["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Compression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compression.Deserialize(value["Compression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("DownstreamCapping") && !value["DownstreamCapping"].IsNull())
    {
        if (!value["DownstreamCapping"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.DownstreamCapping` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_downstreamCapping.Deserialize(value["DownstreamCapping"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_downstreamCappingHasBeenSet = true;
    }

    if (value.HasMember("ErrorPage") && !value["ErrorPage"].IsNull())
    {
        if (!value["ErrorPage"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.ErrorPage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorPage.Deserialize(value["ErrorPage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorPageHasBeenSet = true;
    }

    if (value.HasMember("FollowRedirect") && !value["FollowRedirect"].IsNull())
    {
        if (!value["FollowRedirect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.FollowRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followRedirect.Deserialize(value["FollowRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followRedirectHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirect") && !value["ForceRedirect"].IsNull())
    {
        if (!value["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.ForceRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirect.Deserialize(value["ForceRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHasBeenSet = true;
    }

    if (value.HasMember("Https") && !value["Https"].IsNull())
    {
        if (!value["Https"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Https` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_https.Deserialize(value["Https"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsHasBeenSet = true;
    }

    if (value.HasMember("IpFilter") && !value["IpFilter"].IsNull())
    {
        if (!value["IpFilter"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.IpFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipFilter.Deserialize(value["IpFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipFilterHasBeenSet = true;
    }

    if (value.HasMember("IpFreqLimit") && !value["IpFreqLimit"].IsNull())
    {
        if (!value["IpFreqLimit"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.IpFreqLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipFreqLimit.Deserialize(value["IpFreqLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipFreqLimitHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.MaxAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAge.Deserialize(value["MaxAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(value["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (value.HasMember("OriginPullOptimization") && !value["OriginPullOptimization"].IsNull())
    {
        if (!value["OriginPullOptimization"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.OriginPullOptimization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originPullOptimization.Deserialize(value["OriginPullOptimization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originPullOptimizationHasBeenSet = true;
    }

    if (value.HasMember("RangeOriginPull") && !value["RangeOriginPull"].IsNull())
    {
        if (!value["RangeOriginPull"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.RangeOriginPull` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rangeOriginPull.Deserialize(value["RangeOriginPull"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeOriginPullHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Referer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_referer.Deserialize(value["Referer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_refererHasBeenSet = true;
    }

    if (value.HasMember("RequestHeader") && !value["RequestHeader"].IsNull())
    {
        if (!value["RequestHeader"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.RequestHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestHeader.Deserialize(value["RequestHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestHeaderHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeader") && !value["ResponseHeader"].IsNull())
    {
        if (!value["ResponseHeader"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.ResponseHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseHeader.Deserialize(value["ResponseHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseHeaderHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeaderCache") && !value["ResponseHeaderCache"].IsNull())
    {
        if (!value["ResponseHeaderCache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.ResponseHeaderCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseHeaderCache.Deserialize(value["ResponseHeaderCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseHeaderCacheHasBeenSet = true;
    }

    if (value.HasMember("Seo") && !value["Seo"].IsNull())
    {
        if (!value["Seo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.Seo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seo.Deserialize(value["Seo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seoHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("StatusCodeCache") && !value["StatusCodeCache"].IsNull())
    {
        if (!value["StatusCodeCache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.StatusCodeCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statusCodeCache.Deserialize(value["StatusCodeCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusCodeCacheHasBeenSet = true;
    }

    if (value.HasMember("VideoSeek") && !value["VideoSeek"].IsNull())
    {
        if (!value["VideoSeek"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverseaConfig.VideoSeek` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoSeek.Deserialize(value["VideoSeek"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoSeekHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverseaConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_authenticationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bandwidthAlertHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bandwidthAlert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_downstreamCappingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DownstreamCapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_downstreamCapping.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipFilterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipFreqLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpFreqLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipFreqLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originPullOptimizationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginPullOptimization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originPullOptimization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeOriginPullHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RangeOriginPull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rangeOriginPull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_referer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_requestHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseHeaderCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_responseHeaderCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_seoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_seo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusCodeCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_statusCodeCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoSeekHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoSeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoSeek.ToJsonObject(value[key.c_str()], allocator);
    }

}


Authentication OverseaConfig::GetAuthentication() const
{
    return m_authentication;
}

void OverseaConfig::SetAuthentication(const Authentication& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool OverseaConfig::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

BandwidthAlert OverseaConfig::GetBandwidthAlert() const
{
    return m_bandwidthAlert;
}

void OverseaConfig::SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert)
{
    m_bandwidthAlert = _bandwidthAlert;
    m_bandwidthAlertHasBeenSet = true;
}

bool OverseaConfig::BandwidthAlertHasBeenSet() const
{
    return m_bandwidthAlertHasBeenSet;
}

Cache OverseaConfig::GetCache() const
{
    return m_cache;
}

void OverseaConfig::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool OverseaConfig::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

CacheKey OverseaConfig::GetCacheKey() const
{
    return m_cacheKey;
}

void OverseaConfig::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool OverseaConfig::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

Compression OverseaConfig::GetCompression() const
{
    return m_compression;
}

void OverseaConfig::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool OverseaConfig::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

DownstreamCapping OverseaConfig::GetDownstreamCapping() const
{
    return m_downstreamCapping;
}

void OverseaConfig::SetDownstreamCapping(const DownstreamCapping& _downstreamCapping)
{
    m_downstreamCapping = _downstreamCapping;
    m_downstreamCappingHasBeenSet = true;
}

bool OverseaConfig::DownstreamCappingHasBeenSet() const
{
    return m_downstreamCappingHasBeenSet;
}

ErrorPage OverseaConfig::GetErrorPage() const
{
    return m_errorPage;
}

void OverseaConfig::SetErrorPage(const ErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool OverseaConfig::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

FollowRedirect OverseaConfig::GetFollowRedirect() const
{
    return m_followRedirect;
}

void OverseaConfig::SetFollowRedirect(const FollowRedirect& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool OverseaConfig::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

ForceRedirect OverseaConfig::GetForceRedirect() const
{
    return m_forceRedirect;
}

void OverseaConfig::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool OverseaConfig::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Https OverseaConfig::GetHttps() const
{
    return m_https;
}

void OverseaConfig::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool OverseaConfig::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

IpFilter OverseaConfig::GetIpFilter() const
{
    return m_ipFilter;
}

void OverseaConfig::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool OverseaConfig::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit OverseaConfig::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void OverseaConfig::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool OverseaConfig::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

MaxAge OverseaConfig::GetMaxAge() const
{
    return m_maxAge;
}

void OverseaConfig::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool OverseaConfig::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

Origin OverseaConfig::GetOrigin() const
{
    return m_origin;
}

void OverseaConfig::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool OverseaConfig::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

OriginPullOptimization OverseaConfig::GetOriginPullOptimization() const
{
    return m_originPullOptimization;
}

void OverseaConfig::SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization)
{
    m_originPullOptimization = _originPullOptimization;
    m_originPullOptimizationHasBeenSet = true;
}

bool OverseaConfig::OriginPullOptimizationHasBeenSet() const
{
    return m_originPullOptimizationHasBeenSet;
}

RangeOriginPull OverseaConfig::GetRangeOriginPull() const
{
    return m_rangeOriginPull;
}

void OverseaConfig::SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull)
{
    m_rangeOriginPull = _rangeOriginPull;
    m_rangeOriginPullHasBeenSet = true;
}

bool OverseaConfig::RangeOriginPullHasBeenSet() const
{
    return m_rangeOriginPullHasBeenSet;
}

Referer OverseaConfig::GetReferer() const
{
    return m_referer;
}

void OverseaConfig::SetReferer(const Referer& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool OverseaConfig::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

RequestHeader OverseaConfig::GetRequestHeader() const
{
    return m_requestHeader;
}

void OverseaConfig::SetRequestHeader(const RequestHeader& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool OverseaConfig::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

ResponseHeader OverseaConfig::GetResponseHeader() const
{
    return m_responseHeader;
}

void OverseaConfig::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool OverseaConfig::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

ResponseHeaderCache OverseaConfig::GetResponseHeaderCache() const
{
    return m_responseHeaderCache;
}

void OverseaConfig::SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache)
{
    m_responseHeaderCache = _responseHeaderCache;
    m_responseHeaderCacheHasBeenSet = true;
}

bool OverseaConfig::ResponseHeaderCacheHasBeenSet() const
{
    return m_responseHeaderCacheHasBeenSet;
}

Seo OverseaConfig::GetSeo() const
{
    return m_seo;
}

void OverseaConfig::SetSeo(const Seo& _seo)
{
    m_seo = _seo;
    m_seoHasBeenSet = true;
}

bool OverseaConfig::SeoHasBeenSet() const
{
    return m_seoHasBeenSet;
}

string OverseaConfig::GetServiceType() const
{
    return m_serviceType;
}

void OverseaConfig::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool OverseaConfig::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

StatusCodeCache OverseaConfig::GetStatusCodeCache() const
{
    return m_statusCodeCache;
}

void OverseaConfig::SetStatusCodeCache(const StatusCodeCache& _statusCodeCache)
{
    m_statusCodeCache = _statusCodeCache;
    m_statusCodeCacheHasBeenSet = true;
}

bool OverseaConfig::StatusCodeCacheHasBeenSet() const
{
    return m_statusCodeCacheHasBeenSet;
}

VideoSeek OverseaConfig::GetVideoSeek() const
{
    return m_videoSeek;
}

void OverseaConfig::SetVideoSeek(const VideoSeek& _videoSeek)
{
    m_videoSeek = _videoSeek;
    m_videoSeekHasBeenSet = true;
}

bool OverseaConfig::VideoSeekHasBeenSet() const
{
    return m_videoSeekHasBeenSet;
}

