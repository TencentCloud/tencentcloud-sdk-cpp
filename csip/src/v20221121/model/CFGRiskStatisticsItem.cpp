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

#include <tencentcloud/csip/v20221121/model/CFGRiskStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CFGRiskStatisticsItem::CFGRiskStatisticsItem() :
    m_totalRiskCountHasBeenSet(false),
    m_riskAddCountHasBeenSet(false),
    m_checkViewCountHasBeenSet(false),
    m_highPriorityRiskCountHasBeenSet(false),
    m_checkViewAddCountHasBeenSet(false),
    m_highPriorityCheckViewCountHasBeenSet(false),
    m_assetViewCountHasBeenSet(false),
    m_assetViewAddCountHasBeenSet(false),
    m_highPriorityAssetViewCountHasBeenSet(false)
{
}

CoreInternalOutcome CFGRiskStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalRiskCount") && !value["TotalRiskCount"].IsNull())
    {
        if (!value["TotalRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.TotalRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRiskCount = value["TotalRiskCount"].GetUint64();
        m_totalRiskCountHasBeenSet = true;
    }

    if (value.HasMember("RiskAddCount") && !value["RiskAddCount"].IsNull())
    {
        if (!value["RiskAddCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.RiskAddCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskAddCount = value["RiskAddCount"].GetUint64();
        m_riskAddCountHasBeenSet = true;
    }

    if (value.HasMember("CheckViewCount") && !value["CheckViewCount"].IsNull())
    {
        if (!value["CheckViewCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.CheckViewCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkViewCount = value["CheckViewCount"].GetUint64();
        m_checkViewCountHasBeenSet = true;
    }

    if (value.HasMember("HighPriorityRiskCount") && !value["HighPriorityRiskCount"].IsNull())
    {
        if (!value["HighPriorityRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.HighPriorityRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityRiskCount = value["HighPriorityRiskCount"].GetUint64();
        m_highPriorityRiskCountHasBeenSet = true;
    }

    if (value.HasMember("CheckViewAddCount") && !value["CheckViewAddCount"].IsNull())
    {
        if (!value["CheckViewAddCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.CheckViewAddCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkViewAddCount = value["CheckViewAddCount"].GetUint64();
        m_checkViewAddCountHasBeenSet = true;
    }

    if (value.HasMember("HighPriorityCheckViewCount") && !value["HighPriorityCheckViewCount"].IsNull())
    {
        if (!value["HighPriorityCheckViewCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.HighPriorityCheckViewCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityCheckViewCount = value["HighPriorityCheckViewCount"].GetUint64();
        m_highPriorityCheckViewCountHasBeenSet = true;
    }

    if (value.HasMember("AssetViewCount") && !value["AssetViewCount"].IsNull())
    {
        if (!value["AssetViewCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.AssetViewCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetViewCount = value["AssetViewCount"].GetUint64();
        m_assetViewCountHasBeenSet = true;
    }

    if (value.HasMember("AssetViewAddCount") && !value["AssetViewAddCount"].IsNull())
    {
        if (!value["AssetViewAddCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.AssetViewAddCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetViewAddCount = value["AssetViewAddCount"].GetUint64();
        m_assetViewAddCountHasBeenSet = true;
    }

    if (value.HasMember("HighPriorityAssetViewCount") && !value["HighPriorityAssetViewCount"].IsNull())
    {
        if (!value["HighPriorityAssetViewCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGRiskStatisticsItem.HighPriorityAssetViewCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityAssetViewCount = value["HighPriorityAssetViewCount"].GetUint64();
        m_highPriorityAssetViewCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CFGRiskStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRiskCount, allocator);
    }

    if (m_riskAddCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAddCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskAddCount, allocator);
    }

    if (m_checkViewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckViewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkViewCount, allocator);
    }

    if (m_highPriorityRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highPriorityRiskCount, allocator);
    }

    if (m_checkViewAddCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckViewAddCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkViewAddCount, allocator);
    }

    if (m_highPriorityCheckViewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityCheckViewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highPriorityCheckViewCount, allocator);
    }

    if (m_assetViewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetViewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetViewCount, allocator);
    }

    if (m_assetViewAddCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetViewAddCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetViewAddCount, allocator);
    }

    if (m_highPriorityAssetViewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityAssetViewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highPriorityAssetViewCount, allocator);
    }

}


uint64_t CFGRiskStatisticsItem::GetTotalRiskCount() const
{
    return m_totalRiskCount;
}

void CFGRiskStatisticsItem::SetTotalRiskCount(const uint64_t& _totalRiskCount)
{
    m_totalRiskCount = _totalRiskCount;
    m_totalRiskCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::TotalRiskCountHasBeenSet() const
{
    return m_totalRiskCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetRiskAddCount() const
{
    return m_riskAddCount;
}

void CFGRiskStatisticsItem::SetRiskAddCount(const uint64_t& _riskAddCount)
{
    m_riskAddCount = _riskAddCount;
    m_riskAddCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::RiskAddCountHasBeenSet() const
{
    return m_riskAddCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetCheckViewCount() const
{
    return m_checkViewCount;
}

void CFGRiskStatisticsItem::SetCheckViewCount(const uint64_t& _checkViewCount)
{
    m_checkViewCount = _checkViewCount;
    m_checkViewCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::CheckViewCountHasBeenSet() const
{
    return m_checkViewCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetHighPriorityRiskCount() const
{
    return m_highPriorityRiskCount;
}

void CFGRiskStatisticsItem::SetHighPriorityRiskCount(const uint64_t& _highPriorityRiskCount)
{
    m_highPriorityRiskCount = _highPriorityRiskCount;
    m_highPriorityRiskCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::HighPriorityRiskCountHasBeenSet() const
{
    return m_highPriorityRiskCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetCheckViewAddCount() const
{
    return m_checkViewAddCount;
}

void CFGRiskStatisticsItem::SetCheckViewAddCount(const uint64_t& _checkViewAddCount)
{
    m_checkViewAddCount = _checkViewAddCount;
    m_checkViewAddCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::CheckViewAddCountHasBeenSet() const
{
    return m_checkViewAddCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetHighPriorityCheckViewCount() const
{
    return m_highPriorityCheckViewCount;
}

void CFGRiskStatisticsItem::SetHighPriorityCheckViewCount(const uint64_t& _highPriorityCheckViewCount)
{
    m_highPriorityCheckViewCount = _highPriorityCheckViewCount;
    m_highPriorityCheckViewCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::HighPriorityCheckViewCountHasBeenSet() const
{
    return m_highPriorityCheckViewCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetAssetViewCount() const
{
    return m_assetViewCount;
}

void CFGRiskStatisticsItem::SetAssetViewCount(const uint64_t& _assetViewCount)
{
    m_assetViewCount = _assetViewCount;
    m_assetViewCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::AssetViewCountHasBeenSet() const
{
    return m_assetViewCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetAssetViewAddCount() const
{
    return m_assetViewAddCount;
}

void CFGRiskStatisticsItem::SetAssetViewAddCount(const uint64_t& _assetViewAddCount)
{
    m_assetViewAddCount = _assetViewAddCount;
    m_assetViewAddCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::AssetViewAddCountHasBeenSet() const
{
    return m_assetViewAddCountHasBeenSet;
}

uint64_t CFGRiskStatisticsItem::GetHighPriorityAssetViewCount() const
{
    return m_highPriorityAssetViewCount;
}

void CFGRiskStatisticsItem::SetHighPriorityAssetViewCount(const uint64_t& _highPriorityAssetViewCount)
{
    m_highPriorityAssetViewCount = _highPriorityAssetViewCount;
    m_highPriorityAssetViewCountHasBeenSet = true;
}

bool CFGRiskStatisticsItem::HighPriorityAssetViewCountHasBeenSet() const
{
    return m_highPriorityAssetViewCountHasBeenSet;
}

