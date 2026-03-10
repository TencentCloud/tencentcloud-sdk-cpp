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

#include <tencentcloud/hai/v20230812/model/HiCacheInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

HiCacheInfo::HiCacheInfo() :
    m_hiCacheLevelHasBeenSet(false)
{
}

CoreInternalOutcome HiCacheInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HiCacheLevel") && !value["HiCacheLevel"].IsNull())
    {
        if (!value["HiCacheLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiCacheInfo.HiCacheLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiCacheLevel = string(value["HiCacheLevel"].GetString());
        m_hiCacheLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiCacheInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hiCacheLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiCacheLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiCacheLevel.c_str(), allocator).Move(), allocator);
    }

}


string HiCacheInfo::GetHiCacheLevel() const
{
    return m_hiCacheLevel;
}

void HiCacheInfo::SetHiCacheLevel(const string& _hiCacheLevel)
{
    m_hiCacheLevel = _hiCacheLevel;
    m_hiCacheLevelHasBeenSet = true;
}

bool HiCacheInfo::HiCacheLevelHasBeenSet() const
{
    return m_hiCacheLevelHasBeenSet;
}

