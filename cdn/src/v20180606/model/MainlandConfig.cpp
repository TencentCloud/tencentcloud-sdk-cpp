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

#include <tencentcloud/cdn/v20180606/model/MainlandConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

MainlandConfig::MainlandConfig() :
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
    m_videoSeekHasBeenSet(false),
    m_awsPrivateAccessHasBeenSet(false),
    m_ossPrivateAccessHasBeenSet(false),
    m_hwPrivateAccessHasBeenSet(false),
    m_qnPrivateAccessHasBeenSet(false)
{
}

CoreInternalOutcome MainlandConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Authentication` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.BandwidthAlert` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Cache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.CacheKey` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Compression` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.DownstreamCapping` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.ErrorPage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.FollowRedirect` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.ForceRedirect` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Https` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.IpFilter` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.IpFreqLimit` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.MaxAge` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Origin` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.OriginPullOptimization` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.RangeOriginPull` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Referer` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.RequestHeader` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.ResponseHeader` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.ResponseHeaderCache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.Seo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("StatusCodeCache") && !value["StatusCodeCache"].IsNull())
    {
        if (!value["StatusCodeCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.StatusCodeCache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.VideoSeek` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoSeek.Deserialize(value["VideoSeek"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoSeekHasBeenSet = true;
    }

    if (value.HasMember("AwsPrivateAccess") && !value["AwsPrivateAccess"].IsNull())
    {
        if (!value["AwsPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.AwsPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_awsPrivateAccess.Deserialize(value["AwsPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_awsPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("OssPrivateAccess") && !value["OssPrivateAccess"].IsNull())
    {
        if (!value["OssPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.OssPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ossPrivateAccess.Deserialize(value["OssPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ossPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("HwPrivateAccess") && !value["HwPrivateAccess"].IsNull())
    {
        if (!value["HwPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.HwPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hwPrivateAccess.Deserialize(value["HwPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hwPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("QnPrivateAccess") && !value["QnPrivateAccess"].IsNull())
    {
        if (!value["QnPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MainlandConfig.QnPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qnPrivateAccess.Deserialize(value["QnPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qnPrivateAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MainlandConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bandwidthAlertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bandwidthAlert.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_downstreamCappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamCapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downstreamCapping.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_ipFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipFreqLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFreqLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFreqLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originPullOptimizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullOptimization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originPullOptimization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeOriginPullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeOriginPull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rangeOriginPull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_referer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeaderCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeaderCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_seoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusCodeCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCodeCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statusCodeCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoSeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSeek.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_awsPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_awsPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ossPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OssPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ossPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hwPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hwPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qnPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QnPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qnPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

}


Authentication MainlandConfig::GetAuthentication() const
{
    return m_authentication;
}

void MainlandConfig::SetAuthentication(const Authentication& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool MainlandConfig::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

BandwidthAlert MainlandConfig::GetBandwidthAlert() const
{
    return m_bandwidthAlert;
}

void MainlandConfig::SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert)
{
    m_bandwidthAlert = _bandwidthAlert;
    m_bandwidthAlertHasBeenSet = true;
}

bool MainlandConfig::BandwidthAlertHasBeenSet() const
{
    return m_bandwidthAlertHasBeenSet;
}

Cache MainlandConfig::GetCache() const
{
    return m_cache;
}

void MainlandConfig::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool MainlandConfig::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

CacheKey MainlandConfig::GetCacheKey() const
{
    return m_cacheKey;
}

void MainlandConfig::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool MainlandConfig::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

Compression MainlandConfig::GetCompression() const
{
    return m_compression;
}

void MainlandConfig::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool MainlandConfig::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

DownstreamCapping MainlandConfig::GetDownstreamCapping() const
{
    return m_downstreamCapping;
}

void MainlandConfig::SetDownstreamCapping(const DownstreamCapping& _downstreamCapping)
{
    m_downstreamCapping = _downstreamCapping;
    m_downstreamCappingHasBeenSet = true;
}

bool MainlandConfig::DownstreamCappingHasBeenSet() const
{
    return m_downstreamCappingHasBeenSet;
}

ErrorPage MainlandConfig::GetErrorPage() const
{
    return m_errorPage;
}

void MainlandConfig::SetErrorPage(const ErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool MainlandConfig::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

FollowRedirect MainlandConfig::GetFollowRedirect() const
{
    return m_followRedirect;
}

void MainlandConfig::SetFollowRedirect(const FollowRedirect& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool MainlandConfig::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

ForceRedirect MainlandConfig::GetForceRedirect() const
{
    return m_forceRedirect;
}

void MainlandConfig::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool MainlandConfig::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Https MainlandConfig::GetHttps() const
{
    return m_https;
}

void MainlandConfig::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool MainlandConfig::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

IpFilter MainlandConfig::GetIpFilter() const
{
    return m_ipFilter;
}

void MainlandConfig::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool MainlandConfig::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit MainlandConfig::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void MainlandConfig::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool MainlandConfig::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

MaxAge MainlandConfig::GetMaxAge() const
{
    return m_maxAge;
}

void MainlandConfig::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool MainlandConfig::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

Origin MainlandConfig::GetOrigin() const
{
    return m_origin;
}

void MainlandConfig::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool MainlandConfig::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

OriginPullOptimization MainlandConfig::GetOriginPullOptimization() const
{
    return m_originPullOptimization;
}

void MainlandConfig::SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization)
{
    m_originPullOptimization = _originPullOptimization;
    m_originPullOptimizationHasBeenSet = true;
}

bool MainlandConfig::OriginPullOptimizationHasBeenSet() const
{
    return m_originPullOptimizationHasBeenSet;
}

RangeOriginPull MainlandConfig::GetRangeOriginPull() const
{
    return m_rangeOriginPull;
}

void MainlandConfig::SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull)
{
    m_rangeOriginPull = _rangeOriginPull;
    m_rangeOriginPullHasBeenSet = true;
}

bool MainlandConfig::RangeOriginPullHasBeenSet() const
{
    return m_rangeOriginPullHasBeenSet;
}

Referer MainlandConfig::GetReferer() const
{
    return m_referer;
}

void MainlandConfig::SetReferer(const Referer& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool MainlandConfig::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

RequestHeader MainlandConfig::GetRequestHeader() const
{
    return m_requestHeader;
}

void MainlandConfig::SetRequestHeader(const RequestHeader& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool MainlandConfig::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

ResponseHeader MainlandConfig::GetResponseHeader() const
{
    return m_responseHeader;
}

void MainlandConfig::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool MainlandConfig::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

ResponseHeaderCache MainlandConfig::GetResponseHeaderCache() const
{
    return m_responseHeaderCache;
}

void MainlandConfig::SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache)
{
    m_responseHeaderCache = _responseHeaderCache;
    m_responseHeaderCacheHasBeenSet = true;
}

bool MainlandConfig::ResponseHeaderCacheHasBeenSet() const
{
    return m_responseHeaderCacheHasBeenSet;
}

Seo MainlandConfig::GetSeo() const
{
    return m_seo;
}

void MainlandConfig::SetSeo(const Seo& _seo)
{
    m_seo = _seo;
    m_seoHasBeenSet = true;
}

bool MainlandConfig::SeoHasBeenSet() const
{
    return m_seoHasBeenSet;
}

string MainlandConfig::GetServiceType() const
{
    return m_serviceType;
}

void MainlandConfig::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool MainlandConfig::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

StatusCodeCache MainlandConfig::GetStatusCodeCache() const
{
    return m_statusCodeCache;
}

void MainlandConfig::SetStatusCodeCache(const StatusCodeCache& _statusCodeCache)
{
    m_statusCodeCache = _statusCodeCache;
    m_statusCodeCacheHasBeenSet = true;
}

bool MainlandConfig::StatusCodeCacheHasBeenSet() const
{
    return m_statusCodeCacheHasBeenSet;
}

VideoSeek MainlandConfig::GetVideoSeek() const
{
    return m_videoSeek;
}

void MainlandConfig::SetVideoSeek(const VideoSeek& _videoSeek)
{
    m_videoSeek = _videoSeek;
    m_videoSeekHasBeenSet = true;
}

bool MainlandConfig::VideoSeekHasBeenSet() const
{
    return m_videoSeekHasBeenSet;
}

AwsPrivateAccess MainlandConfig::GetAwsPrivateAccess() const
{
    return m_awsPrivateAccess;
}

void MainlandConfig::SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess)
{
    m_awsPrivateAccess = _awsPrivateAccess;
    m_awsPrivateAccessHasBeenSet = true;
}

bool MainlandConfig::AwsPrivateAccessHasBeenSet() const
{
    return m_awsPrivateAccessHasBeenSet;
}

OssPrivateAccess MainlandConfig::GetOssPrivateAccess() const
{
    return m_ossPrivateAccess;
}

void MainlandConfig::SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess)
{
    m_ossPrivateAccess = _ossPrivateAccess;
    m_ossPrivateAccessHasBeenSet = true;
}

bool MainlandConfig::OssPrivateAccessHasBeenSet() const
{
    return m_ossPrivateAccessHasBeenSet;
}

HwPrivateAccess MainlandConfig::GetHwPrivateAccess() const
{
    return m_hwPrivateAccess;
}

void MainlandConfig::SetHwPrivateAccess(const HwPrivateAccess& _hwPrivateAccess)
{
    m_hwPrivateAccess = _hwPrivateAccess;
    m_hwPrivateAccessHasBeenSet = true;
}

bool MainlandConfig::HwPrivateAccessHasBeenSet() const
{
    return m_hwPrivateAccessHasBeenSet;
}

QnPrivateAccess MainlandConfig::GetQnPrivateAccess() const
{
    return m_qnPrivateAccess;
}

void MainlandConfig::SetQnPrivateAccess(const QnPrivateAccess& _qnPrivateAccess)
{
    m_qnPrivateAccess = _qnPrivateAccess;
    m_qnPrivateAccessHasBeenSet = true;
}

bool MainlandConfig::QnPrivateAccessHasBeenSet() const
{
    return m_qnPrivateAccessHasBeenSet;
}

