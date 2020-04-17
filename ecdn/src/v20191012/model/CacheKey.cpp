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

#include <tencentcloud/ecdn/v20191012/model/CacheKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace rapidjson;
using namespace std;

CacheKey::CacheKey() :
    m_fullUrlCacheHasBeenSet(false)
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

