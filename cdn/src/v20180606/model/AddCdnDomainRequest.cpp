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

#include <tencentcloud/cdn/v20180606/model/AddCdnDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AddCdnDomainRequest::AddCdnDomainRequest() :
    m_domainHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_projectIdHasBeenSet(false),
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
    m_forceRedirectHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_specificConfigHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_originPullTimeoutHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_ipv6AccessHasBeenSet(false),
    m_offlineCacheHasBeenSet(false),
    m_quicHasBeenSet(false),
    m_awsPrivateAccessHasBeenSet(false),
    m_ossPrivateAccessHasBeenSet(false),
    m_hwPrivateAccessHasBeenSet(false),
    m_qnPrivateAccessHasBeenSet(false),
    m_othersPrivateAccessHasBeenSet(false),
    m_httpsBillingHasBeenSet(false)
{
}

string AddCdnDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_origin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_ipFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipFreqLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFreqLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipFreqLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_statusCodeCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCodeCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statusCodeCache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compression.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bandwidthAlertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthAlert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bandwidthAlert.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_rangeOriginPullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeOriginPull";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rangeOriginPull.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_downstreamCappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownstreamCapping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downstreamCapping.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseHeaderCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeaderCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseHeaderCache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoSeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSeek.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_originPullOptimizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullOptimization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originPullOptimization.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_https.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authentication.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_seoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_referer.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAge.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_specificConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecificConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_specificConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_originPullTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_originPullTimeout.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipv6AccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Access";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipv6Access.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_awsPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_awsPrivateAccess.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ossPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OssPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ossPrivateAccess.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hwPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HwPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hwPrivateAccess.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_qnPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QnPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qnPrivateAccess.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_othersPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_othersPrivateAccess.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpsBillingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsBilling";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpsBilling.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddCdnDomainRequest::GetDomain() const
{
    return m_domain;
}

void AddCdnDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AddCdnDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string AddCdnDomainRequest::GetServiceType() const
{
    return m_serviceType;
}

void AddCdnDomainRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool AddCdnDomainRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

Origin AddCdnDomainRequest::GetOrigin() const
{
    return m_origin;
}

void AddCdnDomainRequest::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool AddCdnDomainRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

int64_t AddCdnDomainRequest::GetProjectId() const
{
    return m_projectId;
}

void AddCdnDomainRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AddCdnDomainRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

IpFilter AddCdnDomainRequest::GetIpFilter() const
{
    return m_ipFilter;
}

void AddCdnDomainRequest::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool AddCdnDomainRequest::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit AddCdnDomainRequest::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void AddCdnDomainRequest::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool AddCdnDomainRequest::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

StatusCodeCache AddCdnDomainRequest::GetStatusCodeCache() const
{
    return m_statusCodeCache;
}

void AddCdnDomainRequest::SetStatusCodeCache(const StatusCodeCache& _statusCodeCache)
{
    m_statusCodeCache = _statusCodeCache;
    m_statusCodeCacheHasBeenSet = true;
}

bool AddCdnDomainRequest::StatusCodeCacheHasBeenSet() const
{
    return m_statusCodeCacheHasBeenSet;
}

Compression AddCdnDomainRequest::GetCompression() const
{
    return m_compression;
}

