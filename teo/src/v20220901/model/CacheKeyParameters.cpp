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

#include <tencentcloud/teo/v20220901/model/CacheKeyParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CacheKeyParameters::CacheKeyParameters() :
    m_fullURLCacheHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_ignoreCaseHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_cookieHasBeenSet(false)
{
}

CoreInternalOutcome CacheKeyParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullURLCache") && !value["FullURLCache"].IsNull())
    {
        if (!value["FullURLCache"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyParameters.FullURLCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullURLCache = string(value["FullURLCache"].GetString());
        m_fullURLCacheHasBeenSet = true;
    }

    if (value.HasMember("QueryString") && !value["QueryString"].IsNull())
    {
        if (!value["QueryString"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyParameters.QueryString` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryString.Deserialize(value["QueryString"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryStringHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCase") && !value["IgnoreCase"].IsNull())
    {
        if (!value["IgnoreCase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyParameters.IgnoreCase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCase = string(value["IgnoreCase"].GetString());
        m_ignoreCaseHasBeenSet = true;
    }

    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyParameters.Header` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_header.Deserialize(value["Header"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headerHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyParameters.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Cookie") && !value["Cookie"].IsNull())
    {
        if (!value["Cookie"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheKeyParameters.Cookie` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cookie.Deserialize(value["Cookie"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cookieHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheKeyParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullURLCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullURLCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullURLCache.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryString.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ignoreCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreCase.c_str(), allocator).Move(), allocator);
    }

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_header.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cookie.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CacheKeyParameters::GetFullURLCache() const
{
    return m_fullURLCache;
}

void CacheKeyParameters::SetFullURLCache(const string& _fullURLCache)
{
    m_fullURLCache = _fullURLCache;
    m_fullURLCacheHasBeenSet = true;
}

bool CacheKeyParameters::FullURLCacheHasBeenSet() const
{
    return m_fullURLCacheHasBeenSet;
}

CacheKeyQueryString CacheKeyParameters::GetQueryString() const
{
    return m_queryString;
}

void CacheKeyParameters::SetQueryString(const CacheKeyQueryString& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool CacheKeyParameters::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

string CacheKeyParameters::GetIgnoreCase() const
{
    return m_ignoreCase;
}

void CacheKeyParameters::SetIgnoreCase(const string& _ignoreCase)
{
    m_ignoreCase = _ignoreCase;
    m_ignoreCaseHasBeenSet = true;
}

bool CacheKeyParameters::IgnoreCaseHasBeenSet() const
{
    return m_ignoreCaseHasBeenSet;
}

CacheKeyHeader CacheKeyParameters::GetHeader() const
{
    return m_header;
}

void CacheKeyParameters::SetHeader(const CacheKeyHeader& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool CacheKeyParameters::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

string CacheKeyParameters::GetScheme() const
{
    return m_scheme;
}

void CacheKeyParameters::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool CacheKeyParameters::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

CacheKeyCookie CacheKeyParameters::GetCookie() const
{
    return m_cookie;
}

void CacheKeyParameters::SetCookie(const CacheKeyCookie& _cookie)
{
    m_cookie = _cookie;
    m_cookieHasBeenSet = true;
}

bool CacheKeyParameters::CookieHasBeenSet() const
{
    return m_cookieHasBeenSet;
}

