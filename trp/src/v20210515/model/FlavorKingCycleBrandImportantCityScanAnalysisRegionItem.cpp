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

#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::FlavorKingCycleBrandImportantCityScanAnalysisRegionItem() :
    m_ratioHasBeenSet(false),
    m_marketShareHasBeenSet(false),
    m_otherMarketShareHasBeenSet(false),
    m_lastCycleRatioHasBeenSet(false),
    m_lastCycleMarketShareHasBeenSet(false),
    m_lastCycleOtherMarketShareHasBeenSet(false),
    m_growRatioHasBeenSet(false),
    m_otherGrowRatioHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("MarketShare") && !value["MarketShare"].IsNull())
    {
        if (!value["MarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.MarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_marketShare = value["MarketShare"].GetDouble();
        m_marketShareHasBeenSet = true;
    }

    if (value.HasMember("OtherMarketShare") && !value["OtherMarketShare"].IsNull())
    {
        if (!value["OtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.OtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherMarketShare = value["OtherMarketShare"].GetDouble();
        m_otherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleRatio") && !value["LastCycleRatio"].IsNull())
    {
        if (!value["LastCycleRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.LastCycleRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleRatio = value["LastCycleRatio"].GetDouble();
        m_lastCycleRatioHasBeenSet = true;
    }

    if (value.HasMember("LastCycleMarketShare") && !value["LastCycleMarketShare"].IsNull())
    {
        if (!value["LastCycleMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.LastCycleMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleMarketShare = value["LastCycleMarketShare"].GetDouble();
        m_lastCycleMarketShareHasBeenSet = true;
    }

    if (value.HasMember("LastCycleOtherMarketShare") && !value["LastCycleOtherMarketShare"].IsNull())
    {
        if (!value["LastCycleOtherMarketShare"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.LastCycleOtherMarketShare` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lastCycleOtherMarketShare = value["LastCycleOtherMarketShare"].GetDouble();
        m_lastCycleOtherMarketShareHasBeenSet = true;
    }

    if (value.HasMember("GrowRatio") && !value["GrowRatio"].IsNull())
    {
        if (!value["GrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.GrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_growRatio = value["GrowRatio"].GetDouble();
        m_growRatioHasBeenSet = true;
    }

    if (value.HasMember("OtherGrowRatio") && !value["OtherGrowRatio"].IsNull())
    {
        if (!value["OtherGrowRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.OtherGrowRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_otherGrowRatio = value["OtherGrowRatio"].GetDouble();
        m_otherGrowRatioHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

    if (m_marketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marketShare, allocator);
    }

    if (m_otherMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherMarketShare, allocator);
    }

    if (m_lastCycleRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleRatio, allocator);
    }

    if (m_lastCycleMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleMarketShare, allocator);
    }

    if (m_lastCycleOtherMarketShareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCycleOtherMarketShare";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastCycleOtherMarketShare, allocator);
    }

    if (m_growRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_growRatio, allocator);
    }

    if (m_otherGrowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherGrowRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherGrowRatio, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetRatio() const
{
    return m_ratio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetMarketShare() const
{
    return m_marketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetMarketShare(const double& _marketShare)
{
    m_marketShare = _marketShare;
    m_marketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::MarketShareHasBeenSet() const
{
    return m_marketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetOtherMarketShare() const
{
    return m_otherMarketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetOtherMarketShare(const double& _otherMarketShare)
{
    m_otherMarketShare = _otherMarketShare;
    m_otherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::OtherMarketShareHasBeenSet() const
{
    return m_otherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetLastCycleRatio() const
{
    return m_lastCycleRatio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetLastCycleRatio(const double& _lastCycleRatio)
{
    m_lastCycleRatio = _lastCycleRatio;
    m_lastCycleRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::LastCycleRatioHasBeenSet() const
{
    return m_lastCycleRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetLastCycleMarketShare() const
{
    return m_lastCycleMarketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetLastCycleMarketShare(const double& _lastCycleMarketShare)
{
    m_lastCycleMarketShare = _lastCycleMarketShare;
    m_lastCycleMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::LastCycleMarketShareHasBeenSet() const
{
    return m_lastCycleMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetLastCycleOtherMarketShare() const
{
    return m_lastCycleOtherMarketShare;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetLastCycleOtherMarketShare(const double& _lastCycleOtherMarketShare)
{
    m_lastCycleOtherMarketShare = _lastCycleOtherMarketShare;
    m_lastCycleOtherMarketShareHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::LastCycleOtherMarketShareHasBeenSet() const
{
    return m_lastCycleOtherMarketShareHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetGrowRatio() const
{
    return m_growRatio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetGrowRatio(const double& _growRatio)
{
    m_growRatio = _growRatio;
    m_growRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GrowRatioHasBeenSet() const
{
    return m_growRatioHasBeenSet;
}

double FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetOtherGrowRatio() const
{
    return m_otherGrowRatio;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetOtherGrowRatio(const double& _otherGrowRatio)
{
    m_otherGrowRatio = _otherGrowRatio;
    m_otherGrowRatioHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::OtherGrowRatioHasBeenSet() const
{
    return m_otherGrowRatioHasBeenSet;
}

string FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::GetRegion() const
{
    return m_region;
}

void FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool FlavorKingCycleBrandImportantCityScanAnalysisRegionItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

