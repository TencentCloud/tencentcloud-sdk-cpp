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
using namespace rapidjson;
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
    m_accessControlHasBeenSet(false)
{
}

CoreInternalOutcome DetailDomain::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.Origin` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.IpFilter` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.IpFreqLimit` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.StatusCodeCache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Compression` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.BandwidthAlert` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.RangeOriginPull` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.FollowRedirect` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.ErrorPage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.RequestHeader` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.ResponseHeader` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.DownstreamCapping` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.CacheKey` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.ResponseHeaderCache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.VideoSeek` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Cache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.OriginPullOptimization` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Https` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Authentication` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Seo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Disable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disable = string(value["Disable"].GetString());
        m_disableHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirect") && !value["ForceRedirect"].IsNull())
    {
        if (!value["ForceRedirect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.ForceRedirect` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Referer` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.MaxAge` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Ipv6` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Compatibility` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.SpecificConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Readonly") && !value["Readonly"].IsNull())
    {
        if (!value["Readonly"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.Readonly` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readonly = string(value["Readonly"].GetString());
        m_readonlyHasBeenSet = true;
    }

    if (value.HasMember("OriginPullTimeout") && !value["OriginPullTimeout"].IsNull())
    {
        if (!value["OriginPullTimeout"].IsObject())
        {
            return CoreInternalOutcome(Error("response `DetailDomain.OriginPullTimeout` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.AwsPrivateAccess` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.SecurityConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.ImageOptimization` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.UserAgentFilter` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `DetailDomain.AccessControl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessControl.Deserialize(value["AccessControl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessControlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailDomain::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_origin.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusCodeCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusCodeCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_statusCodeCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_compression.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bandwidthAlertHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BandwidthAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_bandwidthAlert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeOriginPullHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RangeOriginPull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rangeOriginPull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_downstreamCappingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DownstreamCapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_downstreamCapping.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseHeaderCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseHeaderCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_responseHeaderCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoSeekHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoSeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_videoSeek.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originPullOptimizationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginPullOptimization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originPullOptimization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_https.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_seoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_seo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Disable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_disable.c_str(), allocator).Move(), allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_referer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compatibilityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Compatibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_compatibility.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_specificConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecificConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_specificConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_readonlyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Readonly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_readonly.c_str(), allocator).Move(), allocator);
    }

    if (m_originPullTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginPullTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_originPullTimeout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_awsPrivateAccessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AwsPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_awsPrivateAccess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_securityConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageOptimizationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageOptimization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_imageOptimization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAgentFilterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserAgentFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_userAgentFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessControlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_accessControl.ToJsonObject(value[key.c_str()], allocator);
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

