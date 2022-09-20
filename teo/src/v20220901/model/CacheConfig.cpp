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

#include <tencentcloud/teo/v20220901/model/CacheConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CacheConfig::CacheConfig() :
    m_cacheHasBeenSet(false),
    m_noCacheHasBeenSet(false),
    m_followOriginHasBeenSet(false)
{
}

CoreInternalOutcome CacheConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfig.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("NoCache") && !value["NoCache"].IsNull())
    {
        if (!value["NoCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfig.NoCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_noCache.Deserialize(value["NoCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noCacheHasBeenSet = true;
    }

    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfig.FollowOrigin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followOrigin.Deserialize(value["FollowOrigin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_noCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followOrigin.ToJsonObject(value[key.c_str()], allocator);
    }

}


Cache CacheConfig::GetCache() const
{
    return m_cache;
}

void CacheConfig::SetCache(const Cache& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool CacheConfig::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

NoCache CacheConfig::GetNoCache() const
{
    return m_noCache;
}

void CacheConfig::SetNoCache(const NoCache& _noCache)
{
    m_noCache = _noCache;
    m_noCacheHasBeenSet = true;
}

bool CacheConfig::NoCacheHasBeenSet() const
{
    return m_noCacheHasBeenSet;
}

FollowOrigin CacheConfig::GetFollowOrigin() const
{
    return m_followOrigin;
}

void CacheConfig::SetFollowOrigin(const FollowOrigin& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool CacheConfig::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