void AddCdnDomainRequest::SetCompression(const Compression& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool AddCdnDomainRequest::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

BandwidthAlert AddCdnDomainRequest::GetBandwidthAlert() const
{
    return m_bandwidthAlert;
}

void AddCdnDomainRequest::SetBandwidthAlert(const BandwidthAlert& _bandwidthAlert)
{
    m_bandwidthAlert = _bandwidthAlert;
    m_bandwidthAlertHasBeenSet = true;
}

bool AddCdnDomainRequest::BandwidthAlertHasBeenSet() const
{
    return m_bandwidthAlertHasBeenSet;
}

RangeOriginPull AddCdnDomainRequest::GetRangeOriginPull() const
{
    return m_rangeOriginPull;
}

void AddCdnDomainRequest::SetRangeOriginPull(const RangeOriginPull& _rangeOriginPull)
{
    m_rangeOriginPull = _rangeOriginPull;
    m_rangeOriginPullHasBeenSet = true;
}

bool AddCdnDomainRequest::RangeOriginPullHasBeenSet() const
{
    return m_rangeOriginPullHasBeenSet;
}

FollowRedirect AddCdnDomainRequest::GetFollowRedirect() const
{
    return m_followRedirect;
}

void AddCdnDomainRequest::SetFollowRedirect(const FollowRedirect& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool AddCdnDomainRequest::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

ErrorPage AddCdnDomainRequest::GetErrorPage() const
{
    return m_errorPage;
}

void AddCdnDomainRequest::SetErrorPage(const ErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool AddCdnDomainRequest::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

RequestHeader AddCdnDomainRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void AddCdnDomainRequest::SetRequestHeader(const RequestHeader& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool AddCdnDomainRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

ResponseHeader AddCdnDomainRequest::GetResponseHeader() const
{
    return m_responseHeader;
}

void AddCdnDomainRequest::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool AddCdnDomainRequest::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

DownstreamCapping AddCdnDomainRequest::GetDownstreamCapping() const
{
    return m_downstreamCapping;
}

void AddCdnDomainRequest::SetDownstreamCapping(const DownstreamCapping& _downstreamCapping)
{
    m_downstreamCapping = _downstreamCapping;
    m_downstreamCappingHasBeenSet = true;
}

bool AddCdnDomainRequest::DownstreamCappingHasBeenSet() const
{
    return m_downstreamCappingHasBeenSet;
}

CacheKey AddCdnDomainRequest::GetCacheKey() const
{
    return m_cacheKey;
}

void AddCdnDomainRequest::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool AddCdnDomainRequest::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

ResponseHeaderCache AddCdnDomainRequest::GetResponseHeaderCache() const
{
    return m_responseHeaderCache;
}

void AddCdnDomainRequest::SetResponseHeaderCache(const ResponseHeaderCache& _responseHeaderCache)
{
    m_responseHeaderCache = _responseHeaderCache;
    m_responseHeaderCacheHasBeenSet = true;
}

bool AddCdnDomainRequest::ResponseHeaderCacheHasBeenSet() const
{
    return m_responseHeaderCacheHasBeenSet;
}

VideoSeek AddCdnDomainRequest::GetVideoSeek() const
{
    return m_videoSeek;
}

void AddCdnDomainRequest::SetVideoSeek(const VideoSeek& _videoSeek)
{
    m_videoSeek = _videoSeek;
    m_videoSeekHasBeenSet = true;
}

bool AddCdnDomainRequest::VideoSeekHasBeenSet() const
{
    return m_videoSeekHasBeenSet;
}

Cache AddCdnDomainRequest::GetCache() const
{
    return m_cache;
}

void AddCdnDomainRequest::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool AddCdnDomainRequest::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

OriginPullOptimization AddCdnDomainRequest::GetOriginPullOptimization() const
{
    return m_originPullOptimization;
}

void AddCdnDomainRequest::SetOriginPullOptimization(const OriginPullOptimization& _originPullOptimization)
{
    m_originPullOptimization = _originPullOptimization;
    m_originPullOptimizationHasBeenSet = true;
}

bool AddCdnDomainRequest::OriginPullOptimizationHasBeenSet() const
{
    return m_originPullOptimizationHasBeenSet;
}

Https AddCdnDomainRequest::GetHttps() const
{
    return m_https;
}

void AddCdnDomainRequest::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool AddCdnDomainRequest::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

Authentication AddCdnDomainRequest::GetAuthentication() const
{
    return m_authentication;
}

void AddCdnDomainRequest::SetAuthentication(const Authentication& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool AddCdnDomainRequest::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

Seo AddCdnDomainRequest::GetSeo() const
{
    return m_seo;
}

void AddCdnDomainRequest::SetSeo(const Seo& _seo)
{
    m_seo = _seo;
    m_seoHasBeenSet = true;
}

bool AddCdnDomainRequest::SeoHasBeenSet() const
{
    return m_seoHasBeenSet;
}

ForceRedirect AddCdnDomainRequest::GetForceRedirect() const
{
    return m_forceRedirect;
}

void AddCdnDomainRequest::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool AddCdnDomainRequest::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}

Referer AddCdnDomainRequest::GetReferer() const
{
    return m_referer;
}

void AddCdnDomainRequest::SetReferer(const Referer& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool AddCdnDomainRequest::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

MaxAge AddCdnDomainRequest::GetMaxAge() const
{
    return m_maxAge;
}

void AddCdnDomainRequest::SetMaxAge(const MaxAge& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool AddCdnDomainRequest::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

Ipv6 AddCdnDomainRequest::GetIpv6() const
{
    return m_ipv6;
}

void AddCdnDomainRequest::SetIpv6(const Ipv6& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool AddCdnDomainRequest::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

SpecificConfig AddCdnDomainRequest::GetSpecificConfig() const
{
    return m_specificConfig;
}

void AddCdnDomainRequest::SetSpecificConfig(const SpecificConfig& _specificConfig)
{
    m_specificConfig = _specificConfig;
    m_specificConfigHasBeenSet = true;
}

bool AddCdnDomainRequest::SpecificConfigHasBeenSet() const
{
    return m_specificConfigHasBeenSet;
}

string AddCdnDomainRequest::GetArea() const
{
    return m_area;
}

void AddCdnDomainRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AddCdnDomainRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

OriginPullTimeout AddCdnDomainRequest::GetOriginPullTimeout() const
{
    return m_originPullTimeout;
}

void AddCdnDomainRequest::SetOriginPullTimeout(const OriginPullTimeout& _originPullTimeout)
{
    m_originPullTimeout = _originPullTimeout;
    m_originPullTimeoutHasBeenSet = true;
}

bool AddCdnDomainRequest::OriginPullTimeoutHasBeenSet() const
{
    return m_originPullTimeoutHasBeenSet;
}

vector<Tag> AddCdnDomainRequest::GetTag() const
{
    return m_tag;
}

void AddCdnDomainRequest::SetTag(const vector<Tag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AddCdnDomainRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

Ipv6Access AddCdnDomainRequest::GetIpv6Access() const
{
    return m_ipv6Access;
}

void AddCdnDomainRequest::SetIpv6Access(const Ipv6Access& _ipv6Access)
{
    m_ipv6Access = _ipv6Access;
    m_ipv6AccessHasBeenSet = true;
}

bool AddCdnDomainRequest::Ipv6AccessHasBeenSet() const
{
    return m_ipv6AccessHasBeenSet;
}

OfflineCache AddCdnDomainRequest::GetOfflineCache() const
{
    return m_offlineCache;
}

void AddCdnDomainRequest::SetOfflineCache(const OfflineCache& _offlineCache)
{
    m_offlineCache = _offlineCache;
    m_offlineCacheHasBeenSet = true;
}

bool AddCdnDomainRequest::OfflineCacheHasBeenSet() const
{
    return m_offlineCacheHasBeenSet;
}

Quic AddCdnDomainRequest::GetQuic() const
{
    return m_quic;
}

void AddCdnDomainRequest::SetQuic(const Quic& _quic)
{
    m_quic = _quic;
    m_quicHasBeenSet = true;
}

bool AddCdnDomainRequest::QuicHasBeenSet() const
{
    return m_quicHasBeenSet;
}

AwsPrivateAccess AddCdnDomainRequest::GetAwsPrivateAccess() const
{
    return m_awsPrivateAccess;
}

void AddCdnDomainRequest::SetAwsPrivateAccess(const AwsPrivateAccess& _awsPrivateAccess)
{
    m_awsPrivateAccess = _awsPrivateAccess;
    m_awsPrivateAccessHasBeenSet = true;
}

bool AddCdnDomainRequest::AwsPrivateAccessHasBeenSet() const
{
    return m_awsPrivateAccessHasBeenSet;
}

OssPrivateAccess AddCdnDomainRequest::GetOssPrivateAccess() const
{
    return m_ossPrivateAccess;
}

void AddCdnDomainRequest::SetOssPrivateAccess(const OssPrivateAccess& _ossPrivateAccess)
{
    m_ossPrivateAccess = _ossPrivateAccess;
    m_ossPrivateAccessHasBeenSet = true;
}

bool AddCdnDomainRequest::OssPrivateAccessHasBeenSet() const
{
    return m_ossPrivateAccessHasBeenSet;
}

HwPrivateAccess AddCdnDomainRequest::GetHwPrivateAccess() const
{
    return m_hwPrivateAccess;
}

void AddCdnDomainRequest::SetHwPrivateAccess(const HwPrivateAccess& _hwPrivateAccess)
{
    m_hwPrivateAccess = _hwPrivateAccess;
    m_hwPrivateAccessHasBeenSet = true;
}

bool AddCdnDomainRequest::HwPrivateAccessHasBeenSet() const
{
    return m_hwPrivateAccessHasBeenSet;
}

QnPrivateAccess AddCdnDomainRequest::GetQnPrivateAccess() const
{
    return m_qnPrivateAccess;
}

void AddCdnDomainRequest::SetQnPrivateAccess(const QnPrivateAccess& _qnPrivateAccess)
{
    m_qnPrivateAccess = _qnPrivateAccess;
    m_qnPrivateAccessHasBeenSet = true;
}

bool AddCdnDomainRequest::QnPrivateAccessHasBeenSet() const
{
    return m_qnPrivateAccessHasBeenSet;
}

OthersPrivateAccess AddCdnDomainRequest::GetOthersPrivateAccess() const
{
    return m_othersPrivateAccess;
}

void AddCdnDomainRequest::SetOthersPrivateAccess(const OthersPrivateAccess& _othersPrivateAccess)
{
    m_othersPrivateAccess = _othersPrivateAccess;
    m_othersPrivateAccessHasBeenSet = true;
}

bool AddCdnDomainRequest::OthersPrivateAccessHasBeenSet() const
{
    return m_othersPrivateAccessHasBeenSet;
}

HttpsBilling AddCdnDomainRequest::GetHttpsBilling() const
{
    return m_httpsBilling;
}

void AddCdnDomainRequest::SetHttpsBilling(const HttpsBilling& _httpsBilling)
{
    m_httpsBilling = _httpsBilling;
    m_httpsBillingHasBeenSet = true;
}

bool AddCdnDomainRequest::HttpsBillingHasBeenSet() const
{
    return m_httpsBillingHasBeenSet;
}


