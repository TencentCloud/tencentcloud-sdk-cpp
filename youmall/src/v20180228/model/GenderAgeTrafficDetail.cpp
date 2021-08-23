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

#include <tencentcloud/youmall/v20180228/model/GenderAgeTrafficDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

GenderAgeTrafficDetail::GenderAgeTrafficDetail() :
    m_genderHasBeenSet(false),
    m_ageGapHasBeenSet(false),
    m_trafficCountHasBeenSet(false)
{
}

CoreInternalOutcome GenderAgeTrafficDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GenderAgeTrafficDetail.Gender` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetUint64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("AgeGap") && !value["AgeGap"].IsNull())
    {
        if (!value["AgeGap"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GenderAgeTrafficDetail.AgeGap` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ageGap = string(value["AgeGap"].GetString());
        m_ageGapHasBeenSet = true;
    }

    if (value.HasMember("TrafficCount") && !value["TrafficCount"].IsNull())
    {
        if (!value["TrafficCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GenderAgeTrafficDetail.TrafficCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trafficCount = value["TrafficCount"].GetUint64();
        m_trafficCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GenderAgeTrafficDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_ageGapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgeGap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ageGap.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trafficCount, allocator);
    }

}


uint64_t GenderAgeTrafficDetail::GetGender() const
{
    return m_gender;
}

void GenderAgeTrafficDetail::SetGender(const uint64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool GenderAgeTrafficDetail::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string GenderAgeTrafficDetail::GetAgeGap() const
{
    return m_ageGap;
}

void GenderAgeTrafficDetail::SetAgeGap(const string& _ageGap)
{
    m_ageGap = _ageGap;
    m_ageGapHasBeenSet = true;
}

bool GenderAgeTrafficDetail::AgeGapHasBeenSet() const
{
    return m_ageGapHasBeenSet;
}

uint64_t GenderAgeTrafficDetail::GetTrafficCount() const
{
    return m_trafficCount;
}

void GenderAgeTrafficDetail::SetTrafficCount(const uint64_t& _trafficCount)
{
    m_trafficCount = _trafficCount;
    m_trafficCountHasBeenSet = true;
}

bool GenderAgeTrafficDetail::TrafficCountHasBeenSet() const
{
    return m_trafficCountHasBeenSet;
}

