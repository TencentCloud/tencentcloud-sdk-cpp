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

#include <tencentcloud/cdn/v20180606/model/SimpleCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

SimpleCache::SimpleCache() :
    m_cacheRulesHasBeenSet(false),
    m_followOriginHasBeenSet(false),
    m_ignoreCacheControlHasBeenSet(false),
    m_ignoreSetCookieHasBeenSet(false),
    m_compareMaxAgeHasBeenSet(false),
    m_revalidateHasBeenSet(false)
{
}

CoreInternalOutcome SimpleCache::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CacheRules") && !value["CacheRules"].IsNull())
    {
        if (!value["CacheRules"].IsArray())
            return CoreInternalOutcome(Error("response `SimpleCache.CacheRules` is not array type"));

        const Value &tmpValue = value["CacheRules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimpleCacheRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cacheRules.push_back(item);
        }
        m_cacheRulesHasBeenSet = true;
    }

    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleCache.FollowOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followOrigin = string(value["FollowOrigin"].GetString());
        m_followOriginHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCacheControl") && !value["IgnoreCacheControl"].IsNull())
    {
        if (!value["IgnoreCacheControl"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleCache.IgnoreCacheControl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCacheControl = string(value["IgnoreCacheControl"].GetString());
        m_ignoreCacheControlHasBeenSet = true;
    }

    if (value.HasMember("IgnoreSetCookie") && !value["IgnoreSetCookie"].IsNull())
    {
        if (!value["IgnoreSetCookie"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleCache.IgnoreSetCookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreSetCookie = string(value["IgnoreSetCookie"].GetString());
        m_ignoreSetCookieHasBeenSet = true;
    }

    if (value.HasMember("CompareMaxAge") && !value["CompareMaxAge"].IsNull())
    {
        if (!value["CompareMaxAge"].IsString())
        {
            return CoreInternalOutcome(Error("response `SimpleCache.CompareMaxAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareMaxAge = string(value["CompareMaxAge"].GetString());
        m_compareMaxAgeHasBeenSet = true;
    }

    if (value.HasMember("Revalidate") && !value["Revalidate"].IsNull())
    {
        if (!value["Revalidate"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SimpleCache.Revalidate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_revalidate.Deserialize(value["Revalidate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_revalidateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleCache::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cacheRulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cacheRules.begin(); itr != m_cacheRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_followOriginHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_followOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreCacheControlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IgnoreCacheControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ignoreCacheControl.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreSetCookieHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IgnoreSetCookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ignoreSetCookie.c_str(), allocator).Move(), allocator);
    }

    if (m_compareMaxAgeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompareMaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_compareMaxAge.c_str(), allocator).Move(), allocator);
    }

    if (m_revalidateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Revalidate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_revalidate.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<SimpleCacheRule> SimpleCache::GetCacheRules() const
{
    return m_cacheRules;
}

void SimpleCache::SetCacheRules(const vector<SimpleCacheRule>& _cacheRules)
{
    m_cacheRules = _cacheRules;
    m_cacheRulesHasBeenSet = true;
}

bool SimpleCache::CacheRulesHasBeenSet() const
{
    return m_cacheRulesHasBeenSet;
}

string SimpleCache::GetFollowOrigin() const
{
    return m_followOrigin;
}

void SimpleCache::SetFollowOrigin(const string& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool SimpleCache::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

string SimpleCache::GetIgnoreCacheControl() const
{
    return m_ignoreCacheControl;
}

void SimpleCache::SetIgnoreCacheControl(const string& _ignoreCacheControl)
{
    m_ignoreCacheControl = _ignoreCacheControl;
    m_ignoreCacheControlHasBeenSet = true;
}

bool SimpleCache::IgnoreCacheControlHasBeenSet() const
{
    return m_ignoreCacheControlHasBeenSet;
}

string SimpleCache::GetIgnoreSetCookie() const
{
    return m_ignoreSetCookie;
}

void SimpleCache::SetIgnoreSetCookie(const string& _ignoreSetCookie)
{
    m_ignoreSetCookie = _ignoreSetCookie;
    m_ignoreSetCookieHasBeenSet = true;
}

bool SimpleCache::IgnoreSetCookieHasBeenSet() const
{
    return m_ignoreSetCookieHasBeenSet;
}

string SimpleCache::GetCompareMaxAge() const
{
    return m_compareMaxAge;
}

void SimpleCache::SetCompareMaxAge(const string& _compareMaxAge)
{
    m_compareMaxAge = _compareMaxAge;
    m_compareMaxAgeHasBeenSet = true;
}

bool SimpleCache::CompareMaxAgeHasBeenSet() const
{
    return m_compareMaxAgeHasBeenSet;
}

Revalidate SimpleCache::GetRevalidate() const
{
    return m_revalidate;
}

void SimpleCache::SetRevalidate(const Revalidate& _revalidate)
{
    m_revalidate = _revalidate;
    m_revalidateHasBeenSet = true;
}

bool SimpleCache::RevalidateHasBeenSet() const
{
    return m_revalidateHasBeenSet;
}

