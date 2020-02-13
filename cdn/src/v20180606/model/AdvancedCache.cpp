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

#include <tencentcloud/cdn/v20180606/model/AdvancedCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

AdvancedCache::AdvancedCache() :
    m_cacheRulesHasBeenSet(false),
    m_ignoreCacheControlHasBeenSet(false),
    m_ignoreSetCookieHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedCache::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CacheRules") && !value["CacheRules"].IsNull())
    {
        if (!value["CacheRules"].IsArray())
            return CoreInternalOutcome(Error("response `AdvancedCache.CacheRules` is not array type"));

        const Value &tmpValue = value["CacheRules"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvanceCacheRule item;
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

    if (value.HasMember("IgnoreCacheControl") && !value["IgnoreCacheControl"].IsNull())
    {
        if (!value["IgnoreCacheControl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdvancedCache.IgnoreCacheControl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCacheControl = string(value["IgnoreCacheControl"].GetString());
        m_ignoreCacheControlHasBeenSet = true;
    }

    if (value.HasMember("IgnoreSetCookie") && !value["IgnoreSetCookie"].IsNull())
    {
        if (!value["IgnoreSetCookie"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdvancedCache.IgnoreSetCookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreSetCookie = string(value["IgnoreSetCookie"].GetString());
        m_ignoreSetCookieHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedCache::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

}


vector<AdvanceCacheRule> AdvancedCache::GetCacheRules() const
{
    return m_cacheRules;
}

void AdvancedCache::SetCacheRules(const vector<AdvanceCacheRule>& _cacheRules)
{
    m_cacheRules = _cacheRules;
    m_cacheRulesHasBeenSet = true;
}

bool AdvancedCache::CacheRulesHasBeenSet() const
{
    return m_cacheRulesHasBeenSet;
}

string AdvancedCache::GetIgnoreCacheControl() const
{
    return m_ignoreCacheControl;
}

void AdvancedCache::SetIgnoreCacheControl(const string& _ignoreCacheControl)
{
    m_ignoreCacheControl = _ignoreCacheControl;
    m_ignoreCacheControlHasBeenSet = true;
}

bool AdvancedCache::IgnoreCacheControlHasBeenSet() const
{
    return m_ignoreCacheControlHasBeenSet;
}

string AdvancedCache::GetIgnoreSetCookie() const
{
    return m_ignoreSetCookie;
}

void AdvancedCache::SetIgnoreSetCookie(const string& _ignoreSetCookie)
{
    m_ignoreSetCookie = _ignoreSetCookie;
    m_ignoreSetCookieHasBeenSet = true;
}

bool AdvancedCache::IgnoreSetCookieHasBeenSet() const
{
    return m_ignoreSetCookieHasBeenSet;
}

