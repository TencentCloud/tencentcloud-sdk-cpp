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
using namespace std;

Cache::Cache() :
    m_simpleCacheHasBeenSet(false),
    m_advancedCacheHasBeenSet(false),
    m_ruleCacheHasBeenSet(false)
{
}

CoreInternalOutcome Cache::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SimpleCache") && !value["SimpleCache"].IsNull())
    {
        if (!value["SimpleCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cache.SimpleCache` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Cache.AdvancedCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedCache.Deserialize(value["AdvancedCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedCacheHasBeenSet = true;
    }

    if (value.HasMember("RuleCache") && !value["RuleCache"].IsNull())
    {
        if (!value["RuleCache"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cache.RuleCache` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleCache"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleCache item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleCache.push_back(item);
        }
        m_ruleCacheHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cache::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_simpleCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_simpleCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advancedCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleCache.begin(); itr != m_ruleCache.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

vector<RuleCache> Cache::GetRuleCache() const
{
    return m_ruleCache;
}

void Cache::SetRuleCache(const vector<RuleCache>& _ruleCache)
{
    m_ruleCache = _ruleCache;
    m_ruleCacheHasBeenSet = true;
}

bool Cache::RuleCacheHasBeenSet() const
{
    return m_ruleCacheHasBeenSet;
}

