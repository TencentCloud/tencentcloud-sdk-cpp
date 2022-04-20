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

#include <tencentcloud/cdn/v20180606/model/CacheConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CacheConfig::CacheConfig() :
    m_heuristicCacheTimeSwitchHasBeenSet(false),
    m_heuristicCacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome CacheConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeuristicCacheTimeSwitch") && !value["HeuristicCacheTimeSwitch"].IsNull())
    {
        if (!value["HeuristicCacheTimeSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfig.HeuristicCacheTimeSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_heuristicCacheTimeSwitch = string(value["HeuristicCacheTimeSwitch"].GetString());
        m_heuristicCacheTimeSwitchHasBeenSet = true;
    }

    if (value.HasMember("HeuristicCacheTime") && !value["HeuristicCacheTime"].IsNull())
    {
        if (!value["HeuristicCacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfig.HeuristicCacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heuristicCacheTime = value["HeuristicCacheTime"].GetInt64();
        m_heuristicCacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heuristicCacheTimeSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeuristicCacheTimeSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_heuristicCacheTimeSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_heuristicCacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeuristicCacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heuristicCacheTime, allocator);
    }

}


string CacheConfig::GetHeuristicCacheTimeSwitch() const
{
    return m_heuristicCacheTimeSwitch;
}

void CacheConfig::SetHeuristicCacheTimeSwitch(const string& _heuristicCacheTimeSwitch)
{
    m_heuristicCacheTimeSwitch = _heuristicCacheTimeSwitch;
    m_heuristicCacheTimeSwitchHasBeenSet = true;
}

bool CacheConfig::HeuristicCacheTimeSwitchHasBeenSet() const
{
    return m_heuristicCacheTimeSwitchHasBeenSet;
}

int64_t CacheConfig::GetHeuristicCacheTime() const
{
    return m_heuristicCacheTime;
}

void CacheConfig::SetHeuristicCacheTime(const int64_t& _heuristicCacheTime)
{
    m_heuristicCacheTime = _heuristicCacheTime;
    m_heuristicCacheTimeHasBeenSet = true;
}

bool CacheConfig::HeuristicCacheTimeHasBeenSet() const
{
    return m_heuristicCacheTimeHasBeenSet;
}

