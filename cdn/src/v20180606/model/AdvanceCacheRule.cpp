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

#include <tencentcloud/cdn/v20180606/model/AdvanceCacheRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvanceCacheRule::AdvanceCacheRule() :
    m_cacheTypeHasBeenSet(false),
    m_cacheContentsHasBeenSet(false),
    m_cacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome AdvanceCacheRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CacheType") && !value["CacheType"].IsNull())
    {
        if (!value["CacheType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceCacheRule.CacheType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheType = string(value["CacheType"].GetString());
        m_cacheTypeHasBeenSet = true;
    }

    if (value.HasMember("CacheContents") && !value["CacheContents"].IsNull())
    {
        if (!value["CacheContents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvanceCacheRule.CacheContents` is not array type"));

        const rapidjson::Value &tmpValue = value["CacheContents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cacheContents.push_back((*itr).GetString());
        }
        m_cacheContentsHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceCacheRule.CacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = value["CacheTime"].GetInt64();
        m_cacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvanceCacheRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cacheTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheType.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cacheContents.begin(); itr != m_cacheContents.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTime, allocator);
    }

}


string AdvanceCacheRule::GetCacheType() const
{
    return m_cacheType;
}

void AdvanceCacheRule::SetCacheType(const string& _cacheType)
{
    m_cacheType = _cacheType;
    m_cacheTypeHasBeenSet = true;
}

bool AdvanceCacheRule::CacheTypeHasBeenSet() const
{
    return m_cacheTypeHasBeenSet;
}

vector<string> AdvanceCacheRule::GetCacheContents() const
{
    return m_cacheContents;
}

void AdvanceCacheRule::SetCacheContents(const vector<string>& _cacheContents)
{
    m_cacheContents = _cacheContents;
    m_cacheContentsHasBeenSet = true;
}

bool AdvanceCacheRule::CacheContentsHasBeenSet() const
{
    return m_cacheContentsHasBeenSet;
}

int64_t AdvanceCacheRule::GetCacheTime() const
{
    return m_cacheTime;
}

void AdvanceCacheRule::SetCacheTime(const int64_t& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool AdvanceCacheRule::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

