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

#include <tencentcloud/csip/v20221121/model/AssetTypeStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetTypeStatisticsInfo::AssetTypeStatisticsInfo() :
    m_assetTypeCountHasBeenSet(false),
    m_riskAssetTypeCountHasBeenSet(false)
{
}

CoreInternalOutcome AssetTypeStatisticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetTypeCount") && !value["AssetTypeCount"].IsNull())
    {
        if (!value["AssetTypeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeStatisticsInfo.AssetTypeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeCount = value["AssetTypeCount"].GetUint64();
        m_assetTypeCountHasBeenSet = true;
    }

    if (value.HasMember("RiskAssetTypeCount") && !value["RiskAssetTypeCount"].IsNull())
    {
        if (!value["RiskAssetTypeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTypeStatisticsInfo.RiskAssetTypeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskAssetTypeCount = value["RiskAssetTypeCount"].GetUint64();
        m_riskAssetTypeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTypeStatisticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetTypeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetTypeCount, allocator);
    }

    if (m_riskAssetTypeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAssetTypeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskAssetTypeCount, allocator);
    }

}


uint64_t AssetTypeStatisticsInfo::GetAssetTypeCount() const
{
    return m_assetTypeCount;
}

void AssetTypeStatisticsInfo::SetAssetTypeCount(const uint64_t& _assetTypeCount)
{
    m_assetTypeCount = _assetTypeCount;
    m_assetTypeCountHasBeenSet = true;
}

bool AssetTypeStatisticsInfo::AssetTypeCountHasBeenSet() const
{
    return m_assetTypeCountHasBeenSet;
}

uint64_t AssetTypeStatisticsInfo::GetRiskAssetTypeCount() const
{
    return m_riskAssetTypeCount;
}

void AssetTypeStatisticsInfo::SetRiskAssetTypeCount(const uint64_t& _riskAssetTypeCount)
{
    m_riskAssetTypeCount = _riskAssetTypeCount;
    m_riskAssetTypeCountHasBeenSet = true;
}

bool AssetTypeStatisticsInfo::RiskAssetTypeCountHasBeenSet() const
{
    return m_riskAssetTypeCountHasBeenSet;
}

