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

#include <tencentcloud/cdn/v20180606/model/DetailDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DetailDomain::DetailDomain() :
    m_resourceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_ipFilterHasBeenSet(false),
    m_ipFreqLimitHasBeenSet(false),
    m_statusCodeCacheHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_bandwidthAlertHasBeenSet(false),
    m_rangeOriginPullHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_errorPageHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_responseHeaderHasBeenSet(false),
    m_downstreamCappingHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_responseHeaderCacheHasBeenSet(false),
    m_videoSeekHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_originPullOptimizationHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_seoHasBeenSet(false),
    m_disableHasBeenSet(false),
    m_forceRedirectHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_compatibilityHasBeenSet(false),
    m_specificConfigHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_readonlyHasBeenSet(false),
    m_originPullTimeoutHasBeenSet(false),
    m_awsPrivateAccessHasBeenSet(false),
    m_securityConfigHasBeenSet(false),
    m_imageOptimizationHasBeenSet(false),
    m_userAgentFilterHasBeenSet(false),
    m_accessControlHasBeenSet(false),
    m_advanceHasBeenSet(false),
    m_urlRedirectHasBeenSet(false),
    m_accessPortHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_advancedAuthenticationHasBeenSet(false),
    m_originAuthenticationHasBeenSet(false),
    m_ipv6AccessHasBeenSet(false),
    m_advanceSetHasBeenSet(false),
    m_offlineCacheHasBeenSet(false),
    m_originCombineHasBeenSet(false),
    m_postMaxSizeHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_ossPrivateAccessHasBeenSet(false),
    m_webSocketHasBeenSet(false),
    m_remoteAuthenticationHasBeenSet(false),
    m_shareCnameHasBeenSet(false),
    m_ruleEngineHasBeenSet(false),
    m_parentHostHasBeenSet(false),
    m_hwPrivateAccessHasBeenSet(false),
    m_qnPrivateAccessHasBeenSet(false),
    m_httpsBillingHasBeenSet(false),
    m_othersPrivateAccessHasBeenSet(false),
    m_paramFilterHasBeenSet(false)
{
}

