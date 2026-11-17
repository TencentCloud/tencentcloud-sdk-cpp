/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbs/v20211108/model/StorageTieredStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

StorageTieredStrategy::StorageTieredStrategy() :
    m_dayToLowFrequencyHasBeenSet(false),
    m_dayToArchiveHasBeenSet(false),
    m_dayToDeepArchiveHasBeenSet(false)
{
}

CoreInternalOutcome StorageTieredStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DayToLowFrequency") && !value["DayToLowFrequency"].IsNull())
    {
        if (!value["DayToLowFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageTieredStrategy.DayToLowFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayToLowFrequency = value["DayToLowFrequency"].GetInt64();
        m_dayToLowFrequencyHasBeenSet = true;
    }

    if (value.HasMember("DayToArchive") && !value["DayToArchive"].IsNull())
    {
        if (!value["DayToArchive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageTieredStrategy.DayToArchive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayToArchive = value["DayToArchive"].GetInt64();
        m_dayToArchiveHasBeenSet = true;
    }

    if (value.HasMember("DayToDeepArchive") && !value["DayToDeepArchive"].IsNull())
    {
        if (!value["DayToDeepArchive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageTieredStrategy.DayToDeepArchive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayToDeepArchive = value["DayToDeepArchive"].GetInt64();
        m_dayToDeepArchiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageTieredStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayToLowFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayToLowFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayToLowFrequency, allocator);
    }

    if (m_dayToArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayToArchive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayToArchive, allocator);
    }

    if (m_dayToDeepArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayToDeepArchive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayToDeepArchive, allocator);
    }

}


int64_t StorageTieredStrategy::GetDayToLowFrequency() const
{
    return m_dayToLowFrequency;
}

void StorageTieredStrategy::SetDayToLowFrequency(const int64_t& _dayToLowFrequency)
{
    m_dayToLowFrequency = _dayToLowFrequency;
    m_dayToLowFrequencyHasBeenSet = true;
}

bool StorageTieredStrategy::DayToLowFrequencyHasBeenSet() const
{
    return m_dayToLowFrequencyHasBeenSet;
}

int64_t StorageTieredStrategy::GetDayToArchive() const
{
    return m_dayToArchive;
}

void StorageTieredStrategy::SetDayToArchive(const int64_t& _dayToArchive)
{
    m_dayToArchive = _dayToArchive;
    m_dayToArchiveHasBeenSet = true;
}

bool StorageTieredStrategy::DayToArchiveHasBeenSet() const
{
    return m_dayToArchiveHasBeenSet;
}

int64_t StorageTieredStrategy::GetDayToDeepArchive() const
{
    return m_dayToDeepArchive;
}

void StorageTieredStrategy::SetDayToDeepArchive(const int64_t& _dayToDeepArchive)
{
    m_dayToDeepArchive = _dayToDeepArchive;
    m_dayToDeepArchiveHasBeenSet = true;
}

bool StorageTieredStrategy::DayToDeepArchiveHasBeenSet() const
{
    return m_dayToDeepArchiveHasBeenSet;
}

