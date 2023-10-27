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

#include <tencentcloud/omics/v20221128/model/CacheInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

CacheInfo::CacheInfo() :
    m_cacheClearDelayHasBeenSet(false),
    m_cacheClearTimeHasBeenSet(false),
    m_cacheClearedHasBeenSet(false)
{
}

CoreInternalOutcome CacheInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CacheClearDelay") && !value["CacheClearDelay"].IsNull())
    {
        if (!value["CacheClearDelay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CacheInfo.CacheClearDelay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheClearDelay = value["CacheClearDelay"].GetUint64();
        m_cacheClearDelayHasBeenSet = true;
    }

    if (value.HasMember("CacheClearTime") && !value["CacheClearTime"].IsNull())
    {
        if (!value["CacheClearTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheInfo.CacheClearTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheClearTime = string(value["CacheClearTime"].GetString());
        m_cacheClearTimeHasBeenSet = true;
    }

    if (value.HasMember("CacheCleared") && !value["CacheCleared"].IsNull())
    {
        if (!value["CacheCleared"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CacheInfo.CacheCleared` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cacheCleared = value["CacheCleared"].GetBool();
        m_cacheClearedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cacheClearDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheClearDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheClearDelay, allocator);
    }

    if (m_cacheClearTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheClearTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheClearTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheClearedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheCleared";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheCleared, allocator);
    }

}


uint64_t CacheInfo::GetCacheClearDelay() const
{
    return m_cacheClearDelay;
}

void CacheInfo::SetCacheClearDelay(const uint64_t& _cacheClearDelay)
{
    m_cacheClearDelay = _cacheClearDelay;
    m_cacheClearDelayHasBeenSet = true;
}

bool CacheInfo::CacheClearDelayHasBeenSet() const
{
    return m_cacheClearDelayHasBeenSet;
}

string CacheInfo::GetCacheClearTime() const
{
    return m_cacheClearTime;
}

void CacheInfo::SetCacheClearTime(const string& _cacheClearTime)
{
    m_cacheClearTime = _cacheClearTime;
    m_cacheClearTimeHasBeenSet = true;
}

bool CacheInfo::CacheClearTimeHasBeenSet() const
{
    return m_cacheClearTimeHasBeenSet;
}

bool CacheInfo::GetCacheCleared() const
{
    return m_cacheCleared;
}

void CacheInfo::SetCacheCleared(const bool& _cacheCleared)
{
    m_cacheCleared = _cacheCleared;
    m_cacheClearedHasBeenSet = true;
}

bool CacheInfo::CacheClearedHasBeenSet() const
{
    return m_cacheClearedHasBeenSet;
}

