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

#include <tencentcloud/csip/v20221121/model/VulTrend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulTrend::VulTrend() :
    m_affectAssetCountHasBeenSet(false),
    m_affectUserCountHasBeenSet(false),
    m_attackCountHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome VulTrend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectAssetCount") && !value["AffectAssetCount"].IsNull())
    {
        if (!value["AffectAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTrend.AffectAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectAssetCount = value["AffectAssetCount"].GetInt64();
        m_affectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AffectUserCount") && !value["AffectUserCount"].IsNull())
    {
        if (!value["AffectUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTrend.AffectUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectUserCount = value["AffectUserCount"].GetInt64();
        m_affectUserCountHasBeenSet = true;
    }

    if (value.HasMember("AttackCount") && !value["AttackCount"].IsNull())
    {
        if (!value["AttackCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulTrend.AttackCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCount = value["AttackCount"].GetInt64();
        m_attackCountHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulTrend.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulTrend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_affectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectAssetCount, allocator);
    }

    if (m_affectUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectUserCount, allocator);
    }

    if (m_attackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCount, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


int64_t VulTrend::GetAffectAssetCount() const
{
    return m_affectAssetCount;
}

void VulTrend::SetAffectAssetCount(const int64_t& _affectAssetCount)
{
    m_affectAssetCount = _affectAssetCount;
    m_affectAssetCountHasBeenSet = true;
}

bool VulTrend::AffectAssetCountHasBeenSet() const
{
    return m_affectAssetCountHasBeenSet;
}

int64_t VulTrend::GetAffectUserCount() const
{
    return m_affectUserCount;
}

void VulTrend::SetAffectUserCount(const int64_t& _affectUserCount)
{
    m_affectUserCount = _affectUserCount;
    m_affectUserCountHasBeenSet = true;
}

bool VulTrend::AffectUserCountHasBeenSet() const
{
    return m_affectUserCountHasBeenSet;
}

int64_t VulTrend::GetAttackCount() const
{
    return m_attackCount;
}

void VulTrend::SetAttackCount(const int64_t& _attackCount)
{
    m_attackCount = _attackCount;
    m_attackCountHasBeenSet = true;
}

bool VulTrend::AttackCountHasBeenSet() const
{
    return m_attackCountHasBeenSet;
}

string VulTrend::GetDate() const
{
    return m_date;
}

void VulTrend::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VulTrend::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

