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
    m_ignoreCaseHasBeenSet(false)
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

