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

#include <tencentcloud/cdn/v20180606/model/CacheKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

CacheKey::CacheKey() :
    m_fullUrlCacheHasBeenSet(false),
    m_ignoreCaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_cookieHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_cacheTagHasBeenSet(false),
    m_schemeHasBeenSet(false)
{
}

CoreInternalOutcome CacheKey::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FullUrlCache") && !value["FullUrlCache"].IsNull())
    {
        if (!value["FullUrlCache"].IsString())
        {
            return CoreInternalOutcome(Error("response `CacheKey.FullUrlCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullUrlCache = string(value["FullUrlCache"].GetString());
        m_fullUrlCacheHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCase") && !value["IgnoreCase"].IsNull())
    {
        if (!value["IgnoreCase"].IsString())
        {
            return CoreInternalOutcome(Error("response `CacheKey.IgnoreCase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCase = string(value["IgnoreCase"].GetString());
        m_ignoreCaseHasBeenSet = true;
    }

    if (value.HasMember("QueryString") && !value["QueryString"].IsNull())
    {
        if (!value["QueryString"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CacheKey.QueryString` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryString.Deserialize(value["QueryString"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryStringHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CacheKey.Cookie` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cookie.Deserialize(value["Cookie"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cookieHasBeenSet = true;
    }

    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CacheKey.Header` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_header.Deserialize(value["Header"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headerHasBeenSet = true;
    }

    if (value.HasMember("CacheTag") && !value["CacheTag"].IsNull())
    {
        if (!value["CacheTag"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CacheKey.CacheTag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheTag.Deserialize(value["CacheTag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheTagHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CacheKey.Scheme` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheme.Deserialize(value["Scheme"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_schemeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheKey::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_fullUrlCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FullUrlCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fullUrlCache.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreCaseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IgnoreCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ignoreCase.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_queryString.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cookieHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cookie.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_header.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheTagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cacheTag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schemeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_scheme.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CacheKey::GetFullUrlCache() const
{
    return m_fullUrlCache;
}

void CacheKey::SetFullUrlCache(const string& _fullUrlCache)
{
    m_fullUrlCache = _fullUrlCache;
    m_fullUrlCacheHasBeenSet = true;
}

bool CacheKey::FullUrlCacheHasBeenSet() const
{
    return m_fullUrlCacheHasBeenSet;
}

string CacheKey::GetIgnoreCase() const
{
    return m_ignoreCase;
}

void CacheKey::SetIgnoreCase(const string& _ignoreCase)
{
    m_ignoreCase = _ignoreCase;
    m_ignoreCaseHasBeenSet = true;
}

bool CacheKey::IgnoreCaseHasBeenSet() const
{
    return m_ignoreCaseHasBeenSet;
}

QueryStringKey CacheKey::GetQueryString() const
{
    return m_queryString;
}

void CacheKey::SetQueryString(const QueryStringKey& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool CacheKey::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

CookieKey CacheKey::GetCookie() const
{
    return m_cookie;
}

void CacheKey::SetCookie(const CookieKey& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CacheKey::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

HeaderKey CacheKey::GetHeader() const
{
    return m_header;
}

void CacheKey::SetHeader(const HeaderKey& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool CacheKey::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

CacheTagKey CacheKey::GetCacheTag() const
{
    return m_cacheTag;
}

void CacheKey::SetCacheTag(const CacheTagKey& _cacheTag)
{
    m_cacheTag = _cacheTag;
    m_cacheTagHasBeenSet = true;
}

bool CacheKey::CacheTagHasBeenSet() const
{
    return m_cacheTagHasBeenSet;
}

SchemeKey CacheKey::GetScheme() const
{
    return m_scheme;
}

void CacheKey::SetScheme(const SchemeKey& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool CacheKey::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

