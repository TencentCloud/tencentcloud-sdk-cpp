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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceCacheAction::HTTPServiceCacheAction() :
    m_typeHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_cacheKeyHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceCacheAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheAction.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheAction.Cache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cache.Deserialize(value["Cache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("CacheKey") && !value["CacheKey"].IsNull())
    {
        if (!value["CacheKey"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheAction.CacheKey` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKey.Deserialize(value["CacheKey"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceCacheAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKey.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HTTPServiceCacheAction::GetType() const
{
    return m_type;
}

void HTTPServiceCacheAction::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HTTPServiceCacheAction::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

HTTPServiceCacheParams HTTPServiceCacheAction::GetCache() const
{
    return m_cache;
}

void HTTPServiceCacheAction::SetCache(const HTTPServiceCacheParams& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool HTTPServiceCacheAction::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

HTTPServiceCacheKeyParams HTTPServiceCacheAction::GetCacheKey() const
{
    return m_cacheKey;
}

void HTTPServiceCacheAction::SetCacheKey(const HTTPServiceCacheKeyParams& _cacheKey)
{
    m_cacheKey = _cacheKey;
    m_cacheKeyHasBeenSet = true;
}

bool HTTPServiceCacheAction::CacheKeyHasBeenSet() const
{
    return m_cacheKeyHasBeenSet;
}

