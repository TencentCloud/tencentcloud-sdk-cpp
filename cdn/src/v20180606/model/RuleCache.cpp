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

#include <tencentcloud/cdn/v20180606/model/RuleCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

RuleCache::RuleCache() :
    m_rulePathsHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_cacheConfigHasBeenSet(false)
{
}

CoreInternalOutcome RuleCache::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Error("response `RuleCache.RulePaths` is not array type"));

        const Value &tmpValue = value["RulePaths"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RuleCache.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("CacheConfig") && !value["CacheConfig"].IsNull())
    {
        if (!value["CacheConfig"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RuleCache.CacheConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheConfig.Deserialize(value["CacheConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCache::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_rulePathsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RulePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_rulePaths.begin(); itr != m_rulePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CacheConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cacheConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> RuleCache::GetRulePaths() const
{
    return m_rulePaths;
}

void RuleCache::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool RuleCache::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

string RuleCache::GetRuleType() const
{
    return m_ruleType;
}

void RuleCache::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool RuleCache::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

RuleCacheConfig RuleCache::GetCacheConfig() const
{
    return m_cacheConfig;
}

void RuleCache::SetCacheConfig(const RuleCacheConfig& _cacheConfig)
{
    m_cacheConfig = _cacheConfig;
    m_cacheConfigHasBeenSet = true;
}

bool RuleCache::CacheConfigHasBeenSet() const
{
    return m_cacheConfigHasBeenSet;
}

