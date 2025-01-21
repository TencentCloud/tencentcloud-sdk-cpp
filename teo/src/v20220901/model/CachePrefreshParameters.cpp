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

#include <tencentcloud/teo/v20220901/model/CachePrefreshParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CachePrefreshParameters::CachePrefreshParameters() :
    m_switchHasBeenSet(false),
    m_cacheTimePercentHasBeenSet(false)
{
}

CoreInternalOutcome CachePrefreshParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CachePrefreshParameters.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CacheTimePercent") && !value["CacheTimePercent"].IsNull())
    {
        if (!value["CacheTimePercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CachePrefreshParameters.CacheTimePercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTimePercent = value["CacheTimePercent"].GetInt64();
        m_cacheTimePercentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CachePrefreshParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTimePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTimePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTimePercent, allocator);
    }

}


string CachePrefreshParameters::GetSwitch() const
{
    return m_switch;
}

void CachePrefreshParameters::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CachePrefreshParameters::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t CachePrefreshParameters::GetCacheTimePercent() const
{
    return m_cacheTimePercent;
}

void CachePrefreshParameters::SetCacheTimePercent(const int64_t& _cacheTimePercent)
{
    m_cacheTimePercent = _cacheTimePercent;
    m_cacheTimePercentHasBeenSet = true;
}

bool CachePrefreshParameters::CacheTimePercentHasBeenSet() const
{
    return m_cacheTimePercentHasBeenSet;
}

