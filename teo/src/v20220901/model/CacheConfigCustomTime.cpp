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

#include <tencentcloud/teo/v20220901/model/CacheConfigCustomTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CacheConfigCustomTime::CacheConfigCustomTime() :
    m_switchHasBeenSet(false),
    m_cacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome CacheConfigCustomTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCustomTime.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigCustomTime.CacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = value["CacheTime"].GetInt64();
        m_cacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheConfigCustomTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTime, allocator);
    }

}


string CacheConfigCustomTime::GetSwitch() const
{
    return m_switch;
}

void CacheConfigCustomTime::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CacheConfigCustomTime::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t CacheConfigCustomTime::GetCacheTime() const
{
    return m_cacheTime;
}

void CacheConfigCustomTime::SetCacheTime(const int64_t& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool CacheConfigCustomTime::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

