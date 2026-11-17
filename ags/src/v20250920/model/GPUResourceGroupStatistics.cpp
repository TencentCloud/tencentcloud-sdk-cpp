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

#include <tencentcloud/ags/v20250920/model/GPUResourceGroupStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GPUResourceGroupStatistics::GPUResourceGroupStatistics() :
    m_totalCountHasBeenSet(false),
    m_availableCountHasBeenSet(false),
    m_allocatedCountHasBeenSet(false),
    m_stateCountsHasBeenSet(false)
{
}

CoreInternalOutcome GPUResourceGroupStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupStatistics.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("AvailableCount") && !value["AvailableCount"].IsNull())
    {
        if (!value["AvailableCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupStatistics.AvailableCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableCount = value["AvailableCount"].GetInt64();
        m_availableCountHasBeenSet = true;
    }

    if (value.HasMember("AllocatedCount") && !value["AllocatedCount"].IsNull())
    {
        if (!value["AllocatedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupStatistics.AllocatedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedCount = value["AllocatedCount"].GetInt64();
        m_allocatedCountHasBeenSet = true;
    }

    if (value.HasMember("StateCounts") && !value["StateCounts"].IsNull())
    {
        if (!value["StateCounts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupStatistics.StateCounts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stateCounts.Deserialize(value["StateCounts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stateCountsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUResourceGroupStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_availableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableCount, allocator);
    }

    if (m_allocatedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedCount, allocator);
    }

    if (m_stateCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stateCounts.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t GPUResourceGroupStatistics::GetTotalCount() const
{
    return m_totalCount;
}

void GPUResourceGroupStatistics::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool GPUResourceGroupStatistics::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t GPUResourceGroupStatistics::GetAvailableCount() const
{
    return m_availableCount;
}

void GPUResourceGroupStatistics::SetAvailableCount(const int64_t& _availableCount)
{
    m_availableCount = _availableCount;
    m_availableCountHasBeenSet = true;
}

bool GPUResourceGroupStatistics::AvailableCountHasBeenSet() const
{
    return m_availableCountHasBeenSet;
}

int64_t GPUResourceGroupStatistics::GetAllocatedCount() const
{
    return m_allocatedCount;
}

void GPUResourceGroupStatistics::SetAllocatedCount(const int64_t& _allocatedCount)
{
    m_allocatedCount = _allocatedCount;
    m_allocatedCountHasBeenSet = true;
}

bool GPUResourceGroupStatistics::AllocatedCountHasBeenSet() const
{
    return m_allocatedCountHasBeenSet;
}

GPUResourceStateCount GPUResourceGroupStatistics::GetStateCounts() const
{
    return m_stateCounts;
}

void GPUResourceGroupStatistics::SetStateCounts(const GPUResourceStateCount& _stateCounts)
{
    m_stateCounts = _stateCounts;
    m_stateCountsHasBeenSet = true;
}

bool GPUResourceGroupStatistics::StateCountsHasBeenSet() const
{
    return m_stateCountsHasBeenSet;
}

