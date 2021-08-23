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

#include <tencentcloud/ecdn/v20191012/model/Cache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

Cache::Cache() :
    m_cacheRulesHasBeenSet(false),
    m_followOriginHasBeenSet(false)
{
}

CoreInternalOutcome Cache::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CacheRules") && !value["CacheRules"].IsNull())
    {
        if (!value["CacheRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cache.CacheRules` is not array type"));

        const rapidjson::Value &tmpValue = value["CacheRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CacheRule item;
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
            return CoreInternalOutcome(Core::Error("response `Cache.FollowOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followOrigin = string(value["FollowOrigin"].GetString());
        m_followOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cache::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cacheRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cacheRules.begin(); itr != m_cacheRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followOrigin.c_str(), allocator).Move(), allocator);
    }

}


vector<CacheRule> Cache::GetCacheRules() const
{
    return m_cacheRules;
}

void Cache::SetCacheRules(const vector<CacheRule>& _cacheRules)
{
    m_cacheRules = _cacheRules;
    m_cacheRulesHasBeenSet = true;
}

bool Cache::CacheRulesHasBeenSet() const
{
    return m_cacheRulesHasBeenSet;
}

string Cache::GetFollowOrigin() const
{
    return m_followOrigin;
}

void Cache::SetFollowOrigin(const string& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool Cache::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

