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

#include <tencentcloud/cdn/v20180606/model/CacheConfigNoCache.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CacheConfigNoCache::CacheConfigNoCache() :
    m_switchHasBeenSet(false),
    m_revalidateHasBeenSet(false)
{
}

CoreInternalOutcome CacheConfigNoCache::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigNoCache.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Revalidate") && !value["Revalidate"].IsNull())
    {
        if (!value["Revalidate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigNoCache.Revalidate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revalidate = string(value["Revalidate"].GetString());
        m_revalidateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheConfigNoCache::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_revalidateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revalidate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revalidate.c_str(), allocator).Move(), allocator);
    }

}


string CacheConfigNoCache::GetSwitch() const
{
    return m_switch;
}

void CacheConfigNoCache::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CacheConfigNoCache::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string CacheConfigNoCache::GetRevalidate() const
{
    return m_revalidate;
}

void CacheConfigNoCache::SetRevalidate(const string& _revalidate)
{
    m_revalidate = _revalidate;
    m_revalidateHasBeenSet = true;
}

bool CacheConfigNoCache::RevalidateHasBeenSet() const
{
    return m_revalidateHasBeenSet;
}

