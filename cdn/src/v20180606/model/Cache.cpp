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

#include <tencentcloud/cdn/v20180606/model/Cache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

Cache::Cache() :
    m_simpleCacheHasBeenSet(false),
    m_advancedCacheHasBeenSet(false)
{
}

CoreInternalOutcome Cache::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SimpleCache") && !value["SimpleCache"].IsNull())
    {
        if (!value["SimpleCache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Cache.SimpleCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_simpleCache.Deserialize(value["SimpleCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_simpleCacheHasBeenSet = true;
    }

    if (value.HasMember("AdvancedCache") && !value["AdvancedCache"].IsNull())
    {
        if (!value["AdvancedCache"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Cache.AdvancedCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedCache.Deserialize(value["AdvancedCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedCacheHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cache::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_simpleCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SimpleCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_simpleCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advancedCacheHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdvancedCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_advancedCache.ToJsonObject(value[key.c_str()], allocator);
    }

}


SimpleCache Cache::GetSimpleCache() const
{
    return m_simpleCache;
}

void Cache::SetSimpleCache(const SimpleCache& _simpleCache)
{
    m_simpleCache = _simpleCache;
    m_simpleCacheHasBeenSet = true;
}

bool Cache::SimpleCacheHasBeenSet() const
{
    return m_simpleCacheHasBeenSet;
}

AdvancedCache Cache::GetAdvancedCache() const
{
    return m_advancedCache;
}

void Cache::SetAdvancedCache(const AdvancedCache& _advancedCache)
{
    m_advancedCache = _advancedCache;
    m_advancedCacheHasBeenSet = true;
}

bool Cache::AdvancedCacheHasBeenSet() const
{
    return m_advancedCacheHasBeenSet;
}

