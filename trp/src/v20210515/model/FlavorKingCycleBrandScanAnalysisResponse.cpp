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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandScanAnalysisResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandScanAnalysisResponse::FlavorKingCycleBrandScanAnalysisResponse() :
    m_countHasBeenSet(false),
    m_cycleRatioHasBeenSet(false),
    m_cycleOverCycleHasBeenSet(false),
    m_cycleRatioItemsHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandScanAnalysisResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisResponse.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CycleRatio") && !value["CycleRatio"].IsNull())
    {
        if (!value["CycleRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisResponse.CycleRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cycleRatio = value["CycleRatio"].GetDouble();
        m_cycleRatioHasBeenSet = true;
    }

    if (value.HasMember("CycleOverCycle") && !value["CycleOverCycle"].IsNull())
    {
        if (!value["CycleOverCycle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisResponse.CycleOverCycle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cycleOverCycle = value["CycleOverCycle"].GetDouble();
        m_cycleOverCycleHasBeenSet = true;
    }

    if (value.HasMember("CycleRatioItems") && !value["CycleRatioItems"].IsNull())
    {
        if (!value["CycleRatioItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandScanAnalysisResponse.CycleRatioItems` is not array type"));

        const rapidjson::Value &tmpValue = value["CycleRatioItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlavorKingCycleBrandScanAnalysisDataItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cycleRatioItems.push_back(item);
        }
        m_cycleRatioItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandScanAnalysisResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_cycleRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleRatio, allocator);
    }

    if (m_cycleOverCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleOverCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleOverCycle, allocator);
    }

    if (m_cycleRatioItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleRatioItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cycleRatioItems.begin(); itr != m_cycleRatioItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t FlavorKingCycleBrandScanAnalysisResponse::GetCount() const
{
    return m_count;
}

void FlavorKingCycleBrandScanAnalysisResponse::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double FlavorKingCycleBrandScanAnalysisResponse::GetCycleRatio() const
{
    return m_cycleRatio;
}

void FlavorKingCycleBrandScanAnalysisResponse::SetCycleRatio(const double& _cycleRatio)
{
    m_cycleRatio = _cycleRatio;
    m_cycleRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisResponse::CycleRatioHasBeenSet() const
{
    return m_cycleRatioHasBeenSet;
}

double FlavorKingCycleBrandScanAnalysisResponse::GetCycleOverCycle() const
{
    return m_cycleOverCycle;
}

void FlavorKingCycleBrandScanAnalysisResponse::SetCycleOverCycle(const double& _cycleOverCycle)
{
    m_cycleOverCycle = _cycleOverCycle;
    m_cycleOverCycleHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisResponse::CycleOverCycleHasBeenSet() const
{
    return m_cycleOverCycleHasBeenSet;
}

vector<FlavorKingCycleBrandScanAnalysisDataItem> FlavorKingCycleBrandScanAnalysisResponse::GetCycleRatioItems() const
{
    return m_cycleRatioItems;
}

void FlavorKingCycleBrandScanAnalysisResponse::SetCycleRatioItems(const vector<FlavorKingCycleBrandScanAnalysisDataItem>& _cycleRatioItems)
{
    m_cycleRatioItems = _cycleRatioItems;
    m_cycleRatioItemsHasBeenSet = true;
}

bool FlavorKingCycleBrandScanAnalysisResponse::CycleRatioItemsHasBeenSet() const
{
    return m_cycleRatioItemsHasBeenSet;
}

