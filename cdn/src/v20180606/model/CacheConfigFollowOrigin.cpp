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

#include <tencentcloud/cdn/v20180606/model/CacheConfigFollowOrigin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CacheConfigFollowOrigin::CacheConfigFollowOrigin() :
    m_switchHasBeenSet(false),
    m_heuristicCacheHasBeenSet(false),
    m_originMtimeCheckTypeHasBeenSet(false)
{
}

CoreInternalOutcome CacheConfigFollowOrigin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigFollowOrigin.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("HeuristicCache") && !value["HeuristicCache"].IsNull())
    {
        if (!value["HeuristicCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigFollowOrigin.HeuristicCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heuristicCache.Deserialize(value["HeuristicCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heuristicCacheHasBeenSet = true;
    }

    if (value.HasMember("OriginMtimeCheckType") && !value["OriginMtimeCheckType"].IsNull())
    {
        if (!value["OriginMtimeCheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheConfigFollowOrigin.OriginMtimeCheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originMtimeCheckType = string(value["OriginMtimeCheckType"].GetString());
        m_originMtimeCheckTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheConfigFollowOrigin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_heuristicCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeuristicCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heuristicCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originMtimeCheckTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginMtimeCheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originMtimeCheckType.c_str(), allocator).Move(), allocator);
    }

}


string CacheConfigFollowOrigin::GetSwitch() const
{
    return m_switch;
}

void CacheConfigFollowOrigin::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool CacheConfigFollowOrigin::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

HeuristicCache CacheConfigFollowOrigin::GetHeuristicCache() const
{
    return m_heuristicCache;
}

void CacheConfigFollowOrigin::SetHeuristicCache(const HeuristicCache& _heuristicCache)
{
    m_heuristicCache = _heuristicCache;
    m_heuristicCacheHasBeenSet = true;
}

bool CacheConfigFollowOrigin::HeuristicCacheHasBeenSet() const
{
    return m_heuristicCacheHasBeenSet;
}

string CacheConfigFollowOrigin::GetOriginMtimeCheckType() const
{
    return m_originMtimeCheckType;
}

void CacheConfigFollowOrigin::SetOriginMtimeCheckType(const string& _originMtimeCheckType)
{
    m_originMtimeCheckType = _originMtimeCheckType;
    m_originMtimeCheckTypeHasBeenSet = true;
}

bool CacheConfigFollowOrigin::OriginMtimeCheckTypeHasBeenSet() const
{
    return m_originMtimeCheckTypeHasBeenSet;
}

