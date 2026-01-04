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

#include <tencentcloud/dbbrain/v20210527/model/RedisGlobalKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisGlobalKeyInfo::RedisGlobalKeyInfo() :
    m_capacityHasBeenSet(false),
    m_countHasBeenSet(false),
    m_rangeMaxHasBeenSet(false),
    m_rangeMinHasBeenSet(false)
{
}

CoreInternalOutcome RedisGlobalKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisGlobalKeyInfo.Capacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetInt64();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisGlobalKeyInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("RangeMax") && !value["RangeMax"].IsNull())
    {
        if (!value["RangeMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisGlobalKeyInfo.RangeMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rangeMax = value["RangeMax"].GetInt64();
        m_rangeMaxHasBeenSet = true;
    }

    if (value.HasMember("RangeMin") && !value["RangeMin"].IsNull())
    {
        if (!value["RangeMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisGlobalKeyInfo.RangeMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rangeMin = value["RangeMin"].GetInt64();
        m_rangeMinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisGlobalKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_rangeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeMax, allocator);
    }

    if (m_rangeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeMin, allocator);
    }

}


int64_t RedisGlobalKeyInfo::GetCapacity() const
{
    return m_capacity;
}

void RedisGlobalKeyInfo::SetCapacity(const int64_t& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool RedisGlobalKeyInfo::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

int64_t RedisGlobalKeyInfo::GetCount() const
{
    return m_count;
}

void RedisGlobalKeyInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RedisGlobalKeyInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t RedisGlobalKeyInfo::GetRangeMax() const
{
    return m_rangeMax;
}

void RedisGlobalKeyInfo::SetRangeMax(const int64_t& _rangeMax)
{
    m_rangeMax = _rangeMax;
    m_rangeMaxHasBeenSet = true;
}

bool RedisGlobalKeyInfo::RangeMaxHasBeenSet() const
{
    return m_rangeMaxHasBeenSet;
}

int64_t RedisGlobalKeyInfo::GetRangeMin() const
{
    return m_rangeMin;
}

void RedisGlobalKeyInfo::SetRangeMin(const int64_t& _rangeMin)
{
    m_rangeMin = _rangeMin;
    m_rangeMinHasBeenSet = true;
}

bool RedisGlobalKeyInfo::RangeMinHasBeenSet() const
{
    return m_rangeMinHasBeenSet;
}

