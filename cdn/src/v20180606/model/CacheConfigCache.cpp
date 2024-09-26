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

#include <tencentcloud/cdn/v20180606/model/CacheConfigCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CacheConfigCache::CacheConfigCache() :
    m_switchHasBeenSet(false),
    m_cacheTimeHasBeenSet(false),
    m_compareMaxAgeHasBeenSet(false),
    m_ignoreCacheControlHasBeenSet(false),
    m_ignoreSetCookieHasBeenSet(false),
    m_originMtimeCheckTypeHasBeenSet(false)
{
}

CoreInternalOutcome CacheConfigCache::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCache.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCache.CacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = value["CacheTime"].GetInt64();
        m_cacheTimeHasBeenSet = true;
    }

    if (value.HasMember("CompareMaxAge") && !value["CompareMaxAge"].IsNull())
    {
        if (!value["CompareMaxAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCache.CompareMaxAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareMaxAge = string(value["CompareMaxAge"].GetString());
        m_compareMaxAgeHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCacheControl") && !value["IgnoreCacheControl"].IsNull())
    {
        if (!value["IgnoreCacheControl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCache.IgnoreCacheControl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCacheControl = string(value["IgnoreCacheControl"].GetString());
        m_ignoreCacheControlHasBeenSet = true;
    }

    if (value.HasMember("IgnoreSetCookie") && !value["IgnoreSetCookie"].IsNull())
    {
        if (!value["IgnoreSetCookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCache.IgnoreSetCookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreSetCookie = string(value["IgnoreSetCookie"].GetString());
        m_ignoreSetCookieHasBeenSet = true;
    }

    if (value.HasMember("OriginMtimeCheckType") && !value["OriginMtimeCheckType"].IsNull())
    {
        if (!value["OriginMtimeCheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCache.OriginMtimeCheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originMtimeCheckType = string(value["OriginMtimeCheckType"].GetString());
        m_originMtimeCheckTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheConfigCache::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTime, allocator);
    }

    if (m_compareMaxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareMaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareMaxAge.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreCacheControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCacheControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreCacheControl.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreSetCookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreSetCookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreSetCookie.c_str(), allocator).Move(), allocator);
    }

    if (m_originMtimeCheckTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginMtimeCheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originMtimeCheckType.c_str(), allocator).Move(), allocator);
    }

}


string CacheConfigCache::GetSwitch() const
{
    return m_switch;
}

void CacheConfigCache::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CacheConfigCache::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t CacheConfigCache::GetCacheTime() const
{
    return m_cacheTime;
}

void CacheConfigCache::SetCacheTime(const int64_t& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool CacheConfigCache::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

string CacheConfigCache::GetCompareMaxAge() const
{
    return m_compareMaxAge;
}

void CacheConfigCache::SetCompareMaxAge(const string& _compareMaxAge)
{
    m_compareMaxAge = _compareMaxAge;
    m_compareMaxAgeHasBeenSet = true;
}

bool CacheConfigCache::CompareMaxAgeHasBeenSet() const
{
    return m_compareMaxAgeHasBeenSet;
}

string CacheConfigCache::GetIgnoreCacheControl() const
{
    return m_ignoreCacheControl;
}

void CacheConfigCache::SetIgnoreCacheControl(const string& _ignoreCacheControl)
{
    m_ignoreCacheControl = _ignoreCacheControl;
    m_ignoreCacheControlHasBeenSet = true;
}

bool CacheConfigCache::IgnoreCacheControlHasBeenSet() const
{
    return m_ignoreCacheControlHasBeenSet;
}

string CacheConfigCache::GetIgnoreSetCookie() const
{
    return m_ignoreSetCookie;
}

void CacheConfigCache::SetIgnoreSetCookie(const string& _ignoreSetCookie)
{
    m_ignoreSetCookie = _ignoreSetCookie;
    m_ignoreSetCookieHasBeenSet = true;
}

bool CacheConfigCache::IgnoreSetCookieHasBeenSet() const
{
    return m_ignoreSetCookieHasBeenSet;
}

string CacheConfigCache::GetOriginMtimeCheckType() const
{
    return m_originMtimeCheckType;
}

void CacheConfigCache::SetOriginMtimeCheckType(const string& _originMtimeCheckType)
{
    m_originMtimeCheckType = _originMtimeCheckType;
    m_originMtimeCheckTypeHasBeenSet = true;
}

bool CacheConfigCache::OriginMtimeCheckTypeHasBeenSet() const
{
    return m_originMtimeCheckTypeHasBeenSet;
}

