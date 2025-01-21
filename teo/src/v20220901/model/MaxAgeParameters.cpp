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

#include <tencentcloud/teo/v20220901/model/MaxAgeParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MaxAgeParameters::MaxAgeParameters() :
    m_followOriginHasBeenSet(false),
    m_cacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome MaxAgeParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgeParameters.FollowOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followOrigin = string(value["FollowOrigin"].GetString());
        m_followOriginHasBeenSet = true;
    }

    if (value.HasMember("CacheTime") && !value["CacheTime"].IsNull())
    {
        if (!value["CacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAgeParameters.CacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = value["CacheTime"].GetInt64();
        m_cacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAgeParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheTime, allocator);
    }

}


string MaxAgeParameters::GetFollowOrigin() const
{
    return m_followOrigin;
}

void MaxAgeParameters::SetFollowOrigin(const string& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool MaxAgeParameters::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

int64_t MaxAgeParameters::GetCacheTime() const
{
    return m_cacheTime;
}

void MaxAgeParameters::SetCacheTime(const int64_t& _cacheTime)
{
    m_cacheTime = _cacheTime;
    m_cacheTimeHasBeenSet = true;
}

bool MaxAgeParameters::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

