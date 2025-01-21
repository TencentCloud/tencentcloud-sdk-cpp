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

#include <tencentcloud/teo/v20220901/model/CacheParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CacheParameters::CacheParameters() :
    m_followOriginHasBeenSet(false),
    m_noCacheHasBeenSet(false),
    m_customTimeHasBeenSet(false)
{
}

CoreInternalOutcome CacheParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheParameters.FollowOrigin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_followOrigin.Deserialize(value["FollowOrigin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_followOriginHasBeenSet = true;
    }

    if (value.HasMember("NoCache") && !value["NoCache"].IsNull())
    {
        if (!value["NoCache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheParameters.NoCache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_noCache.Deserialize(value["NoCache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noCacheHasBeenSet = true;
    }

    if (value.HasMember("CustomTime") && !value["CustomTime"].IsNull())
    {
        if (!value["CustomTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CacheParameters.CustomTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customTime.Deserialize(value["CustomTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CacheParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_followOrigin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_noCache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customTime.ToJsonObject(value[key.c_str()], allocator);
    }

}


FollowOrigin CacheParameters::GetFollowOrigin() const
{
    return m_followOrigin;
}

void CacheParameters::SetFollowOrigin(const FollowOrigin& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool CacheParameters::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

NoCache CacheParameters::GetNoCache() const
{
    return m_noCache;
}

void CacheParameters::SetNoCache(const NoCache& _noCache)
{
    m_noCache = _noCache;
    m_noCacheHasBeenSet = true;
}

bool CacheParameters::NoCacheHasBeenSet() const
{
    return m_noCacheHasBeenSet;
}

CustomTime CacheParameters::GetCustomTime() const
{
    return m_customTime;
}

void CacheParameters::SetCustomTime(const CustomTime& _customTime)
{
    m_customTime = _customTime;
    m_customTimeHasBeenSet = true;
}

bool CacheParameters::CustomTimeHasBeenSet() const
{
    return m_customTimeHasBeenSet;
}

