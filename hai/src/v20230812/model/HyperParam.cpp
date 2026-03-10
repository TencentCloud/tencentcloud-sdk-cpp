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

#include <tencentcloud/hai/v20230812/model/HyperParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

HyperParam::HyperParam() :
    m_hiCacheHasBeenSet(false)
{
}

CoreInternalOutcome HyperParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HiCache") && !value["HiCache"].IsNull())
    {
        if (!value["HiCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HyperParam.HiCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hiCache.Deserialize(value["HiCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hiCacheHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HyperParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hiCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hiCache.ToJsonObject(value[key.c_str()], allocator);
    }

}


HiCacheInfo HyperParam::GetHiCache() const
{
    return m_hiCache;
}

void HyperParam::SetHiCache(const HiCacheInfo& _hiCache)
{
    m_hiCache = _hiCache;
    m_hiCacheHasBeenSet = true;
}

bool HyperParam::HiCacheHasBeenSet() const
{
    return m_hiCacheHasBeenSet;
}

