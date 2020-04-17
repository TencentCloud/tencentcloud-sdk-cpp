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

#include <tencentcloud/ecdn/v20191012/model/AddEcdnDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace rapidjson;
using namespace std;

AddEcdnDomainRequest::AddEcdnDomainRequest() :
    m_domainHasBeenSet(false),
    m_originHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ipFilterHasBeenSet(false),
    m_ipFreqLimitHasBeenSet(false),
    m_responseHeaderHasBeenSet(false),
    m_cacheKeyHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_httpsHasBeenSet(false),
    m_forceRedirectHasBeenSet(false)
{
}

string AddEcdnDomainRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_origin.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_areaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_ipFilterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipFilter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipFreqLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpFreqLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ipFreqLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseHeaderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_responseHeader.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cache.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_httpsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Https";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_https.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forceRedirectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_forceRedirect.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddEcdnDomainRequest::GetDomain() const
{
    return m_domain;
}

void AddEcdnDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AddEcdnDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

Origin AddEcdnDomainRequest::GetOrigin() const
{
    return m_origin;
}

void AddEcdnDomainRequest::SetOrigin(const Origin& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool AddEcdnDomainRequest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string AddEcdnDomainRequest::GetArea() const
{
    return m_area;
}

void AddEcdnDomainRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AddEcdnDomainRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

int64_t AddEcdnDomainRequest::GetProjectId() const
{
    return m_projectId;
}

void AddEcdnDomainRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AddEcdnDomainRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

IpFilter AddEcdnDomainRequest::GetIpFilter() const
{
    return m_ipFilter;
}

void AddEcdnDomainRequest::SetIpFilter(const IpFilter& _ipFilter)
{
    m_ipFilter = _ipFilter;
    m_ipFilterHasBeenSet = true;
}

bool AddEcdnDomainRequest::IpFilterHasBeenSet() const
{
    return m_ipFilterHasBeenSet;
}

IpFreqLimit AddEcdnDomainRequest::GetIpFreqLimit() const
{
    return m_ipFreqLimit;
}

void AddEcdnDomainRequest::SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit)
{
    m_ipFreqLimit = _ipFreqLimit;
    m_ipFreqLimitHasBeenSet = true;
}

bool AddEcdnDomainRequest::IpFreqLimitHasBeenSet() const
{
    return m_ipFreqLimitHasBeenSet;
}

ResponseHeader AddEcdnDomainRequest::GetResponseHeader() const
{
    return m_responseHeader;
}

void AddEcdnDomainRequest::SetResponseHeader(const ResponseHeader& _responseHeader)
{
    m_responseHeader = _responseHeader;
    m_responseHeaderHasBeenSet = true;
}

bool AddEcdnDomainRequest::ResponseHeaderHasBeenSet() const
{
    return m_responseHeaderHasBeenSet;
}

CacheKey AddEcdnDomainRequest::GetCacheKey() const
{
    return m_cacheKey;
}

void AddEcdnDomainRequest::SetCacheKey(const CacheKey& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool AddEcdnDomainRequest::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

Cache AddEcdnDomainRequest::GetCache() const
{
    return m_cache;
}

void AddEcdnDomainRequest::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool AddEcdnDomainRequest::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

Https AddEcdnDomainRequest::GetHttps() const
{
    return m_https;
}

void AddEcdnDomainRequest::SetHttps(const Https& _https)
{
    m_https = _https;
    m_httpsHasBeenSet = true;
}

bool AddEcdnDomainRequest::HttpsHasBeenSet() const
{
    return m_httpsHasBeenSet;
}

ForceRedirect AddEcdnDomainRequest::GetForceRedirect() const
{
    return m_forceRedirect;
}

void AddEcdnDomainRequest::SetForceRedirect(const ForceRedirect& _forceRedirect)
{
    m_forceRedirect = _forceRedirect;
    m_forceRedirectHasBeenSet = true;
}

bool AddEcdnDomainRequest::ForceRedirectHasBeenSet() const
{
    return m_forceRedirectHasBeenSet;
}


