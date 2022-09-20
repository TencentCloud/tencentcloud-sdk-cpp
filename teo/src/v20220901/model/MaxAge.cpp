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

#include <tencentcloud/teo/v20220901/model/MaxAge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

MaxAge::MaxAge() :
    m_followOriginHasBeenSet(false),
    m_maxAgeTimeHasBeenSet(false)
{
}

CoreInternalOutcome MaxAge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FollowOrigin") && !value["FollowOrigin"].IsNull())
    {
        if (!value["FollowOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAge.FollowOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followOrigin = string(value["FollowOrigin"].GetString());
        m_followOriginHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeTime") && !value["MaxAgeTime"].IsNull())
    {
        if (!value["MaxAgeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAge.MaxAgeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAgeTime = value["MaxAgeTime"].GetInt64();
        m_maxAgeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_followOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAgeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAgeTime, allocator);
    }

}


string MaxAge::GetFollowOrigin() const
{
    return m_followOrigin;
}

void MaxAge::SetFollowOrigin(const string& _followOrigin)
{
    m_followOrigin = _followOrigin;
    m_followOriginHasBeenSet = true;
}

bool MaxAge::FollowOriginHasBeenSet() const
{
    return m_followOriginHasBeenSet;
}

int64_t MaxAge::GetMaxAgeTime() const
{
    return m_maxAgeTime;
}

void MaxAge::SetMaxAgeTime(const int64_t& _maxAgeTime)
{
    m_maxAgeTime = _maxAgeTime;
    m_maxAgeTimeHasBeenSet = true;
}

bool MaxAge::MaxAgeTimeHasBeenSet() const
{
    return m_maxAgeTimeHasBeenSet;
}