CoreInternalOutcome DetailDomain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Origin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_origin.Deserialize(value["Origin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originHasBeenSet = true;
    }

    if (value.HasMember("IpFilter") && !value["IpFilter"].IsNull())
    {
        if (!value["IpFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.IpFilter` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DetailDomain.IpFreqLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipFreqLimit.Deserialize(value["IpFreqLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipFreqLimitHasBeenSet = true;
    }

    if (value.HasMember("StatusCodeCache") && !value["StatusCodeCache"].IsNull())
    {
        if (!value["StatusCodeCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.StatusCodeCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statusCodeCache.Deserialize(value["StatusCodeCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusCodeCacheHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Compression` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compression.Deserialize(value["Compression"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionHasBeenSet = true;
    }

    if (value.HasMember("BandwidthAlert") && !value["BandwidthAlert"].IsNull())
    {
        if (!value["BandwidthAlert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.BandwidthAlert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bandwidthAlert.Deserialize(value["BandwidthAlert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bandwidthAlertHasBeenSet = true;
    }

    if (value.HasMember("RangeOriginPull") && !value["RangeOriginPull"].IsNull())
    {
        if (!value["RangeOriginPull"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.RangeOriginPull` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rangeOriginPull.Deserialize(value["RangeOriginPull"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeOriginPullHasBeenSet = true;
    }

    if (value.HasMember("FollowRedirect") && !value["FollowRedirect"].IsNull())
    {
        if (!value["FollowRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.FollowRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followRedirect.Deserialize(value["FollowRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followRedirectHasBeenSet = true;
    }

    if (value.HasMember("ErrorPage") && !value["ErrorPage"].IsNull())
    {
        if (!value["ErrorPage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ErrorPage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorPage.Deserialize(value["ErrorPage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorPageHasBeenSet = true;
    }

    if (value.HasMember("RequestHeader") && !value["RequestHeader"].IsNull())
    {
        if (!value["RequestHeader"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.RequestHeader` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ResponseHeader` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseHeader.Deserialize(value["ResponseHeader"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseHeaderHasBeenSet = true;
    }

    if (value.HasMember("DownstreamCapping") && !value["DownstreamCapping"].IsNull())
    {
        if (!value["DownstreamCapping"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.DownstreamCapping` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_downstreamCapping.Deserialize(value["DownstreamCapping"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_downstreamCappingHasBeenSet = true;
    }

    if (value.HasMember("CacheKey") && !value["CacheKey"].IsNull())
    {
        if (!value["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(value["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeaderCache") && !value["ResponseHeaderCache"].IsNull())
    {
        if (!value["ResponseHeaderCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ResponseHeaderCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseHeaderCache.Deserialize(value["ResponseHeaderCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseHeaderCacheHasBeenSet = true;
    }

    if (value.HasMember("VideoSeek") && !value["VideoSeek"].IsNull())
    {
        if (!value["VideoSeek"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.VideoSeek` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoSeek.Deserialize(value["VideoSeek"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoSeekHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("OriginPullOptimization") && !value["OriginPullOptimization"].IsNull())
    {
        if (!value["OriginPullOptimization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OriginPullOptimization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originPullOptimization.Deserialize(value["OriginPullOptimization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originPullOptimizationHasBeenSet = true;
    }

    if (value.HasMember("Https") && !value["Https"].IsNull())
    {
        if (!value["Https"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Https` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_https.Deserialize(value["Https"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsHasBeenSet = true;
    }

    if (value.HasMember("Authentication") && !value["Authentication"].IsNull())
    {
        if (!value["Authentication"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Authentication` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authentication.Deserialize(value["Authentication"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authenticationHasBeenSet = true;
    }

    if (value.HasMember("Seo") && !value["Seo"].IsNull())
    {
        if (!value["Seo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Seo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seo.Deserialize(value["Seo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seoHasBeenSet = true;
    }

    if (value.HasMember("Disable") && !value["Disable"].IsNull())
    {
        if (!value["Disable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Disable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disable = string(value["Disable"].GetString());
        m_disableHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirect") && !value["ForceRedirect"].IsNull())
    {
        if (!value["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ForceRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirect.Deserialize(value["ForceRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Referer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_referer.Deserialize(value["Referer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_refererHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.MaxAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAge.Deserialize(value["MaxAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Ipv6` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipv6.Deserialize(value["Ipv6"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("Compatibility") && !value["Compatibility"].IsNull())
    {
        if (!value["Compatibility"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Compatibility` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compatibility.Deserialize(value["Compatibility"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compatibilityHasBeenSet = true;
    }

    if (value.HasMember("SpecificConfig") && !value["SpecificConfig"].IsNull())
    {
        if (!value["SpecificConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.SpecificConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_specificConfig.Deserialize(value["SpecificConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specificConfigHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Readonly") && !value["Readonly"].IsNull())
    {
        if (!value["Readonly"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Readonly` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readonly = string(value["Readonly"].GetString());
        m_readonlyHasBeenSet = true;
    }

    if (value.HasMember("OriginPullTimeout") && !value["OriginPullTimeout"].IsNull())
    {
        if (!value["OriginPullTimeout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OriginPullTimeout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originPullTimeout.Deserialize(value["OriginPullTimeout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originPullTimeoutHasBeenSet = true;
    }

    if (value.HasMember("AwsPrivateAccess") && !value["AwsPrivateAccess"].IsNull())
    {
        if (!value["AwsPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.AwsPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_awsPrivateAccess.Deserialize(value["AwsPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_awsPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("SecurityConfig") && !value["SecurityConfig"].IsNull())
    {
        if (!value["SecurityConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.SecurityConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityConfig.Deserialize(value["SecurityConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityConfigHasBeenSet = true;
    }

    if (value.HasMember("ImageOptimization") && !value["ImageOptimization"].IsNull())
    {
        if (!value["ImageOptimization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ImageOptimization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageOptimization.Deserialize(value["ImageOptimization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageOptimizationHasBeenSet = true;
    }

    if (value.HasMember("UserAgentFilter") && !value["UserAgentFilter"].IsNull())
    {
        if (!value["UserAgentFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.UserAgentFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userAgentFilter.Deserialize(value["UserAgentFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userAgentFilterHasBeenSet = true;
    }

    if (value.HasMember("AccessControl") && !value["AccessControl"].IsNull())
    {
        if (!value["AccessControl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.AccessControl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessControl.Deserialize(value["AccessControl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessControlHasBeenSet = true;
    }

    if (value.HasMember("Advance") && !value["Advance"].IsNull())
    {
        if (!value["Advance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Advance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advance = string(value["Advance"].GetString());
        m_advanceHasBeenSet = true;
    }

    if (value.HasMember("UrlRedirect") && !value["UrlRedirect"].IsNull())
    {
        if (!value["UrlRedirect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.UrlRedirect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlRedirect.Deserialize(value["UrlRedirect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlRedirectHasBeenSet = true;
    }

    if (value.HasMember("AccessPort") && !value["AccessPort"].IsNull())
    {
        if (!value["AccessPort"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailDomain.AccessPort` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessPort"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessPort.push_back((*itr).GetInt64());
        }
        m_accessPortHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("AdvancedAuthentication") && !value["AdvancedAuthentication"].IsNull())
    {
        if (!value["AdvancedAuthentication"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.AdvancedAuthentication` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedAuthentication.Deserialize(value["AdvancedAuthentication"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedAuthenticationHasBeenSet = true;
    }

    if (value.HasMember("OriginAuthentication") && !value["OriginAuthentication"].IsNull())
    {
        if (!value["OriginAuthentication"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OriginAuthentication` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originAuthentication.Deserialize(value["OriginAuthentication"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originAuthenticationHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Access") && !value["Ipv6Access"].IsNull())
    {
        if (!value["Ipv6Access"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Ipv6Access` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipv6Access.Deserialize(value["Ipv6Access"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipv6AccessHasBeenSet = true;
    }

    if (value.HasMember("AdvanceSet") && !value["AdvanceSet"].IsNull())
    {
        if (!value["AdvanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailDomain.AdvanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvanceConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_advanceSet.push_back(item);
        }
        m_advanceSetHasBeenSet = true;
    }

    if (value.HasMember("OfflineCache") && !value["OfflineCache"].IsNull())
    {
        if (!value["OfflineCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OfflineCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineCache.Deserialize(value["OfflineCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineCacheHasBeenSet = true;
    }

    if (value.HasMember("OriginCombine") && !value["OriginCombine"].IsNull())
    {
        if (!value["OriginCombine"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OriginCombine` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_originCombine.Deserialize(value["OriginCombine"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_originCombineHasBeenSet = true;
    }

    if (value.HasMember("PostMaxSize") && !value["PostMaxSize"].IsNull())
    {
        if (!value["PostMaxSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.PostMaxSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postMaxSize.Deserialize(value["PostMaxSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postMaxSizeHasBeenSet = true;
    }

    if (value.HasMember("Quic") && !value["Quic"].IsNull())
    {
        if (!value["Quic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.Quic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quic.Deserialize(value["Quic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quicHasBeenSet = true;
    }

    if (value.HasMember("OssPrivateAccess") && !value["OssPrivateAccess"].IsNull())
    {
        if (!value["OssPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OssPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ossPrivateAccess.Deserialize(value["OssPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ossPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("WebSocket") && !value["WebSocket"].IsNull())
    {
        if (!value["WebSocket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.WebSocket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSocket.Deserialize(value["WebSocket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSocketHasBeenSet = true;
    }

    if (value.HasMember("RemoteAuthentication") && !value["RemoteAuthentication"].IsNull())
    {
        if (!value["RemoteAuthentication"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.RemoteAuthentication` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_remoteAuthentication.Deserialize(value["RemoteAuthentication"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_remoteAuthenticationHasBeenSet = true;
    }

    if (value.HasMember("ShareCname") && !value["ShareCname"].IsNull())
    {
        if (!value["ShareCname"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ShareCname` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shareCname.Deserialize(value["ShareCname"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shareCnameHasBeenSet = true;
    }

    if (value.HasMember("RuleEngine") && !value["RuleEngine"].IsNull())
    {
        if (!value["RuleEngine"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.RuleEngine` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ruleEngine.Deserialize(value["RuleEngine"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleEngineHasBeenSet = true;
    }

    if (value.HasMember("ParentHost") && !value["ParentHost"].IsNull())
    {
        if (!value["ParentHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ParentHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentHost = string(value["ParentHost"].GetString());
        m_parentHostHasBeenSet = true;
    }

    if (value.HasMember("HwPrivateAccess") && !value["HwPrivateAccess"].IsNull())
    {
        if (!value["HwPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.HwPrivateAccess` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DetailDomain.QnPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qnPrivateAccess.Deserialize(value["QnPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qnPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("HttpsBilling") && !value["HttpsBilling"].IsNull())
    {
        if (!value["HttpsBilling"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.HttpsBilling` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpsBilling.Deserialize(value["HttpsBilling"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpsBillingHasBeenSet = true;
    }

    if (value.HasMember("OthersPrivateAccess") && !value["OthersPrivateAccess"].IsNull())
    {
        if (!value["OthersPrivateAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.OthersPrivateAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_othersPrivateAccess.Deserialize(value["OthersPrivateAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_othersPrivateAccessHasBeenSet = true;
    }

    if (value.HasMember("ParamFilter") && !value["ParamFilter"].IsNull())
    {
        if (!value["ParamFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DetailDomain.ParamFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paramFilter.Deserialize(value["ParamFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramFilterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailDomain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusCodeCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCodeCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statusCodeCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bandwidthAlertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bandwidthAlert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeOriginPullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeOriginPull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rangeOriginPull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_downstreamCappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamCapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downstreamCapping.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeaderCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeaderCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoSeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSeek.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originPullOptimizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullOptimization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originPullOptimization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_seoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disable.c_str(), allocator).Move(), allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_referer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compatibilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compatibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compatibility.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_specificConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecificConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_specificConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Readonly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readonly.c_str(), allocator).Move(), allocator);
    }

    if (m_originPullTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originPullTimeout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_awsPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_awsPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageOptimizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOptimization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageOptimization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAgentFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgentFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userAgentFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessControl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advance.c_str(), allocator).Move(), allocator);
    }

    if (m_urlRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessPort.begin(); itr != m_accessPort.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedAuthenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedAuthentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedAuthentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originAuthenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginAuthentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originAuthentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6AccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6Access.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advanceSet.begin(); itr != m_advanceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_offlineCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originCombineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCombine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originCombine.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postMaxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostMaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postMaxSize.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ossPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OssPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ossPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSocket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remoteAuthenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteAuthentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_remoteAuthentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shareCnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareCname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shareCname.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleEngine.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentHost.c_str(), allocator).Move(), allocator);
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

    if (m_httpsBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsBilling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpsBilling.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_othersPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_othersPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_paramFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paramFilter.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DetailDomain::GetResourceId() const
{
    return m_resourceId;
}

void DetailDomain::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DetailDomain::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DetailDomain::GetAppId() const
{
    return m_appId;
}

void DetailDomain::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DetailDomain::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DetailDomain::GetDomain() const
{
    return m_domain;
}

void DetailDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DetailDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DetailDomain::GetCname() const
{
    return m_cname;
}

void DetailDomain::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DetailDomain::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string DetailDomain::GetStatus() const
{
    return m_status;
}

void DetailDomain::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DetailDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DetailDomain::GetProjectId() const
{
    return m_projectId;
}

void DetailDomain::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DetailDomain::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DetailDomain::GetServiceType() const
{
    return m_serviceType;
}

void DetailDomain::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool DetailDomain::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string DetailDomain::GetCreateTime() const
{
    return m_createTime;
}

void DetailDomain::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DetailDomain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DetailDomain::GetUpdateTime() const
{
    return m_updateTime;
}

void DetailDomain::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DetailDomain::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

Origin DetailDomain::GetOrigin() const
{
    return m_origin;
}

void DetailDomain::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool DetailDomain::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

IpFilter DetailDomain::GetIpFilter() const
{
    return m_ipFilter;
}

void DetailDomain::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool DetailDomain::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit DetailDomain::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void DetailDomain::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool DetailDomain::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

StatusCodeCache DetailDomain::GetStatusCodeCache() const
{
    return m_statusCodeCache;
}

void DetailDomain::SetStatusCodeCache(const StatusCodeCache& _statusCodeCache)
{
    m_statusCodeCache = _statusCodeCache;
    m_statusCodeCacheHasBeenSet = true;
}

bool DetailDomain::StatusCodeCacheHasBeenSet() const
{
    return m_statusCodeCacheHasBeenSet;
}

Compression DetailDomain::GetCompression() const
{
    return m_compression;
}

void DetailDomain::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool DetailDomain::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

BandwidthAlert DetailDomain::GetBandwidthAlert() const
{
    return m_bandwidthAlert;
}

void DetailDomain::SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert)
{
    m_bandwidthAlert = _bandwidthAlert;
    m_bandwidthAlertHasBeenSet = true;
}

bool DetailDomain::BandwidthAlertHasBeenSet() const
{
    return m_bandwidthAlertHasBeenSet;
}

RangeOriginPull DetailDomain::GetRangeOriginPull() const
{
    return m_rangeOriginPull;
}

void DetailDomain::SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull)
{
    m_rangeOriginPull = _rangeOriginPull;
    m_rangeOriginPullHasBeenSet = true;
}

bool DetailDomain::RangeOriginPullHasBeenSet() const
{
    return m_rangeOriginPullHasBeenSet;
}

FollowRedirect DetailDomain::GetFollowRedirect() const
{
    return m_followRedirect;
}

void DetailDomain::SetFollowRedirect(const FollowRedirect& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool DetailDomain::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

ErrorPage DetailDomain::GetErrorPage() const
{
    return m_errorPage;
}

void DetailDomain::SetErrorPage(const ErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool DetailDomain::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

RequestHeader DetailDomain::GetRequestHeader() const
{
    return m_requestHeader;
}

void DetailDomain::SetRequestHeader(const RequestHeader& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DetailDomain::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

ResponseHeader DetailDomain::GetResponseHeader() const
{
    return m_responseHeader;
}

void DetailDomain::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool DetailDomain::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

DownstreamCapping DetailDomain::GetDownstreamCapping() const
{
    return m_downstreamCapping;
}

void DetailDomain::SetDownstreamCapping(const DownstreamCapping& _downstreamCapping)
{
    m_downstreamCapping = _downstreamCapping;
    m_downstreamCappingHasBeenSet = true;
}

bool DetailDomain::DownstreamCappingHasBeenSet() const
{
    return m_downstreamCappingHasBeenSet;
}

CacheKey DetailDomain::GetCacheKey() const
{
    return m_cacheKey;
}

void DetailDomain::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool DetailDomain::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

ResponseHeaderCache DetailDomain::GetResponseHeaderCache() const
{
    return m_responseHeaderCache;
}

void DetailDomain::SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache)
{
    m_responseHeaderCache = _responseHeaderCache;
    m_responseHeaderCacheHasBeenSet = true;
}

bool DetailDomain::ResponseHeaderCacheHasBeenSet() const
{
    return m_responseHeaderCacheHasBeenSet;
}

VideoSeek DetailDomain::GetVideoSeek() const
{
    return m_videoSeek;
}

void DetailDomain::SetVideoSeek(const VideoSeek& _videoSeek)
{
    m_videoSeek = _videoSeek;
    m_videoSeekHasBeenSet = true;
}

bool DetailDomain::VideoSeekHasBeenSet() const
{
    return m_videoSeekHasBeenSet;
}

Cache DetailDomain::GetCache() const
{
    return m_cache;
}

void DetailDomain::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool DetailDomain::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

OriginPullOptimization DetailDomain::GetOriginPullOptimization() const
{
    return m_originPullOptimization;
}

void DetailDomain::SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization)
{
    m_originPullOptimization = _originPullOptimization;
    m_originPullOptimizationHasBeenSet = true;
}

bool DetailDomain::OriginPullOptimizationHasBeenSet() const
{
    return m_originPullOptimizationHasBeenSet;
}

Https DetailDomain::GetHttps() const
{
    return m_https;
}

void DetailDomain::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool DetailDomain::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

Authentication DetailDomain::GetAuthentication() const
{
    return m_authentication;
}

void DetailDomain::SetAuthentication(const Authentication& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool DetailDomain::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

Seo DetailDomain::GetSeo() const
{
    return m_seo;
}

void DetailDomain::SetSeo(const Seo& _seo)
{
    m_seo = _seo;
    m_seoHasBeenSet = true;
}

bool DetailDomain::SeoHasBeenSet() const
{
    return m_seoHasBeenSet;
}

string DetailDomain::GetDisable() const
{
    return m_disable;
}

void DetailDomain::SetDisable(const string& _disable)
{
    m_disable = _disable;
    m_disableHasBeenSet = true;
}

bool DetailDomain::DisableHasBeenSet() const
{
    return m_disableHasBeenSet;
}

ForceRedirect DetailDomain::GetForceRedirect() const
{
    return m_forceRedirect;
}

void DetailDomain::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool DetailDomain::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Referer DetailDomain::GetReferer() const
{
    return m_referer;
}

void DetailDomain::SetReferer(const Referer& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool DetailDomain::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

MaxAge DetailDomain::GetMaxAge() const
{
    return m_maxAge;
}

void DetailDomain::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool DetailDomain::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

Ipv6 DetailDomain::GetIpv6() const
{
    return m_ipv6;
}

void DetailDomain::SetIpv6(const Ipv6& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool DetailDomain::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

Compatibility DetailDomain::GetCompatibility() const
{
    return m_compatibility;
}

void DetailDomain::SetCompatibility(const Compatibility& _compatibility)
{
    m_compatibility = _compatibility;
    m_compatibilityHasBeenSet = true;
}

bool DetailDomain::CompatibilityHasBeenSet() const
{
    return m_compatibilityHasBeenSet;
}

SpecificConfig DetailDomain::GetSpecificConfig() const
{
    return m_specificConfig;
}

void DetailDomain::SetSpecificConfig(const SpecificConfig& _specificConfig)
{
    m_specificConfig = _specificConfig;
    m_specificConfigHasBeenSet = true;
}

bool DetailDomain::SpecificConfigHasBeenSet() const
{
    return m_specificConfigHasBeenSet;
}

string DetailDomain::GetArea() const
{
    return m_area;
}

void DetailDomain::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DetailDomain::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string DetailDomain::GetReadonly() const
{
    return m_readonly;
}

void DetailDomain::SetReadonly(const string& _readonly)
{
    m_readonly = _readonly;
    m_readonlyHasBeenSet = true;
}

bool DetailDomain::ReadonlyHasBeenSet() const
{
    return m_readonlyHasBeenSet;
}

OriginPullTimeout DetailDomain::GetOriginPullTimeout() const
{
    return m_originPullTimeout;
}

void DetailDomain::SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout)
{
    m_originPullTimeout = _originPullTimeout;
    m_originPullTimeoutHasBeenSet = true;
}

bool DetailDomain::OriginPullTimeoutHasBeenSet() const
{
    return m_originPullTimeoutHasBeenSet;
}

AwsPrivateAccess DetailDomain::GetAwsPrivateAccess() const
{
    return m_awsPrivateAccess;
}

void DetailDomain::SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess)
{
    m_awsPrivateAccess = _awsPrivateAccess;
    m_awsPrivateAccessHasBeenSet = true;
}

bool DetailDomain::AwsPrivateAccessHasBeenSet() const
{
    return m_awsPrivateAccessHasBeenSet;
}

SecurityConfig DetailDomain::GetSecurityConfig() const
{
    return m_securityConfig;
}

void DetailDomain::SetSecurityConfig(const SecurityConfig& _securityConfig)
{
    m_securityConfig = _securityConfig;
    m_securityConfigHasBeenSet = true;
}

bool DetailDomain::SecurityConfigHasBeenSet() const
{
    return m_securityConfigHasBeenSet;
}

ImageOptimization DetailDomain::GetImageOptimization() const
{
    return m_imageOptimization;
}

void DetailDomain::SetImageOptimization(const ImageOptimization& _imageOptimization)
{
    m_imageOptimization = _imageOptimization;
    m_imageOptimizationHasBeenSet = true;
}

bool DetailDomain::ImageOptimizationHasBeenSet() const
{
    return m_imageOptimizationHasBeenSet;
}

UserAgentFilter DetailDomain::GetUserAgentFilter() const
{
    return m_userAgentFilter;
}

void DetailDomain::SetUserAgentFilter(const UserAgentFilter& _userAgentFilter)
{
    m_userAgentFilter = _userAgentFilter;
    m_userAgentFilterHasBeenSet = true;
}

bool DetailDomain::UserAgentFilterHasBeenSet() const
{
    return m_userAgentFilterHasBeenSet;
}

AccessControl DetailDomain::GetAccessControl() const
{
    return m_accessControl;
}

void DetailDomain::SetAccessControl(const AccessControl& _accessControl)
{
    m_accessControl = _accessControl;
    m_accessControlHasBeenSet = true;
}

bool DetailDomain::AccessControlHasBeenSet() const
{
    return m_accessControlHasBeenSet;
}

string DetailDomain::GetAdvance() const
{
    return m_advance;
}

void DetailDomain::SetAdvance(const string& _advance)
{
    m_advance = _advance;
    m_advanceHasBeenSet = true;
}

bool DetailDomain::AdvanceHasBeenSet() const
{
    return m_advanceHasBeenSet;
}

UrlRedirect DetailDomain::GetUrlRedirect() const
{
    return m_urlRedirect;
}

void DetailDomain::SetUrlRedirect(const UrlRedirect& _urlRedirect)
{
    m_urlRedirect = _urlRedirect;
    m_urlRedirectHasBeenSet = true;
}

bool DetailDomain::UrlRedirectHasBeenSet() const
{
    return m_urlRedirectHasBeenSet;
}

vector<int64_t> DetailDomain::GetAccessPort() const
{
    return m_accessPort;
}

void DetailDomain::SetAccessPort(const vector<int64_t>& _accessPort)
{
    m_accessPort = _accessPort;
    m_accessPortHasBeenSet = true;
}

bool DetailDomain::AccessPortHasBeenSet() const
{
    return m_accessPortHasBeenSet;
}

vector<Tag> DetailDomain::GetTag() const
{
    return m_tag;
}

void DetailDomain::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DetailDomain::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

AdvancedAuthentication DetailDomain::GetAdvancedAuthentication() const
{
    return m_advancedAuthentication;
}

void DetailDomain::SetAdvancedAuthentication(const AdvancedAuthentication& _advancedAuthentication)
{
    m_advancedAuthentication = _advancedAuthentication;
    m_advancedAuthenticationHasBeenSet = true;
}

bool DetailDomain::AdvancedAuthenticationHasBeenSet() const
{
    return m_advancedAuthenticationHasBeenSet;
}

OriginAuthentication DetailDomain::GetOriginAuthentication() const
{
    return m_originAuthentication;
}

void DetailDomain::SetOriginAuthentication(const OriginAuthentication& _originAuthentication)
{
    m_originAuthentication = _originAuthentication;
    m_originAuthenticationHasBeenSet = true;
}

bool DetailDomain::OriginAuthenticationHasBeenSet() const
{
    return m_originAuthenticationHasBeenSet;
}

Ipv6Access DetailDomain::GetIpv6Access() const
{
    return m_ipv6Access;
}

void DetailDomain::SetIpv6Access(const Ipv6Access& _ipv6Access)
{
    m_ipv6Access = _ipv6Access;
    m_ipv6AccessHasBeenSet = true;
}

bool DetailDomain::Ipv6AccessHasBeenSet() const
{
    return m_ipv6AccessHasBeenSet;
}

vector<AdvanceConfig> DetailDomain::GetAdvanceSet() const
{
    return m_advanceSet;
}

void DetailDomain::SetAdvanceSet(const vector<AdvanceConfig>& _advanceSet)
{
    m_advanceSet = _advanceSet;
    m_advanceSetHasBeenSet = true;
}

bool DetailDomain::AdvanceSetHasBeenSet() const
{
    return m_advanceSetHasBeenSet;
}

OfflineCache DetailDomain::GetOfflineCache() const
{
    return m_offlineCache;
}

void DetailDomain::SetOfflineCache(const OfflineCache& _offlineCache)
{
    m_offlineCache = _offlineCache;
    m_offlineCacheHasBeenSet = true;
}

bool DetailDomain::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

OriginCombine DetailDomain::GetOriginCombine() const
{
    return m_originCombine;
}

void DetailDomain::SetOriginCombine(const OriginCombine& _originCombine)
{
    m_originCombine = _originCombine;
    m_originCombineHasBeenSet = true;
}

bool DetailDomain::OriginCombineHasBeenSet() const
{
    return m_originCombineHasBeenSet;
}

PostSize DetailDomain::GetPostMaxSize() const
{
    return m_postMaxSize;
}

void DetailDomain::SetPostMaxSize(const PostSize& _postMaxSize)
{
    m_postMaxSize = _postMaxSize;
    m_postMaxSizeHasBeenSet = true;
}

bool DetailDomain::PostMaxSizeHasBeenSet() const
{
    return m_postMaxSizeHasBeenSet;
}

Quic DetailDomain::GetQuic() const
{
    return m_quic;
}

void DetailDomain::SetQuic(const Quic& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool DetailDomain::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

OssPrivateAccess DetailDomain::GetOssPrivateAccess() const
{
    return m_ossPrivateAccess;
}

void DetailDomain::SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess)
{
    m_ossPrivateAccess = _ossPrivateAccess;
    m_ossPrivateAccessHasBeenSet = true;
}

bool DetailDomain::OssPrivateAccessHasBeenSet() const
{
    return m_ossPrivateAccessHasBeenSet;
}

WebSocket DetailDomain::GetWebSocket() const
{
    return m_webSocket;
}

void DetailDomain::SetWebSocket(const WebSocket& _webSocket)
{
    m_webSocket = _webSocket;
    m_webSocketHasBeenSet = true;
}

bool DetailDomain::WebSocketHasBeenSet() const
{
    return m_webSocketHasBeenSet;
}

RemoteAuthentication DetailDomain::GetRemoteAuthentication() const
{
    return m_remoteAuthentication;
}

void DetailDomain::SetRemoteAuthentication(const RemoteAuthentication& _remoteAuthentication)
{
    m_remoteAuthentication = _remoteAuthentication;
    m_remoteAuthenticationHasBeenSet = true;
}

bool DetailDomain::RemoteAuthenticationHasBeenSet() const
{
    return m_remoteAuthenticationHasBeenSet;
}

ShareCname DetailDomain::GetShareCname() const
{
    return m_shareCname;
}

void DetailDomain::SetShareCname(const ShareCname& _shareCname)
{
    m_shareCname = _shareCname;
    m_shareCnameHasBeenSet = true;
}

bool DetailDomain::ShareCnameHasBeenSet() const
{
    return m_shareCnameHasBeenSet;
}

RuleEngine DetailDomain::GetRuleEngine() const
{
    return m_ruleEngine;
}

void DetailDomain::SetRuleEngine(const RuleEngine& _ruleEngine)
{
    m_ruleEngine = _ruleEngine;
    m_ruleEngineHasBeenSet = true;
}

bool DetailDomain::RuleEngineHasBeenSet() const
{
    return m_ruleEngineHasBeenSet;
}

string DetailDomain::GetParentHost() const
{
    return m_parentHost;
}

void DetailDomain::SetParentHost(const string& _parentHost)
{
    m_parentHost = _parentHost;
    m_parentHostHasBeenSet = true;
}

bool DetailDomain::ParentHostHasBeenSet() const
{
    return m_parentHostHasBeenSet;
}

HwPrivateAccess DetailDomain::GetHwPrivateAccess() const
{
    return m_hwPrivateAccess;
}

void DetailDomain::SetHwPrivateAccess(const HwPrivateAccess& _hwPrivateAccess)
{
    m_hwPrivateAccess = _hwPrivateAccess;
    m_hwPrivateAccessHasBeenSet = true;
}

bool DetailDomain::HwPrivateAccessHasBeenSet() const
{
    return m_hwPrivateAccessHasBeenSet;
}

QnPrivateAccess DetailDomain::GetQnPrivateAccess() const
{
    return m_qnPrivateAccess;
}

void DetailDomain::SetQnPrivateAccess(const QnPrivateAccess& _qnPrivateAccess)
{
    m_qnPrivateAccess = _qnPrivateAccess;
    m_qnPrivateAccessHasBeenSet = true;
}

bool DetailDomain::QnPrivateAccessHasBeenSet() const
{
    return m_qnPrivateAccessHasBeenSet;
}

HttpsBilling DetailDomain::GetHttpsBilling() const
{
    return m_httpsBilling;
}

void DetailDomain::SetHttpsBilling(const HttpsBilling& _httpsBilling)
{
    m_httpsBilling = _httpsBilling;
    m_httpsBillingHasBeenSet = true;
}

bool DetailDomain::HttpsBillingHasBeenSet() const
{
    return m_httpsBillingHasBeenSet;
}

OthersPrivateAccess DetailDomain::GetOthersPrivateAccess() const
{
    return m_othersPrivateAccess;
}

void DetailDomain::SetOthersPrivateAccess(const OthersPrivateAccess& _othersPrivateAccess)
{
    m_othersPrivateAccess = _othersPrivateAccess;
    m_othersPrivateAccessHasBeenSet = true;
}

bool DetailDomain::OthersPrivateAccessHasBeenSet() const
{
    return m_othersPrivateAccessHasBeenSet;
}

ParamFilter DetailDomain::GetParamFilter() const
{
    return m_paramFilter;
}

void DetailDomain::SetParamFilter(const ParamFilter& _paramFilter)
{
    m_paramFilter = _paramFilter;
    m_paramFilterHasBeenSet = true;
}

bool DetailDomain::ParamFilterHasBeenSet() const
{
    return m_paramFilterHasBeenSet;
}

