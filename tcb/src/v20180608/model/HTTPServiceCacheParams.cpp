/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceCacheParams::HTTPServiceCacheParams() :
    m_followOriginHasBeenSet(false),
    m_noCacheHasBeenSet(false),
    m_cacheTimeHasBeenSet(false),
    m_maxAgeTimeHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceCacheParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheParams.FollowOrigin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_followOrigin = value["FollowOrigin"].GetBool();
        m_followOriginHasBeenSet = true;
    }

    if (value.HasMember("NoCache") && !value["NoCache"].IsNull())
    {
        if (!value["NoCache"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheParams.NoCache` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noCache = value["NoCache"].GetBool();
        m_noCacheHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheParams.CacheTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = value["CacheTime"].GetUint64();
        m_cacheTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeTime") && !value["MaxAgeTime"].IsNull())
    {
        if (!value["MaxAgeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheParams.MaxAgeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAgeTime = value["MaxAgeTime"].GetUint64();
        m_maxAgeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceCacheParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_followOrigin, allocator);
    }

    if (m_noCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noCache, allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTime, allocator);
    }

    if (m_maxAgeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAgeTime, allocator);
    }

}


bool HTTPServiceCacheParams::GetFollowOrigin() const
{
    return m_followOrigin;
}

void HTTPServiceCacheParams::SetFollowOrigin(const bool& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool HTTPServiceCacheParams::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

bool HTTPServiceCacheParams::GetNoCache() const
{
    return m_noCache;
}

void HTTPServiceCacheParams::SetNoCache(const bool& _noCache)
{
    m_noCache = _noCache;
    m_noCacheHasBeenSet = true;
}

bool HTTPServiceCacheParams::NoCacheHasBeenSet() const
{
    return m_noCacheHasBeenSet;
}

uint64_t HTTPServiceCacheParams::GetCacheTime() const
{
    return m_cacheTime;
}

void HTTPServiceCacheParams::SetCacheTime(const uint64_t& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool HTTPServiceCacheParams::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

uint64_t HTTPServiceCacheParams::GetMaxAgeTime() const
{
    return m_maxAgeTime;
}

void HTTPServiceCacheParams::SetMaxAgeTime(const uint64_t& _maxAgeTime)
{
    m_maxAgeTime = _maxAgeTime;
    m_maxAgeTimeHasBeenSet = true;
}

bool HTTPServiceCacheParams::MaxAgeTimeHasBeenSet() const
{
    return m_maxAgeTimeHasBeenSet;
}

